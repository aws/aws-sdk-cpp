/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessToolResultContentBlock.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseStatus.h>
#include <aws/bedrock-agentcore/model/HarnessToolUseType.h>
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
 * <p>The result of a tool execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessToolResultBlock">AWS
 * API Reference</a></p>
 */
class HarnessToolResultBlock {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlock() = default;
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessToolResultBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  HarnessToolResultBlock& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the tool result.</p>
   */
  inline const Aws::Vector<HarnessToolResultContentBlock>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<HarnessToolResultContentBlock>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<HarnessToolResultContentBlock>>
  HarnessToolResultBlock& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = HarnessToolResultContentBlock>
  HarnessToolResultBlock& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
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
  inline HarnessToolResultBlock& WithStatus(HarnessToolUseStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of tool use that produced this result.</p>
   */
  inline HarnessToolUseType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(HarnessToolUseType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HarnessToolResultBlock& WithType(HarnessToolUseType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::Vector<HarnessToolResultContentBlock> m_content;

  HarnessToolUseStatus m_status{HarnessToolUseStatus::NOT_SET};

  HarnessToolUseType m_type{HarnessToolUseType::NOT_SET};
  bool m_toolUseIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
