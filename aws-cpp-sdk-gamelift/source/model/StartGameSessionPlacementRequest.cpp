/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_desiredPlayerSessionsHasBeenSet(false)
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
   Array<JsonValue> gamePropertiesJsonList(m_gameProperties.size());
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
   Array<JsonValue> playerLatenciesJsonList(m_playerLatencies.size());
   for(unsigned playerLatenciesIndex = 0; playerLatenciesIndex < playerLatenciesJsonList.GetLength(); ++playerLatenciesIndex)
   {
     playerLatenciesJsonList[playerLatenciesIndex].AsObject(m_playerLatencies[playerLatenciesIndex].Jsonize());
   }
   payload.WithArray("PlayerLatencies", std::move(playerLatenciesJsonList));

  }

  if(m_desiredPlayerSessionsHasBeenSet)
  {
   Array<JsonValue> desiredPlayerSessionsJsonList(m_desiredPlayerSessions.size());
   for(unsigned desiredPlayerSessionsIndex = 0; desiredPlayerSessionsIndex < desiredPlayerSessionsJsonList.GetLength(); ++desiredPlayerSessionsIndex)
   {
     desiredPlayerSessionsJsonList[desiredPlayerSessionsIndex].AsObject(m_desiredPlayerSessions[desiredPlayerSessionsIndex].Jsonize());
   }
   payload.WithArray("DesiredPlayerSessions", std::move(desiredPlayerSessionsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartGameSessionPlacementRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.StartGameSessionPlacement"));
  return headers;

}




