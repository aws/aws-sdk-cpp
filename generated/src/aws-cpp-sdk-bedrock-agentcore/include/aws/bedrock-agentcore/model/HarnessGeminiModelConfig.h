/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>Configuration for a Google Gemini model provider. Requires an API key stored
 * in AgentCore Identity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessGeminiModelConfig">AWS
 * API Reference</a></p>
 */
class HarnessGeminiModelConfig {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessGeminiModelConfig() = default;
  AWS_BEDROCKAGENTCORE_API HarnessGeminiModelConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessGeminiModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Gemini model ID.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  HarnessGeminiModelConfig& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of your Gemini API key on AgentCore Identity.</p>
   */
  inline const Aws::String& GetApiKeyArn() const { return m_apiKeyArn; }
  inline bool ApiKeyArnHasBeenSet() const { return m_apiKeyArnHasBeenSet; }
  template <typename ApiKeyArnT = Aws::String>
  void SetApiKeyArn(ApiKeyArnT&& value) {
    m_apiKeyArnHasBeenSet = true;
    m_apiKeyArn = std::forward<ApiKeyArnT>(value);
  }
  template <typename ApiKeyArnT = Aws::String>
  HarnessGeminiModelConfig& WithApiKeyArn(ApiKeyArnT&& value) {
    SetApiKeyArn(std::forward<ApiKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tokens to allow in the generated response per
   * iteration.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline HarnessGeminiModelConfig& WithMaxTokens(int value) {
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
  inline HarnessGeminiModelConfig& WithTemperature(double value) {
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
  inline HarnessGeminiModelConfig& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The topK set when calling the model.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline HarnessGeminiModelConfig& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_modelId;

  Aws::String m_apiKeyArn;

  int m_maxTokens{0};

  double m_temperature{0.0};

  double m_topP{0.0};

  int m_topK{0};
  bool m_modelIdHasBeenSet = false;
  bool m_apiKeyArnHasBeenSet = false;
  bool m_maxTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_topKHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
