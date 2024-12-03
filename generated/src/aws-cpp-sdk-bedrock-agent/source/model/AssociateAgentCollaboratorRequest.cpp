/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AssociateAgentCollaboratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAgentCollaboratorRequest::AssociateAgentCollaboratorRequest() : 
    m_agentDescriptorHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_collaborationInstructionHasBeenSet(false),
    m_collaboratorNameHasBeenSet(false),
    m_relayConversationHistory(RelayConversationHistory::NOT_SET),
    m_relayConversationHistoryHasBeenSet(false)
{
}

Aws::String AssociateAgentCollaboratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentDescriptorHasBeenSet)
  {
   payload.WithObject("agentDescriptor", m_agentDescriptor.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_collaborationInstructionHasBeenSet)
  {
   payload.WithString("collaborationInstruction", m_collaborationInstruction);

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_relayConversationHistoryHasBeenSet)
  {
   payload.WithString("relayConversationHistory", RelayConversationHistoryMapper::GetNameForRelayConversationHistory(m_relayConversationHistory));
  }

  return payload.View().WriteReadable();
}




