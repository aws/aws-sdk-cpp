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
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline bool SmsMfaConfigurationHasBeenSet() const { return m_smsMfaConfigurationHasBeenSet; }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = value; }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfigurationHasBeenSet = true; m_smsMfaConfiguration = std::move(value); }

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}

    /**
     * <p>The SMS text message MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}


    /**
     * <p>The software token MFA configuration.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline bool SoftwareTokenMfaConfigurationHasBeenSet() const { return m_softwareTokenMfaConfigurationHasBeenSet; }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = value; }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfigurationHasBeenSet = true; m_softwareTokenMfaConfiguration = std::move(value); }

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}

    /**
     * <p>The software token MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}


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
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }

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
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

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
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }

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
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

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
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    SmsMfaConfigType m_smsMfaConfiguration;
    bool m_smsMfaConfigurationHasBeenSet = false;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;
    bool m_softwareTokenMfaConfigurationHasBeenSet = false;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
