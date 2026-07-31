/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/OutputFormat.h>
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

  ///@{
  /**
   * <p>The effort level for the model to use when generating a response. Higher
   * effort levels allow the model to spend more time reasoning before responding.
   * Supported values are <code>low</code>, <code>medium</code>, <code>high</code>,
   * <code>xhigh</code>, and <code>max</code>.</p>  <p>When extended thinking
   * is disabled, the effort level is capped at <code>high</code>. Use effort
   * <code>high</code> or below, or enable thinking to use higher effort levels.</p>
   *
   */
  inline const Aws::String& GetEffort() const { return m_effort; }
  inline bool EffortHasBeenSet() const { return m_effortHasBeenSet; }
  template <typename EffortT = Aws::String>
  void SetEffort(EffortT&& value) {
    m_effortHasBeenSet = true;
    m_effort = std::forward<EffortT>(value);
  }
  template <typename EffortT = Aws::String>
  OutputConfig& WithEffort(EffortT&& value) {
    SetEffort(std::forward<EffortT>(value));
    return *this;
  }
  ///@}
 private:
  OutputFormat m_textFormat;

  Aws::String m_effort;
  bool m_textFormatHasBeenSet = false;
  bool m_effortHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
