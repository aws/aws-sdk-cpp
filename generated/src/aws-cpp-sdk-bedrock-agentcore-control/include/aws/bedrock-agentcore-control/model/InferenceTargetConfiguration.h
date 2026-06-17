/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InferenceConnectorTargetConfiguration.h>
#include <aws/bedrock-agentcore-control/model/InferenceProviderTargetConfiguration.h>

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
 * <p>The configuration for an inference target. An inference target routes
 * requests to a large language model (LLM) provider, either through a built-in
 * connector or an explicitly configured provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InferenceTargetConfiguration">AWS
 * API Reference</a></p>
 */
class InferenceTargetConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InferenceTargetConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InferenceTargetConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InferenceTargetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The connector-based inference configuration. Use this option to route
   * requests to an LLM provider through a built-in connector that includes
   * predefined provider rules.</p>
   */
  inline const InferenceConnectorTargetConfiguration& GetConnector() const { return m_connector; }
  inline bool ConnectorHasBeenSet() const { return m_connectorHasBeenSet; }
  template <typename ConnectorT = InferenceConnectorTargetConfiguration>
  void SetConnector(ConnectorT&& value) {
    m_connectorHasBeenSet = true;
    m_connector = std::forward<ConnectorT>(value);
  }
  template <typename ConnectorT = InferenceConnectorTargetConfiguration>
  InferenceTargetConfiguration& WithConnector(ConnectorT&& value) {
    SetConnector(std::forward<ConnectorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-based inference configuration. Use this option to explicitly
   * configure the endpoint, model mapping, and operations for an LLM provider.</p>
   */
  inline const InferenceProviderTargetConfiguration& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = InferenceProviderTargetConfiguration>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = InferenceProviderTargetConfiguration>
  InferenceTargetConfiguration& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}
 private:
  InferenceConnectorTargetConfiguration m_connector;

  InferenceProviderTargetConfiguration m_provider;
  bool m_connectorHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
