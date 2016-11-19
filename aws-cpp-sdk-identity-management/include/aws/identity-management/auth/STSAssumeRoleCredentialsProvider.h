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

#include <aws/identity-management/IdentityManagment_EXPORTS.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <aws/sts/STSClient.h>

#include <memory>
#include <mutex>

namespace Aws
{
    namespace Auth
    {
        static const int DEFAULT_CREDS_LOAD_FREQ_SECONDS = 900;

        class AWS_IDENTITY_MANAGEMENT_API STSAssumeRoleCredentialsProvider : public AWSCredentialsProvider
        {
        public:
            STSAssumeRoleCredentialsProvider(const Aws::String& roleArn, const Aws::String& sessionName = Aws::String(), 
                const Aws::String& externalId = Aws::String(), int loadFrequency = DEFAULT_CREDS_LOAD_FREQ_SECONDS, 
                const std::shared_ptr<Aws::STS::STSClient>& stsClient = nullptr);

            AWSCredentials GetAWSCredentials() override;

        private:
            void LoadCredentialsFromSTS();

            std::shared_ptr<Aws::STS::STSClient> m_stsClient;
            AWSCredentials m_cachedCredentials;
            Aws::String m_roleArn;
            Aws::String m_sessionName;
            Aws::String m_externalId;
            std::atomic<int64_t> m_expiry;
            std::mutex m_credsMutex;
            std::atomic<int> m_loadFrequency;
        };
    }
}