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
    AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolMfaConfigRequest();

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
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures user pool SMS messages for MFA. Sets the message template and the
     * SMS message sending configuration for Amazon SNS.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }
    inline bool SmsMfaConfigurationHasBeenSet() const { return m_smsMfaConfigurationHasBeenSet; }
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = value; }
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = std::move(value); }
    inline SetUserPoolMfaConfigRequest& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}
    inline SetUserPoolMfaConfigRequest& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures a user pool for time-based one-time password (TOTP) MFA. Enables
     * or disables TOTP.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }
    inline bool SoftwareTokenMfaConfigurationHasBeenSet() const { return m_softwareTokenMfaConfigurationHasBeenSet; }
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = value; }
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = std::move(value); }
    inline SetUserPoolMfaConfigRequest& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}
    inline SetUserPoolMfaConfigRequest& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures user pool email messages for MFA. Sets the subject and body of the
     * email message template for MFA messages. To activate this setting, <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline const EmailMfaConfigType& GetEmailMfaConfiguration() const{ return m_emailMfaConfiguration; }
    inline bool EmailMfaConfigurationHasBeenSet() const { return m_emailMfaConfigurationHasBeenSet; }
    inline void SetEmailMfaConfiguration(const EmailMfaConfigType& value) { m_emailMfaConfigurationHasBeenSet = true; m_emailMfaConfiguration = value; }
    inline void SetEmailMfaConfiguration(EmailMfaConfigType&& value) { m_emailMfaConfigurationHasBeenSet = true; m_emailMfaConfiguration = std::move(value); }
    inline SetUserPoolMfaConfigRequest& WithEmailMfaConfiguration(const EmailMfaConfigType& value) { SetEmailMfaConfiguration(value); return *this;}
    inline SetUserPoolMfaConfigRequest& WithEmailMfaConfiguration(EmailMfaConfigType&& value) { SetEmailMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MFA configuration. If you set the MfaConfiguration value to ‘ON’, only
     * users who have set up an MFA factor can sign in. To learn more, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-mfa.html">Adding
     * Multi-Factor Authentication (MFA) to a user pool</a>. Valid values include:</p>
     * <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p> </li> <li>
     * <p> <code>ON</code> MFA is required for all users to sign in.</p> </li> <li> <p>
     * <code>OPTIONAL</code> MFA will be required only for individual users who have an
     * MFA factor activated.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}
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

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
