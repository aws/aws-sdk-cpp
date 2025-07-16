/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/PutDeliveryDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDeliveryDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputFormatHasBeenSet)
  {
   payload.WithString("outputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  if(m_deliveryDestinationConfigurationHasBeenSet)
  {
   payload.WithObject("deliveryDestinationConfiguration", m_deliveryDestinationConfiguration.Jsonize());

  }

  if(m_deliveryDestinationTypeHasBeenSet)
  {
   payload.WithString("deliveryDestinationType", DeliveryDestinationTypeMapper::GetNameForDeliveryDestinationType(m_deliveryDestinationType));
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

Aws::Http::HeaderValueCollection PutDeliveryDestinationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutDeliveryDestination"));
  return headers;

}




