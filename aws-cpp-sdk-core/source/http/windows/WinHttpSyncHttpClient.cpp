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

#include <aws/core/http/windows/WinHttpSyncHttpClient.h>

#include <aws/core/Http/HttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/windows/WinHttpConnectionPoolMgr.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ratelimiter/RateLimiterInterface.h>

#include <Windows.h>
#include <winhttp.h>
#include <sstream>
#include <iostream>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Http::Standard;
using namespace Aws::Utils;
using namespace Aws::Utils::Logging;

static const uint32_t HTTP_REQUEST_WRITE_BUFFER_LENGTH = 8192;

WinHttpSyncHttpClient::WinHttpSyncHttpClient(const ClientConfiguration& config) :
    Base()
{
    AWS_LOGSTREAM_INFO(GetLogTag(), "Creating http client with user agent " << config.userAgent << " with max connections " << config.maxConnections 
        << " request timeout " << config.requestTimeoutMs << ",and connect timeout " << config.connectTimeoutMs);

    DWORD winhttpFlags = WINHTTP_ACCESS_TYPE_NO_PROXY;
    const char* proxyHosts = nullptr;
    Aws::String strProxyHosts;

    m_allowRedirects = config.followRedirects;

    bool isUsingProxy = !config.proxyHost.empty();
    //setup initial proxy config.

    Aws::WString proxyString;

    if (isUsingProxy)
    {
        AWS_LOGSTREAM_INFO(GetLogTag(), "Http Client is using a proxy. Setting up proxy with settings host " << config.proxyHost
             << ", port " << config.proxyPort << ", username " << config.proxyUserName);


        winhttpFlags = WINHTTP_ACCESS_TYPE_NAMED_PROXY;
        Aws::StringStream ss;
        const char* schemeString = Aws::Http::SchemeMapper::ToString(config.scheme);
        ss << StringUtils::ToUpper(schemeString) << "=" << schemeString << "://" << config.proxyHost << ":" << config.proxyPort;
        strProxyHosts.assign(ss.str());
        proxyHosts = strProxyHosts.c_str();

        proxyString = StringUtils::ToWString(proxyHosts);
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Adding proxy host string to winhttp " << proxyHosts);
    }

    Aws::WString openString = StringUtils::ToWString(config.userAgent.c_str());

    SetOpenHandle(WinHttpOpen(openString.c_str(), winhttpFlags, proxyString.c_str(), nullptr, 0));

    if (!WinHttpSetTimeouts(GetOpenHandle(), config.connectTimeoutMs, config.connectTimeoutMs, -1, config.requestTimeoutMs))
    {
        AWS_LOGSTREAM_WARN(GetLogTag(), "Error setting timeouts " << GetLastError());
    }

    //add proxy auth credentials to everything using this handle.
    if (isUsingProxy)
    {
        if (!config.proxyUserName.empty() && !WinHttpSetOption(GetOpenHandle(), WINHTTP_OPTION_PROXY_USERNAME, (LPVOID)config.proxyUserName.c_str(), (DWORD)config.proxyUserName.length()))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting username for proxy with error code: " << GetLastError());
        if (!config.proxyPassword.empty() && !WinHttpSetOption(GetOpenHandle(), WINHTTP_OPTION_PROXY_PASSWORD, (LPVOID)config.proxyPassword.c_str(), (DWORD)config.proxyPassword.length()))
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting password for proxy with error code: " << GetLastError());
    }

    if (!config.verifySSL)
    {
        AWS_LOG_WARN(GetLogTag(), "Turning ssl unknown ca verification off.");
        DWORD flags = SECURITY_FLAG_IGNORE_UNKNOWN_CA | SECURITY_FLAG_IGNORE_CERT_CN_INVALID;

        if (!WinHttpSetOption(GetOpenHandle(), WINHTTP_OPTION_SECURITY_FLAGS, &flags, sizeof(flags)))
            AWS_LOG_FATAL(GetLogTag(), "Failed to turn ssl cert ca verification off.");
    }
    else
    {
        //disable insecure tls protocols, otherwise you might as well turn ssl verification off.
        DWORD flags = WINHTTP_FLAG_SECURE_PROTOCOL_TLS1 | WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_1 | WINHTTP_FLAG_SECURE_PROTOCOL_TLS1_2;
        if (!WinHttpSetOption(GetOpenHandle(), WINHTTP_OPTION_SECURE_PROTOCOLS, &flags, sizeof(flags)))
        {
            AWS_LOGSTREAM_FATAL(GetLogTag(), "Failed setting secure crypto protocols with error code: " << GetLastError());
        }
    }

    AWS_LOG_DEBUG(GetLogTag(), "API handle %p.", GetOpenHandle());
    SetConnectionPoolManager(Aws::New<WinHttpConnectionPoolMgr>(GetLogTag(),
        GetOpenHandle(), config.maxConnections, config.requestTimeoutMs, config.connectTimeoutMs));
}


WinHttpSyncHttpClient::~WinHttpSyncHttpClient()
{

}

void* WinHttpSyncHttpClient::OpenRequest(const Aws::Http::HttpRequest& request, void* connection, const Aws::StringStream& ss) const
{

    DWORD requestFlags = WINHTTP_FLAG_REFRESH |
        (request.GetUri().GetScheme() == Scheme::HTTPS ? WINHTTP_FLAG_SECURE : 0);

    static LPCWSTR accept[2] = { L"*/*", nullptr };

    Aws::WString wss = StringUtils::ToWString(ss.str().c_str());

    HINTERNET hHttpRequest = WinHttpOpenRequest(connection, StringUtils::ToWString(HttpMethodMapper::GetNameForHttpMethod(request.GetMethod())).c_str(),
        wss.c_str(), nullptr, nullptr, accept, requestFlags);

    //DISABLE_FEATURE settings need to be made after OpenRequest but before SendRequest
    if (!m_allowRedirects)
    {
        requestFlags = WINHTTP_DISABLE_REDIRECTS;

        if (!WinHttpSetOption(hHttpRequest, WINHTTP_OPTION_DISABLE_FEATURE, &requestFlags, sizeof(requestFlags)))
            AWS_LOG_FATAL(GetLogTag(), "Failed to turn off redirects!");
    }
    return hHttpRequest;
}

void WinHttpSyncHttpClient::DoAddHeaders(void* hHttpRequest, Aws::String& headerStr) const
{

    Aws::WString wHeaderString = StringUtils::ToWString(headerStr.c_str());

    WinHttpAddRequestHeaders(hHttpRequest, wHeaderString.c_str(), (DWORD)wHeaderString.length(), WINHTTP_ADDREQ_FLAG_REPLACE | WINHTTP_ADDREQ_FLAG_ADD);
}

uint64_t WinHttpSyncHttpClient::DoWriteData(void* hHttpRequest, char* streamBuffer, uint64_t bytesRead) const
{
    DWORD bytesWritten = 0;
    if (!WinHttpWriteData(hHttpRequest, streamBuffer, (DWORD)bytesRead, &bytesWritten))
    {
        return 0;
    }

    return bytesWritten;
}

bool WinHttpSyncHttpClient::DoReceiveResponse(void* httpRequest) const
{
    return (WinHttpReceiveResponse(httpRequest, nullptr) != 0);
}

bool WinHttpSyncHttpClient::DoQueryHeaders(void* hHttpRequest, std::shared_ptr<StandardHttpResponse>& response, Aws::StringStream& ss, uint64_t& read) const
{
    wchar_t dwStatusCode[256];
    DWORD dwSize = sizeof(dwStatusCode);
    wmemset(dwStatusCode, 0, static_cast<size_t>(dwSize/sizeof(wchar_t)));

    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_STATUS_CODE, nullptr, &dwStatusCode, &dwSize, 0);
    int responseCode = _wtoi(dwStatusCode);
    response->SetResponseCode((HttpResponseCode)responseCode);
    AWS_LOGSTREAM_DEBUG(GetLogTag(), "Received response code " << responseCode);

    wchar_t contentTypeStr[1024];
    dwSize = sizeof(contentTypeStr);
    wmemset(contentTypeStr, 0, static_cast<size_t>(dwSize / sizeof(wchar_t)));
    
    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_CONTENT_TYPE, nullptr, &contentTypeStr, &dwSize, 0);
    if (contentTypeStr[0] != NULL)
    {
        Aws::String contentStr = StringUtils::FromWString(contentTypeStr);
        response->SetContentType(contentStr);
        AWS_LOGSTREAM_DEBUG(GetLogTag(), "Received content type " << contentStr);
    }
       
    BOOL queryResult = false;
    AWS_LOG_DEBUG(GetLogTag(), "Received headers:");
    WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_RAW_HEADERS_CRLF, WINHTTP_HEADER_NAME_BY_INDEX, nullptr, &dwSize, WINHTTP_NO_HEADER_INDEX);
    
    //I know it's ugly, but this is how MSFT says to do it so....
    if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
    {
        Utils::Array<wchar_t> headerRawString(dwSize / sizeof(wchar_t));

        queryResult = WinHttpQueryHeaders(hHttpRequest, WINHTTP_QUERY_RAW_HEADERS_CRLF, WINHTTP_HEADER_NAME_BY_INDEX, headerRawString.GetUnderlyingData(), &dwSize, WINHTTP_NO_HEADER_INDEX);
        if (queryResult)
        {
            Aws::String headers(StringUtils::FromWString(headerRawString.GetUnderlyingData()));
            AWS_LOGSTREAM_DEBUG(GetLogTag(), headers);
            ss << std::move(headers);
            read = dwSize;
        }
    } 

    return queryResult == TRUE;
}

bool WinHttpSyncHttpClient::DoSendRequest(void* hHttpRequest) const
{
    return (WinHttpSendRequest(hHttpRequest, NULL, NULL, 0, 0, 0, NULL) != 0);
}

bool WinHttpSyncHttpClient::DoReadData(void* hHttpRequest, char* body, uint64_t size, uint64_t& read) const
{
    return (WinHttpReadData(hHttpRequest, body, (DWORD)size, (LPDWORD)&read) != 0);
}

void* WinHttpSyncHttpClient::GetClientModule() const
{
    return GetModuleHandle(TEXT("winhttp.dll"));
}