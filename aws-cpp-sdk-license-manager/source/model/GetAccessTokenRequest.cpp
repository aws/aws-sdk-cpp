/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetAccessTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccessTokenRequest::GetAccessTokenRequest() : 
    m_tokenHasBeenSet(false),
    m_tokenPropertiesHasBeenSet(false)
{
}

Aws::String GetAccessTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  if(m_tokenPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenPropertiesJsonList(m_tokenProperties.size());
   for(unsigned tokenPropertiesIndex = 0; tokenPropertiesIndex < tokenPropertiesJsonList.GetLength(); ++tokenPropertiesIndex)
   {
     tokenPropertiesJsonList[tokenPropertiesIndex].AsString(m_tokenProperties[tokenPropertiesIndex]);
   }
   payload.WithArray("TokenProperties", std::move(tokenPropertiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAccessTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetAccessToken"));
  return headers;

}




