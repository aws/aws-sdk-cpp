/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CompleteWebAuthnRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CompleteWebAuthnRegistrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_credentialHasBeenSet)
  {
    if(!m_credential.View().IsNull())
    {
       payload.WithObject("Credential", JsonValue(m_credential.View()));
    }
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CompleteWebAuthnRegistrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.CompleteWebAuthnRegistration"));
  return headers;

}




