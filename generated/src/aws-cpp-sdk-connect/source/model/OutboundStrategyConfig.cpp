/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OutboundStrategyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

OutboundStrategyConfig::OutboundStrategyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OutboundStrategyConfig& OutboundStrategyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentFirst"))
  {
    m_agentFirst = jsonValue.GetObject("AgentFirst");
    m_agentFirstHasBeenSet = true;
  }
  return *this;
}

JsonValue OutboundStrategyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_agentFirstHasBeenSet)
  {
   payload.WithObject("AgentFirst", m_agentFirst.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
