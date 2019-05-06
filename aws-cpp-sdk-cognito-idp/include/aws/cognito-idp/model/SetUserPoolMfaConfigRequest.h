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
  class AWS_COGNITOIDENTITYPROVIDER_API SetUserPoolMfaConfigRequest : public CognitoIdentityProviderRequest
  {
  public:
    SetUserPoolMfaConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUserPoolMfaConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The MFA configuration.</p>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }

    /**
     * <p>The MFA configuration.</p>
     */
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }

    /**
     * <p>The MFA configuration.</p>
     */
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }

    /**
     * <p>The MFA configuration.</p>
     */
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }

    /**
     * <p>The MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}

    /**
     * <p>The MFA configuration.</p>
     */
    inline SetUserPoolMfaConfigRequest& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    SmsMfaConfigType m_smsMfaConfiguration;
    bool m_smsMfaConfigurationHasBeenSet;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;
    bool m_softwareTokenMfaConfigurationHasBeenSet;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
