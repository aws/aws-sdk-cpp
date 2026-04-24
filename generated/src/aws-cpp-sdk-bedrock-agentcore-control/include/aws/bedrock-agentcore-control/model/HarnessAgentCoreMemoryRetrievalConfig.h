/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Configuration for memory retrieval within a namespace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessAgentCoreMemoryRetrievalConfig">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreMemoryRetrievalConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryRetrievalConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryRetrievalConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreMemoryRetrievalConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of memory entries to retrieve.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline HarnessAgentCoreMemoryRetrievalConfig& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum relevance score for retrieved memories.</p>
   */
  inline double GetRelevanceScore() const { return m_relevanceScore; }
  inline bool RelevanceScoreHasBeenSet() const { return m_relevanceScoreHasBeenSet; }
  inline void SetRelevanceScore(double value) {
    m_relevanceScoreHasBeenSet = true;
    m_relevanceScore = value;
  }
  inline HarnessAgentCoreMemoryRetrievalConfig& WithRelevanceScore(double value) {
    SetRelevanceScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the retrieval strategy to use.</p>
   */
  inline const Aws::String& GetStrategyId() const { return m_strategyId; }
  inline bool StrategyIdHasBeenSet() const { return m_strategyIdHasBeenSet; }
  template <typename StrategyIdT = Aws::String>
  void SetStrategyId(StrategyIdT&& value) {
    m_strategyIdHasBeenSet = true;
    m_strategyId = std::forward<StrategyIdT>(value);
  }
  template <typename StrategyIdT = Aws::String>
  HarnessAgentCoreMemoryRetrievalConfig& WithStrategyId(StrategyIdT&& value) {
    SetStrategyId(std::forward<StrategyIdT>(value));
    return *this;
  }
  ///@}
 private:
  int m_topK{0};

  double m_relevanceScore{0.0};

  Aws::String m_strategyId;
  bool m_topKHasBeenSet = false;
  bool m_relevanceScoreHasBeenSet = false;
  bool m_strategyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
