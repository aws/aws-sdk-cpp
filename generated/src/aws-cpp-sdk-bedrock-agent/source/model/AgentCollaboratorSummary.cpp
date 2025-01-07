﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentCollaboratorSummary.h>
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

AgentCollaboratorSummary::AgentCollaboratorSummary() : 
    m_agentDescriptorHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_collaborationInstructionHasBeenSet(false),
    m_collaboratorIdHasBeenSet(false),
    m_collaboratorNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_relayConversationHistory(RelayConversationHistory::NOT_SET),
    m_relayConversationHistoryHasBeenSet(false)
{
}

AgentCollaboratorSummary::AgentCollaboratorSummary(JsonView jsonValue)
  : AgentCollaboratorSummary()
{
  *this = jsonValue;
}

AgentCollaboratorSummary& AgentCollaboratorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentDescriptor"))
  {
    m_agentDescriptor = jsonValue.GetObject("agentDescriptor");

    m_agentDescriptorHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("collaborationInstruction"))
  {
    m_collaborationInstruction = jsonValue.GetString("collaborationInstruction");

    m_collaborationInstructionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collaboratorId"))
  {
    m_collaboratorId = jsonValue.GetString("collaboratorId");

    m_collaboratorIdHasBeenSet = true;
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

  return *this;
}

JsonValue AgentCollaboratorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_agentDescriptorHasBeenSet)
  {
   payload.WithObject("agentDescriptor", m_agentDescriptor.Jsonize());

  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_collaborationInstructionHasBeenSet)
  {
   payload.WithString("collaborationInstruction", m_collaborationInstruction);

  }

  if(m_collaboratorIdHasBeenSet)
  {
   payload.WithString("collaboratorId", m_collaboratorId);

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

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
