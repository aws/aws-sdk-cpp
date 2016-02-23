/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/http/curl/CurlHttpClient.h>


#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>
#include <cassert>
#include <algorithm>


using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;


struct CurlWriteCallbackContext
{
    CurlWriteCallbackContext(const CurlHttpClient* client,
                             HttpRequest* request, 
                             HttpResponse* response, 
                             Aws::Utils::RateLimits::RateLimiterInterface* rateLimiter) :
        m_client(client),
        m_request(request),
        m_response(response),
        m_rateLimiter(rateLimiter)
    {}

    const CurlHttpClient* m_client;
    HttpRequest* m_request;
    HttpResponse* m_response;
    Aws::Utils::RateLimits::RateLimiterInterface* m_rateLimiter;
};

struct CurlReadCallbackContext
{
    CurlReadCallbackContext(const CurlHttpClient* client, HttpRequest* request) :
        m_client(client),
        m_request(request)
    {}

    const CurlHttpClient* m_client;
    HttpRequest* m_request;
};

static const char* CurlTag = "CurlHttpClient";

void SetOptCodeForHttpMethod(CURL* requestHandle, const HttpRequest& request)
{
    switch (request.GetMethod())
    {
        case HttpMethod::HTTP_GET:
            curl_easy_setopt(requestHandle, CURLOPT_HTTPGET, 1L);
            break;
        case HttpMethod::HTTP_POST:

            if (!request.HasHeader(Aws::Http::CONTENT_LENGTH_HEADER))
            {
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "POST");
            }
            else
            {
                curl_easy_setopt(requestHandle, CURLOPT_POST, 1L);
            }
            break;
        case HttpMethod::HTTP_PUT:
            if (!request.HasHeader(Aws::Http::CONTENT_LENGTH_HEADER))
            {
                curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "PUT");
            }
            else
            {
                curl_easy_setopt(requestHandle, CURLOPT_PUT, 1L);
            }
            break;
        case HttpMethod::HTTP_HEAD:
            curl_easy_setopt(requestHandle, CURLOPT_HTTPGET, 1L);
            curl_easy_setopt(requestHandle, CURLOPT_NOBODY, 1L);
            break;
        case HttpMethod::HTTP_PATCH:
            curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "PATCH");
            break;
        case HttpMethod::HTTP_DELETE:
            curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "DELETE");
            curl_easy_setopt(requestHandle, CURLOPT_NOBODY, 1L);
            break;
        default:
            assert(0);
            curl_easy_setopt(requestHandle, CURLOPT_CUSTOMREQUEST, "GET");
            break;
    }
}

CurlHttpClient::CurlHttpClient(const ClientConfiguration& clientConfig) :
    Base(),   
    m_curlHandleContainer(clientConfig.maxConnections, clientConfig.requestTimeoutMs, clientConfig.connectTimeoutMs),
    m_isUsingProxy(!clientConfig.proxyHost.empty()), m_proxyUserName(clientConfig.proxyUserName),
    m_proxyPassword(clientConfig.proxyPassword), m_proxyHost(clientConfig.proxyHost),
    m_proxyPort(clientConfig.proxyPort), m_verifySSL(clientConfig.verifySSL), m_caPath(clientConfig.caPath), m_allowRedirects(clientConfig.followRedirects)
{
}


std::shared_ptr<HttpResponse> CurlHttpClient::MakeRequest(HttpRequest& request, Aws::Utils::RateLimits::RateLimiterInterface* readLimiter,
                                                          Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
    //handle uri encoding at last second. Otherwise, the signer and the http layer will mismatch.
    URI uri = request.GetUri();
    uri.SetPath(URI::URLEncodePath(uri.GetPath()));
    Aws::String url = uri.GetURIString();

    AWS_LOGSTREAM_TRACE(CurlTag, "Making request to " << url);
    struct curl_slist* headers = NULL;

    if (writeLimiter != nullptr)
    {
        writeLimiter->ApplyAndPayForCost(request.GetSize());
    }

    Aws::StringStream headerStream;
    HeaderValueCollection requestHeaders = request.GetHeaders();

    AWS_LOG_TRACE(CurlTag, "Including headers:");
    for (auto& requestHeader : requestHeaders)
    {
        headerStream.str("");
        headerStream << requestHeader.first << ": " << requestHeader.second;
        Aws::String headerString = headerStream.str();
        AWS_LOGSTREAM_TRACE(CurlTag, headerString);
        headers = curl_slist_append(headers, headerString.c_str());
    }
    headers = curl_slist_append(headers, "transfer-encoding:");

    if (!request.HasHeader(Http::CONTENT_LENGTH_HEADER))
    {
        headers = curl_slist_append(headers, "content-length:");
    }

    if (!request.HasHeader(Http::CONTENT_TYPE_HEADER))
    {
        headers = curl_slist_append(headers, "content-type:");
    }

    std::shared_ptr<HttpResponse> response(nullptr);
    CURL* connectionHandle = m_curlHandleContainer.AcquireCurlHandle();

    if (connectionHandle)
    {
        AWS_LOGSTREAM_DEBUG(CurlTag, "Obtained connection handle " << connectionHandle);

        if (headers)
        {
            curl_easy_setopt(connectionHandle, CURLOPT_HTTPHEADER, headers);
        }

        response = Aws::MakeShared<StandardHttpResponse>(CurlTag, request);
        CurlWriteCallbackContext writeContext(this, &request, response.get(), readLimiter);
        CurlReadCallbackContext readContext(this, &request);

        SetOptCodeForHttpMethod(connectionHandle, request);

        curl_easy_setopt(connectionHandle, CURLOPT_URL, url.c_str());
        curl_easy_setopt(connectionHandle, CURLOPT_WRITEFUNCTION, &CurlHttpClient::WriteData);
        curl_easy_setopt(connectionHandle, CURLOPT_WRITEDATA, &writeContext);
        curl_easy_setopt(connectionHandle, CURLOPT_HEADERFUNCTION, &CurlHttpClient::WriteHeader);
        curl_easy_setopt(connectionHandle, CURLOPT_HEADERDATA, response.get());

        //we only want to override the default path if someone has explicitly told us to.
        if(!m_caPath.empty())
        {
            curl_easy_setopt(connectionHandle, CURLOPT_CAPATH, m_caPath.c_str());
        }

	// only set by android test builds because the emulator is missing a cert needed for aws services
#ifdef TEST_CERT_PATH
	curl_easy_setopt(connectionHandle, CURLOPT_CAPATH, TEST_CERT_PATH);
#endif // TEST_CERT_PATH

        if (m_verifySSL)
        {
            curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYPEER, 1L);
            curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYHOST, 2L);

#if LIBCURL_VERSION_MAJOR >= 7
#if LIBCURL_VERSION_MINOR >= 34
            curl_easy_setopt(connectionHandle, CURLOPT_SSLVERSION, CURL_SSLVERSION_TLSv1);
#endif //LIBCURL_VERSION_MINOR
#endif //LIBCURL_VERSION_MAJOR
        }
        else
        {
            curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYPEER, 0L);
            curl_easy_setopt(connectionHandle, CURLOPT_SSL_VERIFYHOST, 0L);
        }

        if (m_allowRedirects)
        {
            curl_easy_setopt(connectionHandle, CURLOPT_FOLLOWLOCATION, 1L);
        }
        else
        {
            curl_easy_setopt(connectionHandle, CURLOPT_FOLLOWLOCATION, 0L);
        }
        //curl_easy_setopt(connectionHandle, CURLOPT_VERBOSE, 1);

        if (m_isUsingProxy)
        {
            curl_easy_setopt(connectionHandle, CURLOPT_PROXY, m_proxyHost.c_str());
            curl_easy_setopt(connectionHandle, CURLOPT_PROXYPORT, (long) m_proxyPort);
            curl_easy_setopt(connectionHandle, CURLOPT_PROXYUSERNAME, m_proxyUserName.c_str());
            curl_easy_setopt(connectionHandle, CURLOPT_PROXYPASSWORD, m_proxyPassword.c_str());
        }

        if (request.GetContentBody())
        {
            curl_easy_setopt(connectionHandle, CURLOPT_READFUNCTION, &CurlHttpClient::ReadBody);
            curl_easy_setopt(connectionHandle, CURLOPT_READDATA, &readContext);
        }

        CURLcode curlResponseCode = curl_easy_perform(connectionHandle);
        if (curlResponseCode != CURLE_OK)
        {
            response = nullptr;
            AWS_LOGSTREAM_ERROR(CurlTag, "Curl returned error code " << curlResponseCode);
        }
        else
        {
            long responseCode;
            curl_easy_getinfo(connectionHandle, CURLINFO_RESPONSE_CODE, &responseCode);
            response->SetResponseCode(static_cast<HttpResponseCode>(responseCode));
            AWS_LOGSTREAM_DEBUG(CurlTag, "Returned http response code " << responseCode);

            char* contentType = nullptr;
            curl_easy_getinfo(connectionHandle, CURLINFO_CONTENT_TYPE, &contentType);
            if (contentType)
            {
                response->SetContentType(contentType);
                AWS_LOGSTREAM_DEBUG(CurlTag, "Returned content type " << contentType);
            }

            AWS_LOGSTREAM_DEBUG(CurlTag, "Releasing curl handle " << connectionHandle);
        }

        m_curlHandleContainer.ReleaseCurlHandle(connectionHandle);
        //go ahead and flush the response body stream
        if(response)
        {
            response->GetResponseBody().flush();
        }
    }

    if (headers)
    {
        curl_slist_free_all(headers);
    }

    return response;
}


size_t CurlHttpClient::WriteData(char* ptr, size_t size, size_t nmemb, void* userdata)
{
    if (ptr)
    {
        CurlWriteCallbackContext* context = reinterpret_cast<CurlWriteCallbackContext*>(userdata);

        const CurlHttpClient* client = context->m_client;
        if(!client->IsRequestProcessingEnabled())
        {
            return 0;
        }

        HttpResponse* response = context->m_response;
        size_t sizeToWrite = size * nmemb;
        if (context->m_rateLimiter)
        {
            context->m_rateLimiter->ApplyAndPayForCost(static_cast<int64_t>(sizeToWrite));
        }

        response->GetResponseBody().write(ptr, static_cast<std::streamsize>(sizeToWrite));
        auto& receivedHandler = context->m_request->GetDataReceivedEventHandler();
        if (receivedHandler)
        {
            receivedHandler(context->m_request, context->m_response, static_cast<long long>(sizeToWrite));
        }

        AWS_LOGSTREAM_TRACE(CurlTag, sizeToWrite << " bytes written to response.");
        return sizeToWrite;
    }
    return 0;
}

size_t CurlHttpClient::WriteHeader(char* ptr, size_t size, size_t nmemb, void* userdata)
{
    if (ptr)
    {
        AWS_LOGSTREAM_TRACE(CurlTag, ptr);
        HttpResponse* response = (HttpResponse*) userdata;
        Aws::String headerLine(ptr);
        Aws::Vector<Aws::String> keyValuePair = StringUtils::Split(headerLine, ':');


        if (keyValuePair.size() > 1)
        {
            Aws::String headerName = keyValuePair[0];
            headerName = StringUtils::Trim(headerName.c_str());


            Aws::String headerValue = headerLine.substr(headerName.length() + 1).c_str();
            headerValue = StringUtils::Trim(headerValue.c_str());


            response->AddHeader(headerName, headerValue);
        }
        return size * nmemb;
    }
    return 0;
}


size_t CurlHttpClient::ReadBody(char* ptr, size_t size, size_t nmemb, void* userdata)
{
    CurlReadCallbackContext* context = reinterpret_cast<CurlReadCallbackContext*>(userdata);
    if(context == nullptr)
    {
	    return 0;
    }

    const CurlHttpClient* client = context->m_client;
    if(!client->IsRequestProcessingEnabled())
    {
        return 0;
    }

    HttpRequest* request = context->m_request;
    std::shared_ptr<Aws::IOStream> ioStream = request->GetContentBody();

    if (ioStream != nullptr && size * nmemb)
    {
        auto currentPos = ioStream->tellg();
        ioStream->seekg(0, ioStream->end);
        auto length = ioStream->tellg();
        ioStream->seekg(currentPos, ioStream->beg);
        size_t amountToRead = static_cast< size_t >(std::min<decltype(length)>(length - currentPos, size * nmemb));

        ioStream->read(ptr, amountToRead);
        auto& sentHandler = request->GetDataSentEventHandler();
        if (sentHandler)
        {
            sentHandler(request, amountToRead);
        }

        return amountToRead;
    }

    return 0;
}


