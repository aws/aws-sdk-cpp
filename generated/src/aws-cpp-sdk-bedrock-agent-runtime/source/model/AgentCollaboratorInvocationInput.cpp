/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInvocationInput.h>
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

AgentCollaboratorInvocationInput::AgentCollaboratorInvocationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentCollaboratorInvocationInput& AgentCollaboratorInvocationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentCollaboratorAliasArn"))
  {
    m_agentCollaboratorAliasArn = jsonValue.GetString("agentCollaboratorAliasArn");
    m_agentCollaboratorAliasArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agentCollaboratorName"))
  {
    m_agentCollaboratorName = jsonValue.GetString("agentCollaboratorName");
    m_agentCollaboratorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCollaboratorInvocationInput::Jsonize() const
{
  JsonValue payload;

  if(m_agentCollaboratorAliasArnHasBeenSet)
  {
   payload.WithString("agentCollaboratorAliasArn", m_agentCollaboratorAliasArn);

  }

  if(m_agentCollaboratorNameHasBeenSet)
  {
   payload.WithString("agentCollaboratorName", m_agentCollaboratorName);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
