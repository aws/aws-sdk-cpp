/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/model/SMSMfaSettingsType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaSettingsType.h>
#include <aws/cognito-idp/model/EmailMfaSettingsType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class SetUserMFAPreferenceRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetUserMFAPreferenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUserMFAPreference"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>User preferences for SMS message MFA. Activates or deactivates SMS MFA and
     * sets it as the preferred MFA method when multiple methods are available.</p>
     */
    inline const SMSMfaSettingsType& GetSMSMfaSettings() const { return m_sMSMfaSettings; }
    inline bool SMSMfaSettingsHasBeenSet() const { return m_sMSMfaSettingsHasBeenSet; }
    template<typename SMSMfaSettingsT = SMSMfaSettingsType>
    void SetSMSMfaSettings(SMSMfaSettingsT&& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = std::forward<SMSMfaSettingsT>(value); }
    template<typename SMSMfaSettingsT = SMSMfaSettingsType>
    SetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsT&& value) { SetSMSMfaSettings(std::forward<SMSMfaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User preferences for time-based one-time password (TOTP) MFA. Activates or
     * deactivates TOTP MFA and sets it as the preferred MFA method when multiple
     * methods are available. Users must register a TOTP authenticator before they set
     * this as their preferred MFA method.</p>
     */
    inline const SoftwareTokenMfaSettingsType& GetSoftwareTokenMfaSettings() const { return m_softwareTokenMfaSettings; }
    inline bool SoftwareTokenMfaSettingsHasBeenSet() const { return m_softwareTokenMfaSettingsHasBeenSet; }
    template<typename SoftwareTokenMfaSettingsT = SoftwareTokenMfaSettingsType>
    void SetSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsT&& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = std::forward<SoftwareTokenMfaSettingsT>(value); }
    template<typename SoftwareTokenMfaSettingsT = SoftwareTokenMfaSettingsType>
    SetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsT&& value) { SetSoftwareTokenMfaSettings(std::forward<SoftwareTokenMfaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User preferences for email message MFA. Activates or deactivates email MFA
     * and sets it as the preferred MFA method when multiple methods are available. To
     * activate this setting, your user pool must be in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
     * Essentials tier</a> or higher.</p>
     */
    inline const EmailMfaSettingsType& GetEmailMfaSettings() const { return m_emailMfaSettings; }
    inline bool EmailMfaSettingsHasBeenSet() const { return m_emailMfaSettingsHasBeenSet; }
    template<typename EmailMfaSettingsT = EmailMfaSettingsType>
    void SetEmailMfaSettings(EmailMfaSettingsT&& value) { m_emailMfaSettingsHasBeenSet = true; m_emailMfaSettings = std::forward<EmailMfaSettingsT>(value); }
    template<typename EmailMfaSettingsT = EmailMfaSettingsType>
    SetUserMFAPreferenceRequest& WithEmailMfaSettings(EmailMfaSettingsT&& value) { SetEmailMfaSettings(std::forward<EmailMfaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the currently signed-in
     * user. Must include a scope claim for
     * <code>aws.cognito.signin.user.admin</code>.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    SetUserMFAPreferenceRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}
  private:

    SMSMfaSettingsType m_sMSMfaSettings;
    bool m_sMSMfaSettingsHasBeenSet = false;

    SoftwareTokenMfaSettingsType m_softwareTokenMfaSettings;
    bool m_softwareTokenMfaSettingsHasBeenSet = false;

    EmailMfaSettingsType m_emailMfaSettings;
    bool m_emailMfaSettingsHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
