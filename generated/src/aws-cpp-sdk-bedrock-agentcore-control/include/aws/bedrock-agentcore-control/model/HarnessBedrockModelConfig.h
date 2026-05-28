/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessBedrockApiFormat.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for an Amazon Bedrock model provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessBedrockModelConfig">AWS
 * API Reference</a></p>
 */
class HarnessBedrockModelConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessBedrockModelConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessBedrockModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessBedrockModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Bedrock model ID.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  HarnessBedrockModelConfig& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tokens to allow in the generated response per model
   * call.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline HarnessBedrockModelConfig& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The temperature to set when calling the model.</p>
   */
  inline double GetTemperature() const { return m_temperature; }
  inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
  inline void SetTemperature(double value) {
    m_temperatureHasBeenSet = true;
    m_temperature = value;
  }
  inline HarnessBedrockModelConfig& WithTemperature(double value) {
    SetTemperature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The topP set when calling the model.</p>
   */
  inline double GetTopP() const { return m_topP; }
  inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
  inline void SetTopP(double value) {
    m_topPHasBeenSet = true;
    m_topP = value;
  }
  inline HarnessBedrockModelConfig& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API format to use when calling the Bedrock provider.</p>
   */
  inline HarnessBedrockApiFormat GetApiFormat() const { return m_apiFormat; }
  inline bool ApiFormatHasBeenSet() const { return m_apiFormatHasBeenSet; }
  inline void SetApiFormat(HarnessBedrockApiFormat value) {
    m_apiFormatHasBeenSet = true;
    m_apiFormat = value;
  }
  inline HarnessBedrockModelConfig& WithApiFormat(HarnessBedrockApiFormat value) {
    SetApiFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider-specific parameters passed through to the model provider
   * unchanged.</p>
   */
  inline Aws::Utils::DocumentView GetAdditionalParams() const { return m_additionalParams; }
  inline bool AdditionalParamsHasBeenSet() const { return m_additionalParamsHasBeenSet; }
  template <typename AdditionalParamsT = Aws::Utils::Document>
  void SetAdditionalParams(AdditionalParamsT&& value) {
    m_additionalParamsHasBeenSet = true;
    m_additionalParams = std::forward<AdditionalParamsT>(value);
  }
  template <typename AdditionalParamsT = Aws::Utils::Document>
  HarnessBedrockModelConfig& WithAdditionalParams(AdditionalParamsT&& value) {
    SetAdditionalParams(std::forward<AdditionalParamsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  int m_maxTokens{0};

  double m_temperature{0.0};

  double m_topP{0.0};

  HarnessBedrockApiFormat m_apiFormat{HarnessBedrockApiFormat::NOT_SET};

  Aws::Utils::Document m_additionalParams;
  bool m_modelIdHasBeenSet = false;
  bool m_maxTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_apiFormatHasBeenSet = false;
  bool m_additionalParamsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
