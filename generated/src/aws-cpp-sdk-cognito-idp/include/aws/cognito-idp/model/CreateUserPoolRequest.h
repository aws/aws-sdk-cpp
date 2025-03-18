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
#include <aws/cognito-idp/model/UserPoolTierType.h>
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
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPool"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A friendly name for your user pool.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    CreateUserPoolRequest& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password policy and sign-in policy in the user pool. The password policy
     * sets options like password complexity requirements and password history. The
     * sign-in policy sets the options available to applications in <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-selection-sdk.html#authentication-flows-selection-choice">choice-based
     * authentication</a>.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const { return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    template<typename PoliciesT = UserPoolPolicyType>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = UserPoolPolicyType>
    CreateUserPoolRequest& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
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
    inline DeletionProtectionType GetDeletionProtection() const { return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(DeletionProtectionType value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline CreateUserPoolRequest& WithDeletionProtection(DeletionProtectionType value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of user pool Lambda triggers. Amazon Cognito invokes triggers at
     * several possible stages of authentication operations. Triggers can modify the
     * outcome of the operations that invoked them.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const { return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    template<typename LambdaConfigT = LambdaConfigType>
    void SetLambdaConfig(LambdaConfigT&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::forward<LambdaConfigT>(value); }
    template<typename LambdaConfigT = LambdaConfigType>
    CreateUserPoolRequest& WithLambdaConfig(LambdaConfigT&& value) { SetLambdaConfig(std::forward<LambdaConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes that you want your user pool to automatically verify. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/signing-up-users-in-your-app.html#allowing-users-to-sign-up-and-confirm-themselves">Verifying
     * contact information at sign-up</a>.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const { return m_autoVerifiedAttributes; }
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }
    template<typename AutoVerifiedAttributesT = Aws::Vector<VerifiedAttributeType>>
    void SetAutoVerifiedAttributes(AutoVerifiedAttributesT&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::forward<AutoVerifiedAttributesT>(value); }
    template<typename AutoVerifiedAttributesT = Aws::Vector<VerifiedAttributeType>>
    CreateUserPoolRequest& WithAutoVerifiedAttributes(AutoVerifiedAttributesT&& value) { SetAutoVerifiedAttributes(std::forward<AutoVerifiedAttributesT>(value)); return *this;}
    inline CreateUserPoolRequest& AddAutoVerifiedAttributes(VerifiedAttributeType value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes supported as an alias for this user pool. For more information
     * about alias attributes, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html#user-pool-settings-aliases">Customizing
     * sign-in attributes</a>.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const { return m_aliasAttributes; }
    inline bool AliasAttributesHasBeenSet() const { return m_aliasAttributesHasBeenSet; }
    template<typename AliasAttributesT = Aws::Vector<AliasAttributeType>>
    void SetAliasAttributes(AliasAttributesT&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = std::forward<AliasAttributesT>(value); }
    template<typename AliasAttributesT = Aws::Vector<AliasAttributeType>>
    CreateUserPoolRequest& WithAliasAttributes(AliasAttributesT&& value) { SetAliasAttributes(std::forward<AliasAttributesT>(value)); return *this;}
    inline CreateUserPoolRequest& AddAliasAttributes(AliasAttributeType value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html#user-pool-settings-aliases">Customizing
     * sign-in attributes</a>.</p>
     */
    inline const Aws::Vector<UsernameAttributeType>& GetUsernameAttributes() const { return m_usernameAttributes; }
    inline bool UsernameAttributesHasBeenSet() const { return m_usernameAttributesHasBeenSet; }
    template<typename UsernameAttributesT = Aws::Vector<UsernameAttributeType>>
    void SetUsernameAttributes(UsernameAttributesT&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = std::forward<UsernameAttributesT>(value); }
    template<typename UsernameAttributesT = Aws::Vector<UsernameAttributeType>>
    CreateUserPoolRequest& WithUsernameAttributes(UsernameAttributesT&& value) { SetUsernameAttributes(std::forward<UsernameAttributesT>(value)); return *this;}
    inline CreateUserPoolRequest& AddUsernameAttributes(UsernameAttributeType value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const { return m_smsVerificationMessage; }
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }
    template<typename SmsVerificationMessageT = Aws::String>
    void SetSmsVerificationMessage(SmsVerificationMessageT&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::forward<SmsVerificationMessageT>(value); }
    template<typename SmsVerificationMessageT = Aws::String>
    CreateUserPoolRequest& WithSmsVerificationMessage(SmsVerificationMessageT&& value) { SetSmsVerificationMessage(std::forward<SmsVerificationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const { return m_emailVerificationMessage; }
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }
    template<typename EmailVerificationMessageT = Aws::String>
    void SetEmailVerificationMessage(EmailVerificationMessageT&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::forward<EmailVerificationMessageT>(value); }
    template<typename EmailVerificationMessageT = Aws::String>
    CreateUserPoolRequest& WithEmailVerificationMessage(EmailVerificationMessageT&& value) { SetEmailVerificationMessage(std::forward<EmailVerificationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const { return m_emailVerificationSubject; }
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }
    template<typename EmailVerificationSubjectT = Aws::String>
    void SetEmailVerificationSubject(EmailVerificationSubjectT&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::forward<EmailVerificationSubjectT>(value); }
    template<typename EmailVerificationSubjectT = Aws::String>
    CreateUserPoolRequest& WithEmailVerificationSubject(EmailVerificationSubjectT&& value) { SetEmailVerificationSubject(std::forward<EmailVerificationSubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the verification message that your user pool delivers to
     * users who set an email address or phone number attribute.</p> <p>Set the email
     * message type that corresponds to your <code>DefaultEmailOption</code> selection.
     * For <code>CONFIRM_WITH_LINK</code>, specify an <code>EmailMessageByLink</code>
     * and leave <code>EmailMessage</code> blank. For <code>CONFIRM_WITH_CODE</code>,
     * specify an <code>EmailMessage</code> and leave <code>EmailMessageByLink</code>
     * blank. When you supply both parameters with either choice, Amazon Cognito
     * returns an error.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const { return m_verificationMessageTemplate; }
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }
    template<typename VerificationMessageTemplateT = VerificationMessageTemplateType>
    void SetVerificationMessageTemplate(VerificationMessageTemplateT&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::forward<VerificationMessageTemplateT>(value); }
    template<typename VerificationMessageTemplateT = VerificationMessageTemplateType>
    CreateUserPoolRequest& WithVerificationMessageTemplate(VerificationMessageTemplateT&& value) { SetVerificationMessageTemplate(std::forward<VerificationMessageTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the SMS message that your user pool sends to users in SMS OTP
     * and MFA authentication.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const { return m_smsAuthenticationMessage; }
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }
    template<typename SmsAuthenticationMessageT = Aws::String>
    void SetSmsAuthenticationMessage(SmsAuthenticationMessageT&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::forward<SmsAuthenticationMessageT>(value); }
    template<typename SmsAuthenticationMessageT = Aws::String>
    CreateUserPoolRequest& WithSmsAuthenticationMessage(SmsAuthenticationMessageT&& value) { SetSmsAuthenticationMessage(std::forward<SmsAuthenticationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets multi-factor authentication (MFA) to be on, off, or optional. When
     * <code>ON</code>, all users must set up MFA before they can sign in. When
     * <code>OPTIONAL</code>, your application must make a client-side determination of
     * whether a user wants to register an MFA device. For user pools with adaptive
     * authentication with threat protection, choose <code>OPTIONAL</code>.</p> <p>When
     * <code>MfaConfiguration</code> is <code>OPTIONAL</code>, managed login doesn't
     * automatically prompt users to set up MFA. Amazon Cognito generates MFA prompts
     * in API responses and in managed login for users who have chosen and configured a
     * preferred MFA factor.</p>
     */
    inline UserPoolMfaType GetMfaConfiguration() const { return m_mfaConfiguration; }
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }
    inline void SetMfaConfiguration(UserPoolMfaType value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }
    inline CreateUserPoolRequest& WithMfaConfiguration(UserPoolMfaType value) { SetMfaConfiguration(value); return *this;}
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
    inline const UserAttributeUpdateSettingsType& GetUserAttributeUpdateSettings() const { return m_userAttributeUpdateSettings; }
    inline bool UserAttributeUpdateSettingsHasBeenSet() const { return m_userAttributeUpdateSettingsHasBeenSet; }
    template<typename UserAttributeUpdateSettingsT = UserAttributeUpdateSettingsType>
    void SetUserAttributeUpdateSettings(UserAttributeUpdateSettingsT&& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = std::forward<UserAttributeUpdateSettingsT>(value); }
    template<typename UserAttributeUpdateSettingsT = UserAttributeUpdateSettingsType>
    CreateUserPoolRequest& WithUserAttributeUpdateSettings(UserAttributeUpdateSettingsT&& value) { SetUserAttributeUpdateSettings(std::forward<UserAttributeUpdateSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device-remembering configuration for a user pool. Device remembering or
     * device tracking is a "Remember me on this device" option for user pools that
     * perform authentication with the device key of a trusted device in the back end,
     * instead of a user-provided MFA code. For more information about device
     * authentication, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with user devices in your user pool</a>. A null value indicates that you have
     * deactivated device remembering in your user pool.</p>  <p>When you provide
     * a value for any <code>DeviceConfiguration</code> field, you activate the Amazon
     * Cognito device-remembering feature. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">Working
     * with devices</a>.</p> 
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const { return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    template<typename DeviceConfigurationT = DeviceConfigurationType>
    void SetDeviceConfiguration(DeviceConfigurationT&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::forward<DeviceConfigurationT>(value); }
    template<typename DeviceConfigurationT = DeviceConfigurationType>
    CreateUserPoolRequest& WithDeviceConfiguration(DeviceConfigurationT&& value) { SetDeviceConfiguration(std::forward<DeviceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const { return m_emailConfiguration; }
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }
    template<typename EmailConfigurationT = EmailConfigurationType>
    void SetEmailConfiguration(EmailConfigurationT&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::forward<EmailConfigurationT>(value); }
    template<typename EmailConfigurationT = EmailConfigurationType>
    CreateUserPoolRequest& WithEmailConfiguration(EmailConfigurationT&& value) { SetEmailConfiguration(std::forward<EmailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for your Amazon Cognito user pool to send SMS messages with
     * Amazon Simple Notification Service. To send SMS messages with Amazon SNS in the
     * Amazon Web Services Region that you want, the Amazon Cognito user pool uses an
     * Identity and Access Management (IAM) role in your Amazon Web Services account.
     * For more information see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-sms-settings.html">SMS
     * message settings</a>.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const { return m_smsConfiguration; }
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }
    template<typename SmsConfigurationT = SmsConfigurationType>
    void SetSmsConfiguration(SmsConfigurationT&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::forward<SmsConfigurationT>(value); }
    template<typename SmsConfigurationT = SmsConfigurationType>
    CreateUserPoolRequest& WithSmsConfiguration(SmsConfigurationT&& value) { SetSmsConfiguration(std::forward<SmsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and values to assign to the user pool. A tag is a label that you
     * can use to categorize and manage user pools in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const { return m_userPoolTags; }
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }
    template<typename UserPoolTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetUserPoolTags(UserPoolTagsT&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::forward<UserPoolTagsT>(value); }
    template<typename UserPoolTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateUserPoolRequest& WithUserPoolTags(UserPoolTagsT&& value) { SetUserPoolTags(std::forward<UserPoolTagsT>(value)); return *this;}
    template<typename UserPoolTagsKeyT = Aws::String, typename UserPoolTagsValueT = Aws::String>
    CreateUserPoolRequest& AddUserPoolTags(UserPoolTagsKeyT&& key, UserPoolTagsValueT&& value) {
      m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::forward<UserPoolTagsKeyT>(key), std::forward<UserPoolTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for administrative creation of users. Includes the template
     * for the invitation message for new users, the duration of temporary passwords,
     * and permitting self-service sign-up.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const { return m_adminCreateUserConfig; }
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }
    template<typename AdminCreateUserConfigT = AdminCreateUserConfigType>
    void SetAdminCreateUserConfig(AdminCreateUserConfigT&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::forward<AdminCreateUserConfigT>(value); }
    template<typename AdminCreateUserConfigT = AdminCreateUserConfigType>
    CreateUserPoolRequest& WithAdminCreateUserConfig(AdminCreateUserConfigT&& value) { SetAdminCreateUserConfig(std::forward<AdminCreateUserConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of attributes for the new user pool. You can add custom attributes
     * and modify the properties of default attributes. The specifications in this
     * parameter set the required attributes in your user pool. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">Working
     * with user attributes</a>.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Vector<SchemaAttributeType>>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Vector<SchemaAttributeType>>
    CreateUserPoolRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    template<typename SchemaT = SchemaAttributeType>
    CreateUserPoolRequest& AddSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema.emplace_back(std::forward<SchemaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains settings for activation of threat protection, including the
     * operating mode and additional authentication types. To log user security
     * information but take no action, set to <code>AUDIT</code>. To configure
     * automatic security responses to potentially unwanted traffic to your user pool,
     * set to <code>ENFORCED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>. To activate this setting, your user pool
     * must be on the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-plus.html">
     * Plus tier</a>.</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const { return m_userPoolAddOns; }
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }
    template<typename UserPoolAddOnsT = UserPoolAddOnsType>
    void SetUserPoolAddOns(UserPoolAddOnsT&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::forward<UserPoolAddOnsT>(value); }
    template<typename UserPoolAddOnsT = UserPoolAddOnsType>
    CreateUserPoolRequest& WithUserPoolAddOns(UserPoolAddOnsT&& value) { SetUserPoolAddOns(std::forward<UserPoolAddOnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the case sensitivity option for sign-in usernames. When
     * <code>CaseSensitive</code> is <code>false</code> (case insensitive), users can
     * sign in with any combination of capital and lowercase letters. For example,
     * <code>username</code>, <code>USERNAME</code>, or <code>UserName</code>, or for
     * email, <code>email@example.com</code> or <code>EMaiL@eXamplE.Com</code>. For
     * most use cases, set case sensitivity to <code>false</code> as a best practice.
     * When usernames and email addresses are case insensitive, Amazon Cognito treats
     * any variation in case as the same user, and prevents a case variation from being
     * assigned to the same attribute for a different user.</p> <p>When
     * <code>CaseSensitive</code> is <code>true</code> (case sensitive), Amazon Cognito
     * interprets <code>USERNAME</code> and <code>UserName</code> as distinct
     * users.</p> <p>This configuration is immutable after you set it.</p>
     */
    inline const UsernameConfigurationType& GetUsernameConfiguration() const { return m_usernameConfiguration; }
    inline bool UsernameConfigurationHasBeenSet() const { return m_usernameConfigurationHasBeenSet; }
    template<typename UsernameConfigurationT = UsernameConfigurationType>
    void SetUsernameConfiguration(UsernameConfigurationT&& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = std::forward<UsernameConfigurationT>(value); }
    template<typename UsernameConfigurationT = UsernameConfigurationType>
    CreateUserPoolRequest& WithUsernameConfiguration(UsernameConfigurationT&& value) { SetUsernameConfiguration(std::forward<UsernameConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. Email MFA is also
     * disqualifying for account recovery with email. In the absence of this setting,
     * Amazon Cognito uses the legacy behavior to determine the recovery method where
     * SMS is preferred over email.</p> <p>As a best practice, configure both
     * <code>verified_email</code> and <code>verified_phone_number</code>, with one
     * having a higher priority than the other.</p>
     */
    inline const AccountRecoverySettingType& GetAccountRecoverySetting() const { return m_accountRecoverySetting; }
    inline bool AccountRecoverySettingHasBeenSet() const { return m_accountRecoverySettingHasBeenSet; }
    template<typename AccountRecoverySettingT = AccountRecoverySettingType>
    void SetAccountRecoverySetting(AccountRecoverySettingT&& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = std::forward<AccountRecoverySettingT>(value); }
    template<typename AccountRecoverySettingT = AccountRecoverySettingType>
    CreateUserPoolRequest& WithAccountRecoverySetting(AccountRecoverySettingT&& value) { SetAccountRecoverySetting(std::forward<AccountRecoverySettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-sign-in-feature-plans.html">feature
     * plan</a>, or tier. This parameter determines the eligibility of the user pool
     * for features like managed login, access-token customization, and threat
     * protection. Defaults to <code>ESSENTIALS</code>.</p>
     */
    inline UserPoolTierType GetUserPoolTier() const { return m_userPoolTier; }
    inline bool UserPoolTierHasBeenSet() const { return m_userPoolTierHasBeenSet; }
    inline void SetUserPoolTier(UserPoolTierType value) { m_userPoolTierHasBeenSet = true; m_userPoolTier = value; }
    inline CreateUserPoolRequest& WithUserPoolTier(UserPoolTierType value) { SetUserPoolTier(value); return *this;}
    ///@}
  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet = false;

    DeletionProtectionType m_deletionProtection{DeletionProtectionType::NOT_SET};
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

    UserPoolMfaType m_mfaConfiguration{UserPoolMfaType::NOT_SET};
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

    UserPoolTierType m_userPoolTier{UserPoolTierType::NOT_SET};
    bool m_userPoolTierHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
