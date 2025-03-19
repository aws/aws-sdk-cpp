/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ActionInvocationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/FunctionParameter.h>
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
   * <p>Contains information about the function that the agent predicts should be
   * called.</p> <p>This data type is used in the following API operations:</p> <ul>
   * <li> <p>In the <code>returnControl</code> field of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FunctionInvocationInput">AWS
   * API Reference</a></p>
   */
  class FunctionInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const { return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    template<typename ActionGroupT = Aws::String>
    void SetActionGroup(ActionGroupT&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::forward<ActionGroupT>(value); }
    template<typename ActionGroupT = Aws::String>
    FunctionInvocationInput& WithActionGroup(ActionGroupT&& value) { SetActionGroup(std::forward<ActionGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the function to invoke,</p>
     */
    inline ActionInvocationType GetActionInvocationType() const { return m_actionInvocationType; }
    inline bool ActionInvocationTypeHasBeenSet() const { return m_actionInvocationTypeHasBeenSet; }
    inline void SetActionInvocationType(ActionInvocationType value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = value; }
    inline FunctionInvocationInput& WithActionInvocationType(ActionInvocationType value) { SetActionInvocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    FunctionInvocationInput& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaborator's name.</p>
     */
    inline const Aws::String& GetCollaboratorName() const { return m_collaboratorName; }
    inline bool CollaboratorNameHasBeenSet() const { return m_collaboratorNameHasBeenSet; }
    template<typename CollaboratorNameT = Aws::String>
    void SetCollaboratorName(CollaboratorNameT&& value) { m_collaboratorNameHasBeenSet = true; m_collaboratorName = std::forward<CollaboratorNameT>(value); }
    template<typename CollaboratorNameT = Aws::String>
    FunctionInvocationInput& WithCollaboratorName(CollaboratorNameT&& value) { SetCollaboratorName(std::forward<CollaboratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    FunctionInvocationInput& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters of the function.</p>
     */
    inline const Aws::Vector<FunctionParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<FunctionParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<FunctionParameter>>
    FunctionInvocationInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = FunctionParameter>
    FunctionInvocationInput& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    ActionInvocationType m_actionInvocationType{ActionInvocationType::NOT_SET};
    bool m_actionInvocationTypeHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_collaboratorName;
    bool m_collaboratorNameHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::Vector<FunctionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
