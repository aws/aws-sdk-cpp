/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/UpdateGameSessionQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGameSessionQueueRequest::UpdateGameSessionQueueRequest() : 
    m_nameHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_filterConfigurationHasBeenSet(false),
    m_priorityConfigurationHasBeenSet(false),
    m_customEventDataHasBeenSet(false),
    m_notificationTargetHasBeenSet(false)
{
}

Aws::String UpdateGameSessionQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_playerLatencyPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> playerLatencyPoliciesJsonList(m_playerLatencyPolicies.size());
   for(unsigned playerLatencyPoliciesIndex = 0; playerLatencyPoliciesIndex < playerLatencyPoliciesJsonList.GetLength(); ++playerLatencyPoliciesIndex)
   {
     playerLatencyPoliciesJsonList[playerLatencyPoliciesIndex].AsObject(m_playerLatencyPolicies[playerLatencyPoliciesIndex].Jsonize());
   }
   payload.WithArray("PlayerLatencyPolicies", std::move(playerLatencyPoliciesJsonList));

  }

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_filterConfigurationHasBeenSet)
  {
   payload.WithObject("FilterConfiguration", m_filterConfiguration.Jsonize());

  }

  if(m_priorityConfigurationHasBeenSet)
  {
   payload.WithObject("PriorityConfiguration", m_priorityConfiguration.Jsonize());

  }

  if(m_customEventDataHasBeenSet)
  {
   payload.WithString("CustomEventData", m_customEventData);

  }

  if(m_notificationTargetHasBeenSet)
  {
   payload.WithString("NotificationTarget", m_notificationTarget);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateGameSessionQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.UpdateGameSessionQueue"));
  return headers;

}




