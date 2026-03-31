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
 * <p>The configuration for the reflections created with the episodic memory
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EpisodicReflectionConfiguration">AWS
 * API Reference</a></p>
 */
class EpisodicReflectionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The namespaceTemplates for which to create reflections. Can be less nested
   * than the episodic namespaces.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaceTemplates() const { return m_namespaceTemplates; }
  inline bool NamespaceTemplatesHasBeenSet() const { return m_namespaceTemplatesHasBeenSet; }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  void SetNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates = std::forward<NamespaceTemplatesT>(value);
  }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  EpisodicReflectionConfiguration& WithNamespaceTemplates(NamespaceTemplatesT&& value) {
    SetNamespaceTemplates(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  template <typename NamespaceTemplatesT = Aws::String>
  EpisodicReflectionConfiguration& AddNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates.emplace_back(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_namespaceTemplates;
  bool m_namespaceTemplatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
