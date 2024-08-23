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
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput();
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const{ return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    inline void SetActionGroup(const Aws::String& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }
    inline void SetActionGroup(Aws::String&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }
    inline void SetActionGroup(const char* value) { m_actionGroupHasBeenSet = true; m_actionGroup.assign(value); }
    inline FunctionInvocationInput& WithActionGroup(const Aws::String& value) { SetActionGroup(value); return *this;}
    inline FunctionInvocationInput& WithActionGroup(Aws::String&& value) { SetActionGroup(std::move(value)); return *this;}
    inline FunctionInvocationInput& WithActionGroup(const char* value) { SetActionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the function to invoke,</p>
     */
    inline const ActionInvocationType& GetActionInvocationType() const{ return m_actionInvocationType; }
    inline bool ActionInvocationTypeHasBeenSet() const { return m_actionInvocationTypeHasBeenSet; }
    inline void SetActionInvocationType(const ActionInvocationType& value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = value; }
    inline void SetActionInvocationType(ActionInvocationType&& value) { m_actionInvocationTypeHasBeenSet = true; m_actionInvocationType = std::move(value); }
    inline FunctionInvocationInput& WithActionInvocationType(const ActionInvocationType& value) { SetActionInvocationType(value); return *this;}
    inline FunctionInvocationInput& WithActionInvocationType(ActionInvocationType&& value) { SetActionInvocationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }
    inline FunctionInvocationInput& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}
    inline FunctionInvocationInput& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}
    inline FunctionInvocationInput& WithFunction(const char* value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters of the function.</p>
     */
    inline const Aws::Vector<FunctionParameter>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Vector<FunctionParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Vector<FunctionParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline FunctionInvocationInput& WithParameters(const Aws::Vector<FunctionParameter>& value) { SetParameters(value); return *this;}
    inline FunctionInvocationInput& WithParameters(Aws::Vector<FunctionParameter>&& value) { SetParameters(std::move(value)); return *this;}
    inline FunctionInvocationInput& AddParameters(const FunctionParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }
    inline FunctionInvocationInput& AddParameters(FunctionParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    ActionInvocationType m_actionInvocationType;
    bool m_actionInvocationTypeHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::Vector<FunctionParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
