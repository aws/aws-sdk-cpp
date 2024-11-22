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
   * authentication factor for a user.</p> <p>This data type is a response parameter
   * of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_ListWebAuthnCredentials.html">ListWebAuthnCredentials</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/WebAuthnCredentialDescription">AWS
   * API Reference</a></p>
   */
  class WebAuthnCredentialDescription
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription();
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API WebAuthnCredentialDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the passkey credential.</p>
     */
    inline const Aws::String& GetCredentialId() const{ return m_credentialId; }
    inline bool CredentialIdHasBeenSet() const { return m_credentialIdHasBeenSet; }
    inline void SetCredentialId(const Aws::String& value) { m_credentialIdHasBeenSet = true; m_credentialId = value; }
    inline void SetCredentialId(Aws::String&& value) { m_credentialIdHasBeenSet = true; m_credentialId = std::move(value); }
    inline void SetCredentialId(const char* value) { m_credentialIdHasBeenSet = true; m_credentialId.assign(value); }
    inline WebAuthnCredentialDescription& WithCredentialId(const Aws::String& value) { SetCredentialId(value); return *this;}
    inline WebAuthnCredentialDescription& WithCredentialId(Aws::String&& value) { SetCredentialId(std::move(value)); return *this;}
    inline WebAuthnCredentialDescription& WithCredentialId(const char* value) { SetCredentialId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An automatically-generated friendly name for the passkey credential.</p>
     */
    inline const Aws::String& GetFriendlyCredentialName() const{ return m_friendlyCredentialName; }
    inline bool FriendlyCredentialNameHasBeenSet() const { return m_friendlyCredentialNameHasBeenSet; }
    inline void SetFriendlyCredentialName(const Aws::String& value) { m_friendlyCredentialNameHasBeenSet = true; m_friendlyCredentialName = value; }
    inline void SetFriendlyCredentialName(Aws::String&& value) { m_friendlyCredentialNameHasBeenSet = true; m_friendlyCredentialName = std::move(value); }
    inline void SetFriendlyCredentialName(const char* value) { m_friendlyCredentialNameHasBeenSet = true; m_friendlyCredentialName.assign(value); }
    inline WebAuthnCredentialDescription& WithFriendlyCredentialName(const Aws::String& value) { SetFriendlyCredentialName(value); return *this;}
    inline WebAuthnCredentialDescription& WithFriendlyCredentialName(Aws::String&& value) { SetFriendlyCredentialName(std::move(value)); return *this;}
    inline WebAuthnCredentialDescription& WithFriendlyCredentialName(const char* value) { SetFriendlyCredentialName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relying-party ID of the provider for the passkey credential.</p>
     */
    inline const Aws::String& GetRelyingPartyId() const{ return m_relyingPartyId; }
    inline bool RelyingPartyIdHasBeenSet() const { return m_relyingPartyIdHasBeenSet; }
    inline void SetRelyingPartyId(const Aws::String& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = value; }
    inline void SetRelyingPartyId(Aws::String&& value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId = std::move(value); }
    inline void SetRelyingPartyId(const char* value) { m_relyingPartyIdHasBeenSet = true; m_relyingPartyId.assign(value); }
    inline WebAuthnCredentialDescription& WithRelyingPartyId(const Aws::String& value) { SetRelyingPartyId(value); return *this;}
    inline WebAuthnCredentialDescription& WithRelyingPartyId(Aws::String&& value) { SetRelyingPartyId(std::move(value)); return *this;}
    inline WebAuthnCredentialDescription& WithRelyingPartyId(const char* value) { SetRelyingPartyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The general category of the passkey authenticator. Can be a platform, or
     * on-device authenticator like a built-in fingerprint scanner, or a cross-platform
     * device that's not attached to the device like a Bluetooth security key.</p>
     */
    inline const Aws::String& GetAuthenticatorAttachment() const{ return m_authenticatorAttachment; }
    inline bool AuthenticatorAttachmentHasBeenSet() const { return m_authenticatorAttachmentHasBeenSet; }
    inline void SetAuthenticatorAttachment(const Aws::String& value) { m_authenticatorAttachmentHasBeenSet = true; m_authenticatorAttachment = value; }
    inline void SetAuthenticatorAttachment(Aws::String&& value) { m_authenticatorAttachmentHasBeenSet = true; m_authenticatorAttachment = std::move(value); }
    inline void SetAuthenticatorAttachment(const char* value) { m_authenticatorAttachmentHasBeenSet = true; m_authenticatorAttachment.assign(value); }
    inline WebAuthnCredentialDescription& WithAuthenticatorAttachment(const Aws::String& value) { SetAuthenticatorAttachment(value); return *this;}
    inline WebAuthnCredentialDescription& WithAuthenticatorAttachment(Aws::String&& value) { SetAuthenticatorAttachment(std::move(value)); return *this;}
    inline WebAuthnCredentialDescription& WithAuthenticatorAttachment(const char* value) { SetAuthenticatorAttachment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the transport methods of the passkey credential, for
     * example USB or Bluetooth Low Energy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthenticatorTransports() const{ return m_authenticatorTransports; }
    inline bool AuthenticatorTransportsHasBeenSet() const { return m_authenticatorTransportsHasBeenSet; }
    inline void SetAuthenticatorTransports(const Aws::Vector<Aws::String>& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports = value; }
    inline void SetAuthenticatorTransports(Aws::Vector<Aws::String>&& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports = std::move(value); }
    inline WebAuthnCredentialDescription& WithAuthenticatorTransports(const Aws::Vector<Aws::String>& value) { SetAuthenticatorTransports(value); return *this;}
    inline WebAuthnCredentialDescription& WithAuthenticatorTransports(Aws::Vector<Aws::String>&& value) { SetAuthenticatorTransports(std::move(value)); return *this;}
    inline WebAuthnCredentialDescription& AddAuthenticatorTransports(const Aws::String& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports.push_back(value); return *this; }
    inline WebAuthnCredentialDescription& AddAuthenticatorTransports(Aws::String&& value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports.push_back(std::move(value)); return *this; }
    inline WebAuthnCredentialDescription& AddAuthenticatorTransports(const char* value) { m_authenticatorTransportsHasBeenSet = true; m_authenticatorTransports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline WebAuthnCredentialDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline WebAuthnCredentialDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
