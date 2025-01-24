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
#include <aws/pinpoint/PinpointClient.h>
#include <aws/pinpoint/model/GetAppRequest.h>
#include <aws/pinpoint/model/GetAppsRequest.h>

namespace PinpointSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::Pinpoint;
using namespace Aws::Pinpoint::Model;
class PinpointSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char PinpointSmokeTestSuite::ALLOCATION_TAG[] = "PinpointSmokeTest";
TEST_F(PinpointSmokeTestSuite, GetAppFailure )
{
    Aws::Pinpoint::PinpointClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<PinpointClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetAppRequest input;
    input.SetApplicationId("InvalidApplicationId");
    auto outcome = clientSp->GetApp(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(PinpointSmokeTestSuite, GetAppsSuccess )
{
    Aws::Pinpoint::PinpointClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<PinpointClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetAppsRequest input;
    auto outcome = clientSp->GetApps(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
