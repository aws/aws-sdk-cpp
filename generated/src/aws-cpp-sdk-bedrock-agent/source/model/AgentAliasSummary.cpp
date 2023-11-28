/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentAliasSummary.h>
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

AgentAliasSummary::AgentAliasSummary() : 
    m_agentAliasIdHasBeenSet(false),
    m_agentAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingConfigurationHasBeenSet(false),
    m_agentAliasStatus(AgentAliasStatus::NOT_SET),
    m_agentAliasStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AgentAliasSummary::AgentAliasSummary(JsonView jsonValue) : 
    m_agentAliasIdHasBeenSet(false),
    m_agentAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingConfigurationHasBeenSet(false),
    m_agentAliasStatus(AgentAliasStatus::NOT_SET),
    m_agentAliasStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AgentAliasSummary& AgentAliasSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentAliasId"))
  {
    m_agentAliasId = jsonValue.GetString("agentAliasId");

    m_agentAliasIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentAliasName"))
  {
    m_agentAliasName = jsonValue.GetString("agentAliasName");

    m_agentAliasNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routingConfiguration"))
  {
    Aws::Utils::Array<JsonView> routingConfigurationJsonList = jsonValue.GetArray("routingConfiguration");
    for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
    {
      m_routingConfiguration.push_back(routingConfigurationJsonList[routingConfigurationIndex].AsObject());
    }
    m_routingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentAliasStatus"))
  {
    m_agentAliasStatus = AgentAliasStatusMapper::GetAgentAliasStatusForName(jsonValue.GetString("agentAliasStatus"));

    m_agentAliasStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentAliasSummary::Jsonize() const
{
  JsonValue payload;

  if(m_agentAliasIdHasBeenSet)
  {
   payload.WithString("agentAliasId", m_agentAliasId);

  }

  if(m_agentAliasNameHasBeenSet)
  {
   payload.WithString("agentAliasName", m_agentAliasName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_routingConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingConfigurationJsonList(m_routingConfiguration.size());
   for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
   {
     routingConfigurationJsonList[routingConfigurationIndex].AsObject(m_routingConfiguration[routingConfigurationIndex].Jsonize());
   }
   payload.WithArray("routingConfiguration", std::move(routingConfigurationJsonList));

  }

  if(m_agentAliasStatusHasBeenSet)
  {
   payload.WithString("agentAliasStatus", AgentAliasStatusMapper::GetNameForAgentAliasStatus(m_agentAliasStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
