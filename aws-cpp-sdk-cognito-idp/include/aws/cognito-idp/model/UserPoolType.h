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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/cognito-idp/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>A container with information about the user pool type.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolType
  {
  public:
    UserPoolType();
    UserPoolType(const Aws::Utils::Json::JsonValue& jsonValue);
    UserPoolType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ID of the user pool.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the user pool.</p>
     */
    inline UserPoolType& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The name of the user pool.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the user pool.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the user pool.</p>
     */
    inline UserPoolType& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A container describing the policies associated with a user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }

    /**
     * <p>A container describing the policies associated with a user pool.</p>
     */
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A container describing the policies associated with a user pool.</p>
     */
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = value; }

    /**
     * <p>A container describing the policies associated with a user pool.</p>
     */
    inline UserPoolType& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}

    /**
     * <p>A container describing the policies associated with a user pool.</p>
     */
    inline UserPoolType& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(value); return *this;}

    /**
     * <p>A container describing the AWS Lambda triggers associated with a user
     * pool.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }

    /**
     * <p>A container describing the AWS Lambda triggers associated with a user
     * pool.</p>
     */
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>A container describing the AWS Lambda triggers associated with a user
     * pool.</p>
     */
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }

    /**
     * <p>A container describing the AWS Lambda triggers associated with a user
     * pool.</p>
     */
    inline UserPoolType& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>A container describing the AWS Lambda triggers associated with a user
     * pool.</p>
     */
    inline UserPoolType& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(value); return *this;}

    /**
     * <p>The status of a user pool.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a user pool.</p>
     */
    inline UserPoolType& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a user pool.</p>
     */
    inline UserPoolType& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

    /**
     * <p>The last modified date of a user pool.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last modified date of a user pool.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last modified date of a user pool.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last modified date of a user pool.</p>
     */
    inline UserPoolType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last modified date of a user pool.</p>
     */
    inline UserPoolType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The creation date of a user pool.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of a user pool.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of a user pool.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of a user pool.</p>
     */
    inline UserPoolType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of a user pool.</p>
     */
    inline UserPoolType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchemaAttributes() const{ return m_schemaAttributes; }

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline void SetSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = value; }

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline void SetSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = value; }

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline UserPoolType& WithSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetSchemaAttributes(value); return *this;}

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline UserPoolType& WithSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetSchemaAttributes(value); return *this;}

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline UserPoolType& AddSchemaAttributes(const SchemaAttributeType& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(value); return *this; }

    /**
     * <p>A container with the schema attributes of a user pool.</p>
     */
    inline UserPoolType& AddSchemaAttributes(SchemaAttributeType&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(value); return *this;}

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that are auto-verified in a user pool.</p>
     */
    inline UserPoolType& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(value); return *this;}

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>Specifies the attributes that are aliased in a user pool.</p>
     */
    inline UserPoolType& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS verification message.</p>
     */
    inline UserPoolType& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}

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
    inline UserPoolType& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UserPoolType& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The contents of the email verification message.</p>
     */
    inline UserPoolType& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(value); return *this;}

    /**
     * <p>The subject of the email verification message.</p>
     */
    inline UserPoolType& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}

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
    inline UserPoolType& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UserPoolType& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(value); return *this;}

    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline UserPoolType& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}

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
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UserPoolType& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens are not required and cannot be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you are initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline UserPoolType& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(value); return *this;}

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
    inline UserPoolType& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>The device configuration.</p>
     */
    inline UserPoolType& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline int GetEstimatedNumberOfUsers() const{ return m_estimatedNumberOfUsers; }

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline void SetEstimatedNumberOfUsers(int value) { m_estimatedNumberOfUsersHasBeenSet = true; m_estimatedNumberOfUsers = value; }

    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline UserPoolType& WithEstimatedNumberOfUsers(int value) { SetEstimatedNumberOfUsers(value); return *this;}

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
    inline UserPoolType& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}

    /**
     * <p>The email configuration.</p>
     */
    inline UserPoolType& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(value); return *this;}

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
    inline UserPoolType& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The SMS configuration.</p>
     */
    inline UserPoolType& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(value); return *this;}

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline const Aws::String& GetSmsConfigurationFailure() const{ return m_smsConfigurationFailure; }

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline void SetSmsConfigurationFailure(const Aws::String& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = value; }

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline void SetSmsConfigurationFailure(Aws::String&& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = value; }

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline void SetSmsConfigurationFailure(const char* value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure.assign(value); }

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline UserPoolType& WithSmsConfigurationFailure(const Aws::String& value) { SetSmsConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline UserPoolType& WithSmsConfigurationFailure(Aws::String&& value) { SetSmsConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the SMS configuration cannot send the message(s) to your
     * users.</p>
     */
    inline UserPoolType& WithSmsConfigurationFailure(const char* value) { SetSmsConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline const Aws::String& GetEmailConfigurationFailure() const{ return m_emailConfigurationFailure; }

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline void SetEmailConfigurationFailure(const Aws::String& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = value; }

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline void SetEmailConfigurationFailure(Aws::String&& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = value; }

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline void SetEmailConfigurationFailure(const char* value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure.assign(value); }

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(const Aws::String& value) { SetEmailConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(Aws::String&& value) { SetEmailConfigurationFailure(value); return *this;}

    /**
     * <p>The reason why the email configuration cannot send the messages to your
     * users.</p>
     */
    inline UserPoolType& WithEmailConfigurationFailure(const char* value) { SetEmailConfigurationFailure(value); return *this;}

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
    inline UserPoolType& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}

    /**
     * <p>The configuration for AdminCreateUser requests.</p>
     */
    inline UserPoolType& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet;
    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
    Aws::Vector<SchemaAttributeType> m_schemaAttributes;
    bool m_schemaAttributesHasBeenSet;
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
    int m_estimatedNumberOfUsers;
    bool m_estimatedNumberOfUsersHasBeenSet;
    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet;
    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet;
    Aws::String m_smsConfigurationFailure;
    bool m_smsConfigurationFailureHasBeenSet;
    Aws::String m_emailConfigurationFailure;
    bool m_emailConfigurationFailureHasBeenSet;
    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
