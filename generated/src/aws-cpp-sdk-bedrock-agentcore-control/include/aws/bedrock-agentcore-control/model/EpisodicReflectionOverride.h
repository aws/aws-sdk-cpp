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
 * <p>Contains configurations to override the default reflection step for the
 * episodic memory strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EpisodicReflectionOverride">AWS
 * API Reference</a></p>
 */
class EpisodicReflectionOverride {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionOverride() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicReflectionOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text appended to the prompt for the reflection step of the episodic
   * memory strategy.</p>
   */
  inline const Aws::String& GetAppendToPrompt() const { return m_appendToPrompt; }
  inline bool AppendToPromptHasBeenSet() const { return m_appendToPromptHasBeenSet; }
  template <typename AppendToPromptT = Aws::String>
  void SetAppendToPrompt(AppendToPromptT&& value) {
    m_appendToPromptHasBeenSet = true;
    m_appendToPrompt = std::forward<AppendToPromptT>(value);
  }
  template <typename AppendToPromptT = Aws::String>
  EpisodicReflectionOverride& WithAppendToPrompt(AppendToPromptT&& value) {
    SetAppendToPrompt(std::forward<AppendToPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID used for the reflection step of the episodic memory
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
  EpisodicReflectionOverride& WithModelId(ModelIdT&& value) {
    SetModelId(std::forward<ModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaceTemplates over which reflections were created. Can be less
   * nested than the episodic namespaces.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaceTemplates() const { return m_namespaceTemplates; }
  inline bool NamespaceTemplatesHasBeenSet() const { return m_namespaceTemplatesHasBeenSet; }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  void SetNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates = std::forward<NamespaceTemplatesT>(value);
  }
  template <typename NamespaceTemplatesT = Aws::Vector<Aws::String>>
  EpisodicReflectionOverride& WithNamespaceTemplates(NamespaceTemplatesT&& value) {
    SetNamespaceTemplates(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  template <typename NamespaceTemplatesT = Aws::String>
  EpisodicReflectionOverride& AddNamespaceTemplates(NamespaceTemplatesT&& value) {
    m_namespaceTemplatesHasBeenSet = true;
    m_namespaceTemplates.emplace_back(std::forward<NamespaceTemplatesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appendToPrompt;

  Aws::String m_modelId;

  Aws::Vector<Aws::String> m_namespaceTemplates;
  bool m_appendToPromptHasBeenSet = false;
  bool m_modelIdHasBeenSet = false;
  bool m_namespaceTemplatesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
