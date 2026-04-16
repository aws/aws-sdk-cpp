/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>A user's preference for using passkey, or WebAuthn, multi-factor
 * authentication (MFA). Turns passkey MFA on and off for the user. Unlike other
 * MFA settings types, this type doesn't include a <code>PreferredMfa</code> option
 * because passkey MFA applies only when passkey is the first authentication
 * factor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/WebAuthnMfaSettingsType">AWS
 * API Reference</a></p>
 */
class WebAuthnMfaSettingsType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API WebAuthnMfaSettingsType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API WebAuthnMfaSettingsType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API WebAuthnMfaSettingsType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether passkey MFA is activated for a user. When activated, the
   * user's passkey authentication requires user verification, and passkey sign-in is
   * available when MFA is required. The user must also have at least one other MFA
   * method such as SMS, TOTP, or email activated to prevent account lockout.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline WebAuthnMfaSettingsType& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
