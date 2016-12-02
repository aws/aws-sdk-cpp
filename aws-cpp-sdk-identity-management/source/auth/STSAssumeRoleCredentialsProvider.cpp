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

#include <aws/identity-management/auth/STSAssumeRoleCredentialsProvider.h>
#include <aws/sts/model/AssumeRoleRequest.h>
#include <aws/sts/STSClient.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Utils;
using namespace Aws::STS;

namespace Aws
{
    namespace Auth
    {
        static const char* CLASS_TAG = "STSAssumeRoleCredentialsProvider";
        //60 seconds;
        static const int ACCOUNT_FOR_LATENCY = 60;

        STSAssumeRoleCredentialsProvider::STSAssumeRoleCredentialsProvider(const Aws::String& roleArn, const Aws::String& sessionName,
            const Aws::String& externalId, int loadFrequency, const std::shared_ptr<Aws::STS::STSClient>& stsClient) :
            m_stsClient(stsClient == nullptr ? Aws::MakeShared<Aws::STS::STSClient>(CLASS_TAG) : stsClient),
            m_roleArn(roleArn), m_sessionName(sessionName), m_externalId(externalId),
            m_expiry(0), m_loadFrequency(loadFrequency)            
        {
            if (sessionName.empty())
            {   
                Aws::StringStream ss;
                ss << "aws-sdk-cpp-" << Aws::Utils::DateTime::CurrentTimeMillis();
                m_sessionName = ss.str();
            }
            AWS_LOGSTREAM_INFO(CLASS_TAG, "Role ARN set to: " << m_roleArn << ". Session Name set to: " << m_sessionName);
        }

        AWSCredentials STSAssumeRoleCredentialsProvider::GetAWSCredentials()
        {
            LoadCredentialsFromSTS();
            std::lock_guard<std::mutex> locker(m_credsMutex);
            return m_cachedCredentials;
        }

        void STSAssumeRoleCredentialsProvider::LoadCredentialsFromSTS()
        {
            //standard check lock check
            auto diffSeconds = static_cast<int>(DateTime::Now().SecondsWithMSPrecision() - DateTime(m_expiry.load()).SecondsWithMSPrecision());
            if (diffSeconds > 0 - ACCOUNT_FOR_LATENCY)
            {
                AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Credentials have expired with diff of " << diffSeconds << " since last credentials pull.");
                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Grabbing lock.");
                std::lock_guard<std::mutex> locker(m_credsMutex);
                AWS_LOGSTREAM_TRACE(CLASS_TAG, "Lock acquired. Checking expiration again.");
                diffSeconds = static_cast<int>(DateTime::Now().SecondsWithMSPrecision() - DateTime(m_expiry.load()).SecondsWithMSPrecision());
                if (diffSeconds > 0 - ACCOUNT_FOR_LATENCY)
                {
                    AWS_LOGSTREAM_INFO(CLASS_TAG, "Credentials have expired with diff of " << diffSeconds << " since last credentials pull.");
                    Model::AssumeRoleRequest assumeRoleRequest;
                    assumeRoleRequest.WithRoleArn(m_roleArn)
                        .WithRoleSessionName(m_sessionName)
                        .WithDurationSeconds(m_loadFrequency);

                    if (!m_externalId.empty())
                    {
                        assumeRoleRequest.SetExternalId(m_externalId);
                    }

                    auto assumeRoleOutcome = m_stsClient->AssumeRole(assumeRoleRequest);
                    if (assumeRoleOutcome.IsSuccess())
                    {
                        const auto& stsCredentials = assumeRoleOutcome.GetResult().GetCredentials();
                        m_cachedCredentials = AWSCredentials(stsCredentials.GetAccessKeyId(), stsCredentials.GetSecretAccessKey(), stsCredentials.GetSessionToken());
                        m_expiry = stsCredentials.GetExpiration().Millis();
                        AWS_LOGSTREAM_DEBUG(CLASS_TAG, "Credentials refreshed with new expiry " << 
                            DateTime(m_expiry.load()).ToGmtString(DateFormat::ISO_8601));
                    }
                    else
                    {
                        AWS_LOGSTREAM_ERROR(CLASS_TAG, "Credentials refresh failed with error " << assumeRoleOutcome.GetError().GetExceptionName()
                                << " message: " << assumeRoleOutcome.GetError().GetMessage());
                    }
                }
            }            
        }
    }
}