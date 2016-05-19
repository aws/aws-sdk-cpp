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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user pool.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateUserPoolRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline UpdateUserPoolRequest& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline UpdateUserPoolRequest& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(value); return *this;}

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline UpdateUserPoolRequest& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline UpdateUserPoolRequest& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The subject of the email verfication message</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>Can be one of the following values:</p> <ul> <li><code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</li>
     * <li><code>ON</code> - MFA tokens are required for all user registrations. You
     * can only specify required when you are initially creating a user pool.</li>
     * <li><code>OPTIONAL</code> - Users have the option when registering to create an
     * MFA token.</li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li><code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</li>
     * <li><code>ON</code> - MFA tokens are required for all user registrations. You
     * can only specify required when you are initially creating a user pool.</li>
     * <li><code>OPTIONAL</code> - Users have the option when registering to create an
     * MFA token.</li> </ul>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li><code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</li>
     * <li><code>ON</code> - MFA tokens are required for all user registrations. You
     * can only specify required when you are initially creating a user pool.</li>
     * <li><code>OPTIONAL</code> - Users have the option when registering to create an
     * MFA token.</li> </ul>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li><code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</li>
     * <li><code>ON</code> - MFA tokens are required for all user registrations. You
     * can only specify required when you are initially creating a user pool.</li>
     * <li><code>OPTIONAL</code> - Users have the option when registering to create an
     * MFA token.</li> </ul>
     */
    inline UpdateUserPoolRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Can be one of the following values:</p> <ul> <li><code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</li>
     * <li><code>ON</code> - MFA tokens are required for all user registrations. You
     * can only specify required when you are initially creating a user pool.</li>
     * <li><code>OPTIONAL</code> - Users have the option when registering to create an
     * MFA token.</li> </ul>
     */
    inline UpdateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(value); return *this;}

  private:
    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet;
    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;
    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet;
    Aws::String m_smsVerificationMessage;
    bool m_smsVerificationMessageHasBeenSet;
    Aws::String m_emailVerificationMessage;
    bool m_emailVerificationMessageHasBeenSet;
    Aws::String m_emailVerificationSubject;
    bool m_emailVerificationSubjectHasBeenSet;
    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet;
    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
