/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluatorStatistics.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Summary statistics for a single evaluator within a batch
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluatorSummary">AWS
 * API Reference</a></p>
 */
class EvaluatorSummary {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluatorSummary() = default;
  AWS_BEDROCKAGENTCORE_API EvaluatorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluatorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the evaluator.</p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluatorSummary& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregated statistics for this evaluator.</p>
   */
  inline const EvaluatorStatistics& GetStatistics() const { return m_statistics; }
  inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
  template <typename StatisticsT = EvaluatorStatistics>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = EvaluatorStatistics>
  EvaluatorSummary& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of sessions evaluated by this evaluator.</p>
   */
  inline int GetTotalEvaluated() const { return m_totalEvaluated; }
  inline bool TotalEvaluatedHasBeenSet() const { return m_totalEvaluatedHasBeenSet; }
  inline void SetTotalEvaluated(int value) {
    m_totalEvaluatedHasBeenSet = true;
    m_totalEvaluated = value;
  }
  inline EvaluatorSummary& WithTotalEvaluated(int value) {
    SetTotalEvaluated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of sessions that failed evaluation by this evaluator.</p>
   */
  inline int GetTotalFailed() const { return m_totalFailed; }
  inline bool TotalFailedHasBeenSet() const { return m_totalFailedHasBeenSet; }
  inline void SetTotalFailed(int value) {
    m_totalFailedHasBeenSet = true;
    m_totalFailed = value;
  }
  inline EvaluatorSummary& WithTotalFailed(int value) {
    SetTotalFailed(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorId;

  EvaluatorStatistics m_statistics;

  int m_totalEvaluated{0};

  int m_totalFailed{0};
  bool m_evaluatorIdHasBeenSet = false;
  bool m_statisticsHasBeenSet = false;
  bool m_totalEvaluatedHasBeenSet = false;
  bool m_totalFailedHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
