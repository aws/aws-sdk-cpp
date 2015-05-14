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

#include <aws/cognito-identity/CognitoIdentityClient.h>
#include <aws/core/auth/AWSCredentialsProvider.h>
#include <atomic>

namespace Aws
{
    namespace Auth
    {
        class PersistentCognitoIdentityProvider;

            /**
             * Credentials provider that can be used to authenticate a user with any other AWS service.
             * This credentials provider can be passed to any other Aws Client.
             */
            class CognitoCachingCredentialsProvider : public Aws::Auth::AWSCredentialsProvider
            {
            public:
                CognitoCachingCredentialsProvider();
                AWSCredentials GetAWSCredentials() override;

            protected:
                virtual CognitoIdentity::Model::GetCredentialsForIdentityOutcome GetCredentialsFromCognito() const = 0;
                bool IsTimeExpired(long long expiry);

                CognitoIdentity::CognitoIdentityClient m_cognitoIdentityClient;

            private:
                AWSCredentials m_cachedCredentials;
                std::atomic<long long> m_expiry;
            };
    }
}