/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Aggregate totals for automation events, including counts and estimated
 * savings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/SummaryTotals">AWS
 * API Reference</a></p>
 */
class SummaryTotals {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryTotals() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryTotals(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API SummaryTotals& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of automation events in this summary group.</p>
   */
  inline int GetAutomationEventCount() const { return m_automationEventCount; }
  inline bool AutomationEventCountHasBeenSet() const { return m_automationEventCountHasBeenSet; }
  inline void SetAutomationEventCount(int value) {
    m_automationEventCountHasBeenSet = true;
    m_automationEventCount = value;
  }
  inline SummaryTotals& WithAutomationEventCount(int value) {
    SetAutomationEventCount(value);
    return *this;
  }
  ///@}

  ///@{

  inline const EstimatedMonthlySavings& GetEstimatedMonthlySavings() const { return m_estimatedMonthlySavings; }
  inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  void SetEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    m_estimatedMonthlySavingsHasBeenSet = true;
    m_estimatedMonthlySavings = std::forward<EstimatedMonthlySavingsT>(value);
  }
  template <typename EstimatedMonthlySavingsT = EstimatedMonthlySavings>
  SummaryTotals& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_automationEventCount{0};
  bool m_automationEventCountHasBeenSet = false;

  EstimatedMonthlySavings m_estimatedMonthlySavings;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
