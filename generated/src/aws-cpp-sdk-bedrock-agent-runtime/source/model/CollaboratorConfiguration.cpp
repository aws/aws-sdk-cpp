/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CollaboratorConfiguration.h>
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

CollaboratorConfiguration::CollaboratorConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CollaboratorConfiguration& CollaboratorConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentAliasArn"))
  {
    m_agentAliasArn = jsonValue.GetString("agentAliasArn");
    m_agentAliasArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorInstruction"))
  {
    m_collaboratorInstruction = jsonValue.GetString("collaboratorInstruction");
    m_collaboratorInstructionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaboratorName"))
  {
    m_collaboratorName = jsonValue.GetString("collaboratorName");
    m_collaboratorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relayConversationHistory"))
  {
    m_relayConversationHistory = RelayConversationHistoryMapper::GetRelayConversationHistoryForName(jsonValue.GetString("relayConversationHistory"));
    m_relayConversationHistoryHasBeenSet = true;
  }
  return *this;
}

JsonValue CollaboratorConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_agentAliasArnHasBeenSet)
  {
   payload.WithString("agentAliasArn", m_agentAliasArn);

  }

  if(m_collaboratorInstructionHasBeenSet)
  {
   payload.WithString("collaboratorInstruction", m_collaboratorInstruction);

  }

  if(m_collaboratorNameHasBeenSet)
  {
   payload.WithString("collaboratorName", m_collaboratorName);

  }

  if(m_relayConversationHistoryHasBeenSet)
  {
   payload.WithString("relayConversationHistory", RelayConversationHistoryMapper::GetNameForRelayConversationHistory(m_relayConversationHistory));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
