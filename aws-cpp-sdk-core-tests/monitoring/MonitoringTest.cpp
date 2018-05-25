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
#define AWS_DISABLE_DEPRECATION

#include <aws/external/gtest.h>
#include <aws/testing/mocks/aws/client/MockAWSClient.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringManager.h>
#include <aws/core/monitoring/DefaultMonitoring.h>

using namespace Aws::Monitoring;

static const char ALLOCATION_TAG[] = "MonitoringTest";
static const char URI_STRING[] = "http://domain.com/something";

static int MonitorOneAPICalledFlag = 0x0;
static int MonitorTwoAPICalledFlag = 0x0;

static const int MonitorAPIsNum = 5;
static std::vector<int> MonitorOneAPICalledCounter(MonitorAPIsNum);
static std::vector<int> MonitorTwoAPICalledCounter(MonitorAPIsNum);

class MockMonitoringOne : public MonitoringInterface
{
public:
    void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
    {
        EXPECT_STREQ(URI_STRING, request->GetURIString().c_str());
        EXPECT_STREQ("MockAWSClient", serviceName.c_str());
        EXPECT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        MonitorOneAPICalledFlag |= 0x1;
        MonitorOneAPICalledCounter[0] ++;
        return reinterpret_cast<void*>(1);
    }


    void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_STREQ(URI_STRING, outcome.GetResult()->GetOriginatingRequest().GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x2;
        MonitorOneAPICalledCounter[1] ++;
    }

    void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x4;
        MonitorOneAPICalledCounter[2] ++;
    }

    void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x8;
        MonitorOneAPICalledCounter[3] ++;
    }

    void OnFinish(const Aws::String& serviceName, const Aws::String& requestName, 
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(1u, reinterpret_cast<size_t>(context));
        MonitorOneAPICalledFlag |= 0x10;
        MonitorOneAPICalledCounter[4] ++;
    }
};

class MockMonitoringFactoryOne : public MonitoringFactory
{
public:
    Aws::UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override
    {
        return Aws::MakeUnique<MockMonitoringOne>(ALLOCATION_TAG);
    }
};

Aws::UniquePtr<MonitoringFactory> CreateMonitoringFactoryOne()
{
    return Aws::MakeUnique<MockMonitoringFactoryOne>(ALLOCATION_TAG);
}

class MockMonitoringTwo : public MonitoringInterface
{
public:
    void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
    {
        EXPECT_STREQ("MockAWSClient", serviceName.c_str());
        EXPECT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        EXPECT_STREQ(URI_STRING, request->GetURIString().c_str());
        MonitorTwoAPICalledFlag |= 0x1;
        MonitorTwoAPICalledCounter[0] ++;
        return reinterpret_cast<void*>(2);
    }


    void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_TRUE(outcome.IsSuccess());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_STREQ(URI_STRING, outcome.GetResult()->GetOriginatingRequest().GetURIString().c_str());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledCounter[1] ++;
        MonitorTwoAPICalledFlag |= 0x2;
    }

    void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        ASSERT_FALSE(outcome.IsSuccess());
        ASSERT_TRUE(metricsFromCore.httpClientMetrics.size() == 0);
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x4;
        MonitorTwoAPICalledCounter[2] ++;
    }

    void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName, 
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x8;
        MonitorTwoAPICalledCounter[3] ++;
    }

    void OnFinish(const Aws::String& serviceName, const Aws::String& requestName, 
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        ASSERT_STREQ("MockAWSClient", serviceName.c_str());
        ASSERT_STREQ("AmazonWebServiceRequestMock", requestName.c_str());
        ASSERT_STREQ(URI_STRING, request->GetURIString().c_str());
        ASSERT_EQ(2u, reinterpret_cast<size_t>(context));
        MonitorTwoAPICalledFlag |= 0x10;
        MonitorTwoAPICalledCounter[4] ++;
    }
};

class MockMonitoringFactoryTwo : public MonitoringFactory
{
public:
    Aws::UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override
    {
        return Aws::MakeUnique<MockMonitoringTwo>(ALLOCATION_TAG);
    }
};

Aws::UniquePtr<MonitoringFactory> CreateMonitoringFactoryTwo()
{
    return Aws::MakeUnique<MockMonitoringFactoryTwo>(ALLOCATION_TAG);
}

class MonitoringTestSuite : public ::testing::Test
{
protected:
    std::shared_ptr<MockHttpClient> mockHttpClient;
    std::shared_ptr<MockHttpClientFactory> mockHttpClientFactory;
    Aws::UniquePtr<MockAWSClient> client;

    void SetUp()
    {
        ClientConfiguration config;
        config.scheme = Scheme::HTTP;
        config.connectTimeoutMs = 30000;
        config.requestTimeoutMs = 30000;           
        auto countedRetryStrategy = Aws::MakeShared<CountedRetryStrategy>(ALLOCATION_TAG);
        config.retryStrategy = std::static_pointer_cast<DefaultRetryStrategy>(countedRetryStrategy);

        mockHttpClient = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
        mockHttpClientFactory = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
        mockHttpClientFactory->SetClient(mockHttpClient);
        SetHttpClientFactory(mockHttpClientFactory);
        client = Aws::MakeUnique<MockAWSClient>(ALLOCATION_TAG, config);

        Aws::Monitoring::CleanupMonitoring();
        std::vector<MonitoringFactoryCreateFunction> factoryFunctions;
        factoryFunctions.emplace_back(CreateMonitoringFactoryOne);
        factoryFunctions.emplace_back(CreateMonitoringFactoryTwo);
        Aws::Monitoring::InitMonitoring(factoryFunctions);

        MonitorOneAPICalledFlag = 0;
        MonitorTwoAPICalledFlag = 0;
        std::fill(MonitorOneAPICalledCounter.begin(), MonitorOneAPICalledCounter.end(), 0);
        std::fill(MonitorTwoAPICalledCounter.begin(), MonitorTwoAPICalledCounter.end(), 0);
    }

    void TearDown()
    {
        client = nullptr;
        mockHttpClient = nullptr;
        mockHttpClientFactory = nullptr;

        CleanupHttp();
        InitHttp();
    }

    void QueueMockResponse(HttpResponseCode code, const HeaderValueCollection& headers)
    {
        auto httpRequest = CreateHttpRequest(URI(URI_STRING),
                HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
        auto httpResponse = Aws::MakeShared<StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
        httpResponse->SetResponseCode(code);
        httpResponse->GetResponseBody() << "";
        for(auto&& header : headers)
        {
            httpResponse->AddHeader(header.first, header.second);
        }
        mockHttpClient->AddResponseToReturn(httpResponse);
    }
};

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithRetryAndSucceededRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    // BAD_REQUEST is not retryable, but since this is triggered by clock skew, it's set to mandatory retryable.
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x1F, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x1F, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[1]); // succeeded 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[2]); // failed 1 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[3]); // retried 1 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithRetryAndFailedRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    QueueMockResponse(HttpResponseCode::BAD_REQUEST, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_FALSE(outcome.IsSuccess());
    ASSERT_EQ(1, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x1D, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x1D, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[1]); // succeeded 0 time
    ASSERT_EQ(2, MonitorOneAPICalledCounter[2]); // failed 2 times
    ASSERT_EQ(1, MonitorOneAPICalledCounter[3]); // retried 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestMonitoringListenersAreCalledCorrectlyWithoutRetryAndSucceededRequest)
{
    HeaderValueCollection responseHeaders, requestHeaders;
    responseHeaders.emplace("Date", (Aws::Utils::DateTime::Now() + std::chrono::hours(1)).ToGmtString(Aws::Utils::DateFormat::RFC822)); // server is ahead of us by 1 hour
    AmazonWebServiceRequestMock request;
    requestHeaders.emplace("X-Amz-Date", Aws::Utils::DateTime::Now().ToGmtString(Aws::Utils::DateFormat::ISO_8601));
    request.SetHeaders(requestHeaders);
    QueueMockResponse(HttpResponseCode::OK, responseHeaders);
    auto outcome = client->MakeRequest(request);
    ASSERT_TRUE(outcome.IsSuccess());
    ASSERT_EQ(0, client->GetRequestAttemptedRetries());
    ASSERT_EQ(0x13, MonitorOneAPICalledFlag);
    ASSERT_EQ(0x13, MonitorTwoAPICalledFlag);
    ASSERT_EQ(1, MonitorOneAPICalledCounter[0]); // started 1 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[1]); // succeeded 1 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[2]); // failed 0 time
    ASSERT_EQ(0, MonitorOneAPICalledCounter[3]); // retried 0 time
    ASSERT_EQ(1, MonitorOneAPICalledCounter[4]); // finished 1 time
}

TEST_F(MonitoringTestSuite, TestHttpClientMetrics)
{
    ASSERT_EQ(HttpClientMetricsType::DestinationIp, GetHttpClientMetricTypeByName("DestinationIp"));
    ASSERT_EQ(HttpClientMetricsType::AcquireConnectionLatency, GetHttpClientMetricTypeByName("AcquireConnectionLatency"));
    ASSERT_EQ(HttpClientMetricsType::ConnectionReused, GetHttpClientMetricTypeByName("ConnectionReused"));
    ASSERT_EQ(HttpClientMetricsType::ConnectLatency, GetHttpClientMetricTypeByName("ConnectLatency"));
    ASSERT_EQ(HttpClientMetricsType::RequestLatency, GetHttpClientMetricTypeByName("RequestLatency"));
    ASSERT_EQ(HttpClientMetricsType::DnsLatency, GetHttpClientMetricTypeByName("DnsLatency"));
    ASSERT_EQ(HttpClientMetricsType::TcpLatency, GetHttpClientMetricTypeByName("TcpLatency"));
    ASSERT_EQ(HttpClientMetricsType::SslLatency, GetHttpClientMetricTypeByName("SslLatency"));
    ASSERT_EQ(HttpClientMetricsType::Unknown, GetHttpClientMetricTypeByName("Unknown"));
    ASSERT_EQ(HttpClientMetricsType::Unknown, GetHttpClientMetricTypeByName("RandomMetricsUnknown"));

    ASSERT_STREQ("DestinationIp", GetHttpClientMetricNameByType(HttpClientMetricsType::DestinationIp).c_str());
    ASSERT_STREQ("AcquireConnectionLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::AcquireConnectionLatency).c_str());
    ASSERT_STREQ("ConnectionReused", GetHttpClientMetricNameByType(HttpClientMetricsType::ConnectionReused).c_str());
    ASSERT_STREQ("ConnectLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::ConnectLatency).c_str());
    ASSERT_STREQ("RequestLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::RequestLatency).c_str());
    ASSERT_STREQ("DnsLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::DnsLatency).c_str());
    ASSERT_STREQ("TcpLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::TcpLatency).c_str());
    ASSERT_STREQ("SslLatency", GetHttpClientMetricNameByType(HttpClientMetricsType::SslLatency).c_str());
    ASSERT_STREQ("Unknown", GetHttpClientMetricNameByType(HttpClientMetricsType::Unknown).c_str());
}
