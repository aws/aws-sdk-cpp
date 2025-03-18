/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Collaborator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

Collaborator::Collaborator(JsonView jsonValue)
{
  *this = jsonValue;
}

Collaborator& Collaborator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionGroups"))
  {
    Aws::Utils::Array<JsonView> actionGroupsJsonList = jsonValue.GetArray("actionGroups");
    for(unsigned actionGroupsIndex = 0; actionGroupsIndex < actionGroupsJsonList.GetLength(); ++actionGroupsIndex)
    {
      m_actionGroups.push_back(actionGroupsJsonList[actionGroupsIndex].AsObject());
    }
    m_actionGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentCollaboration"))
  {
    m_agentCollaboration = AgentCollaborationMapper::GetAgentCollaborationForName(jsonValue.GetString("agentCollaboration"));
    m_agentCollaborationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentName"))
  {
    m_agentName = jsonValue.GetString("agentName");
    m_agentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorConfigurations"))
  {
    Aws::Utils::Array<JsonView> collaboratorConfigurationsJsonList = jsonValue.GetArray("collaboratorConfigurations");
    for(unsigned collaboratorConfigurationsIndex = 0; collaboratorConfigurationsIndex < collaboratorConfigurationsJsonList.GetLength(); ++collaboratorConfigurationsIndex)
    {
      m_collaboratorConfigurations.push_back(collaboratorConfigurationsJsonList[collaboratorConfigurationsIndex].AsObject());
    }
    m_collaboratorConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerEncryptionKeyArn"))
  {
    m_customerEncryptionKeyArn = jsonValue.GetString("customerEncryptionKeyArn");
    m_customerEncryptionKeyArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("knowledgeBases"))
  {
    Aws::Utils::Array<JsonView> knowledgeBasesJsonList = jsonValue.GetArray("knowledgeBases");
    for(unsigned knowledgeBasesIndex = 0; knowledgeBasesIndex < knowledgeBasesJsonList.GetLength(); ++knowledgeBasesIndex)
    {
      m_knowledgeBases.push_back(knowledgeBasesJsonList[knowledgeBasesIndex].AsObject());
    }
    m_knowledgeBasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptOverrideConfiguration"))
  {
    m_promptOverrideConfiguration = jsonValue.GetObject("promptOverrideConfiguration");
    m_promptOverrideConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue Collaborator::Jsonize() const
{
  JsonValue payload;

  if(m_actionGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionGroupsJsonList(m_actionGroups.size());
   for(unsigned actionGroupsIndex = 0; actionGroupsIndex < actionGroupsJsonList.GetLength(); ++actionGroupsIndex)
   {
     actionGroupsJsonList[actionGroupsIndex].AsObject(m_actionGroups[actionGroupsIndex].Jsonize());
   }
   payload.WithArray("actionGroups", std::move(actionGroupsJsonList));

  }

  if(m_agentCollaborationHasBeenSet)
  {
   payload.WithString("agentCollaboration", AgentCollaborationMapper::GetNameForAgentCollaboration(m_agentCollaboration));
  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_collaboratorConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collaboratorConfigurationsJsonList(m_collaboratorConfigurations.size());
   for(unsigned collaboratorConfigurationsIndex = 0; collaboratorConfigurationsIndex < collaboratorConfigurationsJsonList.GetLength(); ++collaboratorConfigurationsIndex)
   {
     collaboratorConfigurationsJsonList[collaboratorConfigurationsIndex].AsObject(m_collaboratorConfigurations[collaboratorConfigurationsIndex].Jsonize());
   }
   payload.WithArray("collaboratorConfigurations", std::move(collaboratorConfigurationsJsonList));

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

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

  if(m_knowledgeBasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> knowledgeBasesJsonList(m_knowledgeBases.size());
   for(unsigned knowledgeBasesIndex = 0; knowledgeBasesIndex < knowledgeBasesJsonList.GetLength(); ++knowledgeBasesIndex)
   {
     knowledgeBasesJsonList[knowledgeBasesIndex].AsObject(m_knowledgeBases[knowledgeBasesIndex].Jsonize());
   }
   payload.WithArray("knowledgeBases", std::move(knowledgeBasesJsonList));

  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
