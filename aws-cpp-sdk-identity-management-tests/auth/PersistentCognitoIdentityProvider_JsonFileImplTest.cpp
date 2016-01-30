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
#include <fstream>

//since MAC isn't posix compliant, it likes to complain about std::tmpnam. Also, it the std:: function is supposed
//to be different than the posix defined function.
//turn it off because we need it for this test and this isn't production code
//anyways.
#ifdef __APPLE__

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#endif // __clang__

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif // __GNUC__

#endif // __APPLE__

#ifdef _MSC_VER
#pragma warning(disable: 4996) // _CRT_SECURE_NO_WARNINGS
#endif

using namespace Aws::Auth;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

#ifdef _WIN32
Aws::String MakeTempFilePath()
{
    char s_tempName[L_tmpnam_s+1];

	/*
	Prior to VS 2014, tmpnam/tmpnam_s generated root level files ("\filename") which were not appropriate for our usage, so for the windows version, we prepended a '.' to make it a
	tempfile in the current directory.  Starting with VS2014, the behavior of tmpnam/tmpnam_s was changed to be a full, valid filepath based on the 
	current user ("C:\Users\username\AppData\Local\Temp\...").  

	See the tmpnam section in http://blogs.msdn.com/b/vcblog/archive/2014/06/18/crt-features-fixes-and-breaking-changes-in-visual-studio-14-ctp1.aspx
	for more details.
	*/

#if _MSC_VER >= 1900
	tmpnam_s(s_tempName, L_tmpnam_s);
#else
    s_tempName[0] = '.';
    tmpnam_s(s_tempName + 1, L_tmpnam_s);
#endif // _MSC_VER

    return Aws::String(s_tempName);
}
#else
Aws::String MakeTempFilePath()
{
    Aws::String tempFile(std::tmpnam(nullptr));
    return tempFile;
}
#endif

class PersistentCognitoIdentityProvider_JsonImpl_Test : public ::testing::Test
{

    protected:

        static void WriteBasicTestsIdentityFile()
        {
            m_BasicIdentityFilename = MakeTempFilePath();
            FileSystemUtils::RemoveFileIfExists(m_BasicIdentityFilename.c_str());

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

            std::ofstream identityFile(m_BasicIdentityFilename.c_str());
            identityFile << identityDoc.WriteReadable();
            identityFile.flush();
            identityFile.close();
        }
       
        static void WritePersistenceTestIdentityFile()
        {
            m_PersistentIdentityFilename = MakeTempFilePath();
            FileSystemUtils::RemoveFileIfExists(m_PersistentIdentityFilename.c_str());

            JsonValue someOtherIdentityPool;
            someOtherIdentityPool.WithString("IdentityId", "SomeOtherIdentity");

            JsonValue identityDoc;
            identityDoc.WithObject("SomeOtherIdentityPool", someOtherIdentityPool);

            std::ofstream identityFile(m_PersistentIdentityFilename.c_str());
            identityFile << identityDoc.WriteReadable();
            identityFile.close();
        }

        static void SetUpTestCase()
        {
            WriteBasicTestsIdentityFile();
            WritePersistenceTestIdentityFile();
        }

        static void TearDownTestCase()
        {
            FileSystemUtils::RemoveFileIfExists(m_BasicIdentityFilename.c_str());
            FileSystemUtils::RemoveFileIfExists(m_PersistentIdentityFilename.c_str());
        }

        static Aws::String m_BasicIdentityFilename;
        static Aws::String m_PersistentIdentityFilename;
};

Aws::String PersistentCognitoIdentityProvider_JsonImpl_Test::m_BasicIdentityFilename;
Aws::String PersistentCognitoIdentityProvider_JsonImpl_Test::m_PersistentIdentityFilename;

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenNoFileIsAvailable)
{
    Aws::String tempFilePath = MakeTempFilePath();

    std::ifstream shouldNotExistStart(tempFilePath.c_str());
    ASSERT_FALSE(shouldNotExistStart.good());

    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("identityPoolId", "accountId", tempFilePath.c_str());
    ASSERT_FALSE(identityProvider.HasIdentityId());
    ASSERT_FALSE(identityProvider.HasLogins());
    ASSERT_EQ("identityPoolId", identityProvider.GetIdentityPoolId());
    ASSERT_EQ("accountId", identityProvider.GetAccountId());

    std::ifstream shouldNotExistEnd(tempFilePath.c_str());
    ASSERT_FALSE(shouldNotExistEnd.good());
}

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestConstructorWhenFileIsAvaiable)
{
    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", m_BasicIdentityFilename.c_str());

    ASSERT_TRUE(identityProvider.HasIdentityId());
    ASSERT_EQ("TheIdentityWeWant", identityProvider.GetIdentityId());
    ASSERT_TRUE(identityProvider.HasLogins());
    ASSERT_EQ(1u, identityProvider.GetLogins().size());
    ASSERT_EQ("TestLoginName", identityProvider.GetLogins().begin()->first);
    ASSERT_EQ("TestLoginValue", identityProvider.GetLogins().begin()->second.accessToken);
}

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, DisabledCaching)
{
    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", m_BasicIdentityFilename.c_str(), true);

    ASSERT_TRUE(identityProvider.HasIdentityId());
    ASSERT_EQ("TheIdentityWeWant", identityProvider.GetIdentityId());
    ASSERT_TRUE(identityProvider.HasLogins());
    ASSERT_EQ(1u, identityProvider.GetLogins().size());
    ASSERT_EQ("TestLoginName", identityProvider.GetLogins().begin()->first);
    ASSERT_EQ("TestLoginValue", identityProvider.GetLogins().begin()->second.accessToken);
}

TEST_F(PersistentCognitoIdentityProvider_JsonImpl_Test, TestPersistance)
{
    Aws::Map<Aws::String, LoginAccessTokens> loginsMap;
    LoginAccessTokens loginAccessTokens;
    loginAccessTokens.accessToken = "LoginValue";
    loginAccessTokens.longTermTokenExpiry = 1001;
    loginAccessTokens.longTermToken = "LongTermToken";
    loginsMap["LoginName"] = loginAccessTokens;

    //scope it to kill the cache and force it to reload from file.
    {
        PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", m_PersistentIdentityFilename.c_str());

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

    PersistentCognitoIdentityProvider_JsonFileImpl identityProvider("IdentityPoolWeWant", "accountId", m_PersistentIdentityFilename.c_str());

    EXPECT_EQ("IdentityWeWant", identityProvider.GetIdentityId());
    EXPECT_EQ("LoginName", identityProvider.GetLogins().begin()->first);
    EXPECT_EQ(loginAccessTokens.accessToken, identityProvider.GetLogins().begin()->second.accessToken);
    EXPECT_EQ(loginAccessTokens.longTermToken, identityProvider.GetLogins().begin()->second.longTermToken);
    EXPECT_EQ(loginAccessTokens.longTermTokenExpiry, identityProvider.GetLogins().begin()->second.longTermTokenExpiry);

    std::ifstream identityFileInput(m_PersistentIdentityFilename.c_str());
    JsonValue finalIdentityDoc(identityFileInput);
    identityFileInput.close();

    ASSERT_TRUE(finalIdentityDoc.ValueExists("SomeOtherIdentityPool"));
    ASSERT_TRUE(finalIdentityDoc.ValueExists("IdentityPoolWeWant"));
    JsonValue ourIdentityPool = finalIdentityDoc.GetObject("IdentityPoolWeWant");
    ASSERT_EQ("IdentityWeWant", ourIdentityPool.GetString("IdentityId"));
    ASSERT_EQ("LoginName", ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->first);
    ASSERT_EQ(loginAccessTokens.accessToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("AccessToken"));
    ASSERT_EQ(loginAccessTokens.longTermToken, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetString("LongTermToken"));
    ASSERT_EQ(loginAccessTokens.longTermTokenExpiry, ourIdentityPool.GetObject("Logins").GetAllObjects().begin()->second.GetInt64("Expiry"));
}

#ifdef __APPLE__

#ifdef __clang__
#pragma clang diagnostic pop
#endif // __clang__

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif // __GNUC__

#endif // __APPLE__
