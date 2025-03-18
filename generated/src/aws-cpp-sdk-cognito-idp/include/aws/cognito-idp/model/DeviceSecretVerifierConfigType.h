/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * <p>A Secure Remote Password (SRP) value that your application generates when you
   * register a user's device. For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html#user-pools-remembered-devices-getting-a-device-key">Getting
   * a device key</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/DeviceSecretVerifierConfigType">AWS
   * API Reference</a></p>
   */
  class DeviceSecretVerifierConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API DeviceSecretVerifierConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A password verifier for a user's device. Used in SRP authentication.</p>
     */
    inline const Aws::String& GetPasswordVerifier() const { return m_passwordVerifier; }
    inline bool PasswordVerifierHasBeenSet() const { return m_passwordVerifierHasBeenSet; }
    template<typename PasswordVerifierT = Aws::String>
    void SetPasswordVerifier(PasswordVerifierT&& value) { m_passwordVerifierHasBeenSet = true; m_passwordVerifier = std::forward<PasswordVerifierT>(value); }
    template<typename PasswordVerifierT = Aws::String>
    DeviceSecretVerifierConfigType& WithPasswordVerifier(PasswordVerifierT&& value) { SetPasswordVerifier(std::forward<PasswordVerifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The salt that you want to use in SRP authentication with the user's
     * device.</p>
     */
    inline const Aws::String& GetSalt() const { return m_salt; }
    inline bool SaltHasBeenSet() const { return m_saltHasBeenSet; }
    template<typename SaltT = Aws::String>
    void SetSalt(SaltT&& value) { m_saltHasBeenSet = true; m_salt = std::forward<SaltT>(value); }
    template<typename SaltT = Aws::String>
    DeviceSecretVerifierConfigType& WithSalt(SaltT&& value) { SetSalt(std::forward<SaltT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_passwordVerifier;
    bool m_passwordVerifierHasBeenSet = false;

    Aws::String m_salt;
    bool m_saltHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
