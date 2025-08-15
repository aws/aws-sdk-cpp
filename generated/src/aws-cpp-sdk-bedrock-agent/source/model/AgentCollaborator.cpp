/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentCollaborator.h>
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

AgentCollaborator::AgentCollaborator(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentCollaborator& AgentCollaborator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentDescriptor"))
  {
    m_agentDescriptor = jsonValue.GetObject("agentDescriptor");
    m_agentDescriptorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorId"))
  {
    m_collaboratorId = jsonValue.GetString("collaboratorId");
    m_collaboratorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationInstruction"))
  {
    m_collaborationInstruction = jsonValue.GetString("collaborationInstruction");
    m_collaborationInstructionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorName"))
  {
    m_collaboratorName = jsonValue.GetString("collaboratorName");
    m_collaboratorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relayConversationHistory"))
  {
    m_relayConversationHistory = RelayConversationHistoryMapper::GetRelayConversationHistoryForName(jsonValue.GetString("relayConversationHistory"));
    m_relayConversationHistoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCollaborator::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_agentDescriptorHasBeenSet)
  {
   payload.WithObject("agentDescriptor", m_agentDescriptor.Jsonize());

  }

  if(m_collaboratorIdHasBeenSet)
  {
   payload.WithString("collaboratorId", m_collaboratorId);

  }

  if(m_collaborationInstructionHasBeenSet)
  {
   payload.WithString("collaborationInstruction", m_collaborationInstruction);

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_relayConversationHistoryHasBeenSet)
  {
   payload.WithString("relayConversationHistory", RelayConversationHistoryMapper::GetNameForRelayConversationHistory(m_relayConversationHistory));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
