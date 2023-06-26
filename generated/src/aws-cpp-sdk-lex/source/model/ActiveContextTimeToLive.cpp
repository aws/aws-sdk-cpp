/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/ActiveContextTimeToLive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

ActiveContextTimeToLive::ActiveContextTimeToLive() : 
    m_timeToLiveInSeconds(0),
    m_timeToLiveInSecondsHasBeenSet(false),
    m_turnsToLive(0),
    m_turnsToLiveHasBeenSet(false)
{
}

ActiveContextTimeToLive::ActiveContextTimeToLive(JsonView jsonValue) : 
    m_timeToLiveInSeconds(0),
    m_timeToLiveInSecondsHasBeenSet(false),
    m_turnsToLive(0),
    m_turnsToLiveHasBeenSet(false)
{
  *this = jsonValue;
}

ActiveContextTimeToLive& ActiveContextTimeToLive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeToLiveInSeconds"))
  {
    m_timeToLiveInSeconds = jsonValue.GetInteger("timeToLiveInSeconds");

    m_timeToLiveInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("turnsToLive"))
  {
    m_turnsToLive = jsonValue.GetInteger("turnsToLive");

    m_turnsToLiveHasBeenSet = true;
  }

  return *this;
}

JsonValue ActiveContextTimeToLive::Jsonize() const
{
  JsonValue payload;

  if(m_timeToLiveInSecondsHasBeenSet)
  {
   payload.WithInteger("timeToLiveInSeconds", m_timeToLiveInSeconds);

  }

  if(m_turnsToLiveHasBeenSet)
  {
   payload.WithInteger("turnsToLive", m_turnsToLive);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
