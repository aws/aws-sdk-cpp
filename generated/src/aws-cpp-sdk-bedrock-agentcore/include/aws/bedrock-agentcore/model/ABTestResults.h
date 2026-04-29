/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluatorMetric.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The statistical results of an A/B test.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ABTestResults">AWS
 * API Reference</a></p>
 */
class ABTestResults {
 public:
  AWS_BEDROCKAGENTCORE_API ABTestResults() = default;
  AWS_BEDROCKAGENTCORE_API ABTestResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ABTestResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the analysis was performed.</p>
   */
  inline const Aws::Utils::DateTime& GetAnalysisTimestamp() const { return m_analysisTimestamp; }
  inline bool AnalysisTimestampHasBeenSet() const { return m_analysisTimestampHasBeenSet; }
  template <typename AnalysisTimestampT = Aws::Utils::DateTime>
  void SetAnalysisTimestamp(AnalysisTimestampT&& value) {
    m_analysisTimestampHasBeenSet = true;
    m_analysisTimestamp = std::forward<AnalysisTimestampT>(value);
  }
  template <typename AnalysisTimestampT = Aws::Utils::DateTime>
  ABTestResults& WithAnalysisTimestamp(AnalysisTimestampT&& value) {
    SetAnalysisTimestamp(std::forward<AnalysisTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-evaluator metrics comparing control and treatment variants.</p>
   */
  inline const Aws::Vector<EvaluatorMetric>& GetEvaluatorMetrics() const { return m_evaluatorMetrics; }
  inline bool EvaluatorMetricsHasBeenSet() const { return m_evaluatorMetricsHasBeenSet; }
  template <typename EvaluatorMetricsT = Aws::Vector<EvaluatorMetric>>
  void SetEvaluatorMetrics(EvaluatorMetricsT&& value) {
    m_evaluatorMetricsHasBeenSet = true;
    m_evaluatorMetrics = std::forward<EvaluatorMetricsT>(value);
  }
  template <typename EvaluatorMetricsT = Aws::Vector<EvaluatorMetric>>
  ABTestResults& WithEvaluatorMetrics(EvaluatorMetricsT&& value) {
    SetEvaluatorMetrics(std::forward<EvaluatorMetricsT>(value));
    return *this;
  }
  template <typename EvaluatorMetricsT = EvaluatorMetric>
  ABTestResults& AddEvaluatorMetrics(EvaluatorMetricsT&& value) {
    m_evaluatorMetricsHasBeenSet = true;
    m_evaluatorMetrics.emplace_back(std::forward<EvaluatorMetricsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_analysisTimestamp{};

  Aws::Vector<EvaluatorMetric> m_evaluatorMetrics;
  bool m_analysisTimestampHasBeenSet = false;
  bool m_evaluatorMetricsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
