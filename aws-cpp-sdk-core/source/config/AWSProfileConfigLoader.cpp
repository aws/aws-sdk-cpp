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

#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/memory/stl/AWSList.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/StringUtils.h>
#include <fstream>

using namespace Aws::Utils;

namespace Aws
{
    namespace Config
    {
        bool AWSProfileConfigLoader::Load()
        {
            if(LoadInternal())
            {
                m_lastLoadTime = DateTime::Now();
                return true;
            }

            return false;
        }

        bool AWSProfileConfigLoader::PersistProfiles(const Aws::Map<Aws::String, Profile>& profiles)
        {
            if(PersistInternal(profiles))
            {
                m_profiles = profiles;
                m_lastLoadTime = DateTime::Now();
                return true;
            }

            return false;
        }

        class ConfigFileProfileFSM
        {
        public:
            const Aws::Map<String, Profile> GetProfiles() const { return m_foundProfiles; }

            void ParseStream(Aws::IStream& stream)
            {
                static const size_t ASSUME_EMPTY_LEN = 3;

                Aws::String line;
                while(std::getline(stream, line) && m_parserState != FAILURE)
                {
                    if (line.empty() || line.length() < ASSUME_EMPTY_LEN)
                    {
                        continue;
                    }

                    auto openPos = line.find('[');
                    auto closePos = line.find(']');

                    switch(m_parserState)
                    {
                    case START:
                        if(openPos != std::string::npos && closePos != std::string::npos)
                        {
                            m_currentWorkingProfile = StringUtils::Trim(line.substr(openPos + 1, closePos - openPos).c_str());
                            m_parserState = PROFILE_FOUND;
                            break;
                        }
                    case PROFILE_KEY_VALUE_FOUND:
                        if(openPos != std::string::npos && closePos != std::string::npos)
                        {
                            m_parserState = PROFILE_FOUND;
                            FlushProfileAndReset(line, openPos, closePos);
                            break;
                        }
                    case PROFILE_FOUND:
                    {
                        auto keyValuePair = StringUtils::Split(line, '=');
                        if (keyValuePair.size() == 2)
                        {
                            m_profileKeyValuePairs[StringUtils::Trim(keyValuePair[0].c_str())] =
                                    StringUtils::Trim(keyValuePair[1].c_str());
                            m_parserState = PROFILE_KEY_VALUE_FOUND;
                        }

                        break;
                    }
                    default:
                        m_parserState = FAILURE;
                        break;
                    }
                }

                FlushProfileAndReset(line, 0, 0);
            }

        private:
            void FlushProfileAndReset(Aws::String& line, size_t openPos, size_t closePos)
            {
                if(!m_currentWorkingProfile.empty() && !m_profileKeyValuePairs.empty())
                {
                    Profile profile;
                    profile.SetName(m_currentWorkingProfile);

                    auto regionIter = m_profileKeyValuePairs.find("region");
                    if (regionIter != m_profileKeyValuePairs.end())
                    {
                        profile.SetRegion(regionIter->second);
                    }

                    auto accessKeyIdIter = m_profileKeyValuePairs.find("aws_access_key_id");
                    Aws::String accessKey, secretKey, sessionToken;
                    if (accessKeyIdIter != m_profileKeyValuePairs.end())
                    {
                        accessKey = accessKeyIdIter->second;

                        auto secretAccessKeyIter = m_profileKeyValuePairs.find("aws_secret_access_key");
                        auto sessionTokenIter = m_profileKeyValuePairs.find("aws_session_token");
                        if (secretAccessKeyIter != m_profileKeyValuePairs.end())
                        {
                            secretKey = secretAccessKeyIter->second;
                        }

                        if (sessionTokenIter != m_profileKeyValuePairs.end())
                        {
                            sessionToken = sessionTokenIter->second;
                        }

                        profile.SetCredentials(Aws::Auth::AWSCredentials(accessKey, secretKey, sessionToken));
                    }

                    auto assumeRoleArnIter = m_profileKeyValuePairs.find("role_arn");
                    if (assumeRoleArnIter != m_profileKeyValuePairs.end())
                    {
                        profile.SetRoleArn(assumeRoleArnIter->second);
                    }

                    auto sourceProfileIter = m_profileKeyValuePairs.find("source_profile");
                    if (sourceProfileIter != m_profileKeyValuePairs.end())
                    {
                        profile.SetSourceProfile(sourceProfileIter->second);
                    }

                    m_foundProfiles[profile.GetName()] = std::move(profile);
                    m_parserState = PROFILE_FOUND;
                    m_currentWorkingProfile.clear();
                    m_profileKeyValuePairs.clear();
                }

                if(!line.empty() && openPos > 0 && closePos > 0)
                {
                    m_currentWorkingProfile = StringUtils::Trim(line.substr(openPos + 1, closePos - openPos).c_str());
                }
            }

            enum State
            {
                START = 0,
                PROFILE_FOUND,
                PROFILE_KEY_VALUE_FOUND,
                FAILURE
            };

            Aws::String m_currentWorkingProfile;
            Aws::Map<String, String> m_profileKeyValuePairs;
            State m_parserState;
            Aws::Map<String, Profile> m_foundProfiles;
        };

        AWSConfigFileProfileConfigLoader::AWSConfigFileProfileConfigLoader(const Aws::String& fileName) :
                m_fileName(fileName)
        {
        }

        bool AWSConfigFileProfileConfigLoader::LoadInternal()
        {
            Aws::IFStream inputFile(m_fileName.c_str());
            if(inputFile)
            {
                ConfigFileProfileFSM parser;
                parser.ParseStream(inputFile);
                m_profiles = parser.GetProfiles();
                return true;
            }

            return false;
        }
    }
}