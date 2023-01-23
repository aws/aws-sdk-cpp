/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/CreateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEndpointRequest::CreateEndpointRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingConfigHasBeenSet(false),
    m_replicationConfigHasBeenSet(false),
    m_eventBusesHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String CreateEndpointRequest::SerializePayload() const
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

  if(m_routingConfigHasBeenSet)
  {
   payload.WithObject("RoutingConfig", m_routingConfig.Jsonize());

  }

  if(m_replicationConfigHasBeenSet)
  {
   payload.WithObject("ReplicationConfig", m_replicationConfig.Jsonize());

  }

  if(m_eventBusesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventBusesJsonList(m_eventBuses.size());
   for(unsigned eventBusesIndex = 0; eventBusesIndex < eventBusesJsonList.GetLength(); ++eventBusesIndex)
   {
     eventBusesJsonList[eventBusesIndex].AsObject(m_eventBuses[eventBusesIndex].Jsonize());
   }
   payload.WithArray("EventBuses", std::move(eventBusesJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.CreateEndpoint"));
  return headers;

}




