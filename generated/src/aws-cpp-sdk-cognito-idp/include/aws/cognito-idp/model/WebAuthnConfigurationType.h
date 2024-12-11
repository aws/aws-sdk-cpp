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
   * <p>Settings for multi-factor authentication (MFA) with passkey, or webauthN,
   * biometric and security-key devices in a user pool. Configures the following:</p>
   * <ul> <li> <p>Configuration at the user-pool level for whether you want to
   * require passkey configuration as an MFA factor, or include it as a choice.</p>
   * </li> <li> <p>The user pool relying-party ID. This is the user pool domain that
   * user's passkey providers should trust as a receiver of passkey
   * authentication.</p> </li> <li> <p>The providers that you want to allow as
   * origins for passkey authentication.</p> </li> </ul> <p>This data type is a
   * request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetUserPoolMfaConfig.html">SetUserPoolMfaConfig</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_GetUserPoolMfaConfig.html">GetUserPoolMfaConfig</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/WebAuthnConfigurationType">AWS
   * API Reference</a></p>
   */
  class WebAuthnConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnConfigurationType();
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
    inline const Aws::String& GetRelyingPartyId() const{ return m_relyingPartyId; }
    inline bool RelyingPartyIdHasBeenSet() const { return m_relyingPartyIdHasBeenSet; }
    inline void SetRelyingPartyId(const Aws::String& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = value; }
    inline void SetRelyingPartyId(Aws::String&& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = std::move(value); }
    inline void SetRelyingPartyId(const char* value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId.assign(value); }
    inline WebAuthnConfigurationType& WithRelyingPartyId(const Aws::String& value) { SetRelyingPartyId(value); return *this;}
    inline WebAuthnConfigurationType& WithRelyingPartyId(Aws::String&& value) { SetRelyingPartyId(std::move(value)); return *this;}
    inline WebAuthnConfigurationType& WithRelyingPartyId(const char* value) { SetRelyingPartyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>required</code>, users can only register and sign in users with
     * passkeys that are capable of <a
     * href="https://www.w3.org/TR/webauthn-2/#enum-userVerificationRequirement">user
     * verification</a>. When <code>preferred</code>, your user pool doesn't require
     * the use of authenticators with user verification but encourages it.</p>
     */
    inline const UserVerificationType& GetUserVerification() const{ return m_userVerification; }
    inline bool UserVerificationHasBeenSet() const { return m_userVerificationHasBeenSet; }
    inline void SetUserVerification(const UserVerificationType& value) { m_userVerificationHasBeenSet = true; m_userVerification = value; }
    inline void SetUserVerification(UserVerificationType&& value) { m_userVerificationHasBeenSet = true; m_userVerification = std::move(value); }
    inline WebAuthnConfigurationType& WithUserVerification(const UserVerificationType& value) { SetUserVerification(value); return *this;}
    inline WebAuthnConfigurationType& WithUserVerification(UserVerificationType&& value) { SetUserVerification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_relyingPartyId;
    bool m_relyingPartyIdHasBeenSet = false;

    UserVerificationType m_userVerification;
    bool m_userVerificationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
