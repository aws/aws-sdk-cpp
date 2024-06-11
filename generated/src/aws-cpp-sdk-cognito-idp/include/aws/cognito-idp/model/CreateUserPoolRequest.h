/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/DeletionProtectionType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/UserAttributeUpdateSettingsType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
#include <aws/cognito-idp/model/UsernameConfigurationType.h>
#include <aws/cognito-idp/model/AccountRecoverySettingType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>
#include <aws/cognito-idp/model/UsernameAttributeType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to create a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolRequest">AWS
   * API Reference</a></p>
   */
  class CreateUserPoolRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPool"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A string used to name the user pool.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline CreateUserPoolRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline CreateUserPoolRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline CreateUserPoolRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policies associated with the new user pool.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline CreateUserPoolRequest& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}
    inline CreateUserPoolRequest& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline const DeletionProtectionType& GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(const DeletionProtectionType& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline void SetDeletionProtection(DeletionProtectionType&& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = std::move(value); }
    inline CreateUserPoolRequest& WithDeletionProtection(const DeletionProtectionType& value) { SetDeletionProtection(value); return *this;}
    inline CreateUserPoolRequest& WithDeletionProtection(DeletionProtectionType&& value) { SetDeletionProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Lambda trigger configuration information for the new user pool.</p>
     *  <p>In a push model, event sources (such as Amazon S3 and custom
     * applications) need permission to invoke a function. So you must make an extra
     * call to add permission for these event sources to invoke your Lambda
     * function.</p> <p/> <p>For more information on using the Lambda API to add
     * permission, see<a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/API_AddPermission.html">
     * AddPermission </a>. </p> <p>For adding permission using the CLI, see<a
     * href="https://docs.aws.amazon.com/cli/latest/reference/lambda/add-permission.html">
     * add-permission </a>.</p> 
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }
    inline CreateUserPoolRequest& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}
    inline CreateUserPoolRequest& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to be auto-verified. Possible values: <b>email</b>,
     * <b>phone_number</b>.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::move(value); }
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}
    inline CreateUserPoolRequest& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(std::move(value)); return *this;}
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes supported as an alias for this user pool. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }
    inline bool AliasAttributesHasBeenSet() const { return m_aliasAttributesHasBeenSet; }
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = std::move(value); }
    inline CreateUserPoolRequest& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}
    inline CreateUserPoolRequest& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(std::move(value)); return *this;}
    inline CreateUserPoolRequest& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }
    inline CreateUserPoolRequest& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline const Aws::Vector<UsernameAttributeType>& GetUsernameAttributes() const{ return m_usernameAttributes; }
    inline bool UsernameAttributesHasBeenSet() const { return m_usernameAttributesHasBeenSet; }
    inline void SetUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = value; }
    inline void SetUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = std::move(value); }
    inline CreateUserPoolRequest& WithUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { SetUsernameAttributes(value); return *this;}
    inline CreateUserPoolRequest& WithUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { SetUsernameAttributes(std::move(value)); return *this;}
    inline CreateUserPoolRequest& AddUsernameAttributes(const UsernameAttributeType& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(value); return *this; }
    inline CreateUserPoolRequest& AddUsernameAttributes(UsernameAttributeType&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::move(value); }
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}
    inline CreateUserPoolRequest& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(std::move(value)); return *this;}
    inline CreateUserPoolRequest& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::move(value); }
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}
    inline CreateUserPoolRequest& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(std::move(value)); return *this;}
    inline CreateUserPoolRequest& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used. See <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_VerificationMessageTemplateType.html">VerificationMessageTemplateType</a>.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::move(value); }
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}
    inline CreateUserPoolRequest& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(std::move(value)); return *this;}
    inline CreateUserPoolRequest& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the verification message that the user sees when the app
     * requests permission to access the user's information.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const{ return m_verificationMessageTemplate; }
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }
    inline void SetVerificationMessageTemplate(const VerificationMessageTemplateType& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = value; }
    inline void SetVerificationMessageTemplate(VerificationMessageTemplateType&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::move(value); }
    inline CreateUserPoolRequest& WithVerificationMessageTemplate(const VerificationMessageTemplateType& value) { SetVerificationMessageTemplate(value); return *this;}
    inline CreateUserPoolRequest& WithVerificationMessageTemplate(VerificationMessageTemplateType&& value) { SetVerificationMessageTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string representing the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}
    inline CreateUserPoolRequest& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies MFA configuration details.</p>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }
    inline CreateUserPoolRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}
    inline CreateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline const UserAttributeUpdateSettingsType& GetUserAttributeUpdateSettings() const{ return m_userAttributeUpdateSettings; }
    inline bool UserAttributeUpdateSettingsHasBeenSet() const { return m_userAttributeUpdateSettingsHasBeenSet; }
    inline void SetUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = value; }
    inline void SetUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = std::move(value); }
    inline CreateUserPoolRequest& WithUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { SetUserAttributeUpdateSettings(value); return *this;}
    inline CreateUserPoolRequest& WithUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { SetUserAttributeUpdateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }
    inline CreateUserPoolRequest& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}
    inline CreateUserPoolRequest& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::move(value); }
    inline CreateUserPoolRequest& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}
    inline CreateUserPoolRequest& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services
     * account.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }
    inline CreateUserPoolRequest& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}
    inline CreateUserPoolRequest& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const{ return m_userPoolTags; }
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }
    inline void SetUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = value; }
    inline void SetUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::move(value); }
    inline CreateUserPoolRequest& WithUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserPoolTags(value); return *this;}
    inline CreateUserPoolRequest& WithUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserPoolTags(std::move(value)); return *this;}
    inline CreateUserPoolRequest& AddUserPoolTags(const Aws::String& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(const Aws::String& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(const char* key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(Aws::String&& key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }
    inline CreateUserPoolRequest& AddUserPoolTags(const char* key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::move(value); }
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}
    inline CreateUserPoolRequest& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of schema attributes for the new user pool. These attributes can be
     * standard or custom attributes.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::Vector<SchemaAttributeType>& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::Vector<SchemaAttributeType>&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline CreateUserPoolRequest& WithSchema(const Aws::Vector<SchemaAttributeType>& value) { SetSchema(value); return *this;}
    inline CreateUserPoolRequest& WithSchema(Aws::Vector<SchemaAttributeType>&& value) { SetSchema(std::move(value)); return *this;}
    inline CreateUserPoolRequest& AddSchema(const SchemaAttributeType& value) { m_schemaHasBeenSet = true; m_schema.push_back(value); return *this; }
    inline CreateUserPoolRequest& AddSchema(SchemaAttributeType&& value) { m_schemaHasBeenSet = true; m_schema.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User pool add-ons. Contains settings for activation of advanced security
     * features. To log user security information but take no action, set to
     * <code>AUDIT</code>. To configure automatic security responses to risky traffic
     * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>.</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const{ return m_userPoolAddOns; }
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }
    inline void SetUserPoolAddOns(const UserPoolAddOnsType& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = value; }
    inline void SetUserPoolAddOns(UserPoolAddOnsType&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::move(value); }
    inline CreateUserPoolRequest& WithUserPoolAddOns(const UserPoolAddOnsType& value) { SetUserPoolAddOns(value); return *this;}
    inline CreateUserPoolRequest& WithUserPoolAddOns(UserPoolAddOnsType&& value) { SetUserPoolAddOns(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Case sensitivity on the username input for the selected sign-in option. When
     * case sensitivity is set to <code>False</code> (case insensitive), users can sign
     * in with any combination of capital and lowercase letters. For example,
     * <code>username</code>, <code>USERNAME</code>, or <code>UserName</code>, or for
     * email, <code>email@example.com</code> or <code>EMaiL@eXamplE.Com</code>. For
     * most use cases, set case sensitivity to <code>False</code> (case insensitive) as
     * a best practice. When usernames and email addresses are case insensitive, Amazon
     * Cognito treats any variation in case as the same user, and prevents a case
     * variation from being assigned to the same attribute for a different user.</p>
     * <p>This configuration is immutable after you set it. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UsernameConfigurationType.html">UsernameConfigurationType</a>.</p>
     */
    inline const UsernameConfigurationType& GetUsernameConfiguration() const{ return m_usernameConfiguration; }
    inline bool UsernameConfigurationHasBeenSet() const { return m_usernameConfigurationHasBeenSet; }
    inline void SetUsernameConfiguration(const UsernameConfigurationType& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = value; }
    inline void SetUsernameConfiguration(UsernameConfigurationType&& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = std::move(value); }
    inline CreateUserPoolRequest& WithUsernameConfiguration(const UsernameConfigurationType& value) { SetUsernameConfiguration(value); return *this;}
    inline CreateUserPoolRequest& WithUsernameConfiguration(UsernameConfigurationType&& value) { SetUsernameConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline const AccountRecoverySettingType& GetAccountRecoverySetting() const{ return m_accountRecoverySetting; }
    inline bool AccountRecoverySettingHasBeenSet() const { return m_accountRecoverySettingHasBeenSet; }
    inline void SetAccountRecoverySetting(const AccountRecoverySettingType& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = value; }
    inline void SetAccountRecoverySetting(AccountRecoverySettingType&& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = std::move(value); }
    inline CreateUserPoolRequest& WithAccountRecoverySetting(const AccountRecoverySettingType& value) { SetAccountRecoverySetting(value); return *this;}
    inline CreateUserPoolRequest& WithAccountRecoverySetting(AccountRecoverySettingType&& value) { SetAccountRecoverySetting(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet = false;

    DeletionProtectionType m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet = false;

    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet = false;

    Aws::Vector<AliasAttributeType> m_aliasAttributes;
    bool m_aliasAttributesHasBeenSet = false;

    Aws::Vector<UsernameAttributeType> m_usernameAttributes;
    bool m_usernameAttributesHasBeenSet = false;

    Aws::String m_smsVerificationMessage;
    bool m_smsVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationMessage;
    bool m_emailVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationSubject;
    bool m_emailVerificationSubjectHasBeenSet = false;

    VerificationMessageTemplateType m_verificationMessageTemplate;
    bool m_verificationMessageTemplateHasBeenSet = false;

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet = false;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet = false;

    UserAttributeUpdateSettingsType m_userAttributeUpdateSettings;
    bool m_userAttributeUpdateSettingsHasBeenSet = false;

    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet = false;

    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet = false;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userPoolTags;
    bool m_userPoolTagsHasBeenSet = false;

    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet = false;

    Aws::Vector<SchemaAttributeType> m_schema;
    bool m_schemaHasBeenSet = false;

    UserPoolAddOnsType m_userPoolAddOns;
    bool m_userPoolAddOnsHasBeenSet = false;

    UsernameConfigurationType m_usernameConfiguration;
    bool m_usernameConfigurationHasBeenSet = false;

    AccountRecoverySettingType m_accountRecoverySetting;
    bool m_accountRecoverySettingHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
