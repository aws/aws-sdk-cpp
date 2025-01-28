/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <algorithm>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <utility>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/polly/PollyClient.h>
#include <aws/polly/model/DescribeVoicesRequest.h>

namespace PollySmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Polly;
using namespace Aws::Polly::Model;
class PollySmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char PollySmokeTestSuite::ALLOCATION_TAG[] = "PollySmokeTest";
TEST_F(PollySmokeTestSuite, DescribeVoicesSuccess )
{
    Aws::Polly::PollyClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<PollyClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeVoicesRequest input;
    auto outcome = clientSp->DescribeVoices(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
