/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/client/ClientConfiguration.h>

using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Client;

#ifndef NO_HTTP_CLIENT
TEST(HttpClientTest, TestHttpResponseNetworkError)
{
    auto request = CreateHttpRequest(Aws::String("http://some.unknown1234xxx.test.aws"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto httpClient = CreateHttpClient(Aws::Client::ClientConfiguration());
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

//Test CURL HTTP Client Settings.
#if defined(ENABLE_CURL_CLIENT) && defined(ENABLE_HTTP_CLIENT_TESTING)
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/DateTime.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <thread>

TEST(CURLHttpClientTest, TestCantResolveHost)
{
    auto request = CreateHttpRequest(Aws::String("http://some.unknown1234xxx.test.aws"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto httpClient = CreateHttpClient(Aws::Client::ClientConfiguration());
    auto response = httpClient->MakeRequest(request);
    ASSERT_NE(nullptr, response);
    ASSERT_TRUE(response->HasClientError());
    ASSERT_EQ(CoreErrors::NETWORK_CONNECTION, response->GetClientErrorType());
    ASSERT_EQ(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE, response->GetResponseCode());
}

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

TEST(CURLHttpClientTest, TestHttpLowSpeedTimeout)
{
    auto request = CreateHttpRequest(Aws::String("http://127.0.0.1:8778"),
                                     HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    request->SetHeaderValue("WaitSeconds", "2");
    Aws::Client::ClientConfiguration config;
    config.requestTimeoutMs = 1000; // http server wait 2 seconds to respond
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
#endif // ENABLE_CURL_CLIENT && ENABLE_HTTP_CLIENT_TESTING

#endif // NO_HTTP_CLIENT
