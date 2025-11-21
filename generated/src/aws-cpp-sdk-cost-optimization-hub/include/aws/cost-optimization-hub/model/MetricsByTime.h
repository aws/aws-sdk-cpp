/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {

/**
 * <p>Contains efficiency metrics for a specific point in time, including an
 * efficiency score, potential savings, optimizable spend, and
 * timestamp.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/MetricsByTime">AWS
 * API Reference</a></p>
 */
class MetricsByTime {
 public:
  AWS_COSTOPTIMIZATIONHUB_API MetricsByTime() = default;
  AWS_COSTOPTIMIZATIONHUB_API MetricsByTime(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API MetricsByTime& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The efficiency score for this time period. The score represents a measure of
   * how effectively the cloud resources are being optimized, with higher scores
   * indicating better optimization performance.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline MetricsByTime& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated savings amount for this time period, representing the potential
   * cost reduction achieved through optimization recommendations.</p>
   */
  inline double GetSavings() const { return m_savings; }
  inline bool SavingsHasBeenSet() const { return m_savingsHasBeenSet; }
  inline void SetSavings(double value) {
    m_savingsHasBeenSet = true;
    m_savings = value;
  }
  inline MetricsByTime& WithSavings(double value) {
    SetSavings(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total spending amount for this time period.</p>
   */
  inline double GetSpend() const { return m_spend; }
  inline bool SpendHasBeenSet() const { return m_spendHasBeenSet; }
  inline void SetSpend(double value) {
    m_spendHasBeenSet = true;
    m_spend = value;
  }
  inline MetricsByTime& WithSpend(double value) {
    SetSpend(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp for this data point. The format depends on the granularity:
   * YYYY-MM-DD for daily metrics, or YYYY-MM for monthly metrics.</p>
   */
  inline const Aws::String& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::String>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::String>
  MetricsByTime& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  double m_score{0.0};
  bool m_scoreHasBeenSet = false;

  double m_savings{0.0};
  bool m_savingsHasBeenSet = false;

  double m_spend{0.0};
  bool m_spendHasBeenSet = false;

  Aws::String m_timestamp;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
