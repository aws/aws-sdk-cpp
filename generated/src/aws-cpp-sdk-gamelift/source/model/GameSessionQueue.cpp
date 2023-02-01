/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionQueue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameSessionQueue::GameSessionQueue() : 
    m_nameHasBeenSet(false),
    m_gameSessionQueueArnHasBeenSet(false),
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

GameSessionQueue::GameSessionQueue(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_gameSessionQueueArnHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_playerLatencyPoliciesHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_filterConfigurationHasBeenSet(false),
    m_priorityConfigurationHasBeenSet(false),
    m_customEventDataHasBeenSet(false),
    m_notificationTargetHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionQueue& GameSessionQueue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionQueueArn"))
  {
    m_gameSessionQueueArn = jsonValue.GetString("GameSessionQueueArn");

    m_gameSessionQueueArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInteger("TimeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerLatencyPolicies"))
  {
    Aws::Utils::Array<JsonView> playerLatencyPoliciesJsonList = jsonValue.GetArray("PlayerLatencyPolicies");
    for(unsigned playerLatencyPoliciesIndex = 0; playerLatencyPoliciesIndex < playerLatencyPoliciesJsonList.GetLength(); ++playerLatencyPoliciesIndex)
    {
      m_playerLatencyPolicies.push_back(playerLatencyPoliciesJsonList[playerLatencyPoliciesIndex].AsObject());
    }
    m_playerLatencyPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("Destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterConfiguration"))
  {
    m_filterConfiguration = jsonValue.GetObject("FilterConfiguration");

    m_filterConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PriorityConfiguration"))
  {
    m_priorityConfiguration = jsonValue.GetObject("PriorityConfiguration");

    m_priorityConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomEventData"))
  {
    m_customEventData = jsonValue.GetString("CustomEventData");

    m_customEventDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationTarget"))
  {
    m_notificationTarget = jsonValue.GetString("NotificationTarget");

    m_notificationTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSessionQueue::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_gameSessionQueueArnHasBeenSet)
  {
   payload.WithString("GameSessionQueueArn", m_gameSessionQueueArn);

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

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
