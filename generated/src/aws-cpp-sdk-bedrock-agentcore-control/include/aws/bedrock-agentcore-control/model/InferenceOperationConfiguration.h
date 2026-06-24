/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ModelEntry.h>
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
 * <p>The configuration for a specific inference operation, including its request
 * path and the models that the operation supports.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InferenceOperationConfiguration">AWS
 * API Reference</a></p>
 */
class InferenceOperationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InferenceOperationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InferenceOperationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InferenceOperationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The request path for this operation (for example, <code>/v1/messages</code>
   * or <code>/v1/responses</code>).</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  InferenceOperationConfiguration& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider path to forward requests to, if it differs from the request
   * path. For example, <code>/anthropic/v1/messages</code> when the provider expects
   * a different path than the client-facing <code>/v1/messages</code>.</p>
   */
  inline const Aws::String& GetProviderPath() const { return m_providerPath; }
  inline bool ProviderPathHasBeenSet() const { return m_providerPathHasBeenSet; }
  template <typename ProviderPathT = Aws::String>
  void SetProviderPath(ProviderPathT&& value) {
    m_providerPathHasBeenSet = true;
    m_providerPath = std::forward<ProviderPathT>(value);
  }
  template <typename ProviderPathT = Aws::String>
  InferenceOperationConfiguration& WithProviderPath(ProviderPathT&& value) {
    SetProviderPath(std::forward<ProviderPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of models supported for this operation.</p>
   */
  inline const Aws::Vector<ModelEntry>& GetModels() const { return m_models; }
  inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
  template <typename ModelsT = Aws::Vector<ModelEntry>>
  void SetModels(ModelsT&& value) {
    m_modelsHasBeenSet = true;
    m_models = std::forward<ModelsT>(value);
  }
  template <typename ModelsT = Aws::Vector<ModelEntry>>
  InferenceOperationConfiguration& WithModels(ModelsT&& value) {
    SetModels(std::forward<ModelsT>(value));
    return *this;
  }
  template <typename ModelsT = ModelEntry>
  InferenceOperationConfiguration& AddModels(ModelsT&& value) {
    m_modelsHasBeenSet = true;
    m_models.emplace_back(std::forward<ModelsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  Aws::String m_providerPath;

  Aws::Vector<ModelEntry> m_models;
  bool m_pathHasBeenSet = false;
  bool m_providerPathHasBeenSet = false;
  bool m_modelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
