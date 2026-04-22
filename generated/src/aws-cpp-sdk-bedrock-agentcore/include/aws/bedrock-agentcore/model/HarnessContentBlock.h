/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessReasoningContentBlock.h>
#include <aws/bedrock-agentcore/model/HarnessToolResultBlock.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseBlock.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A content block within a message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlock">AWS
 * API Reference</a></p>
 */
class HarnessContentBlock {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlock() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Text content.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  HarnessContentBlock& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tool use request from the model.</p>
   */
  inline const HarnessToolUseBlock& GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = HarnessToolUseBlock>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = HarnessToolUseBlock>
  HarnessContentBlock& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tool execution result.</p>
   */
  inline const HarnessToolResultBlock& GetToolResult() const { return m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = HarnessToolResultBlock>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = std::forward<ToolResultT>(value);
  }
  template <typename ToolResultT = HarnessToolResultBlock>
  HarnessContentBlock& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model reasoning content.</p>
   */
  inline const HarnessReasoningContentBlock& GetReasoningContent() const { return m_reasoningContent; }
  inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
  template <typename ReasoningContentT = HarnessReasoningContentBlock>
  void SetReasoningContent(ReasoningContentT&& value) {
    m_reasoningContentHasBeenSet = true;
    m_reasoningContent = std::forward<ReasoningContentT>(value);
  }
  template <typename ReasoningContentT = HarnessReasoningContentBlock>
  HarnessContentBlock& WithReasoningContent(ReasoningContentT&& value) {
    SetReasoningContent(std::forward<ReasoningContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  HarnessToolUseBlock m_toolUse;

  HarnessToolResultBlock m_toolResult;

  HarnessReasoningContentBlock m_reasoningContent;
  bool m_textHasBeenSet = false;
  bool m_toolUseHasBeenSet = false;
  bool m_toolResultHasBeenSet = false;
  bool m_reasoningContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
