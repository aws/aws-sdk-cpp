/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/ECSSavingsEstimationMode.h>
#include <aws/compute-optimizer/model/LookBackPeriodPreference.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizer {
namespace Model {

/**
 * <p> Describes the effective recommendation preferences for Amazon ECS services.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/ECSEffectiveRecommendationPreferences">AWS
 * API Reference</a></p>
 */
class ECSEffectiveRecommendationPreferences {
 public:
  AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences() = default;
  AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API ECSEffectiveRecommendationPreferences& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> Describes the savings estimation mode preference applied for calculating
   * savings opportunity for Amazon ECS services. </p>
   */
  inline const ECSSavingsEstimationMode& GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
  inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
  template <typename SavingsEstimationModeT = ECSSavingsEstimationMode>
  void SetSavingsEstimationMode(SavingsEstimationModeT&& value) {
    m_savingsEstimationModeHasBeenSet = true;
    m_savingsEstimationMode = std::forward<SavingsEstimationModeT>(value);
  }
  template <typename SavingsEstimationModeT = ECSSavingsEstimationMode>
  ECSEffectiveRecommendationPreferences& WithSavingsEstimationMode(SavingsEstimationModeT&& value) {
    SetSavingsEstimationMode(std::forward<SavingsEstimationModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of days the Amazon ECS service utilization metrics were analyzed.
   * </p>
   */
  inline LookBackPeriodPreference GetLookBackPeriod() const { return m_lookBackPeriod; }
  inline bool LookBackPeriodHasBeenSet() const { return m_lookBackPeriodHasBeenSet; }
  inline void SetLookBackPeriod(LookBackPeriodPreference value) {
    m_lookBackPeriodHasBeenSet = true;
    m_lookBackPeriod = value;
  }
  inline ECSEffectiveRecommendationPreferences& WithLookBackPeriod(LookBackPeriodPreference value) {
    SetLookBackPeriod(value);
    return *this;
  }
  ///@}
 private:
  ECSSavingsEstimationMode m_savingsEstimationMode;

  LookBackPeriodPreference m_lookBackPeriod{LookBackPeriodPreference::NOT_SET};
  bool m_savingsEstimationModeHasBeenSet = false;
  bool m_lookBackPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
