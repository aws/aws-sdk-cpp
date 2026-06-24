/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ManagedSearchBedrockRerankingModelConfiguration.h>
#include <aws/bedrock-agent-runtime/model/MetadataConfigurationForReranking.h>

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
 * <p>Configuration for a Bedrock reranking model used in managed
 * search.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ManagedSearchBedrockRerankingConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedSearchBedrockRerankingConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchBedrockRerankingConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchBedrockRerankingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchBedrockRerankingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata configuration for reranking.</p>
   */
  inline const MetadataConfigurationForReranking& GetMetadataConfiguration() const { return m_metadataConfiguration; }
  inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
  template <typename MetadataConfigurationT = MetadataConfigurationForReranking>
  void SetMetadataConfiguration(MetadataConfigurationT&& value) {
    m_metadataConfigurationHasBeenSet = true;
    m_metadataConfiguration = std::forward<MetadataConfigurationT>(value);
  }
  template <typename MetadataConfigurationT = MetadataConfigurationForReranking>
  ManagedSearchBedrockRerankingConfiguration& WithMetadataConfiguration(MetadataConfigurationT&& value) {
    SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model configuration containing the model ARN for reranking.</p>
   */
  inline const ManagedSearchBedrockRerankingModelConfiguration& GetModelConfiguration() const { return m_modelConfiguration; }
  inline bool ModelConfigurationHasBeenSet() const { return m_modelConfigurationHasBeenSet; }
  template <typename ModelConfigurationT = ManagedSearchBedrockRerankingModelConfiguration>
  void SetModelConfiguration(ModelConfigurationT&& value) {
    m_modelConfigurationHasBeenSet = true;
    m_modelConfiguration = std::forward<ModelConfigurationT>(value);
  }
  template <typename ModelConfigurationT = ManagedSearchBedrockRerankingModelConfiguration>
  ManagedSearchBedrockRerankingConfiguration& WithModelConfiguration(ModelConfigurationT&& value) {
    SetModelConfiguration(std::forward<ModelConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to return after reranking.</p>
   */
  inline int GetNumberOfRerankedResults() const { return m_numberOfRerankedResults; }
  inline bool NumberOfRerankedResultsHasBeenSet() const { return m_numberOfRerankedResultsHasBeenSet; }
  inline void SetNumberOfRerankedResults(int value) {
    m_numberOfRerankedResultsHasBeenSet = true;
    m_numberOfRerankedResults = value;
  }
  inline ManagedSearchBedrockRerankingConfiguration& WithNumberOfRerankedResults(int value) {
    SetNumberOfRerankedResults(value);
    return *this;
  }
  ///@}
 private:
  MetadataConfigurationForReranking m_metadataConfiguration;

  ManagedSearchBedrockRerankingModelConfiguration m_modelConfiguration;

  int m_numberOfRerankedResults{0};
  bool m_metadataConfigurationHasBeenSet = false;
  bool m_modelConfigurationHasBeenSet = false;
  bool m_numberOfRerankedResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
