/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/CreateDeliveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDeliveryRequest::CreateDeliveryRequest() : 
    m_deliverySourceNameHasBeenSet(false),
    m_deliveryDestinationArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDeliveryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliverySourceNameHasBeenSet)
  {
   payload.WithString("deliverySourceName", m_deliverySourceName);

  }

  if(m_deliveryDestinationArnHasBeenSet)
  {
   payload.WithString("deliveryDestinationArn", m_deliveryDestinationArn);

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

Aws::Http::HeaderValueCollection CreateDeliveryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CreateDelivery"));
  return headers;

}




