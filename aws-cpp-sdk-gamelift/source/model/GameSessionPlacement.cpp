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
#include <aws/gamelift/model/GameSessionPlacement.h>
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

GameSessionPlacement::GameSessionPlacement() : 
    m_placementIdHasBeenSet(false),
    m_gameSessionQueueNameHasBeenSet(false),
    m_status(GameSessionPlacementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameSessionNameHasBeenSet(false),
    m_gameSessionArnHasBeenSet(false),
    m_gameSessionRegionHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

GameSessionPlacement::GameSessionPlacement(const JsonValue& jsonValue) : 
    m_placementIdHasBeenSet(false),
    m_gameSessionQueueNameHasBeenSet(false),
    m_status(GameSessionPlacementState::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_gameSessionNameHasBeenSet(false),
    m_gameSessionArnHasBeenSet(false),
    m_gameSessionRegionHasBeenSet(false),
    m_playerLatenciesHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionPlacement& GameSessionPlacement::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PlacementId"))
  {
    m_placementId = jsonValue.GetString("PlacementId");

    m_placementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionQueueName"))
  {
    m_gameSessionQueueName = jsonValue.GetString("GameSessionQueueName");

    m_gameSessionQueueNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GameSessionPlacementStateMapper::GetGameSessionPlacementStateForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameProperties"))
  {
    Array<JsonValue> gamePropertiesJsonList = jsonValue.GetArray("GameProperties");
    for(unsigned gamePropertiesIndex = 0; gamePropertiesIndex < gamePropertiesJsonList.GetLength(); ++gamePropertiesIndex)
    {
      m_gameProperties.push_back(gamePropertiesJsonList[gamePropertiesIndex].AsObject());
    }
    m_gamePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumPlayerSessionCount"))
  {
    m_maximumPlayerSessionCount = jsonValue.GetInteger("MaximumPlayerSessionCount");

    m_maximumPlayerSessionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionName"))
  {
    m_gameSessionName = jsonValue.GetString("GameSessionName");

    m_gameSessionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionArn"))
  {
    m_gameSessionArn = jsonValue.GetString("GameSessionArn");

    m_gameSessionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GameSessionRegion"))
  {
    m_gameSessionRegion = jsonValue.GetString("GameSessionRegion");

    m_gameSessionRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerLatencies"))
  {
    Array<JsonValue> playerLatenciesJsonList = jsonValue.GetArray("PlayerLatencies");
    for(unsigned playerLatenciesIndex = 0; playerLatenciesIndex < playerLatenciesJsonList.GetLength(); ++playerLatenciesIndex)
    {
      m_playerLatencies.push_back(playerLatenciesJsonList[playerLatenciesIndex].AsObject());
    }
    m_playerLatenciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSessionPlacement::Jsonize() const
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

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GameSessionPlacementStateMapper::GetNameForGameSessionPlacementState(m_status));
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

  if(m_gameSessionArnHasBeenSet)
  {
   payload.WithString("GameSessionArn", m_gameSessionArn);

  }

  if(m_gameSessionRegionHasBeenSet)
  {
   payload.WithString("GameSessionRegion", m_gameSessionRegion);

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

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws