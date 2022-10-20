/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateRoutingProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRoutingProfileRequest::CreateRoutingProfileRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultOutboundQueueIdHasBeenSet(false),
    m_queueConfigsHasBeenSet(false),
    m_mediaConcurrenciesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateRoutingProfileRequest::SerializePayload() const
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

  if(m_defaultOutboundQueueIdHasBeenSet)
  {
   payload.WithString("DefaultOutboundQueueId", m_defaultOutboundQueueId);

  }

  if(m_queueConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> queueConfigsJsonList(m_queueConfigs.size());
   for(unsigned queueConfigsIndex = 0; queueConfigsIndex < queueConfigsJsonList.GetLength(); ++queueConfigsIndex)
   {
     queueConfigsJsonList[queueConfigsIndex].AsObject(m_queueConfigs[queueConfigsIndex].Jsonize());
   }
   payload.WithArray("QueueConfigs", std::move(queueConfigsJsonList));

  }

  if(m_mediaConcurrenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaConcurrenciesJsonList(m_mediaConcurrencies.size());
   for(unsigned mediaConcurrenciesIndex = 0; mediaConcurrenciesIndex < mediaConcurrenciesJsonList.GetLength(); ++mediaConcurrenciesIndex)
   {
     mediaConcurrenciesJsonList[mediaConcurrenciesIndex].AsObject(m_mediaConcurrencies[mediaConcurrenciesIndex].Jsonize());
   }
   payload.WithArray("MediaConcurrencies", std::move(mediaConcurrenciesJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




