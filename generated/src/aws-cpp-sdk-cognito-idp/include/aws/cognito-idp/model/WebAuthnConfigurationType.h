/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserVerificationType.h>
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
   * <p>Settings for authentication (MFA) with passkey, or webauthN, biometric and
   * security-key devices in a user pool. Configures the following:</p> <ul> <li>
   * <p>Configuration for requiring user-verification support in passkeys.</p> </li>
   * <li> <p>The user pool relying-party ID. This is the domain, typically your user
   * pool domain, that user's passkey providers should trust as a receiver of passkey
   * authentication.</p> </li> <li> <p>The providers that you want to allow as
   * origins for passkey authentication.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/WebAuthnConfigurationType">AWS
   * API Reference</a></p>
   */
  class WebAuthnConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Sets or displays the authentication domain, typically your user pool domain,
     * that passkey providers must use as a relying party (RP) in their
     * configuration.</p> <p>Under the following conditions, the passkey relying party
     * ID must be the fully-qualified domain name of your custom domain:</p> <ul> <li>
     * <p>The user pool is configured for passkey authentication.</p> </li> <li> <p>The
     * user pool has a custom domain, whether or not it also has a prefix domain.</p>
     * </li> <li> <p>Your application performs authentication with managed login or the
     * classic hosted UI.</p> </li> </ul>
     */
    inline const Aws::String& GetRelyingPartyId() const { return m_relyingPartyId; }
    inline bool RelyingPartyIdHasBeenSet() const { return m_relyingPartyIdHasBeenSet; }
    template<typename RelyingPartyIdT = Aws::String>
    void SetRelyingPartyId(RelyingPartyIdT&& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = std::forward<RelyingPartyIdT>(value); }
    template<typename RelyingPartyIdT = Aws::String>
    WebAuthnConfigurationType& WithRelyingPartyId(RelyingPartyIdT&& value) { SetRelyingPartyId(std::forward<RelyingPartyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>required</code>, users can only register and sign in users with
     * passkeys that are capable of <a
     * href="https://www.w3.org/TR/webauthn-2/#enum-userVerificationRequirement">user
     * verification</a>. When <code>preferred</code>, your user pool doesn't require
     * the use of authenticators with user verification but encourages it.</p>
     */
    inline UserVerificationType GetUserVerification() const { return m_userVerification; }
    inline bool UserVerificationHasBeenSet() const { return m_userVerificationHasBeenSet; }
    inline void SetUserVerification(UserVerificationType value) { m_userVerificationHasBeenSet = true; m_userVerification = value; }
    inline WebAuthnConfigurationType& WithUserVerification(UserVerificationType value) { SetUserVerification(value); return *this;}
    ///@}
  private:

    Aws::String m_relyingPartyId;
    bool m_relyingPartyIdHasBeenSet = false;

    UserVerificationType m_userVerification{UserVerificationType::NOT_SET};
    bool m_userVerificationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
