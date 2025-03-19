/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/UpdateDeliveryConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDeliveryConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeliveryConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.UpdateDeliveryConfiguration"));
  return headers;

}




