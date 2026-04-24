/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/OutputFormat.h>

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
 * <p>Output configuration for a model response in a call to <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>
 * or <a
 * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_ConverseStream.html">ConverseStream</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/OutputConfig">AWS
 * API Reference</a></p>
 */
class OutputConfig {
 public:
  AWS_BEDROCKRUNTIME_API OutputConfig() = default;
  AWS_BEDROCKRUNTIME_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Structured output parameters to control the model's text response. </p>
   */
  inline const OutputFormat& GetTextFormat() const { return m_textFormat; }
  inline bool TextFormatHasBeenSet() const { return m_textFormatHasBeenSet; }
  template <typename TextFormatT = OutputFormat>
  void SetTextFormat(TextFormatT&& value) {
    m_textFormatHasBeenSet = true;
    m_textFormat = std::forward<TextFormatT>(value);
  }
  template <typename TextFormatT = OutputFormat>
  OutputConfig& WithTextFormat(TextFormatT&& value) {
    SetTextFormat(std::forward<TextFormatT>(value));
    return *this;
  }
  ///@}
 private:
  OutputFormat m_textFormat;
  bool m_textFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
