/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the target Capacity Reservations or Capacity Reservation Resource
 * Groups for an EC2 Fleet that launches into reserved capacity. You can specify
 * Capacity Reservation IDs or a Capacity Reservation Resource Group ARN, but not
 * both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetCapacityReservationTargetRequest">AWS
 * API Reference</a></p>
 */
class FleetCapacityReservationTargetRequest {
 public:
  AWS_EC2_API FleetCapacityReservationTargetRequest() = default;
  AWS_EC2_API FleetCapacityReservationTargetRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API FleetCapacityReservationTargetRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The IDs of the Capacity Reservations in which to launch the instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityReservationIds() const { return m_capacityReservationIds; }
  inline bool CapacityReservationIdsHasBeenSet() const { return m_capacityReservationIdsHasBeenSet; }
  template <typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
  void SetCapacityReservationIds(CapacityReservationIdsT&& value) {
    m_capacityReservationIdsHasBeenSet = true;
    m_capacityReservationIds = std::forward<CapacityReservationIdsT>(value);
  }
  template <typename CapacityReservationIdsT = Aws::Vector<Aws::String>>
  FleetCapacityReservationTargetRequest& WithCapacityReservationIds(CapacityReservationIdsT&& value) {
    SetCapacityReservationIds(std::forward<CapacityReservationIdsT>(value));
    return *this;
  }
  template <typename CapacityReservationIdsT = Aws::String>
  FleetCapacityReservationTargetRequest& AddCapacityReservationIds(CapacityReservationIdsT&& value) {
    m_capacityReservationIdsHasBeenSet = true;
    m_capacityReservationIds.emplace_back(std::forward<CapacityReservationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARNs of the Capacity Reservation Resource Groups in which to launch the
   * instances.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityReservationResourceGroupArns() const { return m_capacityReservationResourceGroupArns; }
  inline bool CapacityReservationResourceGroupArnsHasBeenSet() const { return m_capacityReservationResourceGroupArnsHasBeenSet; }
  template <typename CapacityReservationResourceGroupArnsT = Aws::Vector<Aws::String>>
  void SetCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) {
    m_capacityReservationResourceGroupArnsHasBeenSet = true;
    m_capacityReservationResourceGroupArns = std::forward<CapacityReservationResourceGroupArnsT>(value);
  }
  template <typename CapacityReservationResourceGroupArnsT = Aws::Vector<Aws::String>>
  FleetCapacityReservationTargetRequest& WithCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) {
    SetCapacityReservationResourceGroupArns(std::forward<CapacityReservationResourceGroupArnsT>(value));
    return *this;
  }
  template <typename CapacityReservationResourceGroupArnsT = Aws::String>
  FleetCapacityReservationTargetRequest& AddCapacityReservationResourceGroupArns(CapacityReservationResourceGroupArnsT&& value) {
    m_capacityReservationResourceGroupArnsHasBeenSet = true;
    m_capacityReservationResourceGroupArns.emplace_back(std::forward<CapacityReservationResourceGroupArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_capacityReservationIds;

  Aws::Vector<Aws::String> m_capacityReservationResourceGroupArns;
  bool m_capacityReservationIdsHasBeenSet = false;
  bool m_capacityReservationResourceGroupArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
