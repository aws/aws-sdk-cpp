/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateAgentCollaboratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentCollaboratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentDescriptorHasBeenSet)
  {
   payload.WithObject("agentDescriptor", m_agentDescriptor.Jsonize());

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_collaborationInstructionHasBeenSet)
  {
   payload.WithString("collaborationInstruction", m_collaborationInstruction);

  }

  if(m_relayConversationHistoryHasBeenSet)
  {
   payload.WithString("relayConversationHistory", RelayConversationHistoryMapper::GetNameForRelayConversationHistory(m_relayConversationHistory));
  }

  return payload.View().WriteReadable();
}




