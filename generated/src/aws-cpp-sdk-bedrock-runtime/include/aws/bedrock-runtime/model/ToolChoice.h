/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/AnyToolChoice.h>
#include <aws/bedrock-runtime/model/AutoToolChoice.h>
#include <aws/bedrock-runtime/model/SpecificToolChoice.h>

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
 * <p>Determines which tools the model should request in a call to
 * <code>Converse</code> or <code>ConverseStream</code>. For more information, see
 * <a
 * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tool-use.html">Call a
 * tool with the Converse API</a> in the Amazon Bedrock User Guide.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ToolChoice">AWS
 * API Reference</a></p>
 */
class ToolChoice {
 public:
  AWS_BEDROCKRUNTIME_API ToolChoice() = default;
  AWS_BEDROCKRUNTIME_API ToolChoice(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API ToolChoice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>(Default). The Model automatically decides if a tool should be called or
   * whether to generate text instead. </p>
   */
  inline const AutoToolChoice& GetAuto() const { return m_auto; }
  inline bool AutoHasBeenSet() const { return m_autoHasBeenSet; }
  template <typename AutoT = AutoToolChoice>
  void SetAuto(AutoT&& value) {
    m_autoHasBeenSet = true;
    m_auto = std::forward<AutoT>(value);
  }
  template <typename AutoT = AutoToolChoice>
  ToolChoice& WithAuto(AutoT&& value) {
    SetAuto(std::forward<AutoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model must request at least one tool (no text is generated).</p>
   */
  inline const AnyToolChoice& GetAny() const { return m_any; }
  inline bool AnyHasBeenSet() const { return m_anyHasBeenSet; }
  template <typename AnyT = AnyToolChoice>
  void SetAny(AnyT&& value) {
    m_anyHasBeenSet = true;
    m_any = std::forward<AnyT>(value);
  }
  template <typename AnyT = AnyToolChoice>
  ToolChoice& WithAny(AnyT&& value) {
    SetAny(std::forward<AnyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Model must request the specified tool. Only supported by Anthropic Claude
   * 3 and Amazon Nova models. </p>
   */
  inline const SpecificToolChoice& GetTool() const { return m_tool; }
  inline bool ToolHasBeenSet() const { return m_toolHasBeenSet; }
  template <typename ToolT = SpecificToolChoice>
  void SetTool(ToolT&& value) {
    m_toolHasBeenSet = true;
    m_tool = std::forward<ToolT>(value);
  }
  template <typename ToolT = SpecificToolChoice>
  ToolChoice& WithTool(ToolT&& value) {
    SetTool(std::forward<ToolT>(value));
    return *this;
  }
  ///@}
 private:
  AutoToolChoice m_auto;

  AnyToolChoice m_any;

  SpecificToolChoice m_tool;
  bool m_autoHasBeenSet = false;
  bool m_anyHasBeenSet = false;
  bool m_toolHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
