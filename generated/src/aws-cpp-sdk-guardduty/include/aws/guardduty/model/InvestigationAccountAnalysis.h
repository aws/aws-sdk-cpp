/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Baseline.h>
#include <aws/guardduty/model/Trend.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains an analysis of the findings in an account. Either <code>Trend</code>
 * or <code>Baseline</code> is set, depending on the <code>AnalysisType</code> of
 * the record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationAccountAnalysis">AWS
 * API Reference</a></p>
 */
class InvestigationAccountAnalysis {
 public:
  AWS_GUARDDUTY_API InvestigationAccountAnalysis() = default;
  AWS_GUARDDUTY_API InvestigationAccountAnalysis(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationAccountAnalysis& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The trend of findings over time. Set when <code>AnalysisType</code> is
   * <code>TREND</code>.</p>
   */
  inline const Trend& GetTrend() const { return m_trend; }
  inline bool TrendHasBeenSet() const { return m_trendHasBeenSet; }
  template <typename TrendT = Trend>
  void SetTrend(TrendT&& value) {
    m_trendHasBeenSet = true;
    m_trend = std::forward<TrendT>(value);
  }
  template <typename TrendT = Trend>
  InvestigationAccountAnalysis& WithTrend(TrendT&& value) {
    SetTrend(std::forward<TrendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comparison of findings against normal behavior. Set when
   * <code>AnalysisType</code> is <code>BASELINE</code>.</p>
   */
  inline const Baseline& GetBaseline() const { return m_baseline; }
  inline bool BaselineHasBeenSet() const { return m_baselineHasBeenSet; }
  template <typename BaselineT = Baseline>
  void SetBaseline(BaselineT&& value) {
    m_baselineHasBeenSet = true;
    m_baseline = std::forward<BaselineT>(value);
  }
  template <typename BaselineT = Baseline>
  InvestigationAccountAnalysis& WithBaseline(BaselineT&& value) {
    SetBaseline(std::forward<BaselineT>(value));
    return *this;
  }
  ///@}
 private:
  Trend m_trend;

  Baseline m_baseline;
  bool m_trendHasBeenSet = false;
  bool m_baselineHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
