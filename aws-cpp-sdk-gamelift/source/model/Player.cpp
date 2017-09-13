/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/gamelift/model/Player.h>
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

Player::Player() : 
    m_playerIdHasBeenSet(false),
    m_playerAttributesHasBeenSet(false),
    m_teamHasBeenSet(false),
    m_latencyInMsHasBeenSet(false)
{
}

Player::Player(const JsonValue& jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_playerAttributesHasBeenSet(false),
    m_teamHasBeenSet(false),
    m_latencyInMsHasBeenSet(false)
{
  *this = jsonValue;
}

Player& Player::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PlayerId"))
  {
    m_playerId = jsonValue.GetString("PlayerId");

    m_playerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerAttributes"))
  {
    Aws::Map<Aws::String, JsonValue> playerAttributesJsonMap = jsonValue.GetObject("PlayerAttributes").GetAllObjects();
    for(auto& playerAttributesItem : playerAttributesJsonMap)
    {
      m_playerAttributes[playerAttributesItem.first] = playerAttributesItem.second.AsObject();
    }
    m_playerAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Team"))
  {
    m_team = jsonValue.GetString("Team");

    m_teamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatencyInMs"))
  {
    Aws::Map<Aws::String, JsonValue> latencyInMsJsonMap = jsonValue.GetObject("LatencyInMs").GetAllObjects();
    for(auto& latencyInMsItem : latencyInMsJsonMap)
    {
      m_latencyInMs[latencyInMsItem.first] = latencyInMsItem.second.AsInteger();
    }
    m_latencyInMsHasBeenSet = true;
  }

  return *this;
}

JsonValue Player::Jsonize() const
{
  JsonValue payload;

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_playerAttributesHasBeenSet)
  {
   JsonValue playerAttributesJsonMap;
   for(auto& playerAttributesItem : m_playerAttributes)
   {
     playerAttributesJsonMap.WithObject(playerAttributesItem.first, playerAttributesItem.second.Jsonize());
   }
   payload.WithObject("PlayerAttributes", std::move(playerAttributesJsonMap));

  }

  if(m_teamHasBeenSet)
  {
   payload.WithString("Team", m_team);

  }

  if(m_latencyInMsHasBeenSet)
  {
   JsonValue latencyInMsJsonMap;
   for(auto& latencyInMsItem : m_latencyInMs)
   {
     latencyInMsJsonMap.WithInteger(latencyInMsItem.first, latencyInMsItem.second);
   }
   payload.WithObject("LatencyInMs", std::move(latencyInMsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
