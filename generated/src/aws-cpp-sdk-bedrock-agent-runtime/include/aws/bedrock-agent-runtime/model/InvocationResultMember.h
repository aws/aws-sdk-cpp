/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ApiResult.h>
#include <aws/bedrock-agent-runtime/model/FunctionResult.h>
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
   * <p>A result from the invocation of an action. For more information, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-returncontrol.html">Return
   * control to the agent developer</a> and <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/agents-session-state.html">Control
   * session context</a>.</p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_RequestSyntax">InvokeAgent
   * request</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationResultMember">AWS
   * API Reference</a></p>
   */
  class InvocationResultMember
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationResultMember();
    AWS_BEDROCKAGENTRUNTIME_API InvocationResultMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationResultMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline const ApiResult& GetApiResult() const{ return m_apiResult; }

    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline bool ApiResultHasBeenSet() const { return m_apiResultHasBeenSet; }

    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline void SetApiResult(const ApiResult& value) { m_apiResultHasBeenSet = true; m_apiResult = value; }

    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline void SetApiResult(ApiResult&& value) { m_apiResultHasBeenSet = true; m_apiResult = std::move(value); }

    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline InvocationResultMember& WithApiResult(const ApiResult& value) { SetApiResult(value); return *this;}

    /**
     * <p>The result from the API response from the action group invocation.</p>
     */
    inline InvocationResultMember& WithApiResult(ApiResult&& value) { SetApiResult(std::move(value)); return *this;}


    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline const FunctionResult& GetFunctionResult() const{ return m_functionResult; }

    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline bool FunctionResultHasBeenSet() const { return m_functionResultHasBeenSet; }

    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline void SetFunctionResult(const FunctionResult& value) { m_functionResultHasBeenSet = true; m_functionResult = value; }

    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline void SetFunctionResult(FunctionResult&& value) { m_functionResultHasBeenSet = true; m_functionResult = std::move(value); }

    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline InvocationResultMember& WithFunctionResult(const FunctionResult& value) { SetFunctionResult(value); return *this;}

    /**
     * <p>The result from the function from the action group invocation.</p>
     */
    inline InvocationResultMember& WithFunctionResult(FunctionResult&& value) { SetFunctionResult(std::move(value)); return *this;}

  private:

    ApiResult m_apiResult;
    bool m_apiResultHasBeenSet = false;

    FunctionResult m_functionResult;
    bool m_functionResultHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
