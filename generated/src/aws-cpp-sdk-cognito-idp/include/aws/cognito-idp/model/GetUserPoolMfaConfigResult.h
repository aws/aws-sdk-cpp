/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/SmsMfaConfigType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaConfigType.h>
#include <aws/cognito-idp/model/EmailMfaConfigType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/WebAuthnConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class GetUserPoolMfaConfigResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows user pool configuration for SMS message MFA. Includes the message
     * template and the SMS message sending configuration for Amazon SNS.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const { return m_smsMfaConfiguration; }
    template<typename SmsMfaConfigurationT = SmsMfaConfigType>
    void SetSmsMfaConfiguration(SmsMfaConfigurationT&& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = std::forward<SmsMfaConfigurationT>(value); }
    template<typename SmsMfaConfigurationT = SmsMfaConfigType>
    GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(SmsMfaConfigurationT&& value) { SetSmsMfaConfiguration(std::forward<SmsMfaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool configuration for time-based one-time password (TOTP) MFA.
     * Includes TOTP enabled or disabled state.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const { return m_softwareTokenMfaConfiguration; }
    template<typename SoftwareTokenMfaConfigurationT = SoftwareTokenMfaConfigType>
    void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigurationT&& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = std::forward<SoftwareTokenMfaConfigurationT>(value); }
    template<typename SoftwareTokenMfaConfigurationT = SoftwareTokenMfaConfigType>
    GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigurationT&& value) { SetSoftwareTokenMfaConfiguration(std::forward<SoftwareTokenMfaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows configuration for user pool email message MFA and sign-in with one-time
     * passwords (OTPs). Includes the subject and body of the email message template
     * for sign-in and MFA messages. To activate this setting, your user pool must be
     * in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
     * Essentials tier</a> or higher.</p>
     */
    inline const EmailMfaConfigType& GetEmailMfaConfiguration() const { return m_emailMfaConfiguration; }
    template<typename EmailMfaConfigurationT = EmailMfaConfigType>
    void SetEmailMfaConfiguration(EmailMfaConfigurationT&& value) { m_emailMfaConfigurationHasBeenSet = true; m_emailMfaConfiguration = std::forward<EmailMfaConfigurationT>(value); }
    template<typename EmailMfaConfigurationT = EmailMfaConfigType>
    GetUserPoolMfaConfigResult& WithEmailMfaConfiguration(EmailMfaConfigurationT&& value) { SetEmailMfaConfiguration(std::forward<EmailMfaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the state of multi-factor authentication (MFA) as on, off, or
     * optional. When <code>ON</code>, all users must set up MFA before they can sign
     * in. When <code>OPTIONAL</code>, your application must make a client-side
     * determination of whether a user wants to register an MFA device. For user pools
     * with adaptive authentication with threat protection, choose
     * <code>OPTIONAL</code>.</p> <p>When <code>MfaConfiguration</code> is
     * <code>OPTIONAL</code>, managed login doesn't automatically prompt users to set
     * up MFA. Amazon Cognito generates MFA prompts in API responses and in managed
     * login for users who have chosen and configured a preferred MFA factor.</p>
     */
    inline UserPoolMfaType GetMfaConfiguration() const { return m_mfaConfiguration; }
    inline void SetMfaConfiguration(UserPoolMfaType value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(UserPoolMfaType value) { SetMfaConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool configuration for sign-in with passkey authenticators like
     * biometric devices and security keys. Passkeys are not eligible MFA factors. They
     * are instead an eligible primary sign-in factor for <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-selection-sdk.html#authentication-flows-selection-choice">choice-based
     * authentication</a>, or the <code>USER_AUTH</code> flow.</p>
     */
    inline const WebAuthnConfigurationType& GetWebAuthnConfiguration() const { return m_webAuthnConfiguration; }
    template<typename WebAuthnConfigurationT = WebAuthnConfigurationType>
    void SetWebAuthnConfiguration(WebAuthnConfigurationT&& value) { m_webAuthnConfigurationHasBeenSet = true; m_webAuthnConfiguration = std::forward<WebAuthnConfigurationT>(value); }
    template<typename WebAuthnConfigurationT = WebAuthnConfigurationType>
    GetUserPoolMfaConfigResult& WithWebAuthnConfiguration(WebAuthnConfigurationT&& value) { SetWebAuthnConfiguration(std::forward<WebAuthnConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserPoolMfaConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
