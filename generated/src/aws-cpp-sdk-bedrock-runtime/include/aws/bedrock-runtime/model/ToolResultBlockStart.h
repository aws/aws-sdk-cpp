/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/ToolResultStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The start of a tool result block. For more information, see <a
 * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Call a
 * tool with the Converse API</a> in the Amazon Bedrock User Guide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolResultBlockStart">AWS
 * API Reference</a></p>
 */
class ToolResultBlockStart {
 public:
  AWS_BEDROCKRUNTIME_API ToolResultBlockStart() = default;
  AWS_BEDROCKRUNTIME_API ToolResultBlockStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolResultBlockStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the tool that was used to generate this tool result block.</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  ToolResultBlockStart& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type for the tool that was used to generate this tool result block.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ToolResultBlockStart& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the tool result block.</p>
   */
  inline ToolResultStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ToolResultStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ToolResultBlockStart& WithStatus(ToolResultStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::String m_type;

  ToolResultStatus m_status{ToolResultStatus::NOT_SET};
  bool m_toolUseIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
