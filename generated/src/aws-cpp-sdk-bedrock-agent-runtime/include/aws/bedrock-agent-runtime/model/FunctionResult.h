/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline const Aws::String& GetActionGroup() const{ return m_actionGroup; }

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline bool ActionGroupHasBeenSet() const { return m_actionGroupHasBeenSet; }

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline void SetActionGroup(const Aws::String& value) { m_actionGroupHasBeenSet = true; m_actionGroup = value; }

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline void SetActionGroup(Aws::String&& value) { m_actionGroupHasBeenSet = true; m_actionGroup = std::move(value); }

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline void SetActionGroup(const char* value) { m_actionGroupHasBeenSet = true; m_actionGroup.assign(value); }

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline FunctionResult& WithActionGroup(const Aws::String& value) { SetActionGroup(value); return *this;}

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline FunctionResult& WithActionGroup(Aws::String&& value) { SetActionGroup(std::move(value)); return *this;}

    /**
     * <p>The action group that the function belongs to.</p>
     */
    inline FunctionResult& WithActionGroup(const char* value) { SetActionGroup(value); return *this;}


    /**
     * <p>The name of the function that was called.</p>
     */
    inline const Aws::String& GetFunction() const{ return m_function; }

    /**
     * <p>The name of the function that was called.</p>
     */
    inline bool FunctionHasBeenSet() const { return m_functionHasBeenSet; }

    /**
     * <p>The name of the function that was called.</p>
     */
    inline void SetFunction(const Aws::String& value) { m_functionHasBeenSet = true; m_function = value; }

    /**
     * <p>The name of the function that was called.</p>
     */
    inline void SetFunction(Aws::String&& value) { m_functionHasBeenSet = true; m_function = std::move(value); }

    /**
     * <p>The name of the function that was called.</p>
     */
    inline void SetFunction(const char* value) { m_functionHasBeenSet = true; m_function.assign(value); }

    /**
     * <p>The name of the function that was called.</p>
     */
    inline FunctionResult& WithFunction(const Aws::String& value) { SetFunction(value); return *this;}

    /**
     * <p>The name of the function that was called.</p>
     */
    inline FunctionResult& WithFunction(Aws::String&& value) { SetFunction(std::move(value)); return *this;}

    /**
     * <p>The name of the function that was called.</p>
     */
    inline FunctionResult& WithFunction(const char* value) { SetFunction(value); return *this;}


    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline const Aws::Map<Aws::String, ContentBody>& GetResponseBody() const{ return m_responseBody; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline bool ResponseBodyHasBeenSet() const { return m_responseBodyHasBeenSet; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline void SetResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { m_responseBodyHasBeenSet = true; m_responseBody = value; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline void SetResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { m_responseBodyHasBeenSet = true; m_responseBody = std::move(value); }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& WithResponseBody(const Aws::Map<Aws::String, ContentBody>& value) { SetResponseBody(value); return *this;}

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& WithResponseBody(Aws::Map<Aws::String, ContentBody>&& value) { SetResponseBody(std::move(value)); return *this;}

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(const Aws::String& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(Aws::String&& key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(const Aws::String& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(Aws::String&& key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(const char* key, ContentBody&& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response from the function call using the parameters. The key of the
     * object is the content type (currently, only <code>TEXT</code> is supported). The
     * response may be returned directly or from the Lambda function.</p>
     */
    inline FunctionResult& AddResponseBody(const char* key, const ContentBody& value) { m_responseBodyHasBeenSet = true; m_responseBody.emplace(key, value); return *this; }


    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline const ResponseState& GetResponseState() const{ return m_responseState; }

    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline bool ResponseStateHasBeenSet() const { return m_responseStateHasBeenSet; }

    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline void SetResponseState(const ResponseState& value) { m_responseStateHasBeenSet = true; m_responseState = value; }

    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline void SetResponseState(ResponseState&& value) { m_responseStateHasBeenSet = true; m_responseState = std::move(value); }

    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline FunctionResult& WithResponseState(const ResponseState& value) { SetResponseState(value); return *this;}

    /**
     * <p>Controls the final response state returned to end user when API/Function
     * execution failed. When this state is FAILURE, the request would fail with
     * dependency failure exception. When this state is REPROMPT, the API/function
     * response will be sent to model for re-prompt</p>
     */
    inline FunctionResult& WithResponseState(ResponseState&& value) { SetResponseState(std::move(value)); return *this;}

  private:

    Aws::String m_actionGroup;
    bool m_actionGroupHasBeenSet = false;

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
