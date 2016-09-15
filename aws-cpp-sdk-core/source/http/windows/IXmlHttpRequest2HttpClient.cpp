/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/http/windows/IXmlHttpRequest2HttpClient.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <IXmlHttpRequest2Ref.h>


namespace Aws
{
    namespace Http
    {
        static const char* CLASS_TAG = "IXmlHttpRequest2HttpClient";
        
        using namespace Microsoft::WRL;

        class IOStreamSequentialStream : public RuntimeClass<RuntimeClassFlags<ClassicCom>, ISequentialStream, IDispatch>
        {
            public:
                IOStreamSequentialStream(Aws::IOStream& stream, const HttpClient& client,  const HttpRequest& request, HttpResponse* response, Aws::Utils::RateLimits::RateLimiterInterface* rateLimiter) 
                    : m_stream(stream), m_client(client), m_request(request), m_rateLimiter(rateLimiter), m_response(response) {}

                HRESULT STDMETHODCALLTYPE Read(void* pv, ULONG cb, ULONG* pcbRead) override
                {
                    *pcbRead = 0;

                    if (pv && cb > 0 && m_stream && m_client.ContinueRequest(m_request))
                    {
                        m_stream.read((char*)pv, static_cast<std::streamsize>(cb));
                        *pcbRead = static_cast<ULONG>(m_stream.gcount());

                        if (m_request.GetDataSentEventHandler())
                        {
                            m_request.GetDataSentEventHandler()(&m_request, static_cast<long long>(*pcbRead));
                        }

                        if (m_rateLimiter != nullptr)
                        {
                            m_rateLimiter->ApplyAndPayForCost(static_cast<int64_t>(*pcbRead));
                        }
                    }

                    if (*pcbRead < cb)
                    {
                        return S_FALSE;
                    }

                    return S_OK;
                }

                HRESULT STDMETHODCALLTYPE Write(void const* pv, ULONG cb, ULONG* pcbWritten) override
                {                   
                    ULONG written = 0;

                    if (pv && cb > 0 && m_stream && m_client.ContinueRequest(m_request))
                    {
                        m_stream.write((const char*)pv, static_cast<std::streamsize>(cb));
                        written = cb;

                        if (m_request.GetDataReceivedEventHandler())
                        {
                            m_request.GetDataReceivedEventHandler()(&m_request, m_response, static_cast<long long>(written));
                        }

                        if (m_rateLimiter != nullptr)
                        {
                            m_rateLimiter->ApplyAndPayForCost(static_cast<int64_t>(written));
                        }
                    }

                    if (pcbWritten)
                    {
                        *pcbWritten = written;
                    }

                    if (written < cb)
                    {
                        return STG_E_CANTSAVE;
                    }

                    return S_OK;
                } 
                
                HRESULT STDMETHODCALLTYPE GetTypeInfoCount(unsigned int FAR*) override { return E_NOTIMPL; }
                HRESULT STDMETHODCALLTYPE GetTypeInfo(unsigned int, LCID, ITypeInfo FAR* FAR*) override { return E_NOTIMPL; }
                HRESULT STDMETHODCALLTYPE GetIDsOfNames(REFIID, OLECHAR FAR* FAR*, unsigned int, LCID, DISPID FAR*) override { return DISP_E_UNKNOWNNAME; }
                HRESULT STDMETHODCALLTYPE Invoke(DISPID, REFIID, LCID, WORD, DISPPARAMS FAR*, VARIANT FAR*, EXCEPINFO FAR*, unsigned int FAR*) override { return S_OK; }

            private:
                Aws::IOStream& m_stream;
                const HttpClient& m_client;
                const HttpRequest& m_request;
                HttpResponse* m_response;
                Aws::Utils::RateLimits::RateLimiterInterface* m_rateLimiter;

                LONG m_refCount;
        };

        class IXmlHttpRequest2HttpClientCallbacks : public RuntimeClass<RuntimeClassFlags<ClassicCom>, IXMLHTTPRequest2Callback>
        {
            public:
                IXmlHttpRequest2HttpClientCallbacks(HttpResponse& response, bool allowRedirects) : 
                    m_response(response), m_allowRedirects(allowRedirects), m_isFinished(false) {}

                HRESULT STDMETHODCALLTYPE OnDataAvailable(IXMLHTTPRequest2*, ISequentialStream*) override
                {
                    return S_OK;
                }

                HRESULT STDMETHODCALLTYPE OnError(IXMLHTTPRequest2*, HRESULT) override
                {
                    m_isFinished = true;
                    m_completionSignal.notify_all();                    
                    return S_OK;
                }

                HRESULT STDMETHODCALLTYPE OnHeadersAvailable(IXMLHTTPRequest2 *pXHR, DWORD dwStatus, const WCHAR*) override
                {
                    m_response.SetResponseCode(static_cast<HttpResponseCode>(dwStatus));

                    if (pXHR)
                    {
                        wchar_t* headers = nullptr;
                        HRESULT hr = pXHR->GetAllResponseHeaders(&headers);
                        if (SUCCEEDED(hr))
                        {
                            auto unparsedHeadersStr = Aws::Utils::StringUtils::FromWString(headers);
                            for (auto& headerPair : Aws::Utils::StringUtils::SplitOnLine(unparsedHeadersStr))
                            {
                                Aws::Vector<Aws::String>&& keyValue = Aws::Utils::StringUtils::Split(headerPair, ':');
                                if (keyValue.size() >= 2)
                                {
                                    m_response.AddHeader(Aws::Utils::StringUtils::Trim(keyValue[0].c_str()), Aws::Utils::StringUtils::Trim(keyValue[1].c_str()));
                                }
                            }
                        }                        
                    }

                    return S_OK;
                }

                HRESULT STDMETHODCALLTYPE OnRedirect(IXMLHTTPRequest2* pXHR, const WCHAR*) override
                {
                    if (pXHR && !m_allowRedirects)
                    {
                        pXHR->Abort();
                    }

                    return S_OK;
                }

                HRESULT STDMETHODCALLTYPE OnResponseReceived(IXMLHTTPRequest2*, ISequentialStream*) override
                {
                    m_isFinished = true;
                    m_completionSignal.notify_all();
                    return S_OK;
                }

                //Sorry guys, we'll come back and expose async io soon.
                void WaitUntilFinished()
                {
                    std::unique_lock<std::mutex> completionLock(m_completionMutex);
                    m_completionSignal.wait(completionLock, [this]() { return m_isFinished.load(); });
                }


            private:
                HttpResponse& m_response;
                bool m_allowRedirects;
                std::condition_variable m_completionSignal;
                std::mutex m_completionMutex;
                std::atomic<bool> m_isFinished;                
        };

        void IXmlHttpRequest2HttpClient::InitCOM()
        {
            Windows::Foundation::Initialize(RO_INIT_MULTITHREADED);
        }

        IXmlHttpRequest2HttpClient::IXmlHttpRequest2HttpClient(const Aws::Client::ClientConfiguration& clientConfig) :
            m_proxyUserName(clientConfig.proxyUserName), m_proxyPassword(clientConfig.proxyPassword), m_poolSize(clientConfig.maxConnections),
            m_followRedirects(clientConfig.followRedirects), m_verifySSL(clientConfig.verifySSL), m_requestTimeoutMs(clientConfig.requestTimeoutMs)
        {
            //user defined proxy not supported on this interface, this has to come from the default settings.
            assert(clientConfig.proxyHost.empty());           

            for (unsigned int i = 0; i < m_poolSize; ++i)
            {
                HttpRequestComHandle handle;
                auto hrResult = CoCreateInstance(CLSID_FreeThreadedXMLHTTP60,
                                                    nullptr,
                                                    CLSCTX_SERVER,
                                                    IID_PPV_ARGS(&handle));
                if (!FAILED(hrResult))
                {                                
                    m_resourceManager.PutResource(handle);
                }
                else
                {
                    AWS_LOGSTREAM_FATAL(CLASS_TAG, "Unable to create IXmlHttpRequest2 instance with status code " << hrResult);
                    assert(0);
                }
            }
        }

        IXmlHttpRequest2HttpClient::~IXmlHttpRequest2HttpClient()
        {
            //we don't actually need to do anything with these.
            //just make sure they are dereferenced. The comptr destructor
            //will handle the release calls.
            m_resourceManager.ShutdownAndWait(m_poolSize);            
        }

        std::shared_ptr<HttpResponse> IXmlHttpRequest2HttpClient::MakeRequest(HttpRequest& request,
                                        Aws::Utils::RateLimits::RateLimiterInterface* readLimiter, Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
        {
            auto uri = request.GetUri();
            uri.SetPath(URI::URLEncodePath(uri.GetPath()));
            auto url = Aws::Utils::StringUtils::ToWString(uri.GetURIString().c_str());
            auto methodStr = Aws::Utils::StringUtils::ToWString(HttpMethodMapper::GetNameForHttpMethod(request.GetMethod()));
            auto proxyUserNameStr = Aws::Utils::StringUtils::ToWString(m_proxyUserName.c_str());
            auto proxyPasswordStr = Aws::Utils::StringUtils::ToWString(m_proxyPassword.c_str());

            auto requestHandle = m_resourceManager.Acquire();     
            
            auto response = Aws::MakeShared<Standard::StandardHttpResponse>(CLASS_TAG, request);
            ComPtr<IXmlHttpRequest2HttpClientCallbacks> callbacks = Make<IXmlHttpRequest2HttpClientCallbacks>(*response, m_followRedirects);
                
            HRESULT hrResult = requestHandle->Open(methodStr.c_str(), url.c_str(), callbacks.Get(), nullptr, nullptr, proxyUserNameStr.c_str(), proxyPasswordStr.c_str());
            FillClientSettings(requestHandle);

            if (FAILED(hrResult))
            {
                AWS_LOGSTREAM_ERROR(CLASS_TAG, "Error opening http request to " << uri.GetURIString() << " with status code " << hrResult);
                return nullptr;
            }

            for (auto& header : request.GetHeaders())
            {
                hrResult = requestHandle->SetRequestHeader(Aws::Utils::StringUtils::ToWString(header.first.c_str()).c_str(),
                                                                Aws::Utils::StringUtils::ToWString(header.second.c_str()).c_str());

                if (FAILED(hrResult))
                {
                    AWS_LOGSTREAM_ERROR(CLASS_TAG, "Error setting http header " << header.first << "  " << header.second << " With status code: " << hrResult);
                    return nullptr;
                }
            }

            if (writeLimiter != nullptr)
            {
                writeLimiter->ApplyAndPayForCost(request.GetSize());
            }            
                        
            ComPtr<IOStreamSequentialStream> responseStream = Make<IOStreamSequentialStream>(response->GetResponseBody(), *this, request, response.get(), writeLimiter);

            requestHandle->SetCustomResponseStream(responseStream.Get());
                     
            ComPtr<IOStreamSequentialStream> requestStream(nullptr);
            ULONGLONG streamLength(0);

            if (request.GetContentBody() && !request.GetContentLength().empty())
            {
                requestStream = Make<IOStreamSequentialStream>(*request.GetContentBody(), *this, request, nullptr, readLimiter);
                streamLength = static_cast<ULONGLONG>(Aws::Utils::StringUtils::ConvertToInt64(request.GetContentLength().c_str()));
            }

            hrResult = requestHandle->Send(requestStream.Get(), streamLength);
            callbacks->WaitUntilFinished();

            //we can't reuse these com objects like we do in other http clients, just put a new one back into the resource manager.
            HttpRequestComHandle handle;
            CoCreateInstance(CLSID_FreeThreadedXMLHTTP60, nullptr, CLSCTX_SERVER, IID_PPV_ARGS(&handle));
            m_resourceManager.Release(handle);

            return response;
        }

        void IXmlHttpRequest2HttpClient::FillClientSettings(const HttpRequestComHandle& handle) const
        {
            handle->SetProperty(XHR_PROP_NO_DEFAULT_HEADERS, TRUE);
            handle->SetProperty(XHR_PROP_REPORT_REDIRECT_STATUS, m_followRedirects);
#if defined(PLATFORM_WINDOWS)
            handle->SetProperty(XHR_PROP_QUERY_STRING_UTF8, FALSE);
            handle->SetProperty(XHR_PROP_IGNORE_CERT_ERRORS, !m_verifySSL);
            handle->SetProperty(XHR_PROP_NO_AUTH, XHR_AUTH_PROXY);            
#endif
            handle->SetProperty(XHR_PROP_NO_CRED_PROMPT, TRUE);
            handle->SetProperty(XHR_PROP_TIMEOUT, m_requestTimeoutMs);
            handle->SetProperty(XHR_PROP_ONDATA_THRESHOLD, XHR_PROP_ONDATA_NEVER);            
        }
    }
}