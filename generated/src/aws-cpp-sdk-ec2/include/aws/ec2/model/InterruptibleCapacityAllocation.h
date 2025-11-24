/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InterruptibleCapacityReservationAllocationStatus.h>
#include <aws/ec2/model/InterruptionType.h>

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
 * <p> Represents the allocation of capacity from a source reservation to an
 * interruptible reservation, tracking current and target instance counts for
 * allocation management. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InterruptibleCapacityAllocation">AWS
 * API Reference</a></p>
 */
class InterruptibleCapacityAllocation {
 public:
  AWS_EC2_API InterruptibleCapacityAllocation() = default;
  AWS_EC2_API InterruptibleCapacityAllocation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API InterruptibleCapacityAllocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The current number of instances allocated to the interruptible reservation.
   * </p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline InterruptibleCapacityAllocation& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> After your modify request, the requested number of instances allocated to
   * interruptible reservation. </p>
   */
  inline int GetTargetInstanceCount() const { return m_targetInstanceCount; }
  inline bool TargetInstanceCountHasBeenSet() const { return m_targetInstanceCountHasBeenSet; }
  inline void SetTargetInstanceCount(int value) {
    m_targetInstanceCountHasBeenSet = true;
    m_targetInstanceCount = value;
  }
  inline InterruptibleCapacityAllocation& WithTargetInstanceCount(int value) {
    SetTargetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the allocation (updating during reclamation, active
   * when complete). </p>
   */
  inline InterruptibleCapacityReservationAllocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InterruptibleCapacityReservationAllocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InterruptibleCapacityAllocation& WithStatus(InterruptibleCapacityReservationAllocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The ID of the interruptible Capacity Reservation created from the
   * allocation. </p>
   */
  inline const Aws::String& GetInterruptibleCapacityReservationId() const { return m_interruptibleCapacityReservationId; }
  inline bool InterruptibleCapacityReservationIdHasBeenSet() const { return m_interruptibleCapacityReservationIdHasBeenSet; }
  template <typename InterruptibleCapacityReservationIdT = Aws::String>
  void SetInterruptibleCapacityReservationId(InterruptibleCapacityReservationIdT&& value) {
    m_interruptibleCapacityReservationIdHasBeenSet = true;
    m_interruptibleCapacityReservationId = std::forward<InterruptibleCapacityReservationIdT>(value);
  }
  template <typename InterruptibleCapacityReservationIdT = Aws::String>
  InterruptibleCapacityAllocation& WithInterruptibleCapacityReservationId(InterruptibleCapacityReservationIdT&& value) {
    SetInterruptibleCapacityReservationId(std::forward<InterruptibleCapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of interruption policy applied to the interruptible reservation.
   * </p>
   */
  inline InterruptionType GetInterruptionType() const { return m_interruptionType; }
  inline bool InterruptionTypeHasBeenSet() const { return m_interruptionTypeHasBeenSet; }
  inline void SetInterruptionType(InterruptionType value) {
    m_interruptionTypeHasBeenSet = true;
    m_interruptionType = value;
  }
  inline InterruptibleCapacityAllocation& WithInterruptionType(InterruptionType value) {
    SetInterruptionType(value);
    return *this;
  }
  ///@}
 private:
  int m_instanceCount{0};
  bool m_instanceCountHasBeenSet = false;

  int m_targetInstanceCount{0};
  bool m_targetInstanceCountHasBeenSet = false;

  InterruptibleCapacityReservationAllocationStatus m_status{InterruptibleCapacityReservationAllocationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_interruptibleCapacityReservationId;
  bool m_interruptibleCapacityReservationIdHasBeenSet = false;

  InterruptionType m_interruptionType{InterruptionType::NOT_SET};
  bool m_interruptionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
