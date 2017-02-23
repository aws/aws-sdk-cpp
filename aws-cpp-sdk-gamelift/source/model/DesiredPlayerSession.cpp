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
#include <aws/gamelift/model/DesiredPlayerSession.h>
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

DesiredPlayerSession::DesiredPlayerSession() : 
    m_playerIdHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
}

DesiredPlayerSession::DesiredPlayerSession(const JsonValue& jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
  *this = jsonValue;
}

DesiredPlayerSession& DesiredPlayerSession::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PlayerId"))
  {
    m_playerId = jsonValue.GetString("PlayerId");

    m_playerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlayerData"))
  {
    m_playerData = jsonValue.GetString("PlayerData");

    m_playerDataHasBeenSet = true;
  }

  return *this;
}

JsonValue DesiredPlayerSession::Jsonize() const
{
  JsonValue payload;

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_playerDataHasBeenSet)
  {
   payload.WithString("PlayerData", m_playerData);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws