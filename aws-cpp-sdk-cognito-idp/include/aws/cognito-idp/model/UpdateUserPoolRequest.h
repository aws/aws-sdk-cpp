/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateUserPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPool"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool you want to update.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

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
    inline UpdateUserPoolRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

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
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline UpdateUserPoolRequest& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>A container with the policies you wish to update in a user pool.</p>
     */
    inline UpdateUserPoolRequest& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(std::move(value)); return *this;}


    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline UpdateUserPoolRequest& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The AWS Lambda configuration information from the request to update the user
     * pool.</p>
     */
    inline UpdateUserPoolRequest& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}


    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::move(value); }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are automatically verified when the Amazon Cognito
     * service makes a request to update user pools.</p>
     */
    inline UpdateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A container with information about the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::move(value); }

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
    inline UpdateUserPoolRequest& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(std::move(value)); return *this;}

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
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::move(value); }

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
    inline UpdateUserPoolRequest& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(std::move(value)); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}


    /**
     * <p>The subject of the email verification message.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::move(value); }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(std::move(value)); return *this;}

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UpdateUserPoolRequest& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}


    /**
     * <p>The template for verification messages.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const{ return m_verificationMessageTemplate; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline void SetVerificationMessageTemplate(const VerificationMessageTemplateType& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = value; }

    /**
     * <p>The template for verification messages.</p>
     */
    inline void SetVerificationMessageTemplate(VerificationMessageTemplateType&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::move(value); }

    /**
     * <p>The template for verification messages.</p>
     */
    inline UpdateUserPoolRequest& WithVerificationMessageTemplate(const VerificationMessageTemplateType& value) { SetVerificationMessageTemplate(value); return *this;}

    /**
     * <p>The template for verification messages.</p>
     */
    inline UpdateUserPoolRequest& WithVerificationMessageTemplate(VerificationMessageTemplateType&& value) { SetVerificationMessageTemplate(std::move(value)); return *this;}


    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }

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
    inline UpdateUserPoolRequest& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UpdateUserPoolRequest& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}


    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UpdateUserPoolRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UpdateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>Device configuration.</p>
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }

    /**
     * <p>Device configuration.</p>
     */
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }

    /**
     * <p>Device configuration.</p>
     */
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>Device configuration.</p>
     */
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }

    /**
     * <p>Device configuration.</p>
     */
    inline UpdateUserPoolRequest& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>Device configuration.</p>
     */
    inline UpdateUserPoolRequest& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Email configuration.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }

    /**
     * <p>Email configuration.</p>
     */
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }

    /**
     * <p>Email configuration.</p>
     */
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }

    /**
     * <p>Email configuration.</p>
     */
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::move(value); }

    /**
     * <p>Email configuration.</p>
     */
    inline UpdateUserPoolRequest& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>Email configuration.</p>
     */
    inline UpdateUserPoolRequest& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(std::move(value)); return *this;}


    /**
     * <p>SMS configuration.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }

    /**
     * <p>SMS configuration.</p>
     */
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }

    /**
     * <p>SMS configuration.</p>
     */
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>SMS configuration.</p>
     */
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }

    /**
     * <p>SMS configuration.</p>
     */
    inline UpdateUserPoolRequest& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>SMS configuration.</p>
     */
    inline UpdateUserPoolRequest& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const{ return m_userPoolTags; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = value; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline void SetUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::move(value); }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserPoolTags(value); return *this;}

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserPoolTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(const Aws::String& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(const Aws::String& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(Aws::String&& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(const char* key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline UpdateUserPoolRequest& AddUserPoolTags(const char* key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::move(value); }

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline UpdateUserPoolRequest& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline UpdateUserPoolRequest& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(std::move(value)); return *this;}


    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const{ return m_userPoolAddOns; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline void SetUserPoolAddOns(const UserPoolAddOnsType& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = value; }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline void SetUserPoolAddOns(UserPoolAddOnsType&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::move(value); }

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolAddOns(const UserPoolAddOnsType& value) { SetUserPoolAddOns(value); return *this;}

    /**
     * <p>Used to enable advanced security risk detection. Set the key
     * <code>AdvancedSecurityMode</code> to the value "AUDIT".</p>
     */
    inline UpdateUserPoolRequest& WithUserPoolAddOns(UserPoolAddOnsType&& value) { SetUserPoolAddOns(std::move(value)); return *this;}

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

    VerificationMessageTemplateType m_verificationMessageTemplate;
    bool m_verificationMessageTemplateHasBeenSet;

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet;

    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet;

    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_userPoolTags;
    bool m_userPoolTagsHasBeenSet;

    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet;

    UserPoolAddOnsType m_userPoolAddOns;
    bool m_userPoolAddOnsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
