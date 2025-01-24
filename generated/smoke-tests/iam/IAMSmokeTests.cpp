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
#include <aws/iam/IAMClient.h>
#include <aws/iam/model/GetUserRequest.h>
#include <aws/iam/model/ListUsersRequest.h>

namespace IAMSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::IAM;
using namespace Aws::IAM::Model;
class IAMSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char IAMSmokeTestSuite::ALLOCATION_TAG[] = "IAMSmokeTest";
TEST_F(IAMSmokeTestSuite, GetUserFailure )
{
    Aws::IAM::IAMClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IAMClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    GetUserRequest input;
    input.SetUserName("fake_user");
    auto outcome = clientSp->GetUser(input);
    EXPECT_FALSE( outcome.IsSuccess());
}
TEST_F(IAMSmokeTestSuite, ListUsersSuccess )
{
    Aws::IAM::IAMClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-east-1";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<IAMClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListUsersRequest input;
    auto outcome = clientSp->ListUsers(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
