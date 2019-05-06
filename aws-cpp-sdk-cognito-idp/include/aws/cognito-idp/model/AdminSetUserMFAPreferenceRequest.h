/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API AdminSetUserMFAPreferenceRequest : public CognitoIdentityProviderRequest
  {
  public:
    AdminSetUserMFAPreferenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdminSetUserMFAPreference"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline const SMSMfaSettingsType& GetSMSMfaSettings() const{ return m_sMSMfaSettings; }

    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline bool SMSMfaSettingsHasBeenSet() const { return m_sMSMfaSettingsHasBeenSet; }

    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline void SetSMSMfaSettings(const SMSMfaSettingsType& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = value; }

    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline void SetSMSMfaSettings(SMSMfaSettingsType&& value) { m_sMSMfaSettingsHasBeenSet = true; m_sMSMfaSettings = std::move(value); }

    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithSMSMfaSettings(const SMSMfaSettingsType& value) { SetSMSMfaSettings(value); return *this;}

    /**
     * <p>The SMS text message MFA settings.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithSMSMfaSettings(SMSMfaSettingsType&& value) { SetSMSMfaSettings(std::move(value)); return *this;}


    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline const SoftwareTokenMfaSettingsType& GetSoftwareTokenMfaSettings() const{ return m_softwareTokenMfaSettings; }

    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline bool SoftwareTokenMfaSettingsHasBeenSet() const { return m_softwareTokenMfaSettingsHasBeenSet; }

    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline void SetSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = value; }

    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline void SetSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { m_softwareTokenMfaSettingsHasBeenSet = true; m_softwareTokenMfaSettings = std::move(value); }

    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(const SoftwareTokenMfaSettingsType& value) { SetSoftwareTokenMfaSettings(value); return *this;}

    /**
     * <p>The time-based one-time password software token MFA settings.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithSoftwareTokenMfaSettings(SoftwareTokenMfaSettingsType&& value) { SetSoftwareTokenMfaSettings(std::move(value)); return *this;}


    /**
     * <p>The user pool username or alias.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user pool username or alias.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user pool username or alias.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user pool username or alias.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user pool username or alias.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user pool username or alias.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user pool username or alias.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user pool username or alias.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline AdminSetUserMFAPreferenceRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}

  private:

    SMSMfaSettingsType m_sMSMfaSettings;
    bool m_sMSMfaSettingsHasBeenSet;

    SoftwareTokenMfaSettingsType m_softwareTokenMfaSettings;
    bool m_softwareTokenMfaSettingsHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
