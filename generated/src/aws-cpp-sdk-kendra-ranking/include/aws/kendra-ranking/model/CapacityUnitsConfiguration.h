/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace KendraRanking {
namespace Model {

/**
 * <p>Sets additional capacity units configured for your rescore execution plan. A
 * rescore execution plan is an Amazon Kendra Intelligent Ranking resource used for
 * provisioning the <code>Rescore</code> API. You can add and remove capacity units
 * to fit your usage requirements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-ranking-2022-10-19/CapacityUnitsConfiguration">AWS
 * API Reference</a></p>
 */
class CapacityUnitsConfiguration {
 public:
  AWS_KENDRARANKING_API CapacityUnitsConfiguration() = default;
  AWS_KENDRARANKING_API CapacityUnitsConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_KENDRARANKING_API CapacityUnitsConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_KENDRARANKING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The amount of extra capacity for your rescore execution plan.</p> <p>A single
   * extra capacity unit for a rescore execution plan provides 0.01 rescore requests
   * per second. You can add up to 1000 extra capacity units.</p>
   */
  inline int64_t GetRescoreCapacityUnits() const { return m_rescoreCapacityUnits; }
  inline bool RescoreCapacityUnitsHasBeenSet() const { return m_rescoreCapacityUnitsHasBeenSet; }
  inline void SetRescoreCapacityUnits(int64_t value) {
    m_rescoreCapacityUnitsHasBeenSet = true;
    m_rescoreCapacityUnits = value;
  }
  inline CapacityUnitsConfiguration& WithRescoreCapacityUnits(int64_t value) {
    SetRescoreCapacityUnits(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_rescoreCapacityUnits{0};
  bool m_rescoreCapacityUnitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace KendraRanking
}  // namespace Aws
