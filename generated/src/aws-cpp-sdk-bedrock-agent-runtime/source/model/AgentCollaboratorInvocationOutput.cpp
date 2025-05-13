/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInvocationOutput.h>
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

AgentCollaboratorInvocationOutput::AgentCollaboratorInvocationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentCollaboratorInvocationOutput& AgentCollaboratorInvocationOutput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");
    m_outputHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentCollaboratorInvocationOutput::Jsonize() const
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

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_outputHasBeenSet)
  {
   payload.WithObject("output", m_output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
