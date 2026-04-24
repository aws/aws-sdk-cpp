/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomConfigurationInput.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Input for creating a custom memory strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomMemoryStrategyInput">AWS
 * API Reference</a></p>
 */
class CustomMemoryStrategyInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomMemoryStrategyInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomMemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomMemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the custom memory strategy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CustomMemoryStrategyInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the custom memory strategy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CustomMemoryStrategyInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaceTemplates associated with the custom memory strategy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaceTemplates() const { return m_namespaceTemplates; }
  inline bool NamespaceTemplatesHasBeenSet() const { return m_namespaceTemplatesHasBeenSet; }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  void SetNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates = std::forward<NamespaceTemplatesT>(value);
  }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  CustomMemoryStrategyInput& WithNamespaceTemplates(NamespaceTemplatesT&& value) {
    SetNamespaceTemplates(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  template <typename NamespaceTemplatesT = Aws::String>
  CustomMemoryStrategyInput& AddNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates.emplace_back(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the custom memory strategy.</p>
   */
  inline const CustomConfigurationInput& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CustomConfigurationInput>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CustomConfigurationInput>
  CustomMemoryStrategyInput& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_namespaceTemplates;

  CustomConfigurationInput m_configuration;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_namespaceTemplatesHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
