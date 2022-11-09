/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/CreateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGatewayRequest::CreateGatewayRequest() : 
    m_activationKeyHasBeenSet(false),
    m_gatewayDisplayNameHasBeenSet(false),
    m_gatewayType(GatewayType::NOT_SET),
    m_gatewayTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationKeyHasBeenSet)
  {
   payload.WithString("ActivationKey", m_activationKey);

  }

  if(m_gatewayDisplayNameHasBeenSet)
  {
   payload.WithString("GatewayDisplayName", m_gatewayDisplayName);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", GatewayTypeMapper::GetNameForGatewayType(m_gatewayType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGatewayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BackupOnPremises_v20210101.CreateGateway"));
  return headers;

}




