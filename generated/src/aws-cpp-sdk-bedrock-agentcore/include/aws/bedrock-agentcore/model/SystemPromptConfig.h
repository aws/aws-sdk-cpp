/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SystemPromptConfigurationBundle.h>
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
 * <p>The system prompt input, either as inline text or from a configuration
 * bundle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SystemPromptConfig">AWS
 * API Reference</a></p>
 */
class SystemPromptConfig {
 public:
  AWS_BEDROCKAGENTCORE_API SystemPromptConfig() = default;
  AWS_BEDROCKAGENTCORE_API SystemPromptConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SystemPromptConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The system prompt text provided inline.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  SystemPromptConfig& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt sourced from a configuration bundle version.</p>
   */
  inline const SystemPromptConfigurationBundle& GetConfigurationBundle() const { return m_configurationBundle; }
  inline bool ConfigurationBundleHasBeenSet() const { return m_configurationBundleHasBeenSet; }
  template <typename ConfigurationBundleT = SystemPromptConfigurationBundle>
  void SetConfigurationBundle(ConfigurationBundleT&& value) {
    m_configurationBundleHasBeenSet = true;
    m_configurationBundle = std::forward<ConfigurationBundleT>(value);
  }
  template <typename ConfigurationBundleT = SystemPromptConfigurationBundle>
  SystemPromptConfig& WithConfigurationBundle(ConfigurationBundleT&& value) {
    SetConfigurationBundle(std::forward<ConfigurationBundleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_text;

  SystemPromptConfigurationBundle m_configurationBundle;
  bool m_textHasBeenSet = false;
  bool m_configurationBundleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
