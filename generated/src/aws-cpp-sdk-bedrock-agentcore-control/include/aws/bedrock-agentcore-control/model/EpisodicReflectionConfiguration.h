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
   * <p>The namespaces for which to create reflections. Can be less nested than the
   * episodic namespaces.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
  inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  void SetNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces = std::forward<NamespacesT>(value);
  }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  EpisodicReflectionConfiguration& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  EpisodicReflectionConfiguration& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_namespaces;
  bool m_namespacesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
