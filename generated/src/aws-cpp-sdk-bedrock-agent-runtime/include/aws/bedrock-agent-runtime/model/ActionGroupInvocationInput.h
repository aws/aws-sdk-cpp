/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ExecutionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/RequestBody.h>
#include <aws/bedrock-agent-runtime/model/Parameter.h>
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
   * <p>Contains information about the action group being invoked. For more
   * information about the possible structures, see the InvocationInput tab in <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/trace-orchestration.html">OrchestrationTrace</a>
   * in the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
   * Bedrock User Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ActionGroupInvocationInput">AWS
   * API Reference</a></p>
   */
  class ActionGroupInvocationInput
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput() = default;
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ActionGroupInvocationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the action group.</p>
     */
    inline const Aws::String& GetActionGroupName() const { return m_actionGroupName; }
    inline bool ActionGroupNameHasBeenSet() const { return m_actionGroupNameHasBeenSet; }
    template<typename ActionGroupNameT = Aws::String>
    void SetActionGroupName(ActionGroupNameT&& value) { m_actionGroupNameHasBeenSet = true; m_actionGroupName = std::forward<ActionGroupNameT>(value); }
    template<typename ActionGroupNameT = Aws::String>
    ActionGroupInvocationInput& WithActionGroupName(ActionGroupNameT&& value) { SetActionGroupName(std::forward<ActionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API to call, based off the action group.</p>
     */
    inline const Aws::String& GetApiPath() const { return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    template<typename ApiPathT = Aws::String>
    void SetApiPath(ApiPathT&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::forward<ApiPathT>(value); }
    template<typename ApiPathT = Aws::String>
    ActionGroupInvocationInput& WithApiPath(ApiPathT&& value) { SetApiPath(std::forward<ApiPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How fulfillment of the action is handled. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/action-handle.html">Handling
     * fulfillment of the action</a>.</p>
     */
    inline ExecutionType GetExecutionType() const { return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    inline void SetExecutionType(ExecutionType value) { m_executionTypeHasBeenSet = true; m_executionType = value; }
    inline ActionGroupInvocationInput& WithExecutionType(ExecutionType value) { SetExecutionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function in the action group to call.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    ActionGroupInvocationInput& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the invocation. Only returned if the
     * <code>executionType</code> is <code>RETURN_CONTROL</code>.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    ActionGroupInvocationInput& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters in the Lambda input event.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<Parameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<Parameter>>
    ActionGroupInvocationInput& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = Parameter>
    ActionGroupInvocationInput& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The parameters in the request body for the Lambda input event.</p>
     */
    inline const RequestBody& GetRequestBody() const { return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    template<typename RequestBodyT = RequestBody>
    void SetRequestBody(RequestBodyT&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::forward<RequestBodyT>(value); }
    template<typename RequestBodyT = RequestBody>
    ActionGroupInvocationInput& WithRequestBody(RequestBodyT&& value) { SetRequestBody(std::forward<RequestBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API method being used, based off the action group.</p>
     */
    inline const Aws::String& GetVerb() const { return m_verb; }
    inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }
    template<typename VerbT = Aws::String>
    void SetVerb(VerbT&& value) { m_verbHasBeenSet = true; m_verb = std::forward<VerbT>(value); }
    template<typename VerbT = Aws::String>
    ActionGroupInvocationInput& WithVerb(VerbT&& value) { SetVerb(std::forward<VerbT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroupName;
    bool m_actionGroupNameHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    ExecutionType m_executionType{ExecutionType::NOT_SET};
    bool m_executionTypeHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Vector<Parameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    RequestBody m_requestBody;
    bool m_requestBodyHasBeenSet = false;

    Aws::String m_verb;
    bool m_verbHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
