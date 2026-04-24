/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>Input for creating a user preference memory strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UserPreferenceMemoryStrategyInput">AWS
 * API Reference</a></p>
 */
class UserPreferenceMemoryStrategyInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceMemoryStrategyInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceMemoryStrategyInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceMemoryStrategyInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the user preference memory strategy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UserPreferenceMemoryStrategyInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the user preference memory strategy.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UserPreferenceMemoryStrategyInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaceTemplates associated with the user preference memory
   * strategy.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaceTemplates() const { return m_namespaceTemplates; }
  inline bool NamespaceTemplatesHasBeenSet() const { return m_namespaceTemplatesHasBeenSet; }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  void SetNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates = std::forward<NamespaceTemplatesT>(value);
  }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  UserPreferenceMemoryStrategyInput& WithNamespaceTemplates(NamespaceTemplatesT&& value) {
    SetNamespaceTemplates(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  template <typename NamespaceTemplatesT = Aws::String>
  UserPreferenceMemoryStrategyInput& AddNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates.emplace_back(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_namespaceTemplates;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_namespaceTemplatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
