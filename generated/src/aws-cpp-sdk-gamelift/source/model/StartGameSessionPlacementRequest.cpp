/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/StartGameSessionPlacementRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartGameSessionPlacementRequest::StartGameSessionPlacementRequest() : 
    m_placementIdHasBeenSet(false),
    m_gameSessionQueueNameHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameSessionNameHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_desiredPlayerSessionsHasBeenSet(false),
    m_gameSessionDataHasBeenSet(false)
{
}

Aws::String StartGameSessionPlacementRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_placementIdHasBeenSet)
  {
   payload.WithString("PlacementId", m_placementId);

  }

  if(m_gameSessionQueueNameHasBeenSet)
  {
   payload.WithString("GameSessionQueueName", m_gameSessionQueueName);

  }

  if(m_gamePropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
   for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
   {
     gamePropertiesJsonList[gamePropertiesIndex].AsObject(m_gameProperties[gamePropertiesIndex].Jsonize());
   }
   payload.WithArray("GameProperties", std::move(gamePropertiesJsonList));

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_gameSessionNameHasBeenSet)
  {
   payload.WithString("GameSessionName", m_gameSessionName);

  }

  if(m_playerLatenciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> playerLatenciesJsonList(m_playerLatencies.size());
   for(unsigned playerLatenciesIndex = 0; playerLatenciesIndex < playerLatenciesJsonList.GetLength(); ++playerLatenciesIndex)
   {
     playerLatenciesJsonList[playerLatenciesIndex].AsObject(m_playerLatencies[playerLatenciesIndex].Jsonize());
   }
   payload.WithArray("PlayerLatencies", std::move(playerLatenciesJsonList));

  }

  if(m_desiredPlayerSessionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> desiredPlayerSessionsJsonList(m_desiredPlayerSessions.size());
   for(unsigned desiredPlayerSessionsIndex = 0; desiredPlayerSessionsIndex < desiredPlayerSessionsJsonList.GetLength(); ++desiredPlayerSessionsIndex)
   {
     desiredPlayerSessionsJsonList[desiredPlayerSessionsIndex].AsObject(m_desiredPlayerSessions[desiredPlayerSessionsIndex].Jsonize());
   }
   payload.WithArray("DesiredPlayerSessions", std::move(desiredPlayerSessionsJsonList));

  }

  if(m_gameSessionDataHasBeenSet)
  {
   payload.WithString("GameSessionData", m_gameSessionData);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartGameSessionPlacementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StartGameSessionPlacement"));
  return headers;

}




