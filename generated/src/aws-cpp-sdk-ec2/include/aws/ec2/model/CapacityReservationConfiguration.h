/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Describes the configuration of a Capacity Reservation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationConfiguration">AWS
 * API Reference</a></p>
 */
class CapacityReservationConfiguration {
 public:
  AWS_EC2_API CapacityReservationConfiguration() = default;
  AWS_EC2_API CapacityReservationConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The number of instances in the Capacity Reservation.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline CapacityReservationConfiguration& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the Capacity Reservation.</p>
   */
  inline const Aws::String& GetReservationState() const { return m_reservationState; }
  inline bool ReservationStateHasBeenSet() const { return m_reservationStateHasBeenSet; }
  template <typename ReservationStateT = Aws::String>
  void SetReservationState(ReservationStateT&& value) {
    m_reservationStateHasBeenSet = true;
    m_reservationState = std::forward<ReservationStateT>(value);
  }
  template <typename ReservationStateT = Aws::String>
  CapacityReservationConfiguration& WithReservationState(ReservationStateT&& value) {
    SetReservationState(std::forward<ReservationStateT>(value));
    return *this;
  }
  ///@}
 private:
  int m_instanceCount{0};

  Aws::String m_reservationState;
  bool m_instanceCountHasBeenSet = false;
  bool m_reservationStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
