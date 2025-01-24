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
#include <aws/cognito-idp/CognitoIdentityProviderClient.h>
#include <aws/cognito-idp/model/ListUserPoolsRequest.h>

namespace CognitoIdentityProviderSmokeTest{
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;

using namespace Aws::CognitoIdentityProvider;
using namespace Aws::CognitoIdentityProvider::Model;
class CognitoIdentityProviderSmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    public:
    static const char ALLOCATION_TAG[];
};
const char CognitoIdentityProviderSmokeTestSuite::ALLOCATION_TAG[] = "CognitoIdentityProviderSmokeTest";
TEST_F(CognitoIdentityProviderSmokeTestSuite, ListUserPoolsSuccess )
{
    Aws::CognitoIdentityProvider::CognitoIdentityProviderClientConfiguration clientConfiguration;
    clientConfiguration.region = "us-west-2";
    clientConfiguration.useFIPS = false;
    clientConfiguration.useDualStack = false;
    auto clientSp = Aws::MakeShared<CognitoIdentityProviderClient>(ALLOCATION_TAG, clientConfiguration);
    //populate input params
    
    ListUserPoolsRequest input;
    input.SetMaxResults(10);
    auto outcome = clientSp->ListUserPools(input);
    EXPECT_TRUE( outcome.IsSuccess());
}
}
