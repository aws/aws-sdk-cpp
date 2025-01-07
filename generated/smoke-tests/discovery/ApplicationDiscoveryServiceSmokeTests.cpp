/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <utility>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <algorithm>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/discovery/model/DescribeAgentsRequest.h>
#include <aws/discovery/ApplicationDiscoveryServiceClient.h>

namespace ApplicationDiscoveryServiceSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::ApplicationDiscoveryService;
using namespace Aws::ApplicationDiscoveryService::Model;
class ApplicationDiscoveryServiceSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char ApplicationDiscoveryServiceSmokeTestSuite::ALLOCATION_TAG[] = "ApplicationDiscoveryServiceSmokeTest";
TEST_F(ApplicationDiscoveryServiceSmokeTestSuite, DescribeAgentsSuccess )
{
    Aws::ApplicationDiscoveryService::ApplicationDiscoveryServiceClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<ApplicationDiscoveryServiceClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    DescribeAgentsRequest input;
    auto outcome = clientSp->DescribeAgents(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
