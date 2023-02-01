/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUserRequest::GetUserRequest() : 
    m_accessTokenHasBeenSet(false)
{
}

Aws::String GetUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("AccessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.GetUser"));
  return headers;

}




