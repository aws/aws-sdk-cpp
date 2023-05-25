/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/DeleteIdentityProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIdentityProviderRequest::DeleteIdentityProviderRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_providerNameHasBeenSet(false)
{
}

Aws::String DeleteIdentityProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_providerNameHasBeenSet)
  {
   payload.WithString("ProviderName", m_providerName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteIdentityProviderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.DeleteIdentityProvider"));
  return headers;

}




