/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/model/EBSSavingsEstimationMode.h>
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
 * <p> Describes the effective recommendation preferences for Amazon EBS volumes.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/EBSEffectiveRecommendationPreferences">AWS
 * API Reference</a></p>
 */
class EBSEffectiveRecommendationPreferences {
 public:
  AWS_COMPUTEOPTIMIZER_API EBSEffectiveRecommendationPreferences() = default;
  AWS_COMPUTEOPTIMIZER_API EBSEffectiveRecommendationPreferences(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API EBSEffectiveRecommendationPreferences& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> Describes the savings estimation mode preference applied for calculating
   * savings opportunity for Amazon EBS volumes. </p>
   */
  inline const EBSSavingsEstimationMode& GetSavingsEstimationMode() const { return m_savingsEstimationMode; }
  inline bool SavingsEstimationModeHasBeenSet() const { return m_savingsEstimationModeHasBeenSet; }
  template <typename SavingsEstimationModeT = EBSSavingsEstimationMode>
  void SetSavingsEstimationMode(SavingsEstimationModeT&& value) {
    m_savingsEstimationModeHasBeenSet = true;
    m_savingsEstimationMode = std::forward<SavingsEstimationModeT>(value);
  }
  template <typename SavingsEstimationModeT = EBSSavingsEstimationMode>
  EBSEffectiveRecommendationPreferences& WithSavingsEstimationMode(SavingsEstimationModeT&& value) {
    SetSavingsEstimationMode(std::forward<SavingsEstimationModeT>(value));
    return *this;
  }
  ///@}
 private:
  EBSSavingsEstimationMode m_savingsEstimationMode;
  bool m_savingsEstimationModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws
