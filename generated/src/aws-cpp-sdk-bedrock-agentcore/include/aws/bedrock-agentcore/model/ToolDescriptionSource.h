/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionConfigurationBundle.h>
#include <aws/bedrock-agentcore/model/ToolDescriptionTextInput.h>

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
 * <p>The source of tool descriptions, either inline text or from a configuration
 * bundle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ToolDescriptionSource">AWS
 * API Reference</a></p>
 */
class ToolDescriptionSource {
 public:
  AWS_BEDROCKAGENTCORE_API ToolDescriptionSource() = default;
  AWS_BEDROCKAGENTCORE_API ToolDescriptionSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ToolDescriptionSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Tool descriptions provided as inline text.</p>
   */
  inline const ToolDescriptionTextInput& GetToolDescriptionText() const { return m_toolDescriptionText; }
  inline bool ToolDescriptionTextHasBeenSet() const { return m_toolDescriptionTextHasBeenSet; }
  template <typename ToolDescriptionTextT = ToolDescriptionTextInput>
  void SetToolDescriptionText(ToolDescriptionTextT&& value) {
    m_toolDescriptionTextHasBeenSet = true;
    m_toolDescriptionText = std::forward<ToolDescriptionTextT>(value);
  }
  template <typename ToolDescriptionTextT = ToolDescriptionTextInput>
  ToolDescriptionSource& WithToolDescriptionText(ToolDescriptionTextT&& value) {
    SetToolDescriptionText(std::forward<ToolDescriptionTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tool descriptions sourced from a configuration bundle version.</p>
   */
  inline const ToolDescriptionConfigurationBundle& GetConfigurationBundle() const { return m_configurationBundle; }
  inline bool ConfigurationBundleHasBeenSet() const { return m_configurationBundleHasBeenSet; }
  template <typename ConfigurationBundleT = ToolDescriptionConfigurationBundle>
  void SetConfigurationBundle(ConfigurationBundleT&& value) {
    m_configurationBundleHasBeenSet = true;
    m_configurationBundle = std::forward<ConfigurationBundleT>(value);
  }
  template <typename ConfigurationBundleT = ToolDescriptionConfigurationBundle>
  ToolDescriptionSource& WithConfigurationBundle(ConfigurationBundleT&& value) {
    SetConfigurationBundle(std::forward<ConfigurationBundleT>(value));
    return *this;
  }
  ///@}
 private:
  ToolDescriptionTextInput m_toolDescriptionText;

  ToolDescriptionConfigurationBundle m_configurationBundle;
  bool m_toolDescriptionTextHasBeenSet = false;
  bool m_configurationBundleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
