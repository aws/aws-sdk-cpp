/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/external/gtest.h>

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>

using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Client;

namespace
{
static const char* ALLOCATION_TAG = "GetCredentialsTest";

class GetCredentialsTest : public ::testing::Test
{
public:
    GetCredentialsTest() :
        client(nullptr)
    {}

    std::shared_ptr<CognitoIdentityClient> client;

protected:
    void SetUp()
    {
        client = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG);
    }

    void TearDown()
    {
        client = nullptr;
    }
};

TEST_F(GetCredentialsTest, TestGetCredentialsForAnonymous)
{
    GetIdRequest request;
    GetIdOutcome outcome = client->GetId(request);

    ASSERT_FALSE(outcome.IsSuccess());

    request.SetAccountId("959336043543");
    request.SetIdentityPoolId("us-east-1:1e7211c2-6d32-4c01-b131-88df53438da7");
    outcome = client->GetId(request);

    ASSERT_TRUE(outcome.IsSuccess());
    Aws::String identityId = outcome.GetResult().GetIdentityId();

    GetCredentialsForIdentityRequest getCredsRequest;
    getCredsRequest.SetIdentityId(identityId);
    GetCredentialsForIdentityOutcome getCredsOutcome = client->GetCredentialsForIdentity(getCredsRequest);
    ASSERT_TRUE(getCredsOutcome.IsSuccess());


}
}
