/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ToolResultContentBlock.h>
#include <aws/bedrock-runtime/model/ToolResultStatus.h>
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
namespace BedrockRuntime {
namespace Model {

/**
 * <p>A tool result block that contains the results for a tool request that the
 * model previously made. For more information, see <a
 * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Call a
 * tool with the Converse API</a> in the Amazon Bedrock User Guide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolResultBlock">AWS
 * API Reference</a></p>
 */
class ToolResultBlock {
 public:
  AWS_BEDROCKRUNTIME_API ToolResultBlock() = default;
  AWS_BEDROCKRUNTIME_API ToolResultBlock(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolResultBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the tool request that this is the result for. </p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  ToolResultBlock& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content for tool result content block.</p>
   */
  inline const Aws::Vector<ToolResultContentBlock>& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Vector<ToolResultContentBlock>>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Vector<ToolResultContentBlock>>
  ToolResultBlock& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  template <typename ContentT = ToolResultContentBlock>
  ToolResultBlock& AddContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content.emplace_back(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status for the tool result content block.</p>  <p>This field is
   * only supported by Amazon Nova and Anthropic Claude 3 and 4 models.</p>
   */
  inline ToolResultStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ToolResultStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ToolResultBlock& WithStatus(ToolResultStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type for the tool result content block.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ToolResultBlock& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::Vector<ToolResultContentBlock> m_content;

  ToolResultStatus m_status{ToolResultStatus::NOT_SET};

  Aws::String m_type;
  bool m_toolUseIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
