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
  class AdminSetUserMFAPreferenceRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserMFAPreferenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminSetUserMFAPreference"; }

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
    AdminSetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsT&& value) { SetSMSMfaSettings(std::forward<SMSMfaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User preferences for time-based one-time password (TOTP) MFA. Activates or
     * deactivates TOTP MFA and sets it as the preferred MFA method when multiple
     * methods are available. This operation can set TOTP as a user's preferred MFA
     * method before they register a TOTP authenticator.</p>
     */
    inline const SoftwareTokenMfaSettingsType& GetSoftwareTokenMfaSettings() const { return m_softwareTokenMfaSettings; }
    inline bool SoftwareTokenMfaSettingsHasBeenSet() const { return m_softwareTokenMfaSettingsHasBeenSet; }
    template<typename SoftwareTokenMfaSettingsT = SoftwareTokenMfaSettingsType>
    void SetSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsT&& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = std::forward<SoftwareTokenMfaSettingsT>(value); }
    template<typename SoftwareTokenMfaSettingsT = SoftwareTokenMfaSettingsType>
    AdminSetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsT&& value) { SetSoftwareTokenMfaSettings(std::forward<SoftwareTokenMfaSettingsT>(value)); return *this;}
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
    AdminSetUserMFAPreferenceRequest& WithEmailMfaSettings(EmailMfaSettingsT&& value) { SetEmailMfaSettings(std::forward<EmailMfaSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AdminSetUserMFAPreferenceRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool where you want to set a user's MFA preferences.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    AdminSetUserMFAPreferenceRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}
  private:

    SMSMfaSettingsType m_sMSMfaSettings;
    bool m_sMSMfaSettingsHasBeenSet = false;

    SoftwareTokenMfaSettingsType m_softwareTokenMfaSettings;
    bool m_softwareTokenMfaSettingsHasBeenSet = false;

    EmailMfaSettingsType m_emailMfaSettings;
    bool m_emailMfaSettingsHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
