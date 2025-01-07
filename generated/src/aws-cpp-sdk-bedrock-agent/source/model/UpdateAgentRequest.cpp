/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentRequest::UpdateAgentRequest() : 
    m_agentCollaboration(AgentCollaboration::NOT_SET),
    m_agentCollaborationHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_agentResourceRoleArnHasBeenSet(false),
    m_customOrchestrationHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_guardrailConfigurationHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_memoryConfigurationHasBeenSet(false),
    m_orchestrationType(OrchestrationType::NOT_SET),
    m_orchestrationTypeHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false)
{
}

Aws::String UpdateAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentCollaborationHasBeenSet)
  {
   payload.WithString("agentCollaboration", AgentCollaborationMapper::GetNameForAgentCollaboration(m_agentCollaboration));
  }

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_agentResourceRoleArnHasBeenSet)
  {
   payload.WithString("agentResourceRoleArn", m_agentResourceRoleArn);

  }

  if(m_customOrchestrationHasBeenSet)
  {
   payload.WithObject("customOrchestration", m_customOrchestration.Jsonize());

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_orchestrationTypeHasBeenSet)
  {
   payload.WithString("orchestrationType", OrchestrationTypeMapper::GetNameForOrchestrationType(m_orchestrationType));
  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




