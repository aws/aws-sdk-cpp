/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQueueRequest::CreateQueueRequest() : 
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_outboundCallerConfigHasBeenSet(false),
    m_hoursOfOperationIdHasBeenSet(false),
    m_maxContacts(0),
    m_maxContactsHasBeenSet(false),
    m_quickConnectIdsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateQueueRequest::SerializePayload() const
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

  if(m_outboundCallerConfigHasBeenSet)
  {
   payload.WithObject("OutboundCallerConfig", m_outboundCallerConfig.Jsonize());

  }

  if(m_hoursOfOperationIdHasBeenSet)
  {
   payload.WithString("HoursOfOperationId", m_hoursOfOperationId);

  }

  if(m_maxContactsHasBeenSet)
  {
   payload.WithInteger("MaxContacts", m_maxContacts);

  }

  if(m_quickConnectIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> quickConnectIdsJsonList(m_quickConnectIds.size());
   for(unsigned quickConnectIdsIndex = 0; quickConnectIdsIndex < quickConnectIdsJsonList.GetLength(); ++quickConnectIdsIndex)
   {
     quickConnectIdsJsonList[quickConnectIdsIndex].AsString(m_quickConnectIds[quickConnectIdsIndex]);
   }
   payload.WithArray("QuickConnectIds", std::move(quickConnectIdsJsonList));

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




