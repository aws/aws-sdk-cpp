﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/OutputContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

OutputContext::OutputContext(JsonView jsonValue)
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
} // namespace LexModelsV2
} // namespace Aws
