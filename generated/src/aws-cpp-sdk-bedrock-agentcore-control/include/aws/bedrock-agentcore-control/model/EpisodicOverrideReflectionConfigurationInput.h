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
 * <p>Configurations for overriding the reflection step of the episodic memory
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EpisodicOverrideReflectionConfigurationInput">AWS
 * API Reference</a></p>
 */
class EpisodicOverrideReflectionConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideReflectionConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideReflectionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideReflectionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text to append to the prompt for reflection step of the episodic memory
   * strategy.</p>
   */
  inline const Aws::String& GetAppendToPrompt() const { return m_appendToPrompt; }
  inline bool AppendToPromptHasBeenSet() const { return m_appendToPromptHasBeenSet; }
  template <typename AppendToPromptT = Aws::String>
  void SetAppendToPrompt(AppendToPromptT&& value) {
    m_appendToPromptHasBeenSet = true;
    m_appendToPrompt = std::forward<AppendToPromptT>(value);
  }
  template <typename AppendToPromptT = Aws::String>
  EpisodicOverrideReflectionConfigurationInput& WithAppendToPrompt(AppendToPromptT&& value) {
    SetAppendToPrompt(std::forward<AppendToPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID to use for the reflection step of the episodic memory
   * strategy.</p>
   */
  inline const Aws::String& GetModelId() const { return m_modelId; }
  inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
  template <typename ModelIdT = Aws::String>
  void SetModelId(ModelIdT&& value) {
    m_modelIdHasBeenSet = true;
    m_modelId = std::forward<ModelIdT>(value);
  }
  template <typename ModelIdT = Aws::String>
  EpisodicOverrideReflectionConfigurationInput& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaces to use for episodic reflection. Can be less nested than the
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
  EpisodicOverrideReflectionConfigurationInput& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  EpisodicOverrideReflectionConfigurationInput& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appendToPrompt;
  bool m_appendToPromptHasBeenSet = false;

  Aws::String m_modelId;
  bool m_modelIdHasBeenSet = false;

  Aws::Vector<Aws::String> m_namespaces;
  bool m_namespacesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
