/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/OutputContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

OutputContext::OutputContext() : 
    m_nameHasBeenSet(false),
    m_timeToLiveInSeconds(0),
    m_timeToLiveInSecondsHasBeenSet(false),
    m_turnsToLive(0),
    m_turnsToLiveHasBeenSet(false)
{
}

OutputContext::OutputContext(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_timeToLiveInSeconds(0),
    m_timeToLiveInSecondsHasBeenSet(false),
    m_turnsToLive(0),
    m_turnsToLiveHasBeenSet(false)
{
  *this = jsonValue;
}

OutputContext& OutputContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

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

JsonValue OutputContext::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

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
} // namespace LexModelBuildingService
} // namespace Aws
