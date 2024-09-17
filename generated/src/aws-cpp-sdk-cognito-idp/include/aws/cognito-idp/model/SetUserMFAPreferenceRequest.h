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
    AWS_COGNITOIDENTITYPROVIDER_API SetUserMFAPreferenceRequest();

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
    inline const SMSMfaSettingsType& GetSMSMfaSettings() const{ return m_sMSMfaSettings; }
    inline bool SMSMfaSettingsHasBeenSet() const { return m_sMSMfaSettingsHasBeenSet; }
    inline void SetSMSMfaSettings(const SMSMfaSettingsType& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = value; }
    inline void SetSMSMfaSettings(SMSMfaSettingsType&& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = std::move(value); }
    inline SetUserMFAPreferenceRequest& WithSMSMfaSettings(const SMSMfaSettingsType& value) { SetSMSMfaSettings(value); return *this;}
    inline SetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsType&& value) { SetSMSMfaSettings(std::move(value)); return *this;}
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
    inline SetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { SetSoftwareTokenMfaSettings(value); return *this;}
    inline SetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { SetSoftwareTokenMfaSettings(std::move(value)); return *this;}
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
    inline SetUserMFAPreferenceRequest& WithEmailMfaSettings(const EmailMfaSettingsType& value) { SetEmailMfaSettings(value); return *this;}
    inline SetUserMFAPreferenceRequest& WithEmailMfaSettings(EmailMfaSettingsType&& value) { SetEmailMfaSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline SetUserMFAPreferenceRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline SetUserMFAPreferenceRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline SetUserMFAPreferenceRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
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
