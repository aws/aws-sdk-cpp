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

#include <aws/gamelift/model/PlacedPlayerSession.h>
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

PlacedPlayerSession::PlacedPlayerSession() : 
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false)
{
}

PlacedPlayerSession::PlacedPlayerSession(const JsonValue& jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

PlacedPlayerSession& PlacedPlayerSession::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PlayerId"))
  {
    m_playerId = jsonValue.GetString("PlayerId");

    m_playerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerSessionId"))
  {
    m_playerSessionId = jsonValue.GetString("PlayerSessionId");

    m_playerSessionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PlacedPlayerSession::Jsonize() const
{
  JsonValue payload;

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_playerSessionIdHasBeenSet)
  {
   payload.WithString("PlayerSessionId", m_playerSessionId);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws