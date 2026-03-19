/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FleetReservationType.h>

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
 * <p>Defines EC2 Fleet preferences for utilizing reserved capacity when
 * DefaultTargetCapacityType is set to <code>reserved-capacity</code>.</p>
 * <p>This configuration can only be used if the EC2 Fleet is of type
 * <code>instant</code>.</p>  <p>When you specify
 * <code>ReservedCapacityOptions</code>, you must also set
 * <code>DefaultTargetCapacityType</code> to <code>reserved-capacity</code> in the
 * <code>TargetCapacitySpecification</code>.</p> <p>For more information about
 * Interruptible Capacity Reservations, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-launch-instances-interruptible-cr-walkthrough.html">Launch
 * instances into an Interruptible Capacity Reservation</a> in the <i>Amazon EC2
 * User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedCapacityOptionsRequest">AWS
 * API Reference</a></p>
 */
class ReservedCapacityOptionsRequest {
 public:
  AWS_EC2_API ReservedCapacityOptionsRequest() = default;
  AWS_EC2_API ReservedCapacityOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ReservedCapacityOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The types of Capacity Reservations to use for fulfilling the EC2 Fleet
   * request.</p>
   */
  inline const Aws::Vector<FleetReservationType>& GetReservationTypes() const { return m_reservationTypes; }
  inline bool ReservationTypesHasBeenSet() const { return m_reservationTypesHasBeenSet; }
  template <typename ReservationTypesT = Aws::Vector<FleetReservationType>>
  void SetReservationTypes(ReservationTypesT&& value) {
    m_reservationTypesHasBeenSet = true;
    m_reservationTypes = std::forward<ReservationTypesT>(value);
  }
  template <typename ReservationTypesT = Aws::Vector<FleetReservationType>>
  ReservedCapacityOptionsRequest& WithReservationTypes(ReservationTypesT&& value) {
    SetReservationTypes(std::forward<ReservationTypesT>(value));
    return *this;
  }
  inline ReservedCapacityOptionsRequest& AddReservationTypes(FleetReservationType value) {
    m_reservationTypesHasBeenSet = true;
    m_reservationTypes.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FleetReservationType> m_reservationTypes;
  bool m_reservationTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
