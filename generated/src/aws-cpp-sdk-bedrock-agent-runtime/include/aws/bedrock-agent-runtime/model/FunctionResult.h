/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/ConfirmationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent-runtime/model/ResponseState.h>
#include <aws/bedrock-agent-runtime/model/ContentBody.h>
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
   * <p>Contains information about the function that was called from the action group
   * and the response that was returned.</p> <p>This data type is used in the
   * following API operations:</p> <ul> <li> <p>In the
   * <code>returnControlInvocationResults</code> of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_RequestSyntax">InvokeAgent
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FunctionResult">AWS
   * API Reference</a></p>
   */
  class FunctionResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    FunctionResult& WithActionGroup(ActionGroupT&& value) { SetActionGroup(std::forward<ActionGroupT>(value)); return *this;}
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
    FunctionResult& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the user confirmation information about the function that was
     * called.</p>
     */
    inline ConfirmationState GetConfirmationState() const { return m_confirmationState; }
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }
    inline void SetConfirmationState(ConfirmationState value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }
    inline FunctionResult& WithConfirmationState(ConfirmationState value) { SetConfirmationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the function that was called.</p>
     */
    inline const Aws::String& GetFunction() const { return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    template<typename FunctionT = Aws::String>
    void SetFunction(FunctionT&& value) { m_functionHasBeenSet = true; m_function = std::forward<FunctionT>(value); }
    template<typename FunctionT = Aws::String>
    FunctionResult& WithFunction(FunctionT&& value) { SetFunction(std::forward<FunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response from the function call using the parameters. The response might
     * be returned directly or from the Lambda function. Specify <code>TEXT</code> or
     * <code>IMAGES</code>. The key of the object is the content type. You can only
     * specify one type. If you specify <code>IMAGES</code>, you can specify only one
     * image. You can specify images only when the function in the
     * <code>returnControlInvocationResults</code> is a computer use action. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agent-computer-use.html">Configure
     * an Amazon Bedrock Agent to complete tasks with computer use tools</a>.</p>
     */
    inline const Aws::Map<Aws::String, ContentBody>& GetResponseBody() const { return m_responseBody; }
    inline bool ResponseBodyHasBeenSet() const { return m_responseBodyHasBeenSet; }
    template<typename ResponseBodyT = Aws::Map<Aws::String, ContentBody>>
    void SetResponseBody(ResponseBodyT&& value) { m_responseBodyHasBeenSet = true; m_responseBody = std::forward<ResponseBodyT>(value); }
    template<typename ResponseBodyT = Aws::Map<Aws::String, ContentBody>>
    FunctionResult& WithResponseBody(ResponseBodyT&& value) { SetResponseBody(std::forward<ResponseBodyT>(value)); return *this;}
    template<typename ResponseBodyKeyT = Aws::String, typename ResponseBodyValueT = ContentBody>
    FunctionResult& AddResponseBody(ResponseBodyKeyT&& key, ResponseBodyValueT&& value) {
      m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::forward<ResponseBodyKeyT>(key), std::forward<ResponseBodyValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline ResponseState GetResponseState() const { return m_responseState; }
    inline bool ResponseStateHasBeenSet() const { return m_responseStateHasBeenSet; }
    inline void SetResponseState(ResponseState value) { m_responseStateHasBeenSet = true; m_responseState = value; }
    inline FunctionResult& WithResponseState(ResponseState value) { SetResponseState(value); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    ConfirmationState m_confirmationState{ConfirmationState::NOT_SET};
    bool m_confirmationStateHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::Map<Aws::String, ContentBody> m_responseBody;
    bool m_responseBodyHasBeenSet = false;

    ResponseState m_responseState{ResponseState::NOT_SET};
    bool m_responseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
