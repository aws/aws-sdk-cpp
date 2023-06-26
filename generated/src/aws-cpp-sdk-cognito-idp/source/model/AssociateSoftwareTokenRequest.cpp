/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AssociateSoftwareTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateSoftwareTokenRequest::AssociateSoftwareTokenRequest() : 
    m_accessTokenHasBeenSet(false),
    m_sessionHasBeenSet(false)
{
}

Aws::String AssociateSoftwareTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  if(m_sessionHasBeenSet)
  {
   payload.WithString("Session", m_session);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSoftwareTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AssociateSoftwareToken"));
  return headers;

}




