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
 * <p>Aggregate totals for automation rule preview results, including count and
 * estimated savings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/RulePreviewTotal">AWS
 * API Reference</a></p>
 */
class RulePreviewTotal {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RulePreviewTotal() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RulePreviewTotal(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API RulePreviewTotal& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of recommended actions matching the rule preview
   * configuration.</p>
   */
  inline int GetRecommendedActionCount() const { return m_recommendedActionCount; }
  inline bool RecommendedActionCountHasBeenSet() const { return m_recommendedActionCountHasBeenSet; }
  inline void SetRecommendedActionCount(int value) {
    m_recommendedActionCountHasBeenSet = true;
    m_recommendedActionCount = value;
  }
  inline RulePreviewTotal& WithRecommendedActionCount(int value) {
    SetRecommendedActionCount(value);
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
  RulePreviewTotal& WithEstimatedMonthlySavings(EstimatedMonthlySavingsT&& value) {
    SetEstimatedMonthlySavings(std::forward<EstimatedMonthlySavingsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_recommendedActionCount{0};
  bool m_recommendedActionCountHasBeenSet = false;

  EstimatedMonthlySavings m_estimatedMonthlySavings;
  bool m_estimatedMonthlySavingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
