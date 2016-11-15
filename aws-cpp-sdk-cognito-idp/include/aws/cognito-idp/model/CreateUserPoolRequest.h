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
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to create a user pool.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolRequest : public CognitoIdentityProviderRequest
  {
  public:
    CreateUserPoolRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(value); return *this;}

    /**
     * <p>A string used to name the user pool.</p>
     */
    inline CreateUserPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(value); return *this;}

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     */
    inline CreateUserPoolRequest& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline CreateUserPoolRequest& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS verification message.</p>
     */
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the email verification message.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>A string representing the email verification subject.</p>
     */
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline CreateUserPoolRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline CreateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>The device configuration.</p>
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }

    /**
     * <p>The device configuration.</p>
     */
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>The device configuration.</p>
     */
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>The device configuration.</p>
     */
    inline CreateUserPoolRequest& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>The device configuration.</p>
     */
    inline CreateUserPoolRequest& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>The email configuration.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }

    /**
     * <p>The email configuration.</p>
     */
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }

    /**
     * <p>The email configuration.</p>
     */
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }

    /**
     * <p>The email configuration.</p>
     */
    inline CreateUserPoolRequest& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>The email configuration.</p>
     */
    inline CreateUserPoolRequest& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }

    /**
     * <p>The SMS configuration.</p>
     */
    inline CreateUserPoolRequest& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration.</p>
     */
    inline CreateUserPoolRequest& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchema() const{ return m_schema; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline void SetSchema(const Aws::Vector<SchemaAttributeType>& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline void SetSchema(Aws::Vector<SchemaAttributeType>&& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& WithSchema(const Aws::Vector<SchemaAttributeType>& value) { SetSchema(value); return *this;}

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& WithSchema(Aws::Vector<SchemaAttributeType>&& value) { SetSchema(value); return *this;}

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& AddSchema(const SchemaAttributeType& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline CreateUserPoolRequest& AddSchema(SchemaAttributeType&& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }

  private:
    Aws::String m_poolName;
    bool m_poolNameHasBeenSet;
    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet;
    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;
    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet;
    Aws::Vector<AliasAttributeType> m_aliasAttributes;
    bool m_aliasAttributesHasBeenSet;
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
    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet;
    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet;
    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet;
    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet;
    Aws::Vector<SchemaAttributeType> m_schema;
    bool m_schemaHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
