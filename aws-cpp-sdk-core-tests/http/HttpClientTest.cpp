/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/external/gtest.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <future>
#include <chrono>

using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Client;

#ifndef NO_HTTP_CLIENT
static void makeRandomHttpRequest(std::shared_ptr<HttpClient> httpClient)
{
    auto request = CreateHttpRequest(Aws::String("http://some.unknown1234xxx.test.aws"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto response = httpClient->MakeRequest(request);
    ASSERT_NE(nullptr, response);
    //Modified the tests so that we catch an edge case where ISP's would try to get a response to the weird url
    //by doing a search instead of failing, we've had 2 issues where they get forbidden instead: #1305 & #1051
    if (response->HasClientError())
    {
        ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
        ASSERT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());
    }
    else
    {
        ASSERT_EQ(HttpResponseCode::FORBIDDEN, response->GetResponseCode());
    }
}

TEST(HttpClientTest, TestRandomURL)
{
    auto httpClient = CreateHttpClient(Aws::Client::ClientConfiguration());
    makeRandomHttpRequest(httpClient);
}

// TODO: Pending Fix on Windows.
#if ENABLE_CURL_CLIENT
TEST(HttpClientTest, TestRandomURLMultiThreaded)
{
    const int threadCount = 50;
    const int timeoutSecs = 5;
    auto httpClient = CreateHttpClient(Aws::Client::ClientConfiguration());
    std::vector<std::future<void>> futures;
    for (int thread = 0; thread < threadCount; ++thread)
    {
        futures.push_back(std::async(std::launch::async, &makeRandomHttpRequest, httpClient));
    }

    auto start = std::chrono::system_clock::now();
    bool hasPendingTasks = true;
    while (hasPendingTasks)
    {
        hasPendingTasks = false;
        for (auto& future : futures)
        {
            auto status = future.wait_for(std::chrono::milliseconds(1));
            if (status != std::future_status::ready)
            {
                hasPendingTasks = true;
                break;
            }
        }
        auto end  = std::chrono::system_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(end - start);
        if (elapsed.count() > timeoutSecs)
        {
            break;
        }
    }
    ASSERT_FALSE(hasPendingTasks);
}
#endif // ENABLE_CURL_CLIENT

// Test Http Client timeout
// Run "scripts/dummy_web_server.py -l localhost -p 8778" to setup a dummy web server first.
#if ENABLE_HTTP_CLIENT_TESTING
static const char ALLOCATION_TAG[] = "HttpClientTest";

#if ENABLE_CURL_CLIENT
#include <aws/core/http/curl/CurlHttpClient.h>
#include <signal.h>
class LongRunningCurlHttpClient : public Aws::Http::CurlHttpClient
{
public:
    LongRunningCurlHttpClient(const Aws::Client::ClientConfiguration& clientConfig) : Aws::Http::CurlHttpClient(clientConfig) {}

protected:
    void OverrideOptionsOnConnectionHandle(CURL* connectionHandle) const override
    {
        // Override low speed limit and low speed time
        curl_easy_setopt(connectionHandle, CURLOPT_LOW_SPEED_LIMIT, 1);
        curl_easy_setopt(connectionHandle, CURLOPT_LOW_SPEED_TIME, 10);
    }
};
#elif ENABLE_WINDOWS_CLIENT
#include <windows.h>
#if ENABLE_WINDOWS_IXML_HTTP_REQUEST_2_CLIENT
#include <aws/core/http/windows/IXmlHttpRequest2HttpClient.h>
#include <aws/core/platform/refs/IXmlHttpRequest2Ref.h>
class LongRunningIXmlHttpRequest2HttpClient : public Aws::Http::IXmlHttpRequest2HttpClient
{
public:
    LongRunningIXmlHttpRequest2HttpClient(const Aws::Client::ClientConfiguration& clientConfig) : Aws::Http::IXmlHttpRequest2HttpClient(clientConfig) {}

protected:
    // Override total timeout.
    void OverrideOptionsOnRequestHandle(const Aws::Http::HttpRequestComHandle& handle) const override
    {
        handle->SetProperty(XHR_PROP_TIMEOUT, 10000);
    }
};
#if BYPASS_DEFAULT_PROXY
#include <aws/core/http/windows/WinHttpSyncHttpClient.h>
#include <winhttp.h>
class LongRunningWinHttpSyncHttpClient : public Aws::Http::WinHttpSyncHttpClient
{
public:
    LongRunningWinHttpSyncHttpClient(const Aws::Client::ClientConfiguration& clientConfig) : Aws::Http::WinHttpSyncHttpClient(clientConfig) {}

protected:
    // Override receive timeout.
    void OverrideOptionsOnRequestHandle(void* handle) const override
    {
        DWORD requestMs = 10000;
        if (!WinHttpSetOption(handle, WINHTTP_OPTION_RECEIVE_TIMEOUT, &requestMs, sizeof(requestMs)))
        {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Error setting timeouts " << GetLastError());
        }
    }
};
#endif
#else
#include <aws/core/http/windows/WinHttpSyncHttpClient.h>
#include <winhttp.h>
class LongRunningWinHttpSyncHttpClient : public Aws::Http::WinHttpSyncHttpClient
{
public:
    LongRunningWinHttpSyncHttpClient(const Aws::Client::ClientConfiguration& clientConfig) : Aws::Http::WinHttpSyncHttpClient(clientConfig) {}

protected:
    // Override receive timeout.
    void OverrideOptionsOnRequestHandle(void* handle) const override
    {
        DWORD requestMs = 10000;
        if (!WinHttpSetOption(handle, WINHTTP_OPTION_RECEIVE_TIMEOUT, &requestMs, sizeof(requestMs)))
        {
            AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Error setting timeouts " << GetLastError());
        }
    }
};
#endif
#endif

class MockCustomHttpClientFactory : public Aws::Http::HttpClientFactory
{
    std::shared_ptr<Aws::Http::HttpClient> CreateHttpClient(const Aws::Client::ClientConfiguration& clientConfiguration) const override
    {
#if ENABLE_CURL_CLIENT
        return Aws::MakeShared<LongRunningCurlHttpClient>(ALLOCATION_TAG, clientConfiguration);
#elif ENABLE_WINDOWS_CLIENT
#if ENABLE_WINDOWS_IXML_HTTP_REQUEST_2_CLIENT
#if BYPASS_DEFAULT_PROXY
        return Aws::MakeShared<LongRunningWinHttpSyncHttpClient>(ALLOCATION_TAG, clientConfiguration);
#else
        return Aws::MakeShared<LongRunningIXmlHttpRequest2HttpClient>(ALLOCATION_TAG, clientConfiguration);
#endif // BYPASS_DEFAULT_PROXY
#else
        return Aws::MakeShared<LongRunningWinHttpSyncHttpClient>(ALLOCATION_TAG, clientConfiguration);

#endif // ENABLE_WINDOWS_IXML_HTTP_REQUEST_2_CLIENT
#else
        AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "For testing purpose, this factory will not fallback to default http client intentionally.");
        return nullptr;
#endif
    }

    std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::String &uri, Aws::Http::HttpMethod method,
                                                    const Aws::IOStreamFactory &streamFactory) const override
    {
        return CreateHttpRequest(Aws::Http::URI(uri), method, streamFactory);
    }

    std::shared_ptr<Aws::Http::HttpRequest> CreateHttpRequest(const Aws::Http::URI& uri, Aws::Http::HttpMethod method, const Aws::IOStreamFactory& streamFactory) const override
    {
        auto request = Aws::MakeShared<Aws::Http::Standard::StandardHttpRequest>(ALLOCATION_TAG, uri, method);
        request->SetResponseStreamFactory(streamFactory);

        return request;
    }

    void InitStaticState() override
    {
#if ENABLE_CURL_CLIENT
        LongRunningCurlHttpClient::InitGlobalState();
#elif ENABLE_WINDOWS_IXML_HTTP_REQUEST_2_CLIENT
        LongRunningIXmlHttpRequest2HttpClient::InitCOM();
#endif
    }

    void CleanupStaticState() override
    {
#if ENABLE_CURL_CLIENT
        LongRunningCurlHttpClient::CleanupGlobalState();
#endif
    }
};

TEST(HttpClientTest, TestHttpClientOverride)
{
    auto request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "5");
    Aws::Client::ClientConfiguration config;
    config.requestTimeoutMs = 1000; // http server wait 4 seconds to respond
    auto httpClient = CreateHttpClient(config);
    auto response = httpClient->MakeRequest(request);
    EXPECT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError());
    ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
    EXPECT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());

    // With custom HTTP client factory, the request timeout is 10 seconds for each HTTP client.
    SetHttpClientFactory(Aws::MakeShared<MockCustomHttpClientFactory>(ALLOCATION_TAG));
    request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "5");
    httpClient = CreateHttpClient(config);
    response = httpClient->MakeRequest(request);
    EXPECT_NE(nullptr, response);
    ASSERT_FALSE(response->HasClientError());
    EXPECT_EQ(Aws::Http::HttpResponseCode::OK, response->GetResponseCode());

    CleanupHttp();
    InitHttp();
}

//Test CURL HTTP Client specific Settings.
#if ENABLE_CURL_CLIENT
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/DateTime.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <thread>

TEST(CURLHttpClientTest, TestConnectionTimeout)
{
    auto request = CreateHttpRequest(Aws::String("https://8.8.8.8:53"),//unless 8.8.8.8 is localhost, it's unlikely to succeed.
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    Aws::Client::ClientConfiguration config;
    config.connectTimeoutMs = 1; //1ms should be short enough to timeout the request
    auto httpClient = CreateHttpClient(config);
    auto response = httpClient->MakeRequest(request);
    ASSERT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError());
    ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
    ASSERT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());
    ASSERT_TRUE(response->GetClientErrorMessage().find("curlCode: 28") == 0);
}

TEST(CURLHttpClientTest, TestHttpRequestTimeout)
{
    auto request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "2");
    Aws::Client::ClientConfiguration config;
    config.httpRequestTimeoutMs = 1000; // http server wait 2 seconds to respond
    auto httpClient = CreateHttpClient(config);
    auto response = httpClient->MakeRequest(request);
    EXPECT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError());
    ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
    EXPECT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());
    EXPECT_TRUE(response->GetClientErrorMessage().find("curlCode: 28") == 0);
}

TEST(CURLHttpClientTest, TestHttpRequestTimeoutBeforeFinishing)
{
    auto request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "2");
    Aws::Client::ClientConfiguration config;
    config.requestTimeoutMs = 3000; // http server wait 2 seconds to respond
    config.httpRequestTimeoutMs = 1000;
    auto httpClient = CreateHttpClient(config);
    auto response = httpClient->MakeRequest(request);
    EXPECT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError());
    ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
    EXPECT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());
    EXPECT_TRUE(response->GetClientErrorMessage().find("curlCode: 28") == 0);
}

TEST(CURLHttpClientTest, TestHttpRequestWorksFine)
{
    auto request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "2");
    Aws::Client::ClientConfiguration config;
    config.requestTimeoutMs = 10000; // http server wait 2 seconds to respond
    //config.httpRequestTimeoutMs defaults to 0, never timeout
    auto httpClient = CreateHttpClient(config);
    auto response = httpClient->MakeRequest(request);
    EXPECT_NE(nullptr, response);
    ASSERT_FALSE(response->HasClientError());
    EXPECT_EQ(Aws::Http::HttpResponseCode::OK, response->GetResponseCode());
    EXPECT_EQ("", response->GetClientErrorMessage());
}
#endif // ENABLE_CURL_CLIENT
#endif // ENABLE_HTTP_CLIENT_TESTING
#endif // NO_HTTP_CLIENT
