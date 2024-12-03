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
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult();
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline FunctionResult& WithActionGroup(const Aws::String& value) { SetActionGroup(value); return *this;}
    inline FunctionResult& WithActionGroup(Aws::String&& value) { SetActionGroup(std::move(value)); return *this;}
    inline FunctionResult& WithActionGroup(const char* value) { SetActionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agent's ID.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline FunctionResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline FunctionResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline FunctionResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the user confirmation information about the function that was
     * called.</p>
     */
    inline const ConfirmationState& GetConfirmationState() const{ return m_confirmationState; }
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }
    inline void SetConfirmationState(const ConfirmationState& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }
    inline void SetConfirmationState(ConfirmationState&& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = std::move(value); }
    inline FunctionResult& WithConfirmationState(const ConfirmationState& value) { SetConfirmationState(value); return *this;}
    inline FunctionResult& WithConfirmationState(ConfirmationState&& value) { SetConfirmationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the function that was called.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }
    inline FunctionResult& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}
    inline FunctionResult& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}
    inline FunctionResult& WithFunction(const char* value) { SetFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline const Aws::Map<Aws::String, ContentBody>& GetResponseBody() const{ return m_responseBody; }
    inline bool ResponseBodyHasBeenSet() const { return m_responseBodyHasBeenSet; }
    inline void SetResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { m_responseBodyHasBeenSet = true; m_responseBody = value; }
    inline void SetResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { m_responseBodyHasBeenSet = true; m_responseBody = std::move(value); }
    inline FunctionResult& WithResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { SetResponseBody(value); return *this;}
    inline FunctionResult& WithResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { SetResponseBody(std::move(value)); return *this;}
    inline FunctionResult& AddResponseBody(const Aws::String& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }
    inline FunctionResult& AddResponseBody(Aws::String&& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), value); return *this; }
    inline FunctionResult& AddResponseBody(const Aws::String& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }
    inline FunctionResult& AddResponseBody(Aws::String&& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), std::move(value)); return *this; }
    inline FunctionResult& AddResponseBody(const char* key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }
    inline FunctionResult& AddResponseBody(const char* key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline const ResponseState& GetResponseState() const{ return m_responseState; }
    inline bool ResponseStateHasBeenSet() const { return m_responseStateHasBeenSet; }
    inline void SetResponseState(const ResponseState& value) { m_responseStateHasBeenSet = true; m_responseState = value; }
    inline void SetResponseState(ResponseState&& value) { m_responseStateHasBeenSet = true; m_responseState = std::move(value); }
    inline FunctionResult& WithResponseState(const ResponseState& value) { SetResponseState(value); return *this;}
    inline FunctionResult& WithResponseState(ResponseState&& value) { SetResponseState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    ConfirmationState m_confirmationState;
    bool m_confirmationStateHasBeenSet = false;

    Aws::String m_function;
    bool m_functionHasBeenSet = false;

    Aws::Map<Aws::String, ContentBody> m_responseBody;
    bool m_responseBodyHasBeenSet = false;

    ResponseState m_responseState;
    bool m_responseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
