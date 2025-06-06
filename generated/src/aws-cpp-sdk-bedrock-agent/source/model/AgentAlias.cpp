﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentAlias.h>
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

AgentAlias::AgentAlias(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentAlias& AgentAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentAliasArn"))
  {
    m_agentAliasArn = jsonValue.GetString("agentAliasArn");
    m_agentAliasArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentAliasHistoryEvents"))
  {
    Aws::Utils::Array<JsonView> agentAliasHistoryEventsJsonList = jsonValue.GetArray("agentAliasHistoryEvents");
    for(unsigned agentAliasHistoryEventsIndex = 0; agentAliasHistoryEventsIndex < agentAliasHistoryEventsJsonList.GetLength(); ++agentAliasHistoryEventsIndex)
    {
      m_agentAliasHistoryEvents.push_back(agentAliasHistoryEventsJsonList[agentAliasHistoryEventsIndex].AsObject());
    }
    m_agentAliasHistoryEventsHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("agentAliasStatus"))
  {
    m_agentAliasStatus = AgentAliasStatusMapper::GetAgentAliasStatusForName(jsonValue.GetString("agentAliasStatus"));
    m_agentAliasStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aliasInvocationState"))
  {
    m_aliasInvocationState = AliasInvocationStateMapper::GetAliasInvocationStateForName(jsonValue.GetString("aliasInvocationState"));
    m_aliasInvocationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
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
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentAlias::Jsonize() const
{
  JsonValue payload;

  if(m_agentAliasArnHasBeenSet)
  {
   payload.WithString("agentAliasArn", m_agentAliasArn);

  }

  if(m_agentAliasHistoryEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentAliasHistoryEventsJsonList(m_agentAliasHistoryEvents.size());
   for(unsigned agentAliasHistoryEventsIndex = 0; agentAliasHistoryEventsIndex < agentAliasHistoryEventsJsonList.GetLength(); ++agentAliasHistoryEventsIndex)
   {
     agentAliasHistoryEventsJsonList[agentAliasHistoryEventsIndex].AsObject(m_agentAliasHistoryEvents[agentAliasHistoryEventsIndex].Jsonize());
   }
   payload.WithArray("agentAliasHistoryEvents", std::move(agentAliasHistoryEventsJsonList));

  }

  if(m_agentAliasIdHasBeenSet)
  {
   payload.WithString("agentAliasId", m_agentAliasId);

  }

  if(m_agentAliasNameHasBeenSet)
  {
   payload.WithString("agentAliasName", m_agentAliasName);

  }

  if(m_agentAliasStatusHasBeenSet)
  {
   payload.WithString("agentAliasStatus", AgentAliasStatusMapper::GetNameForAgentAliasStatus(m_agentAliasStatus));
  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_aliasInvocationStateHasBeenSet)
  {
   payload.WithString("aliasInvocationState", AliasInvocationStateMapper::GetNameForAliasInvocationState(m_aliasInvocationState));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_failureReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
   for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
   {
     failureReasonsJsonList[failureReasonsIndex].AsString(m_failureReasons[failureReasonsIndex]);
   }
   payload.WithArray("failureReasons", std::move(failureReasonsJsonList));

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

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
