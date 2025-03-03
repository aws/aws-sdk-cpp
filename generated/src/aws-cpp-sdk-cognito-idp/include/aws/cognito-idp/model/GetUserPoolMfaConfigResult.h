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
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows user pool configuration for SMS message MFA. Includes the message
     * template and the SMS message sending configuration for Amazon SNS.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfiguration = value; }
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool configuration for time-based one-time password (TOTP) MFA.
     * Includes TOTP enabled or disabled state.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfiguration = value; }
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}
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
    inline const EmailMfaConfigType& GetEmailMfaConfiguration() const{ return m_emailMfaConfiguration; }
    inline void SetEmailMfaConfiguration(const EmailMfaConfigType& value) { m_emailMfaConfiguration = value; }
    inline void SetEmailMfaConfiguration(EmailMfaConfigType&& value) { m_emailMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithEmailMfaConfiguration(const EmailMfaConfigType& value) { SetEmailMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithEmailMfaConfiguration(EmailMfaConfigType&& value) { SetEmailMfaConfiguration(std::move(value)); return *this;}
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
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfiguration = value; }
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool configuration for sign-in with passkey authenticators like
     * biometric devices and security keys. Passkeys are not eligible MFA factors. They
     * are instead an eligible primary sign-in factor for <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authentication-flows-selection-sdk.html#authentication-flows-selection-choice">choice-based
     * authentication</a>, or the <code>USER_AUTH</code> flow.</p>
     */
    inline const WebAuthnConfigurationType& GetWebAuthnConfiguration() const{ return m_webAuthnConfiguration; }
    inline void SetWebAuthnConfiguration(const WebAuthnConfigurationType& value) { m_webAuthnConfiguration = value; }
    inline void SetWebAuthnConfiguration(WebAuthnConfigurationType&& value) { m_webAuthnConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithWebAuthnConfiguration(const WebAuthnConfigurationType& value) { SetWebAuthnConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithWebAuthnConfiguration(WebAuthnConfigurationType&& value) { SetWebAuthnConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUserPoolMfaConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUserPoolMfaConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SmsMfaConfigType m_smsMfaConfiguration;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;

    EmailMfaConfigType m_emailMfaConfiguration;

    UserPoolMfaType m_mfaConfiguration;

    WebAuthnConfigurationType m_webAuthnConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
