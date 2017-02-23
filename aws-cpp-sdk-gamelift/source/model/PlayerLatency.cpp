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

PlayerLatency::PlayerLatency(const JsonValue& jsonValue) : 
    m_playerIdHasBeenSet(false),
    m_regionIdentifierHasBeenSet(false),
    m_latencyInMilliseconds(0.0),
    m_latencyInMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

PlayerLatency& PlayerLatency::operator =(const JsonValue& jsonValue)
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