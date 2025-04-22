/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/GetTokensFromRefreshTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTokensFromRefreshTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_refreshTokenHasBeenSet)
  {
   payload.WithString("RefreshToken", m_refreshToken);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

  }

  if(m_deviceKeyHasBeenSet)
  {
   payload.WithString("DeviceKey", m_deviceKey);

  }

  if(m_clientMetadataHasBeenSet)
  {
   JsonValue clientMetadataJsonMap;
   for(auto& clientMetadataItem : m_clientMetadata)
   {
     clientMetadataJsonMap.WithString(clientMetadataItem.first, clientMetadataItem.second);
   }
   payload.WithObject("ClientMetadata", std::move(clientMetadataJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTokensFromRefreshTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.GetTokensFromRefreshToken"));
  return headers;

}




