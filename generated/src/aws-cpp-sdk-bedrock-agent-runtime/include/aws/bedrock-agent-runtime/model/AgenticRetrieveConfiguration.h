/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveRerankingConfiguration.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveRerankingModelType.h>
#include <aws/bedrock-agent-runtime/model/FoundationModelConfiguration.h>
#include <aws/bedrock-agent-runtime/model/FoundationModelType.h>

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
 * <p>Configuration settings for the agentic retrieval operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveConfiguration">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The foundation model configuration. Required when foundationModelType is
   * CUSTOM.</p>
   */
  inline const FoundationModelConfiguration& GetFoundationModelConfiguration() const { return m_foundationModelConfiguration; }
  inline bool FoundationModelConfigurationHasBeenSet() const { return m_foundationModelConfigurationHasBeenSet; }
  template <typename FoundationModelConfigurationT = FoundationModelConfiguration>
  void SetFoundationModelConfiguration(FoundationModelConfigurationT&& value) {
    m_foundationModelConfigurationHasBeenSet = true;
    m_foundationModelConfiguration = std::forward<FoundationModelConfigurationT>(value);
  }
  template <typename FoundationModelConfigurationT = FoundationModelConfiguration>
  AgenticRetrieveConfiguration& WithFoundationModelConfiguration(FoundationModelConfigurationT&& value) {
    SetFoundationModelConfiguration(std::forward<FoundationModelConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of foundation model to use. CUSTOM uses a specified model, MANAGED
   * uses the service default.</p>
   */
  inline FoundationModelType GetFoundationModelType() const { return m_foundationModelType; }
  inline bool FoundationModelTypeHasBeenSet() const { return m_foundationModelTypeHasBeenSet; }
  inline void SetFoundationModelType(FoundationModelType value) {
    m_foundationModelTypeHasBeenSet = true;
    m_foundationModelType = value;
  }
  inline AgenticRetrieveConfiguration& WithFoundationModelType(FoundationModelType value) {
    SetFoundationModelType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of agent iterations for retrieval.</p>
   */
  inline int GetMaxAgentIteration() const { return m_maxAgentIteration; }
  inline bool MaxAgentIterationHasBeenSet() const { return m_maxAgentIterationHasBeenSet; }
  inline void SetMaxAgentIteration(int value) {
    m_maxAgentIterationHasBeenSet = true;
    m_maxAgentIteration = value;
  }
  inline AgenticRetrieveConfiguration& WithMaxAgentIteration(int value) {
    SetMaxAgentIteration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reranking model configuration. Required when rerankingModelType is
   * CUSTOM.</p>
   */
  inline const AgenticRetrieveRerankingConfiguration& GetRerankingConfiguration() const { return m_rerankingConfiguration; }
  inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
  template <typename RerankingConfigurationT = AgenticRetrieveRerankingConfiguration>
  void SetRerankingConfiguration(RerankingConfigurationT&& value) {
    m_rerankingConfigurationHasBeenSet = true;
    m_rerankingConfiguration = std::forward<RerankingConfigurationT>(value);
  }
  template <typename RerankingConfigurationT = AgenticRetrieveRerankingConfiguration>
  AgenticRetrieveConfiguration& WithRerankingConfiguration(RerankingConfigurationT&& value) {
    SetRerankingConfiguration(std::forward<RerankingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of reranking model to use. CUSTOM uses a specified model, MANAGED
   * uses the service default. If not specified, defaults to MANAGED for managed
   * embedding knowledge bases and NONE for custom embedding knowledge bases.</p>
   */
  inline AgenticRetrieveRerankingModelType GetRerankingModelType() const { return m_rerankingModelType; }
  inline bool RerankingModelTypeHasBeenSet() const { return m_rerankingModelTypeHasBeenSet; }
  inline void SetRerankingModelType(AgenticRetrieveRerankingModelType value) {
    m_rerankingModelTypeHasBeenSet = true;
    m_rerankingModelType = value;
  }
  inline AgenticRetrieveConfiguration& WithRerankingModelType(AgenticRetrieveRerankingModelType value) {
    SetRerankingModelType(value);
    return *this;
  }
  ///@}
 private:
  FoundationModelConfiguration m_foundationModelConfiguration;

  FoundationModelType m_foundationModelType{FoundationModelType::NOT_SET};

  int m_maxAgentIteration{0};

  AgenticRetrieveRerankingConfiguration m_rerankingConfiguration;

  AgenticRetrieveRerankingModelType m_rerankingModelType{AgenticRetrieveRerankingModelType::NOT_SET};
  bool m_foundationModelConfigurationHasBeenSet = false;
  bool m_foundationModelTypeHasBeenSet = false;
  bool m_maxAgentIterationHasBeenSet = false;
  bool m_rerankingConfigurationHasBeenSet = false;
  bool m_rerankingModelTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
