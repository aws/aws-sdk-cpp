/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/ratelimiter/DefaultRateLimiter.h>
#include <aws/testing/platform/PlatformTesting.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/s3control/S3ControlClient.h>
#include <aws/s3control/model/PutPublicAccessBlockRequest.h>
#include <aws/s3control/model/GetPublicAccessBlockRequest.h>
#include <aws/s3control/model/DeletePublicAccessBlockRequest.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/cognito-identity/CognitoIdentityClient.h>

using namespace Aws;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::S3Control;
using namespace Aws::S3Control::Model;

namespace
{
    static const char ALLOCATION_TAG[] = "S3ControlTest";

    class S3ControlTest : public ::testing::Test
    {
    public:
        S3ControlClient m_client;
        Aws::String m_accountId;

        S3ControlTest()
        {
            // Create a client
            ClientConfiguration config;
            config.region = Aws::Region::US_EAST_1;
            config.scheme = Scheme::HTTPS;
            config.connectTimeoutMs = 30000;
            config.requestTimeoutMs = 30000;
            m_client = S3ControlClient(config);

            auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, config);
            auto cognitoClient = Aws::MakeShared<Aws::CognitoIdentity::CognitoIdentityClient>(ALLOCATION_TAG, config);
            Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, cognitoClient);
            m_accountId = accessManagementClient.GetAccountId();
        }
    };

    TEST_F(S3ControlTest, TestPublicAccessBlockOperations)
    {
        GetPublicAccessBlockRequest getPublicAccessBlockRequest;
        getPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto getPublicAccessBlockOutcome = m_client.GetPublicAccessBlock(getPublicAccessBlockRequest);
        ASSERT_FALSE(getPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION, getPublicAccessBlockOutcome.GetError().GetErrorType());

        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetBlockPublicPolicy(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_TRUE(putPublicAccessBlockOutcome.IsSuccess());

        DeletePublicAccessBlockRequest deletePublicAccessBlockRequest;
        deletePublicAccessBlockRequest.SetAccountId(m_accountId);
        auto deletePublicAccessBlockOutcome = m_client.DeletePublicAccessBlock(deletePublicAccessBlockRequest);
        ASSERT_TRUE(deletePublicAccessBlockOutcome.IsSuccess());
    }

    TEST_F(S3ControlTest, TestDualStackEndpoint)
    {
        ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        config.scheme = Scheme::HTTPS;
        config.useDualStack = true;
        S3ControlClient s3ControlClient(config);

        GetPublicAccessBlockRequest getPublicAccessBlockRequest;
        getPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto getPublicAccessBlockOutcome = s3ControlClient.GetPublicAccessBlock(getPublicAccessBlockRequest);
        ASSERT_FALSE(getPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(S3ControlErrors::NO_SUCH_PUBLIC_ACCESS_BLOCK_CONFIGURATION, getPublicAccessBlockOutcome.GetError().GetErrorType());

        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetIgnorePublicAcls(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId(m_accountId);
        auto putPublicAccessBlockOutcome = s3ControlClient.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_TRUE(putPublicAccessBlockOutcome.IsSuccess());

        DeletePublicAccessBlockRequest deletePublicAccessBlockRequest;
        deletePublicAccessBlockRequest.SetAccountId(m_accountId);
        auto deletePublicAccessBlockOutcome = s3ControlClient.DeletePublicAccessBlock(deletePublicAccessBlockRequest);
        ASSERT_TRUE(deletePublicAccessBlockOutcome.IsSuccess());
    }

    TEST_F(S3ControlTest, TestInvalidAccountId)
    {
        PutPublicAccessBlockRequest putPublicAccessBlockRequest;
        PublicAccessBlockConfiguration publicAccessBlockConfiguration;
        publicAccessBlockConfiguration.SetBlockPublicPolicy(true);
        putPublicAccessBlockRequest.SetPublicAccessBlockConfiguration(publicAccessBlockConfiguration);
        putPublicAccessBlockRequest.SetAccountId("fakeaccountid");

        auto putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());

        // The account id shoud be a valid DNS label. Otherwise we will not make the request.
        putPublicAccessBlockRequest.SetAccountId("invalid.account.id");

        putPublicAccessBlockOutcome = m_client.PutPublicAccessBlock(putPublicAccessBlockRequest);
        ASSERT_FALSE(putPublicAccessBlockOutcome.IsSuccess());
        ASSERT_EQ(CoreErrors::VALIDATION, static_cast<CoreErrors>(putPublicAccessBlockOutcome.GetError().GetErrorType()));
    }
}
