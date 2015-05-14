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

#include <aws/identity-management/auth/CognitoCachingCredentialsProvider.h>
#include <aws/cognito-identity/model/GetCredentialsForIdentityRequest.h>
#include <aws/cognito-identity/model/GetIdRequest.h>
#include <aws/core/utils/Outcome.h>

using namespace Aws::Auth;
using namespace Aws::CognitoIdentity;
using namespace Aws::CognitoIdentity::Model;

CognitoCachingCredentialsProvider::CognitoCachingCredentialsProvider() : m_cognitoIdentityClient(AWSCredentials("", "")),
        m_expiry(0),
        m_cachedCredentials("", "")
{
}

AWSCredentials CognitoCachingCredentialsProvider::GetAWSCredentials()
{
    long long existingExpiryValue = m_expiry.load();
    if(IsTimeExpired(existingExpiryValue))
    {
        GetCredentialsForIdentityOutcome getCredentialsForIdentityOutcome = GetCredentialsFromCognito();
        if(getCredentialsForIdentityOutcome.IsSuccess())
        {
            const Credentials& cognitoCreds = getCredentialsForIdentityOutcome.GetResult().GetCredentials();

            if(m_expiry.compare_exchange_strong(existingExpiryValue, atol(cognitoCreds.GetExpiration().c_str())))
            {
               m_cachedCredentials = AWSCredentials(cognitoCreds.GetAccessKeyId(), cognitoCreds.GetSecretKey(), cognitoCreds.GetSessionToken());
            }
        }
    }

    return m_cachedCredentials;
}

bool CognitoCachingCredentialsProvider::IsTimeExpired(long long expiry)
{

}

/*protected:
    bool IsTimeExpired();

private:
    Aws::String m_identityPoolId;
    Aws::String m_accountId;
    long m_lastRefreshed;
    CognitoIdentityClient m_cognitoIdentityClient;
};*/