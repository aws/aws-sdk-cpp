/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details of a passkey, or webauthN, biometric or security-key
   * authentication factor for a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/WebAuthnCredentialDescription">AWS
   * API Reference</a></p>
   */
  class WebAuthnCredentialDescription
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription() = default;
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the passkey credential.</p>
     */
    inline const Aws::String& GetCredentialId() const { return m_credentialId; }
    inline bool CredentialIdHasBeenSet() const { return m_credentialIdHasBeenSet; }
    template<typename CredentialIdT = Aws::String>
    void SetCredentialId(CredentialIdT&& value) { m_credentialIdHasBeenSet = true; m_credentialId = std::forward<CredentialIdT>(value); }
    template<typename CredentialIdT = Aws::String>
    WebAuthnCredentialDescription& WithCredentialId(CredentialIdT&& value) { SetCredentialId(std::forward<CredentialIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An automatically-generated friendly name for the passkey credential.</p>
     */
    inline const Aws::String& GetFriendlyCredentialName() const { return m_friendlyCredentialName; }
    inline bool FriendlyCredentialNameHasBeenSet() const { return m_friendlyCredentialNameHasBeenSet; }
    template<typename FriendlyCredentialNameT = Aws::String>
    void SetFriendlyCredentialName(FriendlyCredentialNameT&& value) { m_friendlyCredentialNameHasBeenSet = true; m_friendlyCredentialName = std::forward<FriendlyCredentialNameT>(value); }
    template<typename FriendlyCredentialNameT = Aws::String>
    WebAuthnCredentialDescription& WithFriendlyCredentialName(FriendlyCredentialNameT&& value) { SetFriendlyCredentialName(std::forward<FriendlyCredentialNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relying-party ID of the provider for the passkey credential.</p>
     */
    inline const Aws::String& GetRelyingPartyId() const { return m_relyingPartyId; }
    inline bool RelyingPartyIdHasBeenSet() const { return m_relyingPartyIdHasBeenSet; }
    template<typename RelyingPartyIdT = Aws::String>
    void SetRelyingPartyId(RelyingPartyIdT&& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = std::forward<RelyingPartyIdT>(value); }
    template<typename RelyingPartyIdT = Aws::String>
    WebAuthnCredentialDescription& WithRelyingPartyId(RelyingPartyIdT&& value) { SetRelyingPartyId(std::forward<RelyingPartyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general category of the passkey authenticator. Can be a platform, or
     * on-device authenticator like a built-in fingerprint scanner, or a cross-platform
     * device that's not attached to the device like a Bluetooth security key.</p>
     */
    inline const Aws::String& GetAuthenticatorAttachment() const { return m_authenticatorAttachment; }
    inline bool AuthenticatorAttachmentHasBeenSet() const { return m_authenticatorAttachmentHasBeenSet; }
    template<typename AuthenticatorAttachmentT = Aws::String>
    void SetAuthenticatorAttachment(AuthenticatorAttachmentT&& value) { m_authenticatorAttachmentHasBeenSet = true; m_authenticatorAttachment = std::forward<AuthenticatorAttachmentT>(value); }
    template<typename AuthenticatorAttachmentT = Aws::String>
    WebAuthnCredentialDescription& WithAuthenticatorAttachment(AuthenticatorAttachmentT&& value) { SetAuthenticatorAttachment(std::forward<AuthenticatorAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the transport methods of the passkey credential, for
     * example USB or Bluetooth Low Energy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthenticatorTransports() const { return m_authenticatorTransports; }
    inline bool AuthenticatorTransportsHasBeenSet() const { return m_authenticatorTransportsHasBeenSet; }
    template<typename AuthenticatorTransportsT = Aws::Vector<Aws::String>>
    void SetAuthenticatorTransports(AuthenticatorTransportsT&& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports = std::forward<AuthenticatorTransportsT>(value); }
    template<typename AuthenticatorTransportsT = Aws::Vector<Aws::String>>
    WebAuthnCredentialDescription& WithAuthenticatorTransports(AuthenticatorTransportsT&& value) { SetAuthenticatorTransports(std::forward<AuthenticatorTransportsT>(value)); return *this;}
    template<typename AuthenticatorTransportsT = Aws::String>
    WebAuthnCredentialDescription& AddAuthenticatorTransports(AuthenticatorTransportsT&& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports.emplace_back(std::forward<AuthenticatorTransportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    WebAuthnCredentialDescription& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_credentialId;
    bool m_credentialIdHasBeenSet = false;

    Aws::String m_friendlyCredentialName;
    bool m_friendlyCredentialNameHasBeenSet = false;

    Aws::String m_relyingPartyId;
    bool m_relyingPartyIdHasBeenSet = false;

    Aws::String m_authenticatorAttachment;
    bool m_authenticatorAttachmentHasBeenSet = false;

    Aws::Vector<Aws::String> m_authenticatorTransports;
    bool m_authenticatorTransportsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
