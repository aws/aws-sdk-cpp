/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/external/gtest.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/URI.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils::Threading;

static const char ALLOCATION_TAG[] = "RetryStrategyTest";

class MockStandardRetryStrategy : public Aws::Client::StandardRetryStrategy
{
public:
    const std::shared_ptr<Aws::Client::RetryQuotaContainer>& GetRetryQuotaContainer() const
    {
       return m_retryQuotaContainer;
    }
};

TEST(RetryStrategyTest, TestDefaultRetryQuotaContainer)
{
    AWSError<CoreErrors> requestTimeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    AWSError<CoreErrors> retryableError(CoreErrors::NETWORK_CONNECTION, true);

    DefaultRetryQuotaContainer retryQuotaContainer;
    ASSERT_EQ(500, retryQuotaContainer.GetRetryQuota());
    retryQuotaContainer.ReleaseRetryQuota(1);
    ASSERT_EQ(500, retryQuotaContainer.GetRetryQuota());

    // Acquire 5 tokens, remains 495.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(retryableError));
    ASSERT_EQ(495, retryQuotaContainer.GetRetryQuota());

    // Acquire 10 tokens, remains 485.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(requestTimeoutError));
    ASSERT_EQ(485, retryQuotaContainer.GetRetryQuota());

    // Acquire 483 tokens, remains 2.
    ASSERT_TRUE(retryQuotaContainer.AcquireRetryQuota(483));
    ASSERT_EQ(2, retryQuotaContainer.GetRetryQuota());

    // Not able to acquire more tokens.
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(retryableError));
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(requestTimeoutError));
    ASSERT_FALSE(retryQuotaContainer.AcquireRetryQuota(3));
}

TEST(RetryStrategyTest, TestStandardRetryStrategy)
{
    AWSError<CoreErrors> requestTimeoutError(CoreErrors::REQUEST_TIMEOUT, true);
    AWSError<CoreErrors> retryableError(CoreErrors::NETWORK_CONNECTION, true);
    AWSError<CoreErrors> nonRetryableError(CoreErrors::INCOMPLETE_SIGNATURE, false);

    MockStandardRetryStrategy retryStrategy;
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
    ASSERT_EQ(3, retryStrategy.GetMaxAttempts());

    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com"), HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    std::shared_ptr<HttpResponse> httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    HttpResponseOutcome httpResponseOutcome(httpResponse);
    retryStrategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Non-retryable error.
    ASSERT_FALSE(retryStrategy.ShouldRetry(nonRetryableError, 0));
    // Hit attempt limit.
    ASSERT_FALSE(retryStrategy.ShouldRetry(retryableError, 2));

    // Acquire 5 tokens, remains 495.
    ASSERT_TRUE(retryStrategy.ShouldRetry(retryableError, 0));
    ASSERT_EQ(495, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Acquire 10 tokens, remains 485.
    ASSERT_TRUE(retryStrategy.ShouldRetry(requestTimeoutError, 0));
    ASSERT_EQ(485, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Acquire 478 tokens, remains 7.
    ASSERT_TRUE(retryStrategy.GetRetryQuotaContainer()->AcquireRetryQuota(478));
    ASSERT_EQ(7, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Not able to retry with request timeout error with insufficient tokens.
    ASSERT_FALSE(retryStrategy.ShouldRetry(requestTimeoutError, 0));

    // Still able to retry with other errors. Acquire 5 tokens, remains 2.
    ASSERT_TRUE(retryStrategy.ShouldRetry(retryableError, 0));
    ASSERT_EQ(2, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 5 tokens, remains 7.
    retryStrategy.RequestBookkeeping(httpResponseOutcome, retryableError);
    ASSERT_EQ(7, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 10 tokens, remains 17.
    retryStrategy.RequestBookkeeping(httpResponseOutcome, requestTimeoutError);
    ASSERT_EQ(17, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 1 token, remains 18.
    retryStrategy.RequestBookkeeping(httpResponseOutcome);
    ASSERT_EQ(18, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Release 480 tokens, remains 498
    retryStrategy.GetRetryQuotaContainer()->ReleaseRetryQuota(480);
    ASSERT_EQ(498, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Hit the max token capicity, remains 500.
    retryStrategy.RequestBookkeeping(httpResponse, retryableError);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());

    // Hit the max token capicity, not able to release more tokens.
    retryStrategy.RequestBookkeeping(httpResponse, requestTimeoutError);
    ASSERT_EQ(500, retryStrategy.GetRetryQuotaContainer()->GetRetryQuota());
}
