/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetIdentityProviderByIdentifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetIdentityProviderByIdentifierRequest::GetIdentityProviderByIdentifierRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_idpIdentifierHasBeenSet(false)
{
}

Aws::String GetIdentityProviderByIdentifierRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_idpIdentifierHasBeenSet)
  {
   payload.WithString("IdpIdentifier", m_idpIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetIdentityProviderByIdentifierRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.GetIdentityProviderByIdentifier"));
  return headers;

}




