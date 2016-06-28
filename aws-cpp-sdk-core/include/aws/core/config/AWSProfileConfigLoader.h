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

#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/core/internal/EC2MetadataClient.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
    namespace Config
    {
        /**
         * POD for a Profile.
         */
        class Profile
        {
        public:
            inline const Aws::String& GetName() const { return m_name; }
            inline void SetName(const Aws::String& value) { m_name = value; }
            inline const Aws::Auth::AWSCredentials& GetCredentials() const { return m_credentials; }
            inline void SetCredentials(const Aws::Auth::AWSCredentials& value) { m_credentials = value; }
            inline const Aws::String& GetRegion() const { return m_region; }
            inline void SetRegion(const Aws::String& value) { m_region = value; }
            inline const Aws::String& GetRoleArn() const { return m_roleArn; }
            inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
            inline const Aws::String& GetSourceProfile() const { return m_sourceProfile; }
            inline void SetSourceProfile(const Aws::String& value ) { m_sourceProfile = value; }

        private:
            Aws::String m_name;
            Aws::String m_region;
            Aws::Auth::AWSCredentials m_credentials;
            Aws::String m_roleArn;
            Aws::String m_sourceProfile;
        };

        /**
         * Loads Configuration such as .aws/config, .aws/credentials or ec2 metadata service.
         */
        class AWSProfileConfigLoader
        {
        public:
            virtual ~AWSProfileConfigLoader() = default;

            /**
             * Load the configuration
             */
            bool Load();

            /**
             * Over writes the entire config source with the newly configured profile data.
             */
            bool PersistProfiles(const Aws::Map<Aws::String, Profile>& profiles);

            /**
             * Gets all profiles from the configuration file.
             */
            inline const Aws::Map<Aws::String, Profile>& GetProfiles() const { return m_profiles; };

            /**
             * the timestamp from the last time the profile information was loaded from file.
             */
            inline const Aws::Utils::DateTime& LastLoadTime() const { return m_lastLoadTime; }

        protected:
            /**
             * Subclasses override this method to implement fetching the profiles.
             */
            virtual bool LoadInternal() = 0;

            /**
             * Subclasses override this method to implement persisting the profiles. Default returns false.
             */
            virtual bool PersistInternal(const Aws::Map<Aws::String, Profile>&) { return false; }

            Aws::Map<Aws::String, Profile> m_profiles;
            Aws::Utils::DateTime m_lastLoadTime;
        };

        class AWSConfigFileProfileConfigLoader : public AWSProfileConfigLoader
        {
        public:
            AWSConfigFileProfileConfigLoader(const Aws::String& configFile);

            const Aws::String& GetFileName() const { return m_fileName; }

        protected:
            virtual bool LoadInternal() override;
            virtual bool PersistInternal(const Aws::Map<Aws::String, Profile>&) override;

        private:
            Aws::String m_fileName;
        };

        class Ec2InstanceProfileConfigLoader : public AWSProfileConfigLoader
        {
        public:
            Ec2InstanceProfileConfigLoader();

        protected:
            virtual bool LoadInternal() override;

        private:
            Aws::Internal::EC2MetadataClient m_metadataClient;
        };
    }
}