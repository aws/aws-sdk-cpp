/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {

/**
 * <p> Represents an action to remove a Reserved Instance from a bill scenario.
 * </p> <p> This is the ID of an existing Reserved Instance in your account.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/NegateReservedInstanceAction">AWS
 * API Reference</a></p>
 */
class NegateReservedInstanceAction {
 public:
  AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction() = default;
  AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API NegateReservedInstanceAction& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The ID of the Reserved Instance to remove. </p>
   */
  inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
  inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
  template <typename ReservedInstancesIdT = Aws::String>
  void SetReservedInstancesId(ReservedInstancesIdT&& value) {
    m_reservedInstancesIdHasBeenSet = true;
    m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value);
  }
  template <typename ReservedInstancesIdT = Aws::String>
  NegateReservedInstanceAction& WithReservedInstancesId(ReservedInstancesIdT&& value) {
    SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reservedInstancesId;
  bool m_reservedInstancesIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
