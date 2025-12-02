/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EpisodicReflectionConfigurationInput.h>
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
 * <p>Input for creating an episodic memory strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EpisodicMemoryStrategyInput">AWS
 * API Reference</a></p>
 */
class EpisodicMemoryStrategyInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicMemoryStrategyInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicMemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicMemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the episodic memory strategy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EpisodicMemoryStrategyInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the episodic memory strategy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  EpisodicMemoryStrategyInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaces for which to create episodes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
  inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  void SetNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces = std::forward<NamespacesT>(value);
  }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  EpisodicMemoryStrategyInput& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  EpisodicMemoryStrategyInput& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the reflections created with the episodic memory
   * strategy.</p>
   */
  inline const EpisodicReflectionConfigurationInput& GetReflectionConfiguration() const { return m_reflectionConfiguration; }
  inline bool ReflectionConfigurationHasBeenSet() const { return m_reflectionConfigurationHasBeenSet; }
  template <typename ReflectionConfigurationT = EpisodicReflectionConfigurationInput>
  void SetReflectionConfiguration(ReflectionConfigurationT&& value) {
    m_reflectionConfigurationHasBeenSet = true;
    m_reflectionConfiguration = std::forward<ReflectionConfigurationT>(value);
  }
  template <typename ReflectionConfigurationT = EpisodicReflectionConfigurationInput>
  EpisodicMemoryStrategyInput& WithReflectionConfiguration(ReflectionConfigurationT&& value) {
    SetReflectionConfiguration(std::forward<ReflectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<Aws::String> m_namespaces;
  bool m_namespacesHasBeenSet = false;

  EpisodicReflectionConfigurationInput m_reflectionConfiguration;
  bool m_reflectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
