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
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API AgentCollaboratorInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The collaborator's name.</p>
     */
    inline const Aws::String& GetAgentCollaboratorName() const { return m_agentCollaboratorName; }
    inline bool AgentCollaboratorNameHasBeenSet() const { return m_agentCollaboratorNameHasBeenSet; }
    template<typename AgentCollaboratorNameT = Aws::String>
    void SetAgentCollaboratorName(AgentCollaboratorNameT&& value) { m_agentCollaboratorNameHasBeenSet = true; m_agentCollaboratorName = std::forward<AgentCollaboratorNameT>(value); }
    template<typename AgentCollaboratorNameT = Aws::String>
    AgentCollaboratorInvocationInput& WithAgentCollaboratorName(AgentCollaboratorNameT&& value) { SetAgentCollaboratorName(std::forward<AgentCollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's alias ARN.</p>
     */
    inline const Aws::String& GetAgentCollaboratorAliasArn() const { return m_agentCollaboratorAliasArn; }
    inline bool AgentCollaboratorAliasArnHasBeenSet() const { return m_agentCollaboratorAliasArnHasBeenSet; }
    template<typename AgentCollaboratorAliasArnT = Aws::String>
    void SetAgentCollaboratorAliasArn(AgentCollaboratorAliasArnT&& value) { m_agentCollaboratorAliasArnHasBeenSet = true; m_agentCollaboratorAliasArn = std::forward<AgentCollaboratorAliasArnT>(value); }
    template<typename AgentCollaboratorAliasArnT = Aws::String>
    AgentCollaboratorInvocationInput& WithAgentCollaboratorAliasArn(AgentCollaboratorAliasArnT&& value) { SetAgentCollaboratorAliasArn(std::forward<AgentCollaboratorAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text or action invocation result input for the collaborator.</p>
     */
    inline const AgentCollaboratorInputPayload& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = AgentCollaboratorInputPayload>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = AgentCollaboratorInputPayload>
    AgentCollaboratorInvocationInput& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentCollaboratorName;
    bool m_agentCollaboratorNameHasBeenSet = false;

    Aws::String m_agentCollaboratorAliasArn;
    bool m_agentCollaboratorAliasArnHasBeenSet = false;

    AgentCollaboratorInputPayload m_input;
    bool m_inputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
