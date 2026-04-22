/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessToolResultBlockStart.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseBlockStart.h>

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
 * <p>The start payload for a content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessContentBlockStart">AWS
 * API Reference</a></p>
 */
class HarnessContentBlockStart {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStart() = default;
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessContentBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Start of a tool use content block.</p>
   */
  inline const HarnessToolUseBlockStart& GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = HarnessToolUseBlockStart>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = HarnessToolUseBlockStart>
  HarnessContentBlockStart& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Start of a tool result content block.</p>
   */
  inline const HarnessToolResultBlockStart& GetToolResult() const { return m_toolResult; }
  inline bool ToolResultHasBeenSet() const { return m_toolResultHasBeenSet; }
  template <typename ToolResultT = HarnessToolResultBlockStart>
  void SetToolResult(ToolResultT&& value) {
    m_toolResultHasBeenSet = true;
    m_toolResult = std::forward<ToolResultT>(value);
  }
  template <typename ToolResultT = HarnessToolResultBlockStart>
  HarnessContentBlockStart& WithToolResult(ToolResultT&& value) {
    SetToolResult(std::forward<ToolResultT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessToolUseBlockStart m_toolUse;

  HarnessToolResultBlockStart m_toolResult;
  bool m_toolUseHasBeenSet = false;
  bool m_toolResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
