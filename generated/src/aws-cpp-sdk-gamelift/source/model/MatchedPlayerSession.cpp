/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/MatchedPlayerSession.h>
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

MatchedPlayerSession::MatchedPlayerSession() : 
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false)
{
}

MatchedPlayerSession::MatchedPlayerSession(JsonView jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_playerSessionIdHasBeenSet(false)
{
  *this = jsonValue;
}

MatchedPlayerSession& MatchedPlayerSession::operator =(JsonView jsonValue)
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

JsonValue MatchedPlayerSession::Jsonize() const
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
