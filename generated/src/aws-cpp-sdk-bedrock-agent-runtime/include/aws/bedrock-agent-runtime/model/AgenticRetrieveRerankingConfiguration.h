/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveBedrockRerankingConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveRerankingConfigurationType.h>

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
 * <p>Configuration for the reranking model.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveRerankingConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveRerankingConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveRerankingConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Bedrock reranking model configuration.</p>
   */
  inline const AgenticRetrieveBedrockRerankingConfiguration& GetBedrockRerankingConfiguration() const {
    return m_bedrockRerankingConfiguration;
  }
  inline bool BedrockRerankingConfigurationHasBeenSet() const { return m_bedrockRerankingConfigurationHasBeenSet; }
  template <typename BedrockRerankingConfigurationT = AgenticRetrieveBedrockRerankingConfiguration>
  void SetBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) {
    m_bedrockRerankingConfigurationHasBeenSet = true;
    m_bedrockRerankingConfiguration = std::forward<BedrockRerankingConfigurationT>(value);
  }
  template <typename BedrockRerankingConfigurationT = AgenticRetrieveBedrockRerankingConfiguration>
  AgenticRetrieveRerankingConfiguration& WithBedrockRerankingConfiguration(BedrockRerankingConfigurationT&& value) {
    SetBedrockRerankingConfiguration(std::forward<BedrockRerankingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of reranking configuration.</p>
   */
  inline AgenticRetrieveRerankingConfigurationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AgenticRetrieveRerankingConfigurationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgenticRetrieveRerankingConfiguration& WithType(AgenticRetrieveRerankingConfigurationType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveBedrockRerankingConfiguration m_bedrockRerankingConfiguration;

  AgenticRetrieveRerankingConfigurationType m_type{AgenticRetrieveRerankingConfigurationType::NOT_SET};
  bool m_bedrockRerankingConfigurationHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
