/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateAuthenticationProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAuthenticationProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_allowedIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedIpsJsonList(m_allowedIps.size());
   for(unsigned allowedIpsIndex = 0; allowedIpsIndex < allowedIpsJsonList.GetLength(); ++allowedIpsIndex)
   {
     allowedIpsJsonList[allowedIpsIndex].AsString(m_allowedIps[allowedIpsIndex]);
   }
   payload.WithArray("AllowedIps", std::move(allowedIpsJsonList));

  }

  if(m_blockedIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedIpsJsonList(m_blockedIps.size());
   for(unsigned blockedIpsIndex = 0; blockedIpsIndex < blockedIpsJsonList.GetLength(); ++blockedIpsIndex)
   {
     blockedIpsJsonList[blockedIpsIndex].AsString(m_blockedIps[blockedIpsIndex]);
   }
   payload.WithArray("BlockedIps", std::move(blockedIpsJsonList));

  }

  if(m_periodicSessionDurationHasBeenSet)
  {
   payload.WithInteger("PeriodicSessionDuration", m_periodicSessionDuration);

  }

  return payload.View().WriteReadable();
}




