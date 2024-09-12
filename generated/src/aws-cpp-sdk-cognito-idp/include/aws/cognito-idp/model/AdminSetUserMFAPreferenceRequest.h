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
    AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserMFAPreferenceRequest();

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
    inline const SMSMfaSettingsType& GetSMSMfaSettings() const{ return m_sMSMfaSettings; }
    inline bool SMSMfaSettingsHasBeenSet() const { return m_sMSMfaSettingsHasBeenSet; }
    inline void SetSMSMfaSettings(const SMSMfaSettingsType& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = value; }
    inline void SetSMSMfaSettings(SMSMfaSettingsType&& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = std::move(value); }
    inline AdminSetUserMFAPreferenceRequest& WithSMSMfaSettings(const SMSMfaSettingsType& value) { SetSMSMfaSettings(value); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsType&& value) { SetSMSMfaSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User preferences for time-based one-time password (TOTP) MFA. Activates or
     * deactivates TOTP MFA and sets it as the preferred MFA method when multiple
     * methods are available.</p>
     */
    inline const SoftwareTokenMfaSettingsType& GetSoftwareTokenMfaSettings() const{ return m_softwareTokenMfaSettings; }
    inline bool SoftwareTokenMfaSettingsHasBeenSet() const { return m_softwareTokenMfaSettingsHasBeenSet; }
    inline void SetSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = value; }
    inline void SetSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = std::move(value); }
    inline AdminSetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { SetSoftwareTokenMfaSettings(value); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { SetSoftwareTokenMfaSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User preferences for email message MFA. Activates or deactivates email MFA
     * and sets it as the preferred MFA method when multiple methods are available. To
     * activate this setting, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline const EmailMfaSettingsType& GetEmailMfaSettings() const{ return m_emailMfaSettings; }
    inline bool EmailMfaSettingsHasBeenSet() const { return m_emailMfaSettingsHasBeenSet; }
    inline void SetEmailMfaSettings(const EmailMfaSettingsType& value) { m_emailMfaSettingsHasBeenSet = true; m_emailMfaSettings = value; }
    inline void SetEmailMfaSettings(EmailMfaSettingsType&& value) { m_emailMfaSettingsHasBeenSet = true; m_emailMfaSettings = std::move(value); }
    inline AdminSetUserMFAPreferenceRequest& WithEmailMfaSettings(const EmailMfaSettingsType& value) { SetEmailMfaSettings(value); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithEmailMfaSettings(EmailMfaSettingsType&& value) { SetEmailMfaSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the user that you want to query or modify. The value of this
     * parameter is typically your user's username, but it can be any of their alias
     * attributes. If <code>username</code> isn't an alias attribute in your user pool,
     * this value must be the <code>sub</code> of a local user or the username of a
     * user from a third-party IdP.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline AdminSetUserMFAPreferenceRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool where you want to set a user's MFA preferences.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
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
