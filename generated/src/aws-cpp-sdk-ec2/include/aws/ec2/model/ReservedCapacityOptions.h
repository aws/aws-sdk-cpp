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
 * DefaultTargetCapacityType is set to
 * <code>reserved-capacity</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedCapacityOptions">AWS
 * API Reference</a></p>
 */
class ReservedCapacityOptions {
 public:
  AWS_EC2_API ReservedCapacityOptions() = default;
  AWS_EC2_API ReservedCapacityOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API ReservedCapacityOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The types of Capacity Reservations used for fulfilling the EC2 Fleet
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
  ReservedCapacityOptions& WithReservationTypes(ReservationTypesT&& value) {
    SetReservationTypes(std::forward<ReservationTypesT>(value));
    return *this;
  }
  inline ReservedCapacityOptions& AddReservationTypes(FleetReservationType value) {
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
