/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <gtest/gtest.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <fstream>

using namespace Aws::Utils;
using namespace Aws::Config;

static void WriteDefaultConfigFile(Aws::OStream& stream, bool useProfilePrefix = false)
{
    const char* profilePrefix = useProfilePrefix ? "profile " : "";
    stream << "[" << profilePrefix << "default ]" << std::endl;
    stream << "aws_access_key_id=AKIAKEY" << std::endl;
    stream << "aws_secret_access_key=foobarbarfoo  " << std::endl;
    stream << "  aws_session_token= \"tokentokentoken==\"" << std::endl;
    stream << "region=us-east-1" << std::endl << std::endl;
    stream << "s3=" << std::endl;
    stream << "    max_concurrent_requests=10;" << std::endl;
    stream << "    max_queue_size=1000" << std::endl << std::endl;

    stream << "[ " << profilePrefix << "assumes_role]" << std::endl;
    stream << "role_arn =arn:aws:iam::123456789:role/foo" << std::endl;
    stream << "external_id = some-random-characters" << std::endl;
    stream << "source_profile= default" << std::endl;
    stream << "region = us-west-2" << std::endl;

    // SSO Profile
    stream << "[" << profilePrefix << "sso-test]" << std::endl;
    stream << "sso_start_url = https://t-1234567890.awsapps.com/start" << std::endl;
    stream << "sso_region = us-east-1" << std::endl;
    stream << "sso_account_id = 123456789012" << std::endl;
    stream << "sso_role_name= TestRole" << std::endl;
    stream << "region = us-west-2" << std::endl;
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileLoad)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);

    ASSERT_TRUE(configFile.good());

    WriteDefaultConfigFile(configFile);

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    // check the 3 profiles were read
    ASSERT_EQ(3u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("assumes_role"));
    ASSERT_NE(profiles.end(), profiles.find("sso-test"));

    // check the default profile parameters are as expected
    ASSERT_STREQ("AKIAKEY", profiles["default"].GetCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("foobarbarfoo", profiles["default"].GetCredentials().GetAWSSecretKey().c_str());
    ASSERT_STREQ("\"tokentokentoken==\"", profiles["default"].GetCredentials().GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles["default"].GetRegion().c_str());
    ASSERT_TRUE(profiles["default"].GetRoleArn().empty());
    ASSERT_TRUE(profiles["default"].GetSourceProfile().empty());

    // check the assume_role profile parameters are as expected
    ASSERT_STREQ("arn:aws:iam::123456789:role/foo", profiles["assumes_role"].GetRoleArn().c_str());
    ASSERT_STREQ("some-random-characters", profiles["assumes_role"].GetExternalId().c_str());
    ASSERT_STREQ("default", profiles["assumes_role"].GetSourceProfile().c_str());
    ASSERT_STREQ("us-west-2", profiles["assumes_role"].GetRegion().c_str());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSSecretKey().empty());

    // check the sso-test profile parameters are as expected
    ASSERT_STREQ("https://t-1234567890.awsapps.com/start", profiles["sso-test"].GetSsoStartUrl().c_str());
    ASSERT_STREQ("us-east-1", profiles["sso-test"].GetSsoRegion().c_str());
    ASSERT_STREQ("123456789012", profiles["sso-test"].GetSsoAccountId().c_str());
    ASSERT_STREQ("TestRole", profiles["sso-test"].GetSsoRoleName().c_str());
    ASSERT_STREQ("us-west-2", profiles["sso-test"].GetRegion().c_str());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetAWSSecretKey().empty());

    Aws::FileSystem::RemoveFileIfExists(configFile.GetFileName().c_str());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestConfigFileLoad)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());

    WriteDefaultConfigFile(configFile);

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName(), true);
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();
    ASSERT_EQ(3u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("assumes_role"));
    ASSERT_NE(profiles.end(), profiles.find("sso-test"));

    ASSERT_STREQ("AKIAKEY", profiles["default"].GetCredentials().GetAWSAccessKeyId().c_str());
    ASSERT_STREQ("foobarbarfoo", profiles["default"].GetCredentials().GetAWSSecretKey().c_str());
    ASSERT_STREQ("\"tokentokentoken==\"", profiles["default"].GetCredentials().GetSessionToken().c_str());
    ASSERT_STREQ("us-east-1", profiles["default"].GetRegion().c_str());
    ASSERT_TRUE(profiles["default"].GetRoleArn().empty());
    ASSERT_TRUE(profiles["default"].GetSourceProfile().empty());

    ASSERT_STREQ("arn:aws:iam::123456789:role/foo", profiles["assumes_role"].GetRoleArn().c_str());
    ASSERT_STREQ("default", profiles["assumes_role"].GetSourceProfile().c_str());
    ASSERT_STREQ("us-west-2", profiles["assumes_role"].GetRegion().c_str());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["assumes_role"].GetCredentials().GetAWSSecretKey().empty());

    // check the sso-test profile parameters are as expected
    ASSERT_STREQ("https://t-1234567890.awsapps.com/start", profiles["sso-test"].GetSsoStartUrl().c_str());
    ASSERT_STREQ("us-east-1", profiles["sso-test"].GetSsoRegion().c_str());
    ASSERT_STREQ("123456789012", profiles["sso-test"].GetSsoAccountId().c_str());
    ASSERT_STREQ("TestRole", profiles["sso-test"].GetSsoRoleName().c_str());
    ASSERT_STREQ("us-west-2", profiles["sso-test"].GetRegion().c_str());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetAWSAccessKeyId().empty());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(profiles["sso-test"].GetCredentials().GetAWSSecretKey().empty());

    Aws::FileSystem::RemoveFileIfExists(configFile.GetFileName().c_str());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileEmpty)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileNotExists)
{
    auto configFileName = "";
    Aws::OFStream configFile(configFileName);
    ASSERT_FALSE(configFile.good());
    configFile << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFileName);
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestCredentialsFileCorrupted)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(configFile.good());
    configFile << std::endl;
    configFile << "[" << std::endl;
    configFile << "blah blah blah" << std::endl;
    configFile << "]" << std::endl;
    configFile << "blah=blah" << std::endl;
    configFile << "fjk;dsaifoewagtndsalkjds" << std::endl;

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_FALSE(loader.Load());
    ASSERT_EQ(0u, loader.GetProfiles().size());
}

bool WriteConfigFileWithSSO(Aws::OStream& stream, const Aws::String& profileName, const Aws::String& ssoSessionName) {
    const Aws::String configFileContent =
            R"([ default]
  aws_access_key_id = ACCESS_KEY_0
aws_secret_access_key = SECRET_KEY_0


[profile custom-profile    ]
aws_access_key_id = ACCESS_KEY_1
aws_secret_access_key = SECRET_KEY_1
[profile )" + profileName + R"(]
sso_session = )" + ssoSessionName + R"(

[sso-session )" + ssoSessionName + R"(]
sso_region = us-east-1
sso_start_url = https://d-abc123.awsapps.com/start)";

    stream << configFileContent;
    stream.flush();

    return stream.good();
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestConfigWithSSOParsing)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);

    ASSERT_TRUE(configFile.good());
    static const Aws::String SSO_AWS_PROFILE = "AwsSdkBearerIntegrationTest-profile"; // arbitrary
    Aws::String profileFileName = configFile.GetFileName().find_last_of(R"(/\)") == std::string::npos ?
                                  configFile.GetFileName() : configFile.GetFileName().substr(configFile.GetFileName().find_last_of(R"(/\)"));
    static const Aws::String SSO_SESSION_NAME = profileFileName + "-sso-session"; // arbitrary
    ASSERT_TRUE(WriteConfigFileWithSSO(configFile, SSO_AWS_PROFILE, SSO_SESSION_NAME));

    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_TRUE(loader.Load());
    auto profiles = loader.GetProfiles();

    ASSERT_EQ(3u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("custom-profile"));
    ASSERT_NE(profiles.end(), profiles.find(SSO_AWS_PROFILE));

    const auto ssoProfile = profiles.at(SSO_AWS_PROFILE);
    ASSERT_EQ(SSO_AWS_PROFILE, ssoProfile.GetName());
    ASSERT_TRUE(ssoProfile.GetRegion().empty());
    ASSERT_TRUE(ssoProfile.GetCredentials().GetAWSSecretKey().empty() &&
                ssoProfile.GetCredentials().GetAWSAccessKeyId().empty() &&
                ssoProfile.GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(ssoProfile.GetSourceProfile().empty());
    ASSERT_TRUE(ssoProfile.GetCredentialProcess().empty());

    // Important: sso_session pointing to a sso-session section is a different entity than sso_* properties under [profile] section
    ASSERT_TRUE(ssoProfile.GetSsoStartUrl().empty() &&
                ssoProfile.GetSsoRegion().empty() &&
                ssoProfile.GetSsoAccountId().empty() &&
                ssoProfile.GetSsoRoleName().empty());

    ASSERT_TRUE(ssoProfile.GetDefaultsMode().empty());

    // here is [sso-session] section name that is linked by [profile] by a property "sso_session=<SSO_SESSION_NAME>" under [profile]
    ASSERT_EQ(SSO_SESSION_NAME, ssoProfile.GetSsoSession().GetName());
    ASSERT_EQ("us-east-1", ssoProfile.GetSsoSession().GetSsoRegion());
    ASSERT_EQ("https://d-abc123.awsapps.com/start", ssoProfile.GetSsoSession().GetSsoStartUrl());
}

TEST(AWSConfigFileProfileConfigLoaderTest, TestProfileDumping)
{
    TempFile configFile(std::ios_base::out | std::ios_base::trunc);

    ASSERT_TRUE(configFile.good());
    static const Aws::String SSO_AWS_PROFILE = "AwsSdkBearerIntegrationTest-profile"; // arbitrary
    Aws::String profileFileName = configFile.GetFileName().find_last_of(R"(/\)") == std::string::npos ?
                                  configFile.GetFileName() : configFile.GetFileName().substr(configFile.GetFileName().find_last_of(R"(/\)"));
    static const Aws::String SSO_SESSION_NAME = profileFileName + "-sso-session"; // arbitrary
    ASSERT_TRUE(WriteConfigFileWithSSO(configFile, SSO_AWS_PROFILE, SSO_SESSION_NAME));

    class TEST_HELPER_AWSConfigFileProfileConfigLoader : public AWSConfigFileProfileConfigLoader
    {
    public:
        TEST_HELPER_AWSConfigFileProfileConfigLoader(const Aws::String& fileName)
            : AWSConfigFileProfileConfigLoader(fileName, /*useProfilePrefix*/true)
        {}

        bool Public_PersistInternal(const Aws::Map<Aws::String, Aws::Config::Profile>& profiles)
        {
            return this->PersistInternal(profiles);
        }
    };

    // Parse static test profile config
    AWSConfigFileProfileConfigLoader loader(configFile.GetFileName());
    ASSERT_TRUE(loader.Load());
    auto initiallyReadProfiles = loader.GetProfiles();

    // Dump parsed test profile config
    TempFile dumpedConfigFile(std::ios_base::out | std::ios_base::trunc);
    ASSERT_TRUE(dumpedConfigFile.good());
    TEST_HELPER_AWSConfigFileProfileConfigLoader dumper(dumpedConfigFile.GetFileName());
    dumper.Public_PersistInternal(initiallyReadProfiles);

    // Parse dumped test profile config
    AWSConfigFileProfileConfigLoader loaderOfDumped(dumpedConfigFile.GetFileName());
    ASSERT_TRUE(loaderOfDumped.Load());
    auto profiles = loaderOfDumped.GetProfiles();

    // Repeat validation from a previous test
    ASSERT_EQ(3u, profiles.size());
    ASSERT_NE(profiles.end(), profiles.find("default"));
    ASSERT_NE(profiles.end(), profiles.find("custom-profile"));
    ASSERT_NE(profiles.end(), profiles.find(SSO_AWS_PROFILE));

    const auto ssoProfile = profiles.at(SSO_AWS_PROFILE);
    ASSERT_EQ(SSO_AWS_PROFILE, ssoProfile.GetName());
    ASSERT_TRUE(ssoProfile.GetRegion().empty());
    ASSERT_TRUE(ssoProfile.GetCredentials().GetAWSSecretKey().empty() &&
                ssoProfile.GetCredentials().GetAWSAccessKeyId().empty() &&
                ssoProfile.GetCredentials().GetSessionToken().empty());
    ASSERT_TRUE(ssoProfile.GetSourceProfile().empty());
    ASSERT_TRUE(ssoProfile.GetCredentialProcess().empty());

    // Important: sso_session pointing to a sso-session section is a different entity than sso_* properties under [profile] section
    ASSERT_TRUE(ssoProfile.GetSsoStartUrl().empty() &&
                ssoProfile.GetSsoRegion().empty() &&
                ssoProfile.GetSsoAccountId().empty() &&
                ssoProfile.GetSsoRoleName().empty());

    ASSERT_TRUE(ssoProfile.GetDefaultsMode().empty());

    // here is [sso-session] section name that is linked by [profile] by a property "sso_session=<SSO_SESSION_NAME>" under [profile]
    ASSERT_EQ(SSO_SESSION_NAME, ssoProfile.GetSsoSession().GetName());
    ASSERT_EQ("us-east-1", ssoProfile.GetSsoSession().GetSsoRegion());
    ASSERT_EQ("https://d-abc123.awsapps.com/start", ssoProfile.GetSsoSession().GetSsoStartUrl());
}
