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


#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <memory>
#include <mutex>

namespace Aws
{
    namespace Internal
    {
        class EC2MetadataClient; //forward declaration;
    } // namespace Internal
    namespace Auth
    {
        static int REFRESH_THRESHOLD = 1000 * 60 * 15;

        class AWS_CORE_API AWSCredentials
        {
        public:
            AWSCredentials(const Aws::String& accessKeyId, const Aws::String& secretKey, const Aws::String& sessionToken = "") :
                    m_accessKeyId(accessKeyId), m_secretKey(secretKey), m_sessionToken(sessionToken)
            {
            }

            inline const Aws::String& GetAWSAccessKeyId() const
            {
                return m_accessKeyId;
            }

            inline const Aws::String& GetAWSSecretKey() const
            {
                return m_secretKey;
            }

            inline const Aws::String& GetSessionToken() const
            {
                return m_sessionToken;
            }

            inline void SetAWSAccessKeyId(const Aws::String& accessKeyId)
            {
                m_accessKeyId = accessKeyId;
            }

            inline void SetAWSSecretKey(const Aws::String& secretKey)
            {
                m_secretKey = secretKey;
            }

            inline void SetSessionToken(const Aws::String& sessionToken)
            {
                m_sessionToken = sessionToken;
            }

            inline void SetAWSAccessKeyId(const char* accessKeyId)
            {
                m_accessKeyId = accessKeyId;
            }

            inline void SetAWSSecretKey(const char* secretKey)
            {
                m_secretKey = secretKey;
            }

            inline void SetSessionToken(const char* sessionToken)
            {
                m_sessionToken = sessionToken;
            }

        private:
            Aws::String m_accessKeyId;
            Aws::String m_secretKey;
            Aws::String m_sessionToken;
        };

        /**
          * Abstract class for retrieving AWS credentials. Create a derived class from this to allow
          * various methods of storing and retrieving credentials. Examples would be odin, some encrypted store etc...
          */
        class AWS_CORE_API AWSCredentialsProvider
        {
        public:
            AWSCredentialsProvider() : m_lastLoadedMs(0)
            {
            }

            virtual ~AWSCredentialsProvider()
            { };

            virtual AWSCredentials GetAWSCredentials() = 0;

        protected:
            virtual bool IsTimeToRefresh(long reloadFrequency);

        private:
            long long m_lastLoadedMs;
        };

        class AWS_CORE_API AnonymousAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            inline AWSCredentials GetAWSCredentials() override
            { return AWSCredentials("", ""); }
        };

        /**
          * A simple string provider. It takes the AccessKeyId and the SecretKey as constructor args and
          * provides them through the interface. This is the default class for AWSClients that take string
          * arguments for credentials.
          */
        class AWS_CORE_API SimpleAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            inline SimpleAWSCredentialsProvider(const Aws::String& awsAccessKeyId, const Aws::String& awsSecretAccessKey, const Aws::String& sessionToken = "")
                    : m_accessKeyId(awsAccessKeyId), m_secretAccessKey(awsSecretAccessKey), m_sessionToken(sessionToken)
            { }

            inline SimpleAWSCredentialsProvider(const AWSCredentials& credentials)
                    : m_accessKeyId(credentials.GetAWSAccessKeyId()), m_secretAccessKey(credentials.GetAWSSecretKey()),
                      m_sessionToken(credentials.GetSessionToken())
            { }

            inline AWSCredentials GetAWSCredentials() override
            {
                return AWSCredentials(m_accessKeyId, m_secretAccessKey, m_sessionToken);
            }

        private:
            Aws::String m_accessKeyId;
            Aws::String m_secretAccessKey;
            Aws::String m_sessionToken;
        };

/**
* Reads AWS credentials from the Environment variables AWS_ACCESS_KEY_ID and AWS_SECRET_ACCESS_KEY if they exist. If they
* are not found, empty credentials are returned.
*/
        class AWS_CORE_API EnvironmentAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            EnvironmentAWSCredentialsProvider();

            AWSCredentials GetAWSCredentials() override;

        private:

            EnvironmentAWSCredentialsProvider& operator=(const EnvironmentAWSCredentialsProvider& rhs);

        };

/**
* Reads credentials profile from the default Profile Config File. Refreshes at set interval for credential rotation.
* Looks for environment variables AWS_CREDENTIAL_PROFILES_FILE and AWS_PROFILE. If they aren't found, then it defaults
* to ~/.aws/credentials and default. Optionally a user can specify the profile and it will override the environment variable
* and defaults. To alter the file this pulls from, then the user should alter the AWS_CREDENTIAL_PROFILES_FILE variable.
*/
        class AWS_CORE_API ProfileConfigFileAWSCredentialsProvider : public AWSCredentialsProvider
        {
        public:

            /**
            * Initializes with refreshRateMs as the frequency at which the file is reparsed in milliseconds. Defaults to 1 minute.
            */
            ProfileConfigFileAWSCredentialsProvider(long refreshRateMs = REFRESH_THRESHOLD);

            /**
            * Initializes with a profile override and
            * refreshRateMs as the frequency at which the file is reparsed in milliseconds. Defaults to 1 minute.
            */
            ProfileConfigFileAWSCredentialsProvider(const char* profile, long refreshRateMs = REFRESH_THRESHOLD);

            /**
            * Retrieves the credentials if found, otherwise returns empty credential set.
            */
            AWSCredentials GetAWSCredentials() override;

            //TODO: move these back to private member functions as soon as IAM is implemented.
            static Aws::String GetProfileFilename();

            static Aws::String GetProfileFilenameNoPath();

            static Aws::String GetProfileDirectory();

            //TODO: move these back to private member functions as soon as IAM is implemented.
            /**
            * Parses the Profile Config File.
            */
            static Aws::Map<Aws::String, Aws::String> ParseProfileConfigFile(const Aws::String& filename);

            static Aws::String GetAccountIdForProfile(const Aws::String& profileName);

        private:
            /**
            * Checks to see if the refresh interval has expired and reparses the file if it has.
            */
            void RefreshIfExpired();

            Aws::String m_fileName;
            Aws::String m_profileToUse;
            std::shared_ptr<AWSCredentials> m_credentials;
            mutable std::mutex m_reloadMutex;
            long m_loadFrequencyMs;
        };

/**
* Credentials provider implementation that loads credentials from the Amazon
* EC2 Instance Metadata Service.
*/
        class AWS_CORE_API InstanceProfileCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            InstanceProfileCredentialsProvider(long refreshRateMs = REFRESH_THRESHOLD);

            InstanceProfileCredentialsProvider(std::shared_ptr<Internal::EC2MetadataClient>, long refreshRateMs = REFRESH_THRESHOLD);

            /**
            * Retrieves the credentials if found, otherwise returns empty credential set.
            */
            AWSCredentials GetAWSCredentials() override;

        private:
            void RefreshIfExpired();

            std::shared_ptr<Internal::EC2MetadataClient> m_metadataClient;
            std::shared_ptr<AWSCredentials> m_credentials;
            long m_loadFrequencyMs;
            mutable std::mutex m_reloadMutex;
        };
    } // namespace Auth
} // namespace Aws

