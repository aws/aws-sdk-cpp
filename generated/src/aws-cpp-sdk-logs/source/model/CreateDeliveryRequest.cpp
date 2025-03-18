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

  if(m_recordFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordFieldsJsonList(m_recordFields.size());
   for(unsigned recordFieldsIndex = 0; recordFieldsIndex < recordFieldsJsonList.GetLength(); ++recordFieldsIndex)
   {
     recordFieldsJsonList[recordFieldsIndex].AsString(m_recordFields[recordFieldsIndex]);
   }
   payload.WithArray("recordFields", std::move(recordFieldsJsonList));

  }

  if(m_fieldDelimiterHasBeenSet)
  {
   payload.WithString("fieldDelimiter", m_fieldDelimiter);

  }

  if(m_s3DeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("s3DeliveryConfiguration", m_s3DeliveryConfiguration.Jsonize());

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




