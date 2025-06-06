/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeInlineAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeInlineAgentRequest::SerializePayload() const
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

  if(m_bedrockModelConfigurationsHasBeenSet)
  {
   payload.WithObject("bedrockModelConfigurations", m_bedrockModelConfigurations.Jsonize());

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

  if(m_collaboratorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> collaboratorsJsonList(m_collaborators.size());
   for(unsigned collaboratorsIndex = 0; collaboratorsIndex < collaboratorsJsonList.GetLength(); ++collaboratorsIndex)
   {
     collaboratorsJsonList[collaboratorsIndex].AsObject(m_collaborators[collaboratorsIndex].Jsonize());
   }
   payload.WithArray("collaborators", std::move(collaboratorsJsonList));

  }

  if(m_customOrchestrationHasBeenSet)
  {
   payload.WithObject("customOrchestration", m_customOrchestration.Jsonize());

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

  }

  if(m_enableTraceHasBeenSet)
  {
   payload.WithBool("enableTrace", m_enableTrace);

  }

  if(m_endSessionHasBeenSet)
  {
   payload.WithBool("endSession", m_endSession);

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

  if(m_inlineSessionStateHasBeenSet)
  {
   payload.WithObject("inlineSessionState", m_inlineSessionState.Jsonize());

  }

  if(m_inputTextHasBeenSet)
  {
   payload.WithString("inputText", m_inputText);

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

  if(m_orchestrationTypeHasBeenSet)
  {
   payload.WithString("orchestrationType", OrchestrationTypeMapper::GetNameForOrchestrationType(m_orchestrationType));
  }

  if(m_promptCreationConfigurationsHasBeenSet)
  {
   payload.WithObject("promptCreationConfigurations", m_promptCreationConfigurations.Jsonize());

  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

  }

  if(m_streamingConfigurationsHasBeenSet)
  {
   payload.WithObject("streamingConfigurations", m_streamingConfigurations.Jsonize());

  }

  return payload.View().WriteReadable();
}




