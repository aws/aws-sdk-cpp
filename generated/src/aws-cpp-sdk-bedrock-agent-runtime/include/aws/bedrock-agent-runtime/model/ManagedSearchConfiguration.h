/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/ManagedSearchRerankingConfiguration.h>
#include <aws/bedrock-agent-runtime/model/RerankingModelType.h>
#include <aws/bedrock-agent-runtime/model/RetrievalFilter.h>

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
 * <p>Configuration for managed search in a knowledge base. Managed search
 * automatically determines the best search strategy based on your data store
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/ManagedSearchConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedSearchConfiguration {
 public:
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchConfiguration() = default;
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API ManagedSearchConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const RetrievalFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = RetrievalFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = RetrievalFilter>
  ManagedSearchConfiguration& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of results to retrieve.</p>
   */
  inline int GetNumberOfResults() const { return m_numberOfResults; }
  inline bool NumberOfResultsHasBeenSet() const { return m_numberOfResultsHasBeenSet; }
  inline void SetNumberOfResults(int value) {
    m_numberOfResultsHasBeenSet = true;
    m_numberOfResults = value;
  }
  inline ManagedSearchConfiguration& WithNumberOfResults(int value) {
    SetNumberOfResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains configurations for reranking the results retrieved from the managed
   * search.</p>
   */
  inline const ManagedSearchRerankingConfiguration& GetRerankingConfiguration() const { return m_rerankingConfiguration; }
  inline bool RerankingConfigurationHasBeenSet() const { return m_rerankingConfigurationHasBeenSet; }
  template <typename RerankingConfigurationT = ManagedSearchRerankingConfiguration>
  void SetRerankingConfiguration(RerankingConfigurationT&& value) {
    m_rerankingConfigurationHasBeenSet = true;
    m_rerankingConfiguration = std::forward<RerankingConfigurationT>(value);
  }
  template <typename RerankingConfigurationT = ManagedSearchRerankingConfiguration>
  ManagedSearchConfiguration& WithRerankingConfiguration(RerankingConfigurationT&& value) {
    SetRerankingConfiguration(std::forward<RerankingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of reranking model to use when reranking results retrieved from the
   * managed search. Use <code>CUSTOM</code> to specify a model, <code>MANAGED</code>
   * to use the service default, or <code>NONE</code> to disable reranking.</p>
   */
  inline RerankingModelType GetRerankingModelType() const { return m_rerankingModelType; }
  inline bool RerankingModelTypeHasBeenSet() const { return m_rerankingModelTypeHasBeenSet; }
  inline void SetRerankingModelType(RerankingModelType value) {
    m_rerankingModelTypeHasBeenSet = true;
    m_rerankingModelType = value;
  }
  inline ManagedSearchConfiguration& WithRerankingModelType(RerankingModelType value) {
    SetRerankingModelType(value);
    return *this;
  }
  ///@}
 private:
  RetrievalFilter m_filter;

  int m_numberOfResults{0};

  ManagedSearchRerankingConfiguration m_rerankingConfiguration;

  RerankingModelType m_rerankingModelType{RerankingModelType::NOT_SET};
  bool m_filterHasBeenSet = false;
  bool m_numberOfResultsHasBeenSet = false;
  bool m_rerankingConfigurationHasBeenSet = false;
  bool m_rerankingModelTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
