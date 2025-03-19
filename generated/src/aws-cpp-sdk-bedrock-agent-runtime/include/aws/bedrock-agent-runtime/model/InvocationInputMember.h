/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ApiInvocationInput.h>
#include <aws/bedrock-agent-runtime/model/FunctionInvocationInput.h>
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
   * <p>Contains details about the API operation or function that the agent predicts
   * should be called. </p> <p>This data type is used in the following API
   * operations:</p> <ul> <li> <p>In the <code>returnControl</code> field of the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationInputMember">AWS
   * API Reference</a></p>
   */
  class InvocationInputMember
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationInputMember() = default;
    AWS_BEDROCKAGENTRUNTIME_API InvocationInputMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationInputMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about the API operation that the agent predicts should
     * be called.</p>
     */
    inline const ApiInvocationInput& GetApiInvocationInput() const { return m_apiInvocationInput; }
    inline bool ApiInvocationInputHasBeenSet() const { return m_apiInvocationInputHasBeenSet; }
    template<typename ApiInvocationInputT = ApiInvocationInput>
    void SetApiInvocationInput(ApiInvocationInputT&& value) { m_apiInvocationInputHasBeenSet = true; m_apiInvocationInput = std::forward<ApiInvocationInputT>(value); }
    template<typename ApiInvocationInputT = ApiInvocationInput>
    InvocationInputMember& WithApiInvocationInput(ApiInvocationInputT&& value) { SetApiInvocationInput(std::forward<ApiInvocationInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the function that the agent predicts should be
     * called.</p>
     */
    inline const FunctionInvocationInput& GetFunctionInvocationInput() const { return m_functionInvocationInput; }
    inline bool FunctionInvocationInputHasBeenSet() const { return m_functionInvocationInputHasBeenSet; }
    template<typename FunctionInvocationInputT = FunctionInvocationInput>
    void SetFunctionInvocationInput(FunctionInvocationInputT&& value) { m_functionInvocationInputHasBeenSet = true; m_functionInvocationInput = std::forward<FunctionInvocationInputT>(value); }
    template<typename FunctionInvocationInputT = FunctionInvocationInput>
    InvocationInputMember& WithFunctionInvocationInput(FunctionInvocationInputT&& value) { SetFunctionInvocationInput(std::forward<FunctionInvocationInputT>(value)); return *this;}
    ///@}
  private:

    ApiInvocationInput m_apiInvocationInput;
    bool m_apiInvocationInputHasBeenSet = false;

    FunctionInvocationInput m_functionInvocationInput;
    bool m_functionInvocationInputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
