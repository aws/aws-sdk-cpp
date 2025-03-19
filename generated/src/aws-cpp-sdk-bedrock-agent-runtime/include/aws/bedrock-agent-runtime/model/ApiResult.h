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
   * <p>Contains information about the API operation that was called from the action
   * group and the response body that was returned.</p> <p>This data type is used in
   * the following API operations:</p> <ul> <li> <p>In the
   * <code>returnControlInvocationResults</code> of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_RequestSyntax">InvokeAgent
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ApiResult">AWS
   * API Reference</a></p>
   */
  class ApiResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ApiResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API ApiResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ApiResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the API operation belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const { return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    template<typename ActionGroupT = Aws::String>
    void SetActionGroup(ActionGroupT&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::forward<ActionGroupT>(value); }
    template<typename ActionGroupT = Aws::String>
    ApiResult& WithActionGroup(ActionGroupT&& value) { SetActionGroup(std::forward<ActionGroupT>(value)); return *this;}
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
    ApiResult& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API operation.</p>
     */
    inline const Aws::String& GetApiPath() const { return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    template<typename ApiPathT = Aws::String>
    void SetApiPath(ApiPathT&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::forward<ApiPathT>(value); }
    template<typename ApiPathT = Aws::String>
    ApiResult& WithApiPath(ApiPathT&& value) { SetApiPath(std::forward<ApiPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls the API operations or functions to invoke based on the user
     * confirmation.</p>
     */
    inline ConfirmationState GetConfirmationState() const { return m_confirmationState; }
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }
    inline void SetConfirmationState(ConfirmationState value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }
    inline ApiResult& WithConfirmationState(ConfirmationState value) { SetConfirmationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method for the API operation.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    ApiResult& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>http status code from API execution response (for example: 200, 400,
     * 500).</p>
     */
    inline int GetHttpStatusCode() const { return m_httpStatusCode; }
    inline bool HttpStatusCodeHasBeenSet() const { return m_httpStatusCodeHasBeenSet; }
    inline void SetHttpStatusCode(int value) { m_httpStatusCodeHasBeenSet = true; m_httpStatusCode = value; }
    inline ApiResult& WithHttpStatusCode(int value) { SetHttpStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response body from the API operation. The key of the object is the
     * content type (currently, only <code>TEXT</code> is supported). The response may
     * be returned directly or from the Lambda function.</p>
     */
    inline const Aws::Map<Aws::String, ContentBody>& GetResponseBody() const { return m_responseBody; }
    inline bool ResponseBodyHasBeenSet() const { return m_responseBodyHasBeenSet; }
    template<typename ResponseBodyT = Aws::Map<Aws::String, ContentBody>>
    void SetResponseBody(ResponseBodyT&& value) { m_responseBodyHasBeenSet = true; m_responseBody = std::forward<ResponseBodyT>(value); }
    template<typename ResponseBodyT = Aws::Map<Aws::String, ContentBody>>
    ApiResult& WithResponseBody(ResponseBodyT&& value) { SetResponseBody(std::forward<ResponseBodyT>(value)); return *this;}
    template<typename ResponseBodyKeyT = Aws::String, typename ResponseBodyValueT = ContentBody>
    ApiResult& AddResponseBody(ResponseBodyKeyT&& key, ResponseBodyValueT&& value) {
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
    inline ApiResult& WithResponseState(ResponseState value) { SetResponseState(value); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    ConfirmationState m_confirmationState{ConfirmationState::NOT_SET};
    bool m_confirmationStateHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    int m_httpStatusCode{0};
    bool m_httpStatusCodeHasBeenSet = false;

    Aws::Map<Aws::String, ContentBody> m_responseBody;
    bool m_responseBodyHasBeenSet = false;

    ResponseState m_responseState{ResponseState::NOT_SET};
    bool m_responseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
