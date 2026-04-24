/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>A block of content in an assistant message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/AssistantMessageBlock">AWS
 * API Reference</a></p>
 */
class AssistantMessageBlock {
 public:
  AWS_DEVOPSAGENT_API AssistantMessageBlock() = default;
  AWS_DEVOPSAGENT_API AssistantMessageBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API AssistantMessageBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Text content from the assistant.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  AssistantMessageBlock& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tool use request from the assistant.</p>
   */
  inline Aws::Utils::DocumentView GetToolUse() const { return m_toolUse; }
  inline bool ToolUseHasBeenSet() const { return m_toolUseHasBeenSet; }
  template <typename ToolUseT = Aws::Utils::Document>
  void SetToolUse(ToolUseT&& value) {
    m_toolUseHasBeenSet = true;
    m_toolUse = std::forward<ToolUseT>(value);
  }
  template <typename ToolUseT = Aws::Utils::Document>
  AssistantMessageBlock& WithToolUse(ToolUseT&& value) {
    SetToolUse(std::forward<ToolUseT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  Aws::Utils::Document m_toolUse;
  bool m_textHasBeenSet = false;
  bool m_toolUseHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
