/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ManagedSearchBedrockRerankingConfiguration.h>
#include <aws/bedrock-agent-runtime/model/ManagedSearchRerankingConfigurationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Configuration for the reranking model used in managed search.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ManagedSearchRerankingConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedSearchRerankingConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchRerankingConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Bedrock reranking model configuration for managed search.</p>
   */
  inline const ManagedSearchBedrockRerankingConfiguration& GetBedrockRerankingConfiguration() const {
    return m_bedrockRerankingConfiguration;
  }
  inline bool BedrockRerankingConfigurationHasBeenSet() const { return m_bedrockRerankingConfigurationHasBeenSet; }
  template <typename BedrockRerankingConfigurationT = ManagedSearchBedrockRerankingConfiguration>
  void SetBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) {
    m_bedrockRerankingConfigurationHasBeenSet = true;
    m_bedrockRerankingConfiguration = std::forward<BedrockRerankingConfigurationT>(value);
  }
  template <typename BedrockRerankingConfigurationT = ManagedSearchBedrockRerankingConfiguration>
  ManagedSearchRerankingConfiguration& WithBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) {
    SetBedrockRerankingConfiguration(std::forward<BedrockRerankingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of reranking configuration.</p>
   */
  inline ManagedSearchRerankingConfigurationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ManagedSearchRerankingConfigurationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ManagedSearchRerankingConfiguration& WithType(ManagedSearchRerankingConfigurationType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  ManagedSearchBedrockRerankingConfiguration m_bedrockRerankingConfiguration;

  ManagedSearchRerankingConfigurationType m_type{ManagedSearchRerankingConfigurationType::NOT_SET};
  bool m_bedrockRerankingConfigurationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
