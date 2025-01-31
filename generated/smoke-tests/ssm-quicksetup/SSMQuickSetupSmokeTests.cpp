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
#include <aws/ssm-quicksetup/SSMQuickSetupClient.h>
#include <aws/ssm-quicksetup/model/GetConfigurationManagerRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersRequest.h>

namespace SSMQuickSetupSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::SSMQuickSetup;
using namespace Aws::SSMQuickSetup::Model;
class SSMQuickSetupSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char SSMQuickSetupSmokeTestSuite::ALLOCATION_TAG[] = "SSMQuickSetupSmokeTest";
TEST_F(SSMQuickSetupSmokeTestSuite, GetConfigurationManagerFailure )
{
    Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SSMQuickSetupClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetConfigurationManagerRequest input;
    input.SetManagerArn("arn:aws:ssm-quicksetup:us-east-1:602768233532:configuration-manager/7cac1a1b-64a9-4c9a-97e8-8c68928b8f13");
    auto outcome = clientSp->GetConfigurationManager(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(SSMQuickSetupSmokeTestSuite, ListConfigurationManagersSuccess )
{
    Aws::SSMQuickSetup::SSMQuickSetupClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<SSMQuickSetupClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListConfigurationManagersRequest input;
    auto outcome = clientSp->ListConfigurationManagers(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
