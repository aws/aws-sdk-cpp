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

#include <aws/core/http/windows/WinINetSyncHttpClient.h>

#include <aws/core/Http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/windows/WinINetConnectionPoolMgr.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>

#include <Windows.h>
#include <WinInet.h>
#include <sstream>
#include <iostream>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const char* logTag = "WinINetSyncHttpClient";
static const uint32_t HTTP_REQUEST_WRITE_BUFFER_LENGTH = 8192;

WinINetSyncHttpClient::WinINetSyncHttpClient(const ClientConfiguration& config)
{
    AWS_LOG_INFO(logTag, "Creating http client with user agent %s with max connections %d, request timeout %d, "
        "and connect timeout %d",
        config.userAgent.c_str(), config.maxConnections, config.requestTimeoutMs, config.connectTimeoutMs);

    DWORD inetFlags = INTERNET_OPEN_TYPE_DIRECT;
    const char* proxyHosts = nullptr;
    Aws::String strProxyHosts;

    bool isUsingProxy = !config.proxyHost.empty();
    //setup initial proxy config.
    if (isUsingProxy)
    {
        AWS_LOG_INFO(logTag, "Http Client is using a proxy. Setting up proxy with settings host %s, port %d, username %s.",
            config.proxyHost, config.proxyPort, config.proxyUserName);

        inetFlags = INTERNET_OPEN_TYPE_PROXY;
        Aws::StringStream ss;
        const char* schemeString = Aws::Http::SchemeMapper::ToString(config.scheme);
        ss << StringUtils::ToUpper(schemeString) << "=" << schemeString << "://" << config.proxyHost << ":" << config.proxyPort;
        strProxyHosts.assign(ss.str());
        proxyHosts = strProxyHosts.c_str();

        AWS_LOG_DEBUG("Adding proxy host string to wininet %s", proxyHosts);
    }

    m_openHandle = InternetOpenA(config.userAgent.c_str(), inetFlags, proxyHosts, nullptr, 0);

    //override offline mode.
    InternetSetOptionA(m_openHandle, INTERNET_OPTION_IGNORE_OFFLINE, nullptr, 0);
    //add proxy auth credentials to everything using this handle.
    if (isUsingProxy)
    {
        if (!InternetSetOptionA(m_openHandle, INTERNET_OPTION_PROXY_USERNAME, (LPVOID)config.proxyUserName.c_str(), (DWORD)config.proxyUserName.length()))
            AWS_LOG_FATAL(logTag, "Failed setting username for proxy with error code: %d", GetLastError());
        if (!InternetSetOptionA(m_openHandle, INTERNET_OPTION_PROXY_PASSWORD, (LPVOID)config.proxyPassword.c_str(), (DWORD)config.proxyPassword.length()))
            AWS_LOG_FATAL(logTag, "Failed setting password for proxy with error code: %d", GetLastError());
    }

    if (!config.verifySSL)
    {
        AWS_LOG_WARN(logTag, "Turning ssl unknown ca verification off.");
        DWORD flags = SECURITY_FLAG_IGNORE_UNKNOWN_CA | INTERNET_FLAG_IGNORE_CERT_CN_INVALID;

        if (!InternetSetOptionA(m_openHandle, INTERNET_OPTION_SECURITY_FLAGS, &flags, sizeof(flags)))
            AWS_LOG_FATAL(logTag, "Failed to turn ssl cert ca verification off.");  
    }

    AWS_LOG_DEBUG(logTag, "API handle %p.", m_openHandle);
    m_connectionPoolMgr = Aws::New<WinINetConnectionPoolMgr>(logTag,
        m_openHandle, config.maxConnections, config.requestTimeoutMs, config.connectTimeoutMs);
}


WinINetSyncHttpClient::~WinINetSyncHttpClient()
{
    AWS_LOG_DEBUG(logTag, "Cleaning up client with handle %p.", m_openHandle);
    Aws::Delete(m_connectionPoolMgr);
    InternetCloseHandle(m_openHandle);
}

static HINTERNET AllocateWindowsHttpRequest(const Aws::Http::HttpRequest& request, HINTERNET connection)
{
    Aws::StringStream ss;
    ss << request.GetUri().GetPath();

    if (request.GetUri().GetQueryStringParameters().size() > 0)
    {
        ss << request.GetUri().GetQueryString();
    }

    DWORD requestFlags =
        INTERNET_FLAG_NO_AUTH | 
        INTERNET_FLAG_RELOAD | 
        INTERNET_FLAG_KEEP_CONNECTION | 
        (request.GetUri().GetScheme() == Scheme::HTTPS ? INTERNET_FLAG_SECURE : 0) |
        INTERNET_FLAG_NO_CACHE_WRITE;

    static LPCSTR accept[2] = { "*/*", nullptr };
    HINTERNET hHttpRequest = HttpOpenRequestA(connection, HttpMethodMapper::GetNameForHttpMethod(request.GetMethod()),
        ss.str().c_str(), nullptr, nullptr, accept, requestFlags, 0);
    AWS_LOG_DEBUG(logTag, "HttpOpenRequestA returned handle %p", hHttpRequest);

    return hHttpRequest;
}

static void AddHeadersToRequest(const HttpRequest& request, HINTERNET hHttpRequest)
{
    if(request.GetHeaders().size() > 0)
    {
        Aws::StringStream ss;
        AWS_LOG_DEBUG(logTag, "with headers:");
        for (auto& header : request.GetHeaders())
        {
            ss << header.first << ": " << header.second << "\r\n";
        }

        AWS_LOG_DEBUG(logTag, ss.str().c_str());
        HttpAddRequestHeadersA(hHttpRequest, ss.str().c_str(), (DWORD)ss.str().length(), HTTP_ADDREQ_FLAG_REPLACE | HTTP_ADDREQ_FLAG_ADD);
    }
    else
    {
        AWS_LOG_DEBUG(logTag, "with no headers");
    }
}

static bool StreamPayloadToRequest(const HttpRequest& request, HINTERNET hHttpRequest)
{
    bool success = true;
    auto payloadStream = request.GetContentBody();
    if(payloadStream)
    {
        auto startingPos = payloadStream->tellg();

        char streamBuffer[ HTTP_REQUEST_WRITE_BUFFER_LENGTH ];
        bool done = false;
        while(success && !done)
        {
            payloadStream->read(streamBuffer, HTTP_REQUEST_WRITE_BUFFER_LENGTH);
            std::streamsize bytesRead = payloadStream->gcount();
            success = !payloadStream->bad();

            DWORD bytesWritten = 0;
            if(bytesRead > 0 && !InternetWriteFile(hHttpRequest, streamBuffer, (DWORD) bytesRead, &bytesWritten))
            {
                success = false;
            }

            if(!payloadStream->good())
            {
                done = true;
            }
        }

        payloadStream->clear();
        payloadStream->seekg(startingPos, payloadStream->beg);
    }

    if(success)
    {
        success = HttpEndRequest(hHttpRequest, nullptr, 0, 0) != 0;
    }

    return success;
}

static void LogRequestInternalFailure()
{
    static const uint32_t WINDOWS_ERROR_MESSAGE_BUFFER_SIZE = 2048;

    DWORD error = GetLastError();

    char messageBuffer[WINDOWS_ERROR_MESSAGE_BUFFER_SIZE];

    FormatMessageA(
        FORMAT_MESSAGE_FROM_HMODULE |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        GetModuleHandle(TEXT("wininet.dll")),
        error,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        messageBuffer,
        WINDOWS_ERROR_MESSAGE_BUFFER_SIZE, 
        nullptr);
    AWS_LOG_WARN(logTag, "Http Send request failed: %s", messageBuffer);

}

std::shared_ptr<HttpResponse> BuildSuccessResponse(const Aws::Http::HttpRequest& request, HINTERNET hHttpRequest, Aws::Utils::RateLimits::RateLimiterInterface* readLimiter)
{
    auto response = Aws::MakeShared<StandardHttpResponse>(logTag, request);
    char dwStatusCode[256];
    DWORD dwSize = sizeof(dwStatusCode);

    HttpQueryInfoA(hHttpRequest, HTTP_QUERY_STATUS_CODE, &dwStatusCode, &dwSize, 0);
    response->SetResponseCode((HttpResponseCode)atoi(dwStatusCode));
    AWS_LOG_DEBUG(logTag, "Received response code %s.", dwStatusCode);

    char contentTypeStr[1024];
    dwSize = sizeof(contentTypeStr);
    HttpQueryInfoA(hHttpRequest, HTTP_QUERY_CONTENT_TYPE, &contentTypeStr, &dwSize, 0);
    if (contentTypeStr[0] != NULL)
    {
        response->SetContentType(contentTypeStr);
        AWS_LOG_DEBUG(logTag, "Received content type %s.", contentTypeStr);
    }

    char headerStr[1024];
    dwSize = sizeof(headerStr);
    DWORD read = 0;
    Aws::StringStream ss;
    AWS_LOG_DEBUG(logTag, "Received headers:");
    while (HttpQueryInfoA(hHttpRequest, HTTP_QUERY_RAW_HEADERS_CRLF, headerStr, &dwSize, &read) && dwSize > 0)
    {
        AWS_LOG_DEBUG(logTag, headerStr);
        ss << headerStr;
    }

    if(readLimiter != nullptr && read > 0)
    {
        readLimiter->ApplyAndPayForCost(read);
    }

    Aws::Vector<Aws::String> rawHeaders = StringUtils::SplitOnLine(ss.str());

    for (auto& header : rawHeaders)
    {
        Aws::Vector<Aws::String> keyValuePair = StringUtils::Split(header, ':');
        if (keyValuePair.size() > 1)
        {
            Aws::String headerName = keyValuePair[0];
            headerName = StringUtils::Trim(headerName.c_str());

            Aws::String headerValue(keyValuePair[1]);

            for (unsigned i = 2; i < keyValuePair.size(); ++i)
            {
                headerValue += ":";
                headerValue += keyValuePair[i];                 
            }

            response->AddHeader(headerName, StringUtils::Trim(headerValue.c_str()));
        }
    }

    if (request.GetMethod() != HttpMethod::HTTP_HEAD)
    {
        char body[1024];
        dwSize = sizeof(body);
        read = 0;

        while (InternetReadFile(hHttpRequest, body, dwSize, &read) && read > 0)
        {
            response->GetResponseBody().write(body, read);
            if(readLimiter != nullptr && read > 0)
            {
                readLimiter->ApplyAndPayForCost(read);
            }
        }
    }

    return response;
}

std::shared_ptr<HttpResponse> WinINetSyncHttpClient::MakeRequest(HttpRequest& request, 
                                                                 Aws::Utils::RateLimits::RateLimiterInterface* readLimiter, 
                                                                 Aws::Utils::RateLimits::RateLimiterInterface* writeLimiter) const
{
    AWS_LOG_TRACE(logTag, "Making Http %s request to uri %s.",
        HttpMethodMapper::GetNameForHttpMethod(request.GetMethod()), request.GetURIString(true).c_str());

    if(writeLimiter != nullptr)
    {
        writeLimiter->ApplyAndPayForCost(request.GetSize());
    }

    HINTERNET connection = m_connectionPoolMgr->AquireConnectionForHost(request.GetUri().GetAuthority(), request.GetUri().GetPort());
    AWS_LOG_DEBUG(logTag, "Acquired connection %p.", connection);

    HINTERNET hHttpRequest = AllocateWindowsHttpRequest(request, connection);

    AddHeadersToRequest(request, hHttpRequest);

    bool success = HttpSendRequestEx(hHttpRequest, NULL, NULL, 0, 0) != 0;
    if(success)
    {
        success = StreamPayloadToRequest(request, hHttpRequest);
    }

    std::shared_ptr<HttpResponse> response(nullptr);
    if(success)
    {
        response = BuildSuccessResponse(request, hHttpRequest, readLimiter);
    }
    else
    {
        LogRequestInternalFailure();
    }

    if (hHttpRequest)
    {
        AWS_LOG_DEBUG(logTag, "Closing http request handle %p.", hHttpRequest);
        InternetCloseHandle(hHttpRequest);
    }

    AWS_LOG_DEBUG(logTag, "Releasing connection handle %p.", connection);
    m_connectionPoolMgr->ReleaseConnectionForHost(request.GetUri().GetAuthority(), request.GetUri().GetPort(), connection);

    return response;
}
