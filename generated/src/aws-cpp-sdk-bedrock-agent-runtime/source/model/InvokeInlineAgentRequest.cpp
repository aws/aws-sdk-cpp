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

InvokeInlineAgentRequest::InvokeInlineAgentRequest() : 
    m_actionGroupsHasBeenSet(false),
    m_bedrockModelConfigurationsHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_enableTrace(false),
    m_enableTraceHasBeenSet(false),
    m_endSession(false),
    m_endSessionHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_guardrailConfigurationHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_inlineSessionStateHasBeenSet(false),
    m_inputTextHasBeenSet(false),
    m_instructionHasBeenSet(false),
    m_knowledgeBasesHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_streamingConfigurationsHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
}

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

  if(m_bedrockModelConfigurationsHasBeenSet)
  {
   payload.WithObject("bedrockModelConfigurations", m_bedrockModelConfigurations.Jsonize());

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




