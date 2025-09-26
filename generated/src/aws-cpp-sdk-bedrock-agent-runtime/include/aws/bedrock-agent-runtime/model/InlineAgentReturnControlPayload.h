/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/InvocationInputMember.h>
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
   * <p>Contains information to return from the action group that the agent has
   * predicted to invoke.</p> <p>This data type is used in the <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent-runtime_InvokeAgent.html#API_agent-runtime_InvokeAgent_ResponseSyntax">InvokeAgent
   * response</a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InlineAgentReturnControlPayload">AWS
   * API Reference</a></p>
   */
  class InlineAgentReturnControlPayload
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentReturnControlPayload() = default;
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentReturnControlPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InlineAgentReturnControlPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of objects that contain information about the parameters and inputs
     * that need to be sent into the API operation or function, based on what the agent
     * determines from its session with the user.</p>
     */
    inline const Aws::Vector<InvocationInputMember>& GetInvocationInputs() const { return m_invocationInputs; }
    inline bool InvocationInputsHasBeenSet() const { return m_invocationInputsHasBeenSet; }
    template<typename InvocationInputsT = Aws::Vector<InvocationInputMember>>
    void SetInvocationInputs(InvocationInputsT&& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs = std::forward<InvocationInputsT>(value); }
    template<typename InvocationInputsT = Aws::Vector<InvocationInputMember>>
    InlineAgentReturnControlPayload& WithInvocationInputs(InvocationInputsT&& value) { SetInvocationInputs(std::forward<InvocationInputsT>(value)); return *this;}
    template<typename InvocationInputsT = InvocationInputMember>
    InlineAgentReturnControlPayload& AddInvocationInputs(InvocationInputsT&& value) { m_invocationInputsHasBeenSet = true; m_invocationInputs.emplace_back(std::forward<InvocationInputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the action group invocation. </p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    InlineAgentReturnControlPayload& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvocationInputMember> m_invocationInputs;
    bool m_invocationInputsHasBeenSet = false;

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
