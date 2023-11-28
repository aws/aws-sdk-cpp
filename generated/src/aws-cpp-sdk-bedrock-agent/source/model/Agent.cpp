/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/Agent.h>
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

Agent::Agent() : 
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentArnHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_agentResourceRoleArnHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_preparedAtHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false)
{
}

Agent::Agent(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentArnHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_agentResourceRoleArnHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_preparedAtHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Agent& Agent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentName"))
  {
    m_agentName = jsonValue.GetString("agentName");

    m_agentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentArn"))
  {
    m_agentArn = jsonValue.GetString("agentArn");

    m_agentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instruction"))
  {
    m_instruction = jsonValue.GetString("instruction");

    m_instructionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentStatus"))
  {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));

    m_agentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("foundationModel"))
  {
    m_foundationModel = jsonValue.GetString("foundationModel");

    m_foundationModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");

    m_idleSessionTTLInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentResourceRoleArn"))
  {
    m_agentResourceRoleArn = jsonValue.GetString("agentResourceRoleArn");

    m_agentResourceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerEncryptionKeyArn"))
  {
    m_customerEncryptionKeyArn = jsonValue.GetString("customerEncryptionKeyArn");

    m_customerEncryptionKeyArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("preparedAt"))
  {
    m_preparedAt = jsonValue.GetString("preparedAt");

    m_preparedAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("recommendedActions"))
  {
    Aws::Utils::Array<JsonView> recommendedActionsJsonList = jsonValue.GetArray("recommendedActions");
    for(unsigned recommendedActionsIndex = 0; recommendedActionsIndex < recommendedActionsJsonList.GetLength(); ++recommendedActionsIndex)
    {
      m_recommendedActions.push_back(recommendedActionsJsonList[recommendedActionsIndex].AsString());
    }
    m_recommendedActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promptOverrideConfiguration"))
  {
    m_promptOverrideConfiguration = jsonValue.GetObject("promptOverrideConfiguration");

    m_promptOverrideConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Agent::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_agentArnHasBeenSet)
  {
   payload.WithString("agentArn", m_agentArn);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("instruction", m_instruction);

  }

  if(m_agentStatusHasBeenSet)
  {
   payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if(m_foundationModelHasBeenSet)
  {
   payload.WithString("foundationModel", m_foundationModel);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_agentResourceRoleArnHasBeenSet)
  {
   payload.WithString("agentResourceRoleArn", m_agentResourceRoleArn);

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_preparedAtHasBeenSet)
  {
   payload.WithString("preparedAt", m_preparedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  if(m_recommendedActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendedActionsJsonList(m_recommendedActions.size());
   for(unsigned recommendedActionsIndex = 0; recommendedActionsIndex < recommendedActionsJsonList.GetLength(); ++recommendedActionsIndex)
   {
     recommendedActionsJsonList[recommendedActionsIndex].AsString(m_recommendedActions[recommendedActionsIndex]);
   }
   payload.WithArray("recommendedActions", std::move(recommendedActionsJsonList));

  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
