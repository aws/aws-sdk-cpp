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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatchClient.h>
#include <aws/monitoring/model/ListMetricsRequest.h>

namespace CloudWatchSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CloudWatch;
using namespace Aws::CloudWatch::Model;
class CloudWatchSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CloudWatchSmokeTestSuite::ALLOCATION_TAG[] = "CloudWatchSmokeTest";
TEST_F(CloudWatchSmokeTestSuite, ListMetricsSuccess )
{
    Aws::CloudWatch::CloudWatchClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CloudWatchClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListMetricsRequest input;
    input.SetNamespace("AWS/EC2");
    auto outcome = clientSp->ListMetrics(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
