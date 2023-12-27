/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentAliasHistoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

AgentAliasHistoryEvent::AgentAliasHistoryEvent() : 
    m_routingConfigurationHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_startDateHasBeenSet(false)
{
}

AgentAliasHistoryEvent::AgentAliasHistoryEvent(JsonView jsonValue) : 
    m_routingConfigurationHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_startDateHasBeenSet(false)
{
  *this = jsonValue;
}

AgentAliasHistoryEvent& AgentAliasHistoryEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("routingConfiguration"))
  {
    Aws::Utils::Array<JsonView> routingConfigurationJsonList = jsonValue.GetArray("routingConfiguration");
    for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
    {
      m_routingConfiguration.push_back(routingConfigurationJsonList[routingConfigurationIndex].AsObject());
    }
    m_routingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endDate"))
  {
    m_endDate = jsonValue.GetString("endDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetString("startDate");

    m_startDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentAliasHistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_routingConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingConfigurationJsonList(m_routingConfiguration.size());
   for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
   {
     routingConfigurationJsonList[routingConfigurationIndex].AsObject(m_routingConfiguration[routingConfigurationIndex].Jsonize());
   }
   payload.WithArray("routingConfiguration", std::move(routingConfigurationJsonList));

  }

  if(m_endDateHasBeenSet)
  {
   payload.WithString("endDate", m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithString("startDate", m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
