/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DesiredPlayerSession::DesiredPlayerSession(JsonView jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_playerDataHasBeenSet(false)
{
  *this = jsonValue;
}

DesiredPlayerSession& DesiredPlayerSession::operator =(JsonView jsonValue)
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
