﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentVersion.h>
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

AgentVersion::AgentVersion() : 
    m_agentArnHasBeenSet(false),
    m_agentCollaboration(AgentCollaboration::NOT_SET),
    m_agentCollaborationHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentResourceRoleArnHasBeenSet(false),
    m_agentStatus(AgentStatus::NOT_SET),
    m_agentStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_guardrailConfigurationHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_memoryConfigurationHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

AgentVersion::AgentVersion(JsonView jsonValue)
  : AgentVersion()
{
  *this = jsonValue;
}

AgentVersion& AgentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentArn"))
  {
    m_agentArn = jsonValue.GetString("agentArn");

    m_agentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentCollaboration"))
  {
    m_agentCollaboration = AgentCollaborationMapper::GetAgentCollaborationForName(jsonValue.GetString("agentCollaboration"));

    m_agentCollaborationHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("agentResourceRoleArn"))
  {
    m_agentResourceRoleArn = jsonValue.GetString("agentResourceRoleArn");

    m_agentResourceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentStatus"))
  {
    m_agentStatus = AgentStatusMapper::GetAgentStatusForName(jsonValue.GetString("agentStatus"));

    m_agentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerEncryptionKeyArn"))
  {
    m_customerEncryptionKeyArn = jsonValue.GetString("customerEncryptionKeyArn");

    m_customerEncryptionKeyArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("foundationModel"))
  {
    m_foundationModel = jsonValue.GetString("foundationModel");

    m_foundationModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");

    m_guardrailConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idleSessionTTLInSeconds"))
  {
    m_idleSessionTTLInSeconds = jsonValue.GetInteger("idleSessionTTLInSeconds");

    m_idleSessionTTLInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instruction"))
  {
    m_instruction = jsonValue.GetString("instruction");

    m_instructionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryConfiguration"))
  {
    m_memoryConfiguration = jsonValue.GetObject("memoryConfiguration");

    m_memoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("promptOverrideConfiguration"))
  {
    m_promptOverrideConfiguration = jsonValue.GetObject("promptOverrideConfiguration");

    m_promptOverrideConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_agentArnHasBeenSet)
  {
   payload.WithString("agentArn", m_agentArn);

  }

  if(m_agentCollaborationHasBeenSet)
  {
   payload.WithString("agentCollaboration", AgentCollaborationMapper::GetNameForAgentCollaboration(m_agentCollaboration));
  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_agentResourceRoleArnHasBeenSet)
  {
   payload.WithString("agentResourceRoleArn", m_agentResourceRoleArn);

  }

  if(m_agentStatusHasBeenSet)
  {
   payload.WithString("agentStatus", AgentStatusMapper::GetNameForAgentStatus(m_agentStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

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

  if(m_foundationModelHasBeenSet)
  {
   payload.WithString("foundationModel", m_foundationModel);

  }

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("instruction", m_instruction);

  }

  if(m_memoryConfigurationHasBeenSet)
  {
   payload.WithObject("memoryConfiguration", m_memoryConfiguration.Jsonize());

  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

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

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
