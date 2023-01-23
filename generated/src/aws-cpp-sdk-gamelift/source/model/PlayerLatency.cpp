/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PlayerLatency.h>
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

PlayerLatency::PlayerLatency() : 
    m_playerIdHasBeenSet(false),
    m_regionIdentifierHasBeenSet(false),
    m_latencyInMilliseconds(0.0),
    m_latencyInMillisecondsHasBeenSet(false)
{
}

PlayerLatency::PlayerLatency(JsonView jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_regionIdentifierHasBeenSet(false),
    m_latencyInMilliseconds(0.0),
    m_latencyInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

PlayerLatency& PlayerLatency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlayerId"))
  {
    m_playerId = jsonValue.GetString("PlayerId");

    m_playerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionIdentifier"))
  {
    m_regionIdentifier = jsonValue.GetString("RegionIdentifier");

    m_regionIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatencyInMilliseconds"))
  {
    m_latencyInMilliseconds = jsonValue.GetDouble("LatencyInMilliseconds");

    m_latencyInMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue PlayerLatency::Jsonize() const
{
  JsonValue payload;

  if(m_playerIdHasBeenSet)
  {
   payload.WithString("PlayerId", m_playerId);

  }

  if(m_regionIdentifierHasBeenSet)
  {
   payload.WithString("RegionIdentifier", m_regionIdentifier);

  }

  if(m_latencyInMillisecondsHasBeenSet)
  {
   payload.WithDouble("LatencyInMilliseconds", m_latencyInMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
