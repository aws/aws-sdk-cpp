/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseStatus.h>
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
 * <p>Start payload for a tool result content block.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolResultBlockStart">AWS
 * API Reference</a></p>
 */
class HarnessToolResultBlockStart {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlockStart() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tool use ID that this result corresponds to.</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  HarnessToolResultBlockStart& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the tool execution.</p>
   */
  inline HarnessToolUseStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HarnessToolUseStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline HarnessToolResultBlockStart& WithStatus(HarnessToolUseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  HarnessToolUseStatus m_status{HarnessToolUseStatus::NOT_SET};
  bool m_toolUseIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
