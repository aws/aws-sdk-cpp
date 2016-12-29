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
#include <aws/gamelift/model/GameSession.h>
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

GameSession::GameSession() : 
    m_gameSessionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_currentPlayerSessionCount(0),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_status(GameSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_playerSessionCreationPolicy(PlayerSessionCreationPolicy::NOT_SET),
    m_playerSessionCreationPolicyHasBeenSet(false),
    m_creatorIdHasBeenSet(false)
{
}

GameSession::GameSession(const JsonValue& jsonValue) : 
    m_gameSessionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationTimeHasBeenSet(false),
    m_currentPlayerSessionCount(0),
    m_currentPlayerSessionCountHasBeenSet(false),
    m_maximumPlayerSessionCount(0),
    m_maximumPlayerSessionCountHasBeenSet(false),
    m_status(GameSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_gamePropertiesHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_playerSessionCreationPolicy(PlayerSessionCreationPolicy::NOT_SET),
    m_playerSessionCreationPolicyHasBeenSet(false),
    m_creatorIdHasBeenSet(false)
{
  *this = jsonValue;
}

GameSession& GameSession::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GameSessionId"))
  {
    m_gameSessionId = jsonValue.GetString("GameSessionId");

    m_gameSessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationTime"))
  {
    m_terminationTime = jsonValue.GetDouble("TerminationTime");

    m_terminationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentPlayerSessionCount"))
  {
    m_currentPlayerSessionCount = jsonValue.GetInteger("CurrentPlayerSessionCount");

    m_currentPlayerSessionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumPlayerSessionCount"))
  {
    m_maximumPlayerSessionCount = jsonValue.GetInteger("MaximumPlayerSessionCount");

    m_maximumPlayerSessionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GameSessionStatusMapper::GetGameSessionStatusForName(jsonValue.GetString("Status"));

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

  if(jsonValue.ValueExists("IpAddress"))
  {
    m_ipAddress = jsonValue.GetString("IpAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerSessionCreationPolicy"))
  {
    m_playerSessionCreationPolicy = PlayerSessionCreationPolicyMapper::GetPlayerSessionCreationPolicyForName(jsonValue.GetString("PlayerSessionCreationPolicy"));

    m_playerSessionCreationPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorId"))
  {
    m_creatorId = jsonValue.GetString("CreatorId");

    m_creatorIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSession::Jsonize() const
{
  JsonValue payload;

  if(m_gameSessionIdHasBeenSet)
  {
   payload.WithString("GameSessionId", m_gameSessionId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_terminationTimeHasBeenSet)
  {
   payload.WithDouble("TerminationTime", m_terminationTime.SecondsWithMSPrecision());
  }

  if(m_currentPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("CurrentPlayerSessionCount", m_currentPlayerSessionCount);

  }

  if(m_maximumPlayerSessionCountHasBeenSet)
  {
   payload.WithInteger("MaximumPlayerSessionCount", m_maximumPlayerSessionCount);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", GameSessionStatusMapper::GetNameForGameSessionStatus(m_status));
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

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_playerSessionCreationPolicyHasBeenSet)
  {
   payload.WithString("PlayerSessionCreationPolicy", PlayerSessionCreationPolicyMapper::GetNameForPlayerSessionCreationPolicy(m_playerSessionCreationPolicy));
  }

  if(m_creatorIdHasBeenSet)
  {
   payload.WithString("CreatorId", m_creatorId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws