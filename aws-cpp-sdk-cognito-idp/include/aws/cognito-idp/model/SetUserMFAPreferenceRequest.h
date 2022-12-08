/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/model/SMSMfaSettingsType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaSettingsType.h>
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


    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline const SMSMfaSettingsType& GetSMSMfaSettings() const{ return m_sMSMfaSettings; }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline bool SMSMfaSettingsHasBeenSet() const { return m_sMSMfaSettingsHasBeenSet; }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline void SetSMSMfaSettings(const SMSMfaSettingsType& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = value; }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline void SetSMSMfaSettings(SMSMfaSettingsType&& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = std::move(value); }

    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline SetUserMFAPreferenceRequest& WithSMSMfaSettings(const SMSMfaSettingsType& value) { SetSMSMfaSettings(value); return *this;}

    /**
     * <p>The SMS text message multi-factor authentication (MFA) settings.</p>
     */
    inline SetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsType&& value) { SetSMSMfaSettings(std::move(value)); return *this;}


    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline const SoftwareTokenMfaSettingsType& GetSoftwareTokenMfaSettings() const{ return m_softwareTokenMfaSettings; }

    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline bool SoftwareTokenMfaSettingsHasBeenSet() const { return m_softwareTokenMfaSettingsHasBeenSet; }

    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline void SetSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = value; }

    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline void SetSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = std::move(value); }

    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline SetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { SetSoftwareTokenMfaSettings(value); return *this;}

    /**
     * <p>The time-based one-time password (TOTP) software token MFA settings.</p>
     */
    inline SetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { SetSoftwareTokenMfaSettings(std::move(value)); return *this;}


    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline SetUserMFAPreferenceRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline SetUserMFAPreferenceRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A valid access token that Amazon Cognito issued to the user whose MFA
     * preference you want to set.</p>
     */
    inline SetUserMFAPreferenceRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}

  private:

    SMSMfaSettingsType m_sMSMfaSettings;
    bool m_sMSMfaSettingsHasBeenSet = false;

    SoftwareTokenMfaSettingsType m_softwareTokenMfaSettings;
    bool m_softwareTokenMfaSettingsHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
