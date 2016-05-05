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
#include <aws/testing/MemoryTesting.h>
#include <aws/identity-management/auth/PersistentCognitoIdentityProvider.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/DateTime.h>
#include <fstream>

#ifdef _MSC_VER
#pragma warning(disable: 4996) // _CRT_SECURE_NO_WARNINGS
#endif

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

#ifdef _WIN32
Aws::String ComputeIdentityFilePath()
{
    static bool s_initialized = false;
    static char s_tempName[L_tmpnam_s+1];

	/*
	Prior to VS 2014, tmpnam/tmpnam_s generated root level files ("\filename") which were not appropriate for our usage, so for the windows version, we prepended a '.' to make it a
	tempfile in the current directory.  Starting with VS2014, the behavior of tmpnam/tmpnam_s was changed to be a full, valid filepath based on the 
	current user ("C:\Users\username\AppData\Local\Temp\...").  

	See the tmpnam section in http://blogs.msdn.com/b/vcblog/archive/2014/06/18/crt-features-fixes-and-breaking-changes-in-visual-studio-14-ctp1.aspx
	for more details.
	*/
    if(!s_initialized)
    {
#if _MSC_VER >= 1900
		tmpnam_s(s_tempName, L_tmpnam_s);
#else
        s_tempName[0] = '.';
        tmpnam_s(s_tempName + 1, L_tmpnam_s);
#endif // _MSC_VER
        s_initialized = true;
    }

    return Aws::String(s_tempName);
}
#else
Aws::String ComputeIdentityFilePath()
{
    //tempnam is deprecated on gcc linker, just compute a unique timestamp
    static Aws::String tempFile(DateTime::Now().CalculateGmtTimestampAsString("%H_%M_%S_%Y_%m_%d"));
    return tempFile;
}
#endif

TEST(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenNoFileIsAvailable)
{
    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("identityPoolId", "accountId", ComputeIdentityFilePath().c_str());
    ASSERT_FALSE(identityProvider.HasIdentityId());
    ASSERT_FALSE(identityProvider.HasLogins());
    ASSERT_EQ("identityPoolId", identityProvider.GetIdentityPoolId());
    ASSERT_EQ("accountId", identityProvider.GetAccountId());

    Aws::String filePath = ComputeIdentityFilePath();
    std::ifstream shouldNotExist(filePath.c_str());
    ASSERT_FALSE(shouldNotExist.good());
}

TEST(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenFileIsAvaiable)
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

    Aws::String filePath = ComputeIdentityFilePath();
    std::ofstream identityFile(filePath.c_str());
    identityFile << identityDoc.WriteReadable();
    identityFile.flush();
    identityFile.close();

    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", filePath.c_str());
    FileSystemUtils::RemoveFileIfExists(filePath.c_str());

    ASSERT_TRUE(identityProvider.HasIdentityId());
    ASSERT_EQ(theIdentityPoolWeWant.GetString("IdentityId"), identityProvider.GetIdentityId());
    ASSERT_TRUE(identityProvider.HasLogins());
    ASSERT_EQ(1u, identityProvider.GetLogins().size());
    ASSERT_EQ("TestLoginName", identityProvider.GetLogins().begin()->first);
    ASSERT_EQ("TestLoginValue", identityProvider.GetLogins().begin()->second.accessToken);
}

TEST(PersistentCognitoIdentityProvider_JsonImpl_Test, TestPersistance)
{
    JsonValue someOtherIdentityPool;
    someOtherIdentityPool.WithString("IdentityId", "SomeOtherIdentity");

    JsonValue identityDoc;
    identityDoc.WithObject("SomeOtherIdentityPool", someOtherIdentityPool);

    Aws::String filePath = ComputeIdentityFilePath();
    FileSystemUtils::RemoveFileIfExists(filePath.c_str());
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
    FileSystemUtils::RemoveFileIfExists(filePath.c_str());

    ASSERT_TRUE(finalIdentityDoc.ValueExists("SomeOtherIdentityPool"));
    ASSERT_TRUE(finalIdentityDoc.ValueExists("IdentityPoolWeWant"));
    JsonValue ourIdentityPool = finalIdentityDoc.GetObject("IdentityPoolWeWant");
    ASSERT_EQ("IdentityWeWant", ourIdentityPool.GetString("IdentityId"));
    ASSERT_EQ("LoginName", ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->first);
    ASSERT_EQ(loginAccessTokens.accessToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("AccessToken"));
    ASSERT_EQ(loginAccessTokens.longTermToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("LongTermToken"));
    ASSERT_EQ(loginAccessTokens.longTermTokenExpiry, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetInt64("Expiry"));
}

