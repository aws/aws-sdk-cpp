/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>User preferences for multi-factor authentication with email messages.
   * Activates or deactivates email MFA and sets it as the preferred MFA method when
   * multiple methods are available. To activate this setting, <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
   * advanced security features</a> must be active in your user pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EmailMfaSettingsType">AWS
   * API Reference</a></p>
   */
  class EmailMfaSettingsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaSettingsType();
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaSettingsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaSettingsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether email message MFA is active for a user. When the value of
     * this parameter is <code>Enabled</code>, the user will be prompted for MFA during
     * all sign-in attempts, unless device tracking is turned on and the device has
     * been trusted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline EmailMfaSettingsType& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether email message MFA is the user's preferred method.</p>
     */
    inline bool GetPreferredMfa() const{ return m_preferredMfa; }
    inline bool PreferredMfaHasBeenSet() const { return m_preferredMfaHasBeenSet; }
    inline void SetPreferredMfa(bool value) { m_preferredMfaHasBeenSet = true; m_preferredMfa = value; }
    inline EmailMfaSettingsType& WithPreferredMfa(bool value) { SetPreferredMfa(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    bool m_preferredMfa;
    bool m_preferredMfaHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
