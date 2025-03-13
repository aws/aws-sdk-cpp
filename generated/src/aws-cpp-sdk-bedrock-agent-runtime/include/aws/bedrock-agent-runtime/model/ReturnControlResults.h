/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/InvocationResultMember.h>
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
   * <p>An action invocation result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ReturnControlResults">AWS
   * API Reference</a></p>
   */
  class ReturnControlResults
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlResults() = default;
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API ReturnControlResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action's invocation ID.</p>
     */
    inline const Aws::String& GetInvocationId() const { return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    template<typename InvocationIdT = Aws::String>
    void SetInvocationId(InvocationIdT&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::forward<InvocationIdT>(value); }
    template<typename InvocationIdT = Aws::String>
    ReturnControlResults& WithInvocationId(InvocationIdT&& value) { SetInvocationId(std::forward<InvocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action invocation result.</p>
     */
    inline const Aws::Vector<InvocationResultMember>& GetReturnControlInvocationResults() const { return m_returnControlInvocationResults; }
    inline bool ReturnControlInvocationResultsHasBeenSet() const { return m_returnControlInvocationResultsHasBeenSet; }
    template<typename ReturnControlInvocationResultsT = Aws::Vector<InvocationResultMember>>
    void SetReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults = std::forward<ReturnControlInvocationResultsT>(value); }
    template<typename ReturnControlInvocationResultsT = Aws::Vector<InvocationResultMember>>
    ReturnControlResults& WithReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { SetReturnControlInvocationResults(std::forward<ReturnControlInvocationResultsT>(value)); return *this;}
    template<typename ReturnControlInvocationResultsT = InvocationResultMember>
    ReturnControlResults& AddReturnControlInvocationResults(ReturnControlInvocationResultsT&& value) { m_returnControlInvocationResultsHasBeenSet = true; m_returnControlInvocationResults.emplace_back(std::forward<ReturnControlInvocationResultsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::Vector<InvocationResultMember> m_returnControlInvocationResults;
    bool m_returnControlInvocationResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
