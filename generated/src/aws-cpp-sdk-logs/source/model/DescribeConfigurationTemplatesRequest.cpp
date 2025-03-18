/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeConfigurationTemplatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeConfigurationTemplatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_logTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logTypesJsonList(m_logTypes.size());
   for(unsigned logTypesIndex = 0; logTypesIndex < logTypesJsonList.GetLength(); ++logTypesIndex)
   {
     logTypesJsonList[logTypesIndex].AsString(m_logTypes[logTypesIndex]);
   }
   payload.WithArray("logTypes", std::move(logTypesJsonList));

  }

  if(m_resourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypesJsonList(m_resourceTypes.size());
   for(unsigned resourceTypesIndex = 0; resourceTypesIndex < resourceTypesJsonList.GetLength(); ++resourceTypesIndex)
   {
     resourceTypesJsonList[resourceTypesIndex].AsString(m_resourceTypes[resourceTypesIndex]);
   }
   payload.WithArray("resourceTypes", std::move(resourceTypesJsonList));

  }

  if(m_deliveryDestinationTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deliveryDestinationTypesJsonList(m_deliveryDestinationTypes.size());
   for(unsigned deliveryDestinationTypesIndex = 0; deliveryDestinationTypesIndex < deliveryDestinationTypesJsonList.GetLength(); ++deliveryDestinationTypesIndex)
   {
     deliveryDestinationTypesJsonList[deliveryDestinationTypesIndex].AsString(DeliveryDestinationTypeMapper::GetNameForDeliveryDestinationType(m_deliveryDestinationTypes[deliveryDestinationTypesIndex]));
   }
   payload.WithArray("deliveryDestinationTypes", std::move(deliveryDestinationTypesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConfigurationTemplatesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeConfigurationTemplates"));
  return headers;

}




