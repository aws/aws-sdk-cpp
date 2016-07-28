/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/testing/MemoryTesting.h>
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/core/platform/FileSystem.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/platform/Platform.h>
#include <fstream>

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

class PersistentCognitoIdentityProvider_JsonImpl_Test : public ::testing::Test
{
public:

    void SetUp()
    {
	Aws::String dateTime = DateTime::Now().CalculateGmtTimestampAsString("%H_%M_%S_%Y_%m_%d");
#ifdef __ANDROID__
	tempFile = Aws::Platform::GetCacheDirectory() + dateTime;
#else
	tempFile = dateTime;
#endif // __ANDROID__
    }

    void TearDown()
    {
        Aws::FileSystem::RemoveFileIfExists(tempFile.c_str());
    }

    Aws::String tempFile;
};

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenNoFileIsAvailable)
{
    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("identityPoolId", "accountId", tempFile.c_str());
    ASSERT_FALSE(identityProvider.HasIdentityId());
    ASSERT_FALSE(identityProvider.HasLogins());
    ASSERT_EQ("identityPoolId", identityProvider.GetIdentityPoolId());
    ASSERT_EQ("accountId", identityProvider.GetAccountId());

    Aws::String filePath = tempFile;
    std::ifstream shouldNotExist(filePath.c_str());
    ASSERT_FALSE(shouldNotExist.good());
}

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenFileIsAvaiable)
{
    JsonValue theIdentityPoolWeWant;
    theIdentityPoolWeWant.WithString("IdentityId", "TheIdentityWeWant");

    //this should test the legacy case.
    //the next test case will cover the current spec in detail.
    JsonValue logins;
    logins.WithString("TestLoginName", "TestLoginValue");
    theIdentityPoolWeWant.WithObject("Logins", logins);

    JsonValue someOtherIdentityPool;
    someOtherIdentityPool.WithString("IdentityId", "SomeOtherIdentity");

    JsonValue identityDoc;
    identityDoc.WithObject("IdentityPoolWeWant", theIdentityPoolWeWant);
    identityDoc.WithObject("SomeOtherIdentityPool", someOtherIdentityPool);

    Aws::String filePath = tempFile;
    std::ofstream identityFile(filePath.c_str());
    identityFile << identityDoc.WriteReadable();
    identityFile.flush();
    identityFile.close();

    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", filePath.c_str());
    Aws::FileSystem::RemoveFileIfExists(filePath.c_str());

    ASSERT_TRUE(identityProvider.HasIdentityId());
    ASSERT_EQ(theIdentityPoolWeWant.GetString("IdentityId"), identityProvider.GetIdentityId());
    ASSERT_TRUE(identityProvider.HasLogins());
    ASSERT_EQ(1u, identityProvider.GetLogins().size());
    ASSERT_EQ("TestLoginName", identityProvider.GetLogins().begin()->first);
    ASSERT_EQ("TestLoginValue", identityProvider.GetLogins().begin()->second.accessToken);
}

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestPersistance)
{
    JsonValue someOtherIdentityPool;
    someOtherIdentityPool.WithString("IdentityId", "SomeOtherIdentity");

    JsonValue identityDoc;
    identityDoc.WithObject("SomeOtherIdentityPool", someOtherIdentityPool);

    Aws::String filePath = tempFile;
    Aws::FileSystem::RemoveFileIfExists(filePath.c_str());
    std::ofstream identityFile(filePath.c_str());
    identityFile << identityDoc.WriteReadable();
    identityFile.close();

    Aws::Map<Aws::String, LoginAccessTokens> loginsMap;
    LoginAccessTokens loginAccessTokens;
    loginAccessTokens.accessToken = "LoginValue";
    loginAccessTokens.longTermTokenExpiry = 1001;
    loginAccessTokens.longTermToken = "LongTermToken";
    loginsMap["LoginName"] = loginAccessTokens;

    //scope it to kill the cache and force it to reload from file.
    {
        PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", filePath.c_str());

        EXPECT_FALSE(identityProvider.HasIdentityId());
        EXPECT_FALSE(identityProvider.HasLogins());

        bool identityCallbackFired = false;
        bool loginsCallbackFired = false;

        identityProvider.SetIdentityIdUpdatedCallback( [&](const PersistentCognitoIdentityProvider&){ identityCallbackFired = true; });
        identityProvider.SetLoginsUpdatedCallback([&](const PersistentCognitoIdentityProvider&){ loginsCallbackFired = true; });

        identityProvider.PersistIdentityId("IdentityWeWant");
        identityProvider.PersistLogins(loginsMap);
        ASSERT_TRUE(identityCallbackFired);
        ASSERT_TRUE(loginsCallbackFired);
    }

    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", filePath.c_str());

    EXPECT_EQ("IdentityWeWant", identityProvider.GetIdentityId());
    EXPECT_EQ("LoginName", identityProvider.GetLogins().begin()->first);
    EXPECT_EQ(loginAccessTokens.accessToken, identityProvider.GetLogins().begin()->second.accessToken);
    EXPECT_EQ(loginAccessTokens.longTermToken, identityProvider.GetLogins().begin()->second.longTermToken);
    EXPECT_EQ(loginAccessTokens.longTermTokenExpiry, identityProvider.GetLogins().begin()->second.longTermTokenExpiry);

    std::ifstream identityFileInput(filePath.c_str());
    JsonValue finalIdentityDoc(identityFileInput);
    identityFileInput.close();
    Aws::FileSystem::RemoveFileIfExists(filePath.c_str());

    ASSERT_TRUE(finalIdentityDoc.ValueExists("SomeOtherIdentityPool"));
    ASSERT_TRUE(finalIdentityDoc.ValueExists("IdentityPoolWeWant"));
    JsonValue ourIdentityPool = finalIdentityDoc.GetObject("IdentityPoolWeWant");
    ASSERT_EQ("IdentityWeWant", ourIdentityPool.GetString("IdentityId"));
    ASSERT_EQ("LoginName", ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->first);
    ASSERT_EQ(loginAccessTokens.accessToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("AccessToken"));
    ASSERT_EQ(loginAccessTokens.longTermToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("LongTermToken"));
    ASSERT_EQ(loginAccessTokens.longTermTokenExpiry, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetInt64("Expiry"));
}

