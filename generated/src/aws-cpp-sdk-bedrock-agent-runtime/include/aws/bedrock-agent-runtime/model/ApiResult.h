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
    AWS_BEDROCKAGENTRUNTIME_API ApiResult();
    AWS_BEDROCKAGENTRUNTIME_API ApiResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ApiResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action group that the API operation belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const{ return m_actionGroup; }
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }
    inline void SetActionGroup(const Aws::String& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }
    inline void SetActionGroup(Aws::String&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }
    inline void SetActionGroup(const char* value) { m_actionGroupHasBeenSet = true; m_actionGroup.assign(value); }
    inline ApiResult& WithActionGroup(const Aws::String& value) { SetActionGroup(value); return *this;}
    inline ApiResult& WithActionGroup(Aws::String&& value) { SetActionGroup(std::move(value)); return *this;}
    inline ApiResult& WithActionGroup(const char* value) { SetActionGroup(value); return *this;}
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
    inline ApiResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline ApiResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline ApiResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the API operation.</p>
     */
    inline const Aws::String& GetApiPath() const{ return m_apiPath; }
    inline bool ApiPathHasBeenSet() const { return m_apiPathHasBeenSet; }
    inline void SetApiPath(const Aws::String& value) { m_apiPathHasBeenSet = true; m_apiPath = value; }
    inline void SetApiPath(Aws::String&& value) { m_apiPathHasBeenSet = true; m_apiPath = std::move(value); }
    inline void SetApiPath(const char* value) { m_apiPathHasBeenSet = true; m_apiPath.assign(value); }
    inline ApiResult& WithApiPath(const Aws::String& value) { SetApiPath(value); return *this;}
    inline ApiResult& WithApiPath(Aws::String&& value) { SetApiPath(std::move(value)); return *this;}
    inline ApiResult& WithApiPath(const char* value) { SetApiPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Controls the API operations or functions to invoke based on the user
     * confirmation.</p>
     */
    inline const ConfirmationState& GetConfirmationState() const{ return m_confirmationState; }
    inline bool ConfirmationStateHasBeenSet() const { return m_confirmationStateHasBeenSet; }
    inline void SetConfirmationState(const ConfirmationState& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = value; }
    inline void SetConfirmationState(ConfirmationState&& value) { m_confirmationStateHasBeenSet = true; m_confirmationState = std::move(value); }
    inline ApiResult& WithConfirmationState(const ConfirmationState& value) { SetConfirmationState(value); return *this;}
    inline ApiResult& WithConfirmationState(ConfirmationState&& value) { SetConfirmationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP method for the API operation.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline ApiResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline ApiResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline ApiResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>http status code from API execution response (for example: 200, 400,
     * 500).</p>
     */
    inline int GetHttpStatusCode() const{ return m_httpStatusCode; }
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
    inline const Aws::Map<Aws::String, ContentBody>& GetResponseBody() const{ return m_responseBody; }
    inline bool ResponseBodyHasBeenSet() const { return m_responseBodyHasBeenSet; }
    inline void SetResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { m_responseBodyHasBeenSet = true; m_responseBody = value; }
    inline void SetResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { m_responseBodyHasBeenSet = true; m_responseBody = std::move(value); }
    inline ApiResult& WithResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { SetResponseBody(value); return *this;}
    inline ApiResult& WithResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { SetResponseBody(std::move(value)); return *this;}
    inline ApiResult& AddResponseBody(const Aws::String& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }
    inline ApiResult& AddResponseBody(Aws::String&& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), value); return *this; }
    inline ApiResult& AddResponseBody(const Aws::String& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }
    inline ApiResult& AddResponseBody(Aws::String&& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), std::move(value)); return *this; }
    inline ApiResult& AddResponseBody(const char* key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }
    inline ApiResult& AddResponseBody(const char* key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }
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
    inline ApiResult& WithResponseState(const ResponseState& value) { SetResponseState(value); return *this;}
    inline ApiResult& WithResponseState(ResponseState&& value) { SetResponseState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_apiPath;
    bool m_apiPathHasBeenSet = false;

    ConfirmationState m_confirmationState;
    bool m_confirmationStateHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    int m_httpStatusCode;
    bool m_httpStatusCodeHasBeenSet = false;

    Aws::Map<Aws::String, ContentBody> m_responseBody;
    bool m_responseBodyHasBeenSet = false;

    ResponseState m_responseState;
    bool m_responseStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
