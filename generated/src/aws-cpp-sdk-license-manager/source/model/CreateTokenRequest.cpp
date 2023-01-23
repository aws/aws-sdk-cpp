/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTokenRequest::CreateTokenRequest() : 
    m_licenseArnHasBeenSet(false),
    m_roleArnsHasBeenSet(false),
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_tokenPropertiesHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateTokenRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_roleArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> roleArnsJsonList(m_roleArns.size());
   for(unsigned roleArnsIndex = 0; roleArnsIndex < roleArnsJsonList.GetLength(); ++roleArnsIndex)
   {
     roleArnsJsonList[roleArnsIndex].AsString(m_roleArns[roleArnsIndex]);
   }
   payload.WithArray("RoleArns", std::move(roleArnsJsonList));

  }

  if(m_expirationInDaysHasBeenSet)
  {
   payload.WithInteger("ExpirationInDays", m_expirationInDays);

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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateToken"));
  return headers;

}




