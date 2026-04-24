/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessReasoningContentBlockDelta.h>
#include <aws/bedrock-agentcore/model/HarnessToolResultBlockDelta.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseBlockDelta.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A delta update to a content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlockDelta">AWS
 * API Reference</a></p>
 */
class HarnessContentBlockDelta {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDelta() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDelta(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockDelta& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A text delta.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  HarnessContentBlockDelta& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tool use input delta.</p>
   */
  inline const HarnessToolUseBlockDelta& GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = HarnessToolUseBlockDelta>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = HarnessToolUseBlockDelta>
  HarnessContentBlockDelta& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A tool result delta.</p>
   */
  inline const Aws::Vector<HarnessToolResultBlockDelta>& GetToolResult() const { return m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = Aws::Vector<HarnessToolResultBlockDelta>>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = std::forward<ToolResultT>(value);
  }
  template <typename ToolResultT = Aws::Vector<HarnessToolResultBlockDelta>>
  HarnessContentBlockDelta& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  template <typename ToolResultT = HarnessToolResultBlockDelta>
  HarnessContentBlockDelta& AddToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult.emplace_back(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reasoning content delta.</p>
   */
  inline const HarnessReasoningContentBlockDelta& GetReasoningContent() const { return m_reasoningContent; }
  inline bool ReasoningContentHasBeenSet() const { return m_reasoningContentHasBeenSet; }
  template <typename ReasoningContentT = HarnessReasoningContentBlockDelta>
  void SetReasoningContent(ReasoningContentT&& value) {
    m_reasoningContentHasBeenSet = true;
    m_reasoningContent = std::forward<ReasoningContentT>(value);
  }
  template <typename ReasoningContentT = HarnessReasoningContentBlockDelta>
  HarnessContentBlockDelta& WithReasoningContent(ReasoningContentT&& value) {
    SetReasoningContent(std::forward<ReasoningContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  HarnessToolUseBlockDelta m_toolUse;

  Aws::Vector<HarnessToolResultBlockDelta> m_toolResult;

  HarnessReasoningContentBlockDelta m_reasoningContent;
  bool m_textHasBeenSet = false;
  bool m_toolUseHasBeenSet = false;
  bool m_toolResultHasBeenSet = false;
  bool m_reasoningContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
