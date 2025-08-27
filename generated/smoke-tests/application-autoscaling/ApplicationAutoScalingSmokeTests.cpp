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
#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>

namespace ApplicationAutoScalingSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ApplicationAutoScaling;
using namespace Aws::ApplicationAutoScaling::Model;
class ApplicationAutoScalingSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ApplicationAutoScalingSmokeTestSuite::ALLOCATION_TAG[] = "ApplicationAutoScalingSmokeTest";
TEST_F(ApplicationAutoScalingSmokeTestSuite, DescribeScalableTargetsSuccess )
{
    Aws::ApplicationAutoScaling::ApplicationAutoScalingClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ApplicationAutoScalingClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeScalableTargetsRequest input;
    input.SetServiceNamespace(ServiceNamespace::ec2);
    auto outcome = clientSp->DescribeScalableTargets(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
