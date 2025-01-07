/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/AgentCollaboratorInputPayload.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>An agent collaborator invocation input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgentCollaboratorInvocationInput">AWS
   * API Reference</a></p>
   */
  class AgentCollaboratorInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaborator's alias ARN.</p>
     */
    inline const Aws::String& GetAgentCollaboratorAliasArn() const{ return m_agentCollaboratorAliasArn; }
    inline bool AgentCollaboratorAliasArnHasBeenSet() const { return m_agentCollaboratorAliasArnHasBeenSet; }
    inline void SetAgentCollaboratorAliasArn(const Aws::String& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = value; }
    inline void SetAgentCollaboratorAliasArn(Aws::String&& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = std::move(value); }
    inline void SetAgentCollaboratorAliasArn(const char* value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn.assign(value); }
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorAliasArn(const Aws::String& value) { SetAgentCollaboratorAliasArn(value); return *this;}
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorAliasArn(Aws::String&& value) { SetAgentCollaboratorAliasArn(std::move(value)); return *this;}
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorAliasArn(const char* value) { SetAgentCollaboratorAliasArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's name.</p>
     */
    inline const Aws::String& GetAgentCollaboratorName() const{ return m_agentCollaboratorName; }
    inline bool AgentCollaboratorNameHasBeenSet() const { return m_agentCollaboratorNameHasBeenSet; }
    inline void SetAgentCollaboratorName(const Aws::String& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = value; }
    inline void SetAgentCollaboratorName(Aws::String&& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = std::move(value); }
    inline void SetAgentCollaboratorName(const char* value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName.assign(value); }
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorName(const Aws::String& value) { SetAgentCollaboratorName(value); return *this;}
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorName(Aws::String&& value) { SetAgentCollaboratorName(std::move(value)); return *this;}
    inline AgentCollaboratorInvocationInput& WithAgentCollaboratorName(const char* value) { SetAgentCollaboratorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text or action invocation result input for the collaborator.</p>
     */
    inline const AgentCollaboratorInputPayload& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const AgentCollaboratorInputPayload& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(AgentCollaboratorInputPayload&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline AgentCollaboratorInvocationInput& WithInput(const AgentCollaboratorInputPayload& value) { SetInput(value); return *this;}
    inline AgentCollaboratorInvocationInput& WithInput(AgentCollaboratorInputPayload&& value) { SetInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentCollaboratorAliasArn;
    bool m_agentCollaboratorAliasArnHasBeenSet = false;

    Aws::String m_agentCollaboratorName;
    bool m_agentCollaboratorNameHasBeenSet = false;

    AgentCollaboratorInputPayload m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
