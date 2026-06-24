/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InferenceOperationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ModelMapping.h>
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
 * <p>The configuration for a provider-based inference target. This configuration
 * explicitly defines the endpoint, model mapping, and operations used to route
 * requests to a large language model (LLM) provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InferenceProviderTargetConfiguration">AWS
 * API Reference</a></p>
 */
class InferenceProviderTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InferenceProviderTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InferenceProviderTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InferenceProviderTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS endpoint of the inference provider that the gateway forwards
   * requests to.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  InferenceProviderTargetConfiguration& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that translates client-facing model IDs to the model IDs
   * expected by the provider.</p>
   */
  inline const ModelMapping& GetModelMapping() const { return m_modelMapping; }
  inline bool ModelMappingHasBeenSet() const { return m_modelMappingHasBeenSet; }
  template <typename ModelMappingT = ModelMapping>
  void SetModelMapping(ModelMappingT&& value) {
    m_modelMappingHasBeenSet = true;
    m_modelMapping = std::forward<ModelMappingT>(value);
  }
  template <typename ModelMappingT = ModelMapping>
  InferenceProviderTargetConfiguration& WithModelMapping(ModelMappingT&& value) {
    SetModelMapping(std::forward<ModelMappingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-operation configurations that map request paths to the models
   * supported for each operation.</p>
   */
  inline const Aws::Vector<InferenceOperationConfiguration>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<InferenceOperationConfiguration>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<InferenceOperationConfiguration>>
  InferenceProviderTargetConfiguration& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = InferenceOperationConfiguration>
  InferenceProviderTargetConfiguration& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  ModelMapping m_modelMapping;

  Aws::Vector<InferenceOperationConfiguration> m_operations;
  bool m_endpointHasBeenSet = false;
  bool m_modelMappingHasBeenSet = false;
  bool m_operationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
