/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <algorithm>
#include <thread>

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/cognito-identity/model/CreateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DeleteIdentityPoolRequest.h>
#include <aws/cognito-identity/model/DescribeIdentityPoolRequest.h>
#include <aws/cognito-identity/model/GetIdentityPoolRolesRequest.h>
#include <aws/cognito-identity/model/UpdateIdentityPoolRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/cognito-identity/model/ListIdentitiesRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenRequest.h>
#include <aws/cognito-identity/model/UnlinkIdentityRequest.h>
#include <aws/cognito-identity/model/GetOpenIdTokenForDeveloperIdentityRequest.h>
#include <aws/cognito-identity/model/LookupDeveloperIdentityRequest.h>
#include <aws/cognito-identity/CognitoIdentityErrors.h>
#include <aws/access-management/AccessManagementClient.h>
#include <aws/iam/IAMClient.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/Outcome.h>
#include <aws/testing/TestingEnvironment.h>
#include <aws/core/platform/Environment.h>

using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Client;

#define TEST_POOL_PREFIX  "IntegrationTest_"

namespace
{
static const char* ALLOCATION_TAG = "IdentityPoolOperationTest";

Aws::String GetResourcePrefix()
{
    return Aws::Testing::GetAwsResourcePrefix() + TEST_POOL_PREFIX;
}

class IdentityPoolOperationTest : public ::testing::Test
{
public:
    IdentityPoolOperationTest() :
        client(nullptr)
    {}

    std::shared_ptr<CognitoIdentityClient> client;

protected:
    void SetUp()
    {
        Aws::Client::ClientConfiguration config;
        config.region = Aws::Region::US_EAST_1;
        //TODO: move this over to profile config file.
        client = Aws::MakeShared<CognitoIdentityClient>(ALLOCATION_TAG, config);
        CleanupPreviousFailedTests();
    }

    void TearDown()
    {
        client = nullptr;
    }

    static bool WaitForIdentitiesToBeActive(const Aws::String& identityPoolId, const std::shared_ptr<CognitoIdentityClient>& client)
    {
        unsigned timeoutCount = 0;
        const unsigned maxRetries = 10;
        while (timeoutCount++ < maxRetries)
        {
            GetIdentityPoolRolesRequest getIdentityPoolRolesRequest;
            getIdentityPoolRolesRequest.SetIdentityPoolId(identityPoolId);

            GetIdentityPoolRolesOutcome getIdentityPoolRolesOutcome = client->GetIdentityPoolRoles(getIdentityPoolRolesRequest);
            if (getIdentityPoolRolesOutcome.IsSuccess())
            {
                return true;
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return false;
    }

    static bool WaitForIdentitiesToBeCreated(const Aws::String& identityPoolId, const std::shared_ptr<CognitoIdentityClient>& client)
    {
        unsigned timeoutCount = 0;
        const unsigned maxRetries = 10;
        while (timeoutCount++ < maxRetries)
        {
            ListIdentitiesRequest listIdentitiesRequest;
            listIdentitiesRequest.WithIdentityPoolId(identityPoolId).WithMaxResults(10);
            ListIdentitiesOutcome listIdentitiesOutcome = client->ListIdentities(listIdentitiesRequest);

            if (listIdentitiesOutcome.IsSuccess())
            {
                if (listIdentitiesOutcome.GetResult().GetIdentities().size() > 0)
                {
                    return true;
                }
            }

            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        return false;
    }


    void CleanupPreviousFailedTests()
    {
        Aws::String resourcePrefix = GetResourcePrefix();

        Aws::Vector<IdentityPoolShortDescription> pools = GetAllPoolsWithPrefix(resourcePrefix);
        for (auto& pool : pools)
        {
            // Only delete integration test pools
            DeleteIdentityPoolRequest deleteIdentityPoolRequest;
            deleteIdentityPoolRequest.WithIdentityPoolId(pool.GetIdentityPoolId());

            DeleteIdentityPoolOutcome deleteIdentityPoolOutcome = client->DeleteIdentityPool(deleteIdentityPoolRequest);
            AWS_ASSERT_SUCCESS(deleteIdentityPoolOutcome);
        }
    }

    const Aws::Vector<IdentityPoolShortDescription> GetAllPoolsWithPrefix(Aws::String prefix)
    {
        ListIdentityPoolsRequest request;
        request.WithMaxResults(50);
        ListIdentityPoolsOutcome outcome = client->ListIdentityPools(request);
        if (!outcome.IsSuccess())
        {
            std::cout << "Encountered Unexpected Error:" << outcome.GetError().GetExceptionName() << std::endl;
        }
        AWS_EXPECT_SUCCESS(outcome);

        auto& identityPools = outcome.GetResult().GetIdentityPools();
        Aws::Vector<IdentityPoolShortDescription> pools;
        std::copy_if(identityPools.begin(), identityPools.end(), std::back_inserter(pools), [&](const IdentityPoolShortDescription& pool) {
            return pool.GetIdentityPoolName().find(prefix) == 0;
        });
        return pools;
    }

};

TEST_F(IdentityPoolOperationTest, TestCreateGetUpdateDeleteOperations)
{
    std::size_t initialPoolCount = GetAllPoolsWithPrefix(GetResourcePrefix()).size();
    Aws::String identityPoolName = GetResourcePrefix();
    identityPoolName += "BatCave";
    CreateIdentityPoolRequest createIdentityPoolRequest;
    createIdentityPoolRequest.WithDeveloperProviderName("BruceWayne")
                             .WithAllowUnauthenticatedIdentities(true)
                             .WithIdentityPoolName(identityPoolName)
                             .AddSupportedLoginProviders("www.amazon.com", "amzn1.application-oa2-client.188a56d827a7d6555a8b67a5d");

    CreateIdentityPoolOutcome createIdentityPoolOutcome = client->CreateIdentityPool(createIdentityPoolRequest);

    AWS_ASSERT_SUCCESS(createIdentityPoolOutcome);
    ASSERT_FALSE(createIdentityPoolOutcome.GetResult().GetIdentityPoolId().empty());
    EXPECT_EQ(createIdentityPoolRequest.GetIdentityPoolName(), createIdentityPoolOutcome.GetResult().GetIdentityPoolName());
    EXPECT_TRUE(createIdentityPoolOutcome.GetResult().GetAllowUnauthenticatedIdentities());
    EXPECT_EQ(createIdentityPoolRequest.GetDeveloperProviderName(), createIdentityPoolOutcome.GetResult().GetDeveloperProviderName());
    EXPECT_EQ(createIdentityPoolRequest.GetSupportedLoginProviders().find("www.amazon.com")->second,
        createIdentityPoolOutcome.GetResult().GetSupportedLoginProviders().find("www.amazon.com")->second);

    Aws::String identityPoolId = createIdentityPoolOutcome.GetResult().GetIdentityPoolId();
    EXPECT_TRUE(WaitForIdentitiesToBeActive(identityPoolId, client));

    DescribeIdentityPoolRequest describeIdentityPoolRequest;
    describeIdentityPoolRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    DescribeIdentityPoolOutcome describeIdentityPoolOutcome = client->DescribeIdentityPool(describeIdentityPoolRequest);
    AWS_EXPECT_SUCCESS(describeIdentityPoolOutcome);
    EXPECT_EQ(createIdentityPoolOutcome.GetResult().GetIdentityPoolId(), describeIdentityPoolOutcome.GetResult().GetIdentityPoolId());
    EXPECT_EQ(createIdentityPoolRequest.GetIdentityPoolName(), describeIdentityPoolOutcome.GetResult().GetIdentityPoolName());
    EXPECT_TRUE(describeIdentityPoolOutcome.GetResult().GetAllowUnauthenticatedIdentities());
    EXPECT_EQ(createIdentityPoolRequest.GetDeveloperProviderName(), describeIdentityPoolOutcome.GetResult().GetDeveloperProviderName());
    EXPECT_EQ(createIdentityPoolRequest.GetSupportedLoginProviders().find("www.amazon.com")->second,
        describeIdentityPoolOutcome.GetResult().GetSupportedLoginProviders().find("www.amazon.com")->second);
    ASSERT_EQ(initialPoolCount + 1, GetAllPoolsWithPrefix(GetResourcePrefix()).size());

    UpdateIdentityPoolRequest updateIdentityPoolRequest;
    updateIdentityPoolRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId())
                             .WithIdentityPoolName(identityPoolName + "20")
                             .WithAllowUnauthenticatedIdentities(true)
                             .WithDeveloperProviderName("BruceWayne")
                             .WithSupportedLoginProviders(createIdentityPoolRequest.GetSupportedLoginProviders());

    UpdateIdentityPoolOutcome updateIdentityPoolOutcome = client->UpdateIdentityPool(updateIdentityPoolRequest);
    AWS_EXPECT_SUCCESS(updateIdentityPoolOutcome);
    EXPECT_EQ(updateIdentityPoolRequest.GetIdentityPoolId(), updateIdentityPoolOutcome.GetResult().GetIdentityPoolId());
    EXPECT_EQ(updateIdentityPoolRequest.GetIdentityPoolName(), updateIdentityPoolOutcome.GetResult().GetIdentityPoolName());
    EXPECT_TRUE(updateIdentityPoolRequest.GetAllowUnauthenticatedIdentities());
    EXPECT_EQ(updateIdentityPoolRequest.GetDeveloperProviderName(), updateIdentityPoolOutcome.GetResult().GetDeveloperProviderName());
    EXPECT_EQ(updateIdentityPoolRequest.GetSupportedLoginProviders().find("www.amazon.com")->second,
        updateIdentityPoolOutcome.GetResult().GetSupportedLoginProviders().find("www.amazon.com")->second);

    DeleteIdentityPoolRequest deleteIdentityPoolRequest;
    deleteIdentityPoolRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    DeleteIdentityPoolOutcome deleteIdentityPoolOutcome = client->DeleteIdentityPool(deleteIdentityPoolRequest);
    AWS_EXPECT_SUCCESS(deleteIdentityPoolOutcome);
    ASSERT_EQ(initialPoolCount, GetAllPoolsWithPrefix(GetResourcePrefix()).size());
}

TEST_F(IdentityPoolOperationTest, TestExceptionProperlyPropgates)
{
    Aws::String identityPoolName = GetResourcePrefix();
    identityPoolName += "Bat Cave";

    CreateIdentityPoolRequest createIdentityPoolRequest;
    //spaces should return a Validation Error
    createIdentityPoolRequest.WithDeveloperProviderName("Bruce Wayne")
                             .WithAllowUnauthenticatedIdentities(true)
                             .WithIdentityPoolName(identityPoolName)
                             .AddSupportedLoginProviders("www.amazon.com", "amzn1.application-oa2-client.188a56d827a7d6555a8b67a5d");

    CreateIdentityPoolOutcome createIdentityPoolOutcome = client->CreateIdentityPool(createIdentityPoolRequest);
    ASSERT_FALSE(createIdentityPoolOutcome.IsSuccess());
    ASSERT_EQ(CognitoIdentityErrors::VALIDATION, createIdentityPoolOutcome.GetError().GetErrorType());
}

TEST_F(IdentityPoolOperationTest, TestIdentityActions)
{
    Aws::String identityPoolName = GetResourcePrefix();
    identityPoolName += "FortressOfSolitude";
    CreateIdentityPoolRequest createIdentityPoolRequest;
    createIdentityPoolRequest.WithDeveloperProviderName("Superman")
                             .WithAllowUnauthenticatedIdentities(true)
                             .WithIdentityPoolName(identityPoolName)
                             .AddSupportedLoginProviders("www.amazon.com", "amzn1.application-oa2-client.188a56d827a7d6555a8b67a5d");

    CreateIdentityPoolOutcome createIdentityPoolOutcome = client->CreateIdentityPool(createIdentityPoolRequest);

    AWS_ASSERT_SUCCESS(createIdentityPoolOutcome);
    Aws::String identityPoolId = createIdentityPoolOutcome.GetResult().GetIdentityPoolId();
    EXPECT_TRUE(WaitForIdentitiesToBeActive(identityPoolId, client));

    GetIdRequest getIdRequest;
    getIdRequest.WithIdentityPoolId(identityPoolId);

    ClientConfiguration clientConfig;
    clientConfig.region = Aws::Region::US_EAST_1;

    auto accountId = Aws::Environment::GetEnv("CATAPULT_TEST_ACCOUNT");
    if (accountId.empty()) {
        auto iamClient = Aws::MakeShared<Aws::IAM::IAMClient>(ALLOCATION_TAG, clientConfig);
        Aws::AccessManagement::AccessManagementClient accessManagementClient(iamClient, client);
        accountId = accessManagementClient.GetAccountId();
    }
    getIdRequest.WithAccountId(accountId);

    GetIdOutcome getIdOutcome = client->GetId(getIdRequest);
    AWS_EXPECT_SUCCESS(getIdOutcome);
    EXPECT_FALSE(getIdOutcome.GetResult().GetIdentityId().empty());

    // No Roles, so expect this to fail
    GetCredentialsForIdentityRequest getCredentialsRequest;
    getCredentialsRequest.WithIdentityId(getIdOutcome.GetResult().GetIdentityId());
    GetCredentialsForIdentityOutcome getCredentialsOutcome = client->GetCredentialsForIdentity(getCredentialsRequest);
    EXPECT_FALSE(getCredentialsOutcome.IsSuccess());
    EXPECT_EQ(CognitoIdentityErrors::INVALID_IDENTITY_POOL_CONFIGURATION, getCredentialsOutcome.GetError().GetErrorType());

    EXPECT_TRUE(WaitForIdentitiesToBeCreated(identityPoolId, client));

    ListIdentitiesRequest listIdentitiesRequest;
    listIdentitiesRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId()).WithMaxResults(10);

    ListIdentitiesOutcome listIdentitiesOutcome = client->ListIdentities(listIdentitiesRequest);
    AWS_EXPECT_SUCCESS(listIdentitiesOutcome);
    EXPECT_EQ(1u, listIdentitiesOutcome.GetResult().GetIdentities().size());
    EXPECT_EQ(createIdentityPoolOutcome.GetResult().GetIdentityPoolId(), listIdentitiesOutcome.GetResult().GetIdentityPoolId());
    EXPECT_EQ(getIdOutcome.GetResult().GetIdentityId(), listIdentitiesOutcome.GetResult().GetIdentities()[0].GetIdentityId());

    GetOpenIdTokenRequest getOpenIdTokenRequest;
    getOpenIdTokenRequest.WithIdentityId(getIdOutcome.GetResult().GetIdentityId());

    GetOpenIdTokenOutcome getOpenIdTokenOutcome = client->GetOpenIdToken(getOpenIdTokenRequest);
    AWS_EXPECT_SUCCESS(getOpenIdTokenOutcome);
    EXPECT_EQ(getIdOutcome.GetResult().GetIdentityId(), getOpenIdTokenOutcome.GetResult().GetIdentityId());
    EXPECT_FALSE(getOpenIdTokenOutcome.GetResult().GetToken().empty());

    /**We need a real open id provider for this to work
    UnlinkIdentityRequest unlinkIdentityRequest;
    unlinkIdentityRequest.WithIdentityId(getIdOutcome.GetResult().GetIdentityId())
                    .WithLogins(createIdentityPoolRequest.GetSupportedLoginProviders())
                    .AddLoginToRemove("www.amazon.com");

    UnlinkIdentityOutcome unlinkIdentityOutcome = client->UnlinkIdentity(unlinkIdentityRequest);
    AWS_EXPECT_SUCCESS(unlinkIdentityOutcome);

    listIdentitiesOutcome = client->ListIdentities(listIdentitiesRequest);
    AWS_EXPECT_SUCCESS(listIdentitiesOutcome);
    EXPECT_EQ(0u, listIdentitiesOutcome.GetResult().GetIdentities().size());
    EXPECT_EQ(createIdentityPoolOutcome.GetResult().GetIdentityPoolId(), listIdentitiesOutcome.GetResult().GetIdentityPoolId());*/

    DeleteIdentityPoolRequest deleteIdentityPoolRequest;
    deleteIdentityPoolRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    DeleteIdentityPoolOutcome deleteIdentityPoolOutcome = client->DeleteIdentityPool(deleteIdentityPoolRequest);
    AWS_EXPECT_SUCCESS(deleteIdentityPoolOutcome);
}

/***This Test will not work until we have a live openId provider to link against.
TEST_F(IdentityPoolOperationTest, TestDeveloperIdentityActions)
{
    CreateIdentityPoolRequest createIdentityPoolRequest;
    createIdentityPoolRequest.WithDeveloperProviderName("Spiderman")
                    .WithAllowUnauthenticatedIdentities(true)
                    .WithIdentityPoolName(TEST_POOL_PREFIX "NYC")
                    .AddSupportedLoginProvider("www.pointstoknowhere.com", "amzn1.application-oa2-client.188a56d827a7d6555a8b67a5d");

    CreateIdentityPoolOutcome createIdentityPoolOutcome = client->CreateIdentityPool(createIdentityPoolRequest);

    AWS_ASSERT_SUCCESS(createIdentityPoolOutcome);

    GetIdRequest getIdRequest;
    getIdRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());
    getIdRequest.WithAccountId("868711054045");

    GetIdOutcome getIdOutcome = client->GetId(getIdRequest);
    AWS_EXPECT_SUCCESS(getIdOutcome);
    EXPECT_FALSE(getIdOutcome.GetResult().GetIdentityId().empty());

    GetOpenIdTokenForDeveloperIdentityRequest getOpenIdTokenForDeveloperIdentityRequest;
    getOpenIdTokenForDeveloperIdentityRequest.WithIdentityId(getIdOutcome.GetResult().GetIdentityId())
                    .AddLogin("www.pointstoknowhere.com", "amzn1.application-oa2-client.188a56d827a7d6555a8b67a5d")
                    .WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    GetOpenIdTokenForDeveloperIdentityOutcome getOpenIdTokenForDeveloperIdentityOutcome =
                    client->GetOpenIdTokenForDeveloperIdentity(getOpenIdTokenForDeveloperIdentityRequest);

    AWS_EXPECT_SUCCESS(getOpenIdTokenForDeveloperIdentityOutcome);
    EXPECT_EQ(getIdOutcome.GetResult().GetIdentityId(), getOpenIdTokenForDeveloperIdentityOutcome.GetResult().GetIdentityId());
    EXPECT_FALSE(getOpenIdTokenForDeveloperIdentityOutcome.GetResult().GetToken().empty());

    LookupDeveloperIdentityRequest lookupDeveloperIdentityRequest;
    lookupDeveloperIdentityRequest.WithIdentityId(getOpenIdTokenForDeveloperIdentityOutcome.GetResult().GetIdentityId())
                    .WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    LookupDeveloperIdentityOutcome lookupDeveloperIdentityOutcome = client->LookupDeveloperIdentity(lookupDeveloperIdentityRequest);
    AWS_EXPECT_SUCCESS(lookupDeveloperIdentityOutcome);
    EXPECT_EQ(getIdOutcome.GetResult().GetIdentityId(), lookupDeveloperIdentityOutcome.GetResult().GetIdentityId());
    //EXPECT_EQ(getOpenIdTokenForDeveloperIdentityOutcome.GetResult().GetIdentityId(),
        //      lookupDeveloperIdentityOutcome.GetResult().GetDeveloperUserIdentifierList()[0]);

    DeleteIdentityPoolRequest deleteIdentityPoolRequest;
    deleteIdentityPoolRequest.WithIdentityPoolId(createIdentityPoolOutcome.GetResult().GetIdentityPoolId());

    DeleteIdentityPoolOutcome deleteIdentityPoolOutcome = client->DeleteIdentityPool(deleteIdentityPoolRequest);
    AWS_EXPECT_SUCCESS(deleteIdentityPoolOutcome);
}*/

}
