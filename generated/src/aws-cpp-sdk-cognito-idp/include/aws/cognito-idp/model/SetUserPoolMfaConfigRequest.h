/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/SmsMfaConfigType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaConfigType.h>
#include <aws/cognito-idp/model/EmailMfaConfigType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/WebAuthnConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class SetUserPoolMfaConfigRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolMfaConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUserPoolMfaConfig"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    SetUserPoolMfaConfigRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures user pool SMS messages for MFA. Sets the message template and the
     * SMS message sending configuration for Amazon SNS.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const { return m_smsMfaConfiguration; }
    inline bool SmsMfaConfigurationHasBeenSet() const { return m_smsMfaConfigurationHasBeenSet; }
    template<typename SmsMfaConfigurationT = SmsMfaConfigType>
    void SetSmsMfaConfiguration(SmsMfaConfigurationT&& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = std::forward<SmsMfaConfigurationT>(value); }
    template<typename SmsMfaConfigurationT = SmsMfaConfigType>
    SetUserPoolMfaConfigRequest& WithSmsMfaConfiguration(SmsMfaConfigurationT&& value) { SetSmsMfaConfiguration(std::forward<SmsMfaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures a user pool for time-based one-time password (TOTP) MFA. Enables
     * or disables TOTP.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const { return m_softwareTokenMfaConfiguration; }
    inline bool SoftwareTokenMfaConfigurationHasBeenSet() const { return m_softwareTokenMfaConfigurationHasBeenSet; }
    template<typename SoftwareTokenMfaConfigurationT = SoftwareTokenMfaConfigType>
    void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigurationT&& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = std::forward<SoftwareTokenMfaConfigurationT>(value); }
    template<typename SoftwareTokenMfaConfigurationT = SoftwareTokenMfaConfigType>
    SetUserPoolMfaConfigRequest& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigurationT&& value) { SetSoftwareTokenMfaConfiguration(std::forward<SoftwareTokenMfaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets configuration for user pool email message MFA and sign-in with one-time
     * passwords (OTPs). Includes the subject and body of the email message template
     * for sign-in and MFA messages. To activate this setting, your user pool must be
     * in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
     * Essentials tier</a> or higher.</p>
     */
    inline const EmailMfaConfigType& GetEmailMfaConfiguration() const { return m_emailMfaConfiguration; }
    inline bool EmailMfaConfigurationHasBeenSet() const { return m_emailMfaConfigurationHasBeenSet; }
    template<typename EmailMfaConfigurationT = EmailMfaConfigType>
    void SetEmailMfaConfiguration(EmailMfaConfigurationT&& value) { m_emailMfaConfigurationHasBeenSet = true; m_emailMfaConfiguration = std::forward<EmailMfaConfigurationT>(value); }
    template<typename EmailMfaConfigurationT = EmailMfaConfigType>
    SetUserPoolMfaConfigRequest& WithEmailMfaConfiguration(EmailMfaConfigurationT&& value) { SetEmailMfaConfiguration(std::forward<EmailMfaConfigurationT>(value)); return *this;}
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
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(UserPoolMfaType value) { SetMfaConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of your user pool for passkey, or WebAuthn, authentication
     * and registration. You can set this configuration independent of the MFA
     * configuration options in this operation.</p>
     */
    inline const WebAuthnConfigurationType& GetWebAuthnConfiguration() const { return m_webAuthnConfiguration; }
    inline bool WebAuthnConfigurationHasBeenSet() const { return m_webAuthnConfigurationHasBeenSet; }
    template<typename WebAuthnConfigurationT = WebAuthnConfigurationType>
    void SetWebAuthnConfiguration(WebAuthnConfigurationT&& value) { m_webAuthnConfigurationHasBeenSet = true; m_webAuthnConfiguration = std::forward<WebAuthnConfigurationT>(value); }
    template<typename WebAuthnConfigurationT = WebAuthnConfigurationType>
    SetUserPoolMfaConfigRequest& WithWebAuthnConfiguration(WebAuthnConfigurationT&& value) { SetWebAuthnConfiguration(std::forward<WebAuthnConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    SmsMfaConfigType m_smsMfaConfiguration;
    bool m_smsMfaConfigurationHasBeenSet = false;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;
    bool m_softwareTokenMfaConfigurationHasBeenSet = false;

    EmailMfaConfigType m_emailMfaConfiguration;
    bool m_emailMfaConfigurationHasBeenSet = false;

    UserPoolMfaType m_mfaConfiguration{UserPoolMfaType::NOT_SET};
    bool m_mfaConfigurationHasBeenSet = false;

    WebAuthnConfigurationType m_webAuthnConfiguration;
    bool m_webAuthnConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
