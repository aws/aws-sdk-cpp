/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/WebAuthnCredentialDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

WebAuthnCredentialDescription::WebAuthnCredentialDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

WebAuthnCredentialDescription& WebAuthnCredentialDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CredentialId"))
  {
    m_credentialId = jsonValue.GetString("CredentialId");
    m_credentialIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FriendlyCredentialName"))
  {
    m_friendlyCredentialName = jsonValue.GetString("FriendlyCredentialName");
    m_friendlyCredentialNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RelyingPartyId"))
  {
    m_relyingPartyId = jsonValue.GetString("RelyingPartyId");
    m_relyingPartyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticatorAttachment"))
  {
    m_authenticatorAttachment = jsonValue.GetString("AuthenticatorAttachment");
    m_authenticatorAttachmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticatorTransports"))
  {
    Aws::Utils::Array<JsonView> authenticatorTransportsJsonList = jsonValue.GetArray("AuthenticatorTransports");
    for(unsigned authenticatorTransportsIndex = 0; authenticatorTransportsIndex < authenticatorTransportsJsonList.GetLength(); ++authenticatorTransportsIndex)
    {
      m_authenticatorTransports.push_back(authenticatorTransportsJsonList[authenticatorTransportsIndex].AsString());
    }
    m_authenticatorTransportsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue WebAuthnCredentialDescription::Jsonize() const
{
  JsonValue payload;

  if(m_credentialIdHasBeenSet)
  {
   payload.WithString("CredentialId", m_credentialId);

  }

  if(m_friendlyCredentialNameHasBeenSet)
  {
   payload.WithString("FriendlyCredentialName", m_friendlyCredentialName);

  }

  if(m_relyingPartyIdHasBeenSet)
  {
   payload.WithString("RelyingPartyId", m_relyingPartyId);

  }

  if(m_authenticatorAttachmentHasBeenSet)
  {
   payload.WithString("AuthenticatorAttachment", m_authenticatorAttachment);

  }

  if(m_authenticatorTransportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authenticatorTransportsJsonList(m_authenticatorTransports.size());
   for(unsigned authenticatorTransportsIndex = 0; authenticatorTransportsIndex < authenticatorTransportsJsonList.GetLength(); ++authenticatorTransportsIndex)
   {
     authenticatorTransportsJsonList[authenticatorTransportsIndex].AsString(m_authenticatorTransports[authenticatorTransportsIndex]);
   }
   payload.WithArray("AuthenticatorTransports", std::move(authenticatorTransportsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
