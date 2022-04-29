/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <fstream>
#include <regex>

namespace Aws
{
    namespace Config
    {
        using namespace Aws::Utils;
        using namespace Aws::Auth;

        static const char REGION_KEY[]                       = "region";
        static const char ACCESS_KEY_ID_KEY[]                = "aws_access_key_id";
        static const char SECRET_KEY_KEY[]                   = "aws_secret_access_key";
        static const char SESSION_TOKEN_KEY[]                = "aws_session_token";
        static const char SSO_START_URL_KEY[]                = "sso_start_url";
        static const char SSO_REGION_KEY[]                   = "sso_region";
        static const char SSO_ACCOUNT_ID_KEY[]               = "sso_account_id";
        static const char SSO_ROLE_NAME_KEY[]                = "sso_role_name";
        static const char ROLE_ARN_KEY[]                     = "role_arn";
        static const char EXTERNAL_ID_KEY[]                  = "external_id";
        static const char CREDENTIAL_PROCESS_COMMAND[]       = "credential_process";
        static const char SOURCE_PROFILE_KEY[]               = "source_profile";
        static const char PROFILE_SECTION[]                  = "profile";
        static const char DEFAULT[]                          = "default";
        static const char DEFAULTS_MODE_KEY[]                = "defaults_mode";
        static const char EQ                                 = '=';
        static const char LEFT_BRACKET                       = '[';
        static const char RIGHT_BRACKET                      = ']';
        static const char COMMENT_START[]                    = "#;";
        static const char BLANK_SPACE[]                      = " \t";
        static const char PARSER_TAG[]                       = "Aws::Config::ConfigFileProfileFSM";

        using ProfileSetterFunction = std::function<void(Profile&, const Aws::String&)>;
        static const Aws::Map<Aws::String, ProfileSetterFunction> PROFILE_KEY_SETTERS =
                {{REGION_KEY, &Profile::SetRegion},
                 //ACCESS_KEY_ID_KEY, - AwsCredentials require special handling
                 //SECRET_KEY_KEY,
                 //SESSION_TOKEN_KEY,
                 {SSO_START_URL_KEY, &Profile::SetSsoStartUrl},
                 {SSO_REGION_KEY, &Profile::SetSsoRegion},
                 {SSO_ACCOUNT_ID_KEY, &Profile::SetSsoAccountId},
                 {SSO_ROLE_NAME_KEY, &Profile::SetSsoRoleName},
                 {ROLE_ARN_KEY, &Profile::SetRoleArn},
                 {EXTERNAL_ID_KEY, &Profile::SetExternalId},
                 {CREDENTIAL_PROCESS_COMMAND, &Profile::SetCredentialProcess},
                 {SOURCE_PROFILE_KEY, &Profile::SetSourceProfile},
                 {DEFAULTS_MODE_KEY, &Profile::SetDefaultsMode}};

        static const Aws::Set<Aws::String> PROFILE_KEY_SPECIAL_HANDLING =
                {ACCESS_KEY_ID_KEY, SECRET_KEY_KEY, SESSION_TOKEN_KEY};

        class ConfigFileProfileFSM
        {
        public:
            ConfigFileProfileFSM() {}

            const Aws::Map<String, Profile>& GetProfiles() const { return m_foundProfiles; }

            void ParseStream(Aws::IStream& stream)
            {
                static const size_t ASSUME_EMPTY_LEN = 3;
                State currentState = START;
                Aws::String currentSectionName;
                Aws::Map<Aws::String, Aws::String> currentKeyValues;

                Aws::String rawLine;
                while(std::getline(stream, rawLine) && currentState != FAILURE)
                {
                    Aws::String line = rawLine.substr(0, rawLine.find_first_of(COMMENT_START)); // ignore comments
                    if (line.empty() || line.length() < ASSUME_EMPTY_LEN || line.find_first_not_of(BLANK_SPACE) == Aws::String::npos)
                    {
                        continue;
                    }

                    auto openPos = line.find(LEFT_BRACKET);
                    auto closePos = line.find(RIGHT_BRACKET);

                    if(openPos != Aws::String::npos && closePos != Aws::String::npos)
                    {
                        FlushSection(currentState, currentSectionName, currentKeyValues);
                        currentKeyValues.clear();
                        ParseSectionDeclaration(line, currentSectionName, currentState);
                        continue;
                    }

                    if(PROFILE_FOUND == currentState)
                    {
                        auto equalsPos = line.find(EQ);
                        if (equalsPos != Aws::String::npos)
                        {
                            auto key = StringUtils::Trim(line.substr(0, equalsPos).c_str());
                            auto value = StringUtils::Trim(line.substr(equalsPos + 1).c_str());
                            currentKeyValues[key] = value;
                            continue;
                        }
                    }

                    if(UNKNOWN_SECTION_FOUND == currentState)
                    {
                        // skip any unknown sections
                        continue;
                    }

                    AWS_LOGSTREAM_ERROR(PARSER_TAG, "Unexpected line in the aws shared profile: " << rawLine);
                    currentState = FAILURE;
                    break;
                }

                FlushSection(currentState, currentSectionName, currentKeyValues);

                if(FAILURE == currentState)
                {
                    AWS_LOGSTREAM_ERROR(PARSER_TAG, "AWS shared profile config parsing failed");
                }
            }

        private:
            enum State
            {
                START = 0,
                PROFILE_FOUND,
                UNKNOWN_SECTION_FOUND,
                FAILURE
            };

            static const std::regex PROFILE_REGEX;

            void ParseSectionDeclaration(const Aws::String& line,
                                         Aws::String& ioSectionName,
                                         State& ioState)
            {
                std::smatch matches;
                if(std::regex_search(line, matches, PROFILE_REGEX)) {
                    if(!matches.empty())
                    {
                        ioState = PROFILE_FOUND;
                        static const size_t GROUP_TO_TAKE = 1;
                        ioSectionName = matches.str(GROUP_TO_TAKE);
                        return;
                    }
                }
                //Any other pattern in [] such as "[Somebody Else ]" is invalid and will be skipped
                AWS_LOGSTREAM_INFO(PARSER_TAG, "Unknown section found in the aws config file: " << line);
                ioSectionName.erase();
                ioState = UNKNOWN_SECTION_FOUND;
            }

            void FlushSection(const State currentState, const Aws::String& currentSectionName, Aws::Map<Aws::String, Aws::String>& currentKeyValues)
            {
                if(START == currentState || currentSectionName.empty())
                {
                    return; //nothing to flush
                }

                if(PROFILE_FOUND == currentState)
                {
                    Profile& profile = m_foundProfiles[currentSectionName];

                    for(const auto& keyVal : currentKeyValues)
                    {
                        auto setterFuncIt = PROFILE_KEY_SETTERS.find(keyVal.first);
                        if(setterFuncIt != PROFILE_KEY_SETTERS.end())
                        {
                            AWS_LOGSTREAM_DEBUG(PARSER_TAG, "Found " << setterFuncIt->first << " " << keyVal.second);
                            setterFuncIt->second(profile, keyVal.second);
                        }
                        else if (PROFILE_KEY_SPECIAL_HANDLING.find(keyVal.first) == PROFILE_KEY_SPECIAL_HANDLING.end())
                        {
                            AWS_LOGSTREAM_INFO(PARSER_TAG, "Unknown property: " << keyVal.first << " in the profile: " << currentSectionName);
                        }
                    }

                    auto accessKeyIdIter = currentKeyValues.find(ACCESS_KEY_ID_KEY);
                    Aws::String accessKey, secretKey, sessionToken;
                    if (accessKeyIdIter != currentKeyValues.end())
                    {
                        accessKey = accessKeyIdIter->second;
                        AWS_LOGSTREAM_DEBUG(PARSER_TAG, "found access key " << accessKey);

                        auto secretAccessKeyIter = currentKeyValues.find(SECRET_KEY_KEY);
                        auto sessionTokenIter = currentKeyValues.find(SESSION_TOKEN_KEY);
                        if (secretAccessKeyIter != currentKeyValues.end())
                        {
                            secretKey = secretAccessKeyIter->second;
                        }
                        else
                        {
                            AWS_LOGSTREAM_ERROR(PARSER_TAG, "No secret access key found even though an access key was specified. This will cause all signed AWS calls to fail.");
                        }

                        if (sessionTokenIter != currentKeyValues.end())
                        {
                            sessionToken = sessionTokenIter->second;
                        }

                        profile.SetCredentials(Aws::Auth::AWSCredentials(accessKey, secretKey, sessionToken));
                    }

                    if (!profile.GetSsoStartUrl().empty() || !profile.GetSsoRegion().empty()
                        || !profile.GetSsoAccountId().empty() || !profile.GetSsoRoleName().empty())
                    {
                        if(profile.GetSsoStartUrl().empty() || profile.GetSsoRegion().empty()
                           || profile.GetSsoAccountId().empty() || profile.GetSsoRoleName().empty())
                        {
                            profile.SetSsoStartUrl("");
                            profile.SetSsoRegion("");
                            profile.SetSsoAccountId("");
                            profile.SetSsoRoleName("");
                            AWS_LOGSTREAM_ERROR(PARSER_TAG, "invalid SSO configuration for aws profile " << currentSectionName);
                        }
                    }

                    profile.SetName(currentSectionName);
                    profile.SetAllKeyValPairs(std::move(currentKeyValues));
                }
                else
                {
                    AWS_LOGSTREAM_FATAL(PARSER_TAG, "Unknown parser error: unexpected state " << currentState);
                }
            }

            Aws::Map<String, Profile> m_foundProfiles;
        };

        static const char* const CONFIG_FILE_LOADER = "Aws::Config::AWSConfigFileProfileConfigLoader";

        AWSConfigFileProfileConfigLoader::AWSConfigFileProfileConfigLoader(const Aws::String& fileName, bool useProfilePrefix) :
                m_fileName(fileName), m_useProfilePrefix(useProfilePrefix)
        {
            AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Initializing config loader against fileName "
                    << fileName << " and using profilePrefix = " << useProfilePrefix);
        }

        bool AWSConfigFileProfileConfigLoader::LoadInternal()
        {
            m_profiles.clear();

            Aws::IFStream inputFile(m_fileName.c_str());
            if(inputFile)
            {
                ConfigFileProfileFSM parser;
                parser.ParseStream(inputFile);
                m_profiles = parser.GetProfiles();
                return m_profiles.size() > 0;
            }

            AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Unable to open config file " << m_fileName << " for reading.");

            return false;
        }

        bool AWSConfigFileProfileConfigLoader::PersistInternal(const Aws::Map<Aws::String, Profile>& profiles)
        {
            Aws::OFStream outputFile(m_fileName.c_str(), std::ios_base::out | std::ios_base::trunc);
            if(outputFile)
            {
                for(auto& profile : profiles)
                {
                    Aws::String prefix = m_useProfilePrefix ? PROFILE_SECTION : "";

                    AWS_LOGSTREAM_DEBUG(CONFIG_FILE_LOADER, "Writing profile " << profile.first << " to disk.");

                    outputFile << LEFT_BRACKET << prefix << profile.second.GetName() << RIGHT_BRACKET << std::endl;
                    const Aws::Auth::AWSCredentials& credentials = profile.second.GetCredentials();
                    outputFile << ACCESS_KEY_ID_KEY << EQ << credentials.GetAWSAccessKeyId() << std::endl;
                    outputFile << SECRET_KEY_KEY << EQ << credentials.GetAWSSecretKey() << std::endl;

                    if(!credentials.GetSessionToken().empty())
                    {
                        outputFile << SESSION_TOKEN_KEY << EQ << credentials.GetSessionToken() << std::endl;
                    }

                    if(!profile.second.GetRegion().empty())
                    {
                        outputFile << REGION_KEY << EQ << profile.second.GetRegion() << std::endl;
                    }

                    if(!profile.second.GetRoleArn().empty())
                    {
                        outputFile << ROLE_ARN_KEY << EQ << profile.second.GetRoleArn() << std::endl;
                    }

                    if(!profile.second.GetSourceProfile().empty())
                    {
                        outputFile << SOURCE_PROFILE_KEY << EQ << profile.second.GetSourceProfile() << std::endl;
                    }

                    outputFile << std::endl;
                }

                AWS_LOGSTREAM_INFO(CONFIG_FILE_LOADER, "Profiles written to config file " << m_fileName);

                return true;
            }

            AWS_LOGSTREAM_WARN(CONFIG_FILE_LOADER, "Unable to open config file " << m_fileName << " for writing.");

            return false;
        }

        static const Aws::String IDENTIFIER_REGEX_PATTERN = R"([A-Za-z0-9_\-/.%@:\+]+)";
        static const Aws::String PROFILE_REGEX_PATTERN = R"(\[\s*(?:profile\s+)?()" + IDENTIFIER_REGEX_PATTERN + R"()\s*\])";
        const std::regex ConfigFileProfileFSM::PROFILE_REGEX(PROFILE_REGEX_PATTERN);
    } // Config namespace
} // Aws namespace
