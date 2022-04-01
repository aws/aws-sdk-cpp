/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ChangePasswordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ChangePasswordRequest::ChangePasswordRequest() : 
    m_previousPasswordHasBeenSet(false),
    m_proposedPasswordHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String ChangePasswordRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_previousPasswordHasBeenSet)
  {
   payload.WithString("PreviousPassword", m_previousPassword);

  }

  if(m_proposedPasswordHasBeenSet)
  {
   payload.WithString("ProposedPassword", m_proposedPassword);

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ChangePasswordRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.ChangePassword"));
  return headers;

}




