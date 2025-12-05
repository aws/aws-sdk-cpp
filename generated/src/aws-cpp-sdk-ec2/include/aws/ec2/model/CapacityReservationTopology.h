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
 * <p>Information about the Capacity Reservation topology.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationTopology">AWS
 * API Reference</a></p>
 */
class CapacityReservationTopology {
 public:
  AWS_EC2_API CapacityReservationTopology() = default;
  AWS_EC2_API CapacityReservationTopology(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityReservationTopology& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the Capacity Reservation.</p>
   */
  inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
  inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
  template <typename CapacityReservationIdT = Aws::String>
  void SetCapacityReservationId(CapacityReservationIdT&& value) {
    m_capacityReservationIdHasBeenSet = true;
    m_capacityReservationId = std::forward<CapacityReservationIdT>(value);
  }
  template <typename CapacityReservationIdT = Aws::String>
  CapacityReservationTopology& WithCapacityReservationId(CapacityReservationIdT&& value) {
    SetCapacityReservationId(std::forward<CapacityReservationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Capacity Block. This parameter is only supported for
   * UltraServer instances and identifies instances within the UltraServer
   * domain.</p>
   */
  inline const Aws::String& GetCapacityBlockId() const { return m_capacityBlockId; }
  inline bool CapacityBlockIdHasBeenSet() const { return m_capacityBlockIdHasBeenSet; }
  template <typename CapacityBlockIdT = Aws::String>
  void SetCapacityBlockId(CapacityBlockIdT&& value) {
    m_capacityBlockIdHasBeenSet = true;
    m_capacityBlockId = std::forward<CapacityBlockIdT>(value);
  }
  template <typename CapacityBlockIdT = Aws::String>
  CapacityReservationTopology& WithCapacityBlockId(CapacityBlockIdT&& value) {
    SetCapacityBlockId(std::forward<CapacityBlockIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the Capacity Reservation. For the list of possible
   * states, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeCapacityReservations.html">DescribeCapacityReservations</a>.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  CapacityReservationTopology& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance type.</p>
   */
  inline const Aws::String& GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  template <typename InstanceTypeT = Aws::String>
  void SetInstanceType(InstanceTypeT&& value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = std::forward<InstanceTypeT>(value);
  }
  template <typename InstanceTypeT = Aws::String>
  CapacityReservationTopology& WithInstanceType(InstanceTypeT&& value) {
    SetInstanceType(std::forward<InstanceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the placement group that the Capacity Reservation is in.</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  CapacityReservationTopology& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network nodes. The nodes are hashed based on your account. Capacity
   * Reservations from different accounts running under the same server will return a
   * different hashed list of strings.</p> <p>The value is <code>null</code> or empty
   * if:</p> <ul> <li> <p>The instance type is not supported.</p> </li> <li> <p>The
   * Capacity Reservation is in a state other than <code>active</code> or
   * <code>pending</code>.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetNetworkNodes() const { return m_networkNodes; }
  inline bool NetworkNodesHasBeenSet() const { return m_networkNodesHasBeenSet; }
  template <typename NetworkNodesT = Aws::Vector<Aws::String>>
  void SetNetworkNodes(NetworkNodesT&& value) {
    m_networkNodesHasBeenSet = true;
    m_networkNodes = std::forward<NetworkNodesT>(value);
  }
  template <typename NetworkNodesT = Aws::Vector<Aws::String>>
  CapacityReservationTopology& WithNetworkNodes(NetworkNodesT&& value) {
    SetNetworkNodes(std::forward<NetworkNodesT>(value));
    return *this;
  }
  template <typename NetworkNodesT = Aws::String>
  CapacityReservationTopology& AddNetworkNodes(NetworkNodesT&& value) {
    m_networkNodesHasBeenSet = true;
    m_networkNodes.emplace_back(std::forward<NetworkNodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Availability Zone or Local Zone that the Capacity Reservation
   * is in.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CapacityReservationTopology& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone or Local Zone that the Capacity Reservation
   * is in.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CapacityReservationTopology& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityReservationId;

  Aws::String m_capacityBlockId;

  Aws::String m_state;

  Aws::String m_instanceType;

  Aws::String m_groupName;

  Aws::Vector<Aws::String> m_networkNodes;

  Aws::String m_availabilityZoneId;

  Aws::String m_availabilityZone;
  bool m_capacityReservationIdHasBeenSet = false;
  bool m_capacityBlockIdHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_instanceTypeHasBeenSet = false;
  bool m_groupNameHasBeenSet = false;
  bool m_networkNodesHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
