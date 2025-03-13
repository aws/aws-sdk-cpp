/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateApiKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_generateDistinctIdHasBeenSet)
  {
   payload.WithBool("generateDistinctId", m_generateDistinctId);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_stageKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stageKeysJsonList(m_stageKeys.size());
   for(unsigned stageKeysIndex = 0; stageKeysIndex < stageKeysJsonList.GetLength(); ++stageKeysIndex)
   {
     stageKeysJsonList[stageKeysIndex].AsObject(m_stageKeys[stageKeysIndex].Jsonize());
   }
   payload.WithArray("stageKeys", std::move(stageKeysJsonList));

  }

  if(m_customerIdHasBeenSet)
  {
   payload.WithString("customerId", m_customerId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




