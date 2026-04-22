/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/HarnessBedrockModelConfig.h>
#include <aws/bedrock-agentcore/model/HarnessGeminiModelConfig.h>
#include <aws/bedrock-agentcore/model/HarnessOpenAiModelConfig.h>

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
 * <p>Specification of which model to use.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/HarnessModelConfiguration">AWS
 * API Reference</a></p>
 */
class HarnessModelConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API HarnessModelConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API HarnessModelConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API HarnessModelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for an Amazon Bedrock model.</p>
   */
  inline const HarnessBedrockModelConfig& GetBedrockModelConfig() const { return m_bedrockModelConfig; }
  inline bool BedrockModelConfigHasBeenSet() const { return m_bedrockModelConfigHasBeenSet; }
  template <typename BedrockModelConfigT = HarnessBedrockModelConfig>
  void SetBedrockModelConfig(BedrockModelConfigT&& value) {
    m_bedrockModelConfigHasBeenSet = true;
    m_bedrockModelConfig = std::forward<BedrockModelConfigT>(value);
  }
  template <typename BedrockModelConfigT = HarnessBedrockModelConfig>
  HarnessModelConfiguration& WithBedrockModelConfig(BedrockModelConfigT&& value) {
    SetBedrockModelConfig(std::forward<BedrockModelConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for an OpenAI model.</p>
   */
  inline const HarnessOpenAiModelConfig& GetOpenAiModelConfig() const { return m_openAiModelConfig; }
  inline bool OpenAiModelConfigHasBeenSet() const { return m_openAiModelConfigHasBeenSet; }
  template <typename OpenAiModelConfigT = HarnessOpenAiModelConfig>
  void SetOpenAiModelConfig(OpenAiModelConfigT&& value) {
    m_openAiModelConfigHasBeenSet = true;
    m_openAiModelConfig = std::forward<OpenAiModelConfigT>(value);
  }
  template <typename OpenAiModelConfigT = HarnessOpenAiModelConfig>
  HarnessModelConfiguration& WithOpenAiModelConfig(OpenAiModelConfigT&& value) {
    SetOpenAiModelConfig(std::forward<OpenAiModelConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for a Google Gemini model.</p>
   */
  inline const HarnessGeminiModelConfig& GetGeminiModelConfig() const { return m_geminiModelConfig; }
  inline bool GeminiModelConfigHasBeenSet() const { return m_geminiModelConfigHasBeenSet; }
  template <typename GeminiModelConfigT = HarnessGeminiModelConfig>
  void SetGeminiModelConfig(GeminiModelConfigT&& value) {
    m_geminiModelConfigHasBeenSet = true;
    m_geminiModelConfig = std::forward<GeminiModelConfigT>(value);
  }
  template <typename GeminiModelConfigT = HarnessGeminiModelConfig>
  HarnessModelConfiguration& WithGeminiModelConfig(GeminiModelConfigT&& value) {
    SetGeminiModelConfig(std::forward<GeminiModelConfigT>(value));
    return *this;
  }
  ///@}
 private:
  HarnessBedrockModelConfig m_bedrockModelConfig;

  HarnessOpenAiModelConfig m_openAiModelConfig;

  HarnessGeminiModelConfig m_geminiModelConfig;
  bool m_bedrockModelConfigHasBeenSet = false;
  bool m_openAiModelConfigHasBeenSet = false;
  bool m_geminiModelConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
