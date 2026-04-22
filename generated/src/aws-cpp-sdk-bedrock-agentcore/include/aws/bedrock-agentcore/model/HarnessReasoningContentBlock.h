/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessReasoningTextBlock.h>
#include <aws/core/utils/Array.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Reasoning content from the model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessReasoningContentBlock">AWS
 * API Reference</a></p>
 */
class HarnessReasoningContentBlock {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlock() = default;
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessReasoningContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reasoning text.</p>
   */
  inline const HarnessReasoningTextBlock& GetReasoningText() const { return m_reasoningText; }
  inline bool ReasoningTextHasBeenSet() const { return m_reasoningTextHasBeenSet; }
  template <typename ReasoningTextT = HarnessReasoningTextBlock>
  void SetReasoningText(ReasoningTextT&& value) {
    m_reasoningTextHasBeenSet = true;
    m_reasoningText = std::forward<ReasoningTextT>(value);
  }
  template <typename ReasoningTextT = HarnessReasoningTextBlock>
  HarnessReasoningContentBlock& WithReasoningText(ReasoningTextT&& value) {
    SetReasoningText(std::forward<ReasoningTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Redacted reasoning content.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetRedactedContent() const { return m_redactedContent; }
  inline bool RedactedContentHasBeenSet() const { return m_redactedContentHasBeenSet; }
  template <typename RedactedContentT = Aws::Utils::ByteBuffer>
  void SetRedactedContent(RedactedContentT&& value) {
    m_redactedContentHasBeenSet = true;
    m_redactedContent = std::forward<RedactedContentT>(value);
  }
  template <typename RedactedContentT = Aws::Utils::ByteBuffer>
  HarnessReasoningContentBlock& WithRedactedContent(RedactedContentT&& value) {
    SetRedactedContent(std::forward<RedactedContentT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessReasoningTextBlock m_reasoningText;

  Aws::Utils::ByteBuffer m_redactedContent{};
  bool m_reasoningTextHasBeenSet = false;
  bool m_redactedContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
