/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/AlertCondition.h>
#include <aws/cloudwatchomni/model/AlertEvaluation.h>
#include <aws/cloudwatchomni/model/AlertRuleQuery.h>
#include <aws/cloudwatchomni/model/NoData.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>Telemetry-based rule: what to query, how to evaluate the result, what
 * condition makes it fire, and what to do on missing data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/TelemetryRule">AWS
 * API Reference</a></p>
 */
class TelemetryRule {
 public:
  AWS_CLOUDWATCHOMNI_API TelemetryRule() = default;
  AWS_CLOUDWATCHOMNI_API TelemetryRule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API TelemetryRule& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The query expression to evaluate.</p>
   */
  inline const AlertRuleQuery& GetQuery() const { return m_query; }
  inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
  template <typename QueryT = AlertRuleQuery>
  void SetQuery(QueryT&& value) {
    m_queryHasBeenSet = true;
    m_query = std::forward<QueryT>(value);
  }
  template <typename QueryT = AlertRuleQuery>
  TelemetryRule& WithQuery(QueryT&& value) {
    SetQuery(std::forward<QueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The condition that determines when the alert fires.</p>
   */
  inline const AlertCondition& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = AlertCondition>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = AlertCondition>
  TelemetryRule& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation cadence and durations.</p>
   */
  inline const AlertEvaluation& GetEvaluation() const { return m_evaluation; }
  inline bool EvaluationHasBeenSet() const { return m_evaluationHasBeenSet; }
  template <typename EvaluationT = AlertEvaluation>
  void SetEvaluation(EvaluationT&& value) {
    m_evaluationHasBeenSet = true;
    m_evaluation = std::forward<EvaluationT>(value);
  }
  template <typename EvaluationT = AlertEvaluation>
  TelemetryRule& WithEvaluation(EvaluationT&& value) {
    SetEvaluation(std::forward<EvaluationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the alert behaves when a query produces no data.</p>
   */
  inline const NoData& GetNoData() const { return m_noData; }
  inline bool NoDataHasBeenSet() const { return m_noDataHasBeenSet; }
  template <typename NoDataT = NoData>
  void SetNoData(NoDataT&& value) {
    m_noDataHasBeenSet = true;
    m_noData = std::forward<NoDataT>(value);
  }
  template <typename NoDataT = NoData>
  TelemetryRule& WithNoData(NoDataT&& value) {
    SetNoData(std::forward<NoDataT>(value));
    return *this;
  }
  ///@}
 private:
  AlertRuleQuery m_query;

  AlertCondition m_condition;

  AlertEvaluation m_evaluation;

  NoData m_noData;
  bool m_queryHasBeenSet = false;
  bool m_conditionHasBeenSet = false;
  bool m_evaluationHasBeenSet = false;
  bool m_noDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
