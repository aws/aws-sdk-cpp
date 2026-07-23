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
 * <p> Represents an action to add a Reserved Instance to a bill scenario.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/AddReservedInstanceAction">AWS
 * API Reference</a></p>
 */
class AddReservedInstanceAction {
 public:
  AWS_BCMPRICINGCALCULATOR_API AddReservedInstanceAction() = default;
  AWS_BCMPRICINGCALCULATOR_API AddReservedInstanceAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API AddReservedInstanceAction& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_BCMPRICINGCALCULATOR_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The ID of the Reserved Instance offering to add. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeReservedInstancesOfferings.html">
   * DescribeReservedInstancesOfferings</a>. </p>
   */
  inline const Aws::String& GetReservedInstancesOfferingId() const { return m_reservedInstancesOfferingId; }
  inline bool ReservedInstancesOfferingIdHasBeenSet() const { return m_reservedInstancesOfferingIdHasBeenSet; }
  template <typename ReservedInstancesOfferingIdT = Aws::String>
  void SetReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) {
    m_reservedInstancesOfferingIdHasBeenSet = true;
    m_reservedInstancesOfferingId = std::forward<ReservedInstancesOfferingIdT>(value);
  }
  template <typename ReservedInstancesOfferingIdT = Aws::String>
  AddReservedInstanceAction& WithReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) {
    SetReservedInstancesOfferingId(std::forward<ReservedInstancesOfferingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of instances to add for this Reserved Instance offering. </p>
   */
  inline int64_t GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int64_t value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline AddReservedInstanceAction& WithInstanceCount(int64_t value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_reservedInstancesOfferingId;

  int64_t m_instanceCount{0};
  bool m_reservedInstancesOfferingIdHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
