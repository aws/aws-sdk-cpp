/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FleetCapacityReservationTargetRequest.h>
#include <aws/ec2/model/FleetReservationType.h>
#include <aws/ec2/model/ReservedCapacityAllocationStrategy.h>
#include <aws/ec2/model/ReservedCapacityFallbackOptionsRequest.h>

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
 * <code>DefaultTargetCapacityType</code> is set to <code>reserved-capacity</code>.
 * EC2 Fleet can fulfill reserved capacity using On-Demand Capacity Reservations,
 * Capacity Blocks for ML, and interruptible Capacity Reservations.</p>
 * <p>This configuration can only be used if the EC2 Fleet is of type
 * <code>instant</code>.</p>  <p>When you specify
 * <code>ReservedCapacityOptions</code>, you must also set
 * <code>DefaultTargetCapacityType</code> to <code>reserved-capacity</code> in the
 * <code>TargetCapacitySpecification</code>.</p> <p>For more information about
 * interruptible Capacity Reservations, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-launch-instances-interruptible-cr-walkthrough.html">Launch
 * instances into an interruptible Capacity Reservation</a> in the <i>Amazon EC2
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
   * <p>The strategy that determines the order in which EC2 Fleet launches instances
   * across the reservation types that you specify. The only supported value is
   * <code>prioritized</code>, which launches instances in the priority order that
   * you specify in your launch template overrides. If you don't specify an
   * allocation strategy, instances are launched in a random order.</p>
   */
  inline ReservedCapacityAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
  inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
  inline void SetAllocationStrategy(ReservedCapacityAllocationStrategy value) {
    m_allocationStrategyHasBeenSet = true;
    m_allocationStrategy = value;
  }
  inline ReservedCapacityOptionsRequest& WithAllocationStrategy(ReservedCapacityAllocationStrategy value) {
    SetAllocationStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of Capacity Reservations to use for fulfilling the EC2 Fleet
   * request. This is an ordered list: EC2 Fleet attempts to launch instances into
   * each Capacity Reservation type in the order that you specify them before moving
   * on to the next type.</p>
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

  ///@{
  /**
   * <p>The Capacity Reservations or Capacity Reservation Resource Groups to use for
   * fulfilling the EC2 Fleet request. You can specify Capacity Reservation IDs or a
   * Capacity Reservation Resource Group ARN, but not both.</p>
   */
  inline const FleetCapacityReservationTargetRequest& GetCapacityReservationTarget() const { return m_capacityReservationTarget; }
  inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }
  template <typename CapacityReservationTargetT = FleetCapacityReservationTargetRequest>
  void SetCapacityReservationTarget(CapacityReservationTargetT&& value) {
    m_capacityReservationTargetHasBeenSet = true;
    m_capacityReservationTarget = std::forward<CapacityReservationTargetT>(value);
  }
  template <typename CapacityReservationTargetT = FleetCapacityReservationTargetRequest>
  ReservedCapacityOptionsRequest& WithCapacityReservationTarget(CapacityReservationTargetT&& value) {
    SetCapacityReservationTarget(std::forward<CapacityReservationTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fallback behavior for the EC2 Fleet when there is not enough reserved
   * capacity available to meet the target capacity. This member takes a
   * <code>ReservedCapacityFallbackOptionsRequest</code> structure, in which you set
   * <code>MarketTypes</code> to the instance purchasing options to fall back to.</p>
   */
  inline const ReservedCapacityFallbackOptionsRequest& GetReservedCapacityFallbackOptions() const {
    return m_reservedCapacityFallbackOptions;
  }
  inline bool ReservedCapacityFallbackOptionsHasBeenSet() const { return m_reservedCapacityFallbackOptionsHasBeenSet; }
  template <typename ReservedCapacityFallbackOptionsT = ReservedCapacityFallbackOptionsRequest>
  void SetReservedCapacityFallbackOptions(ReservedCapacityFallbackOptionsT&& value) {
    m_reservedCapacityFallbackOptionsHasBeenSet = true;
    m_reservedCapacityFallbackOptions = std::forward<ReservedCapacityFallbackOptionsT>(value);
  }
  template <typename ReservedCapacityFallbackOptionsT = ReservedCapacityFallbackOptionsRequest>
  ReservedCapacityOptionsRequest& WithReservedCapacityFallbackOptions(ReservedCapacityFallbackOptionsT&& value) {
    SetReservedCapacityFallbackOptions(std::forward<ReservedCapacityFallbackOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  ReservedCapacityAllocationStrategy m_allocationStrategy{ReservedCapacityAllocationStrategy::NOT_SET};

  Aws::Vector<FleetReservationType> m_reservationTypes;

  FleetCapacityReservationTargetRequest m_capacityReservationTarget;

  ReservedCapacityFallbackOptionsRequest m_reservedCapacityFallbackOptions;
  bool m_allocationStrategyHasBeenSet = false;
  bool m_reservationTypesHasBeenSet = false;
  bool m_capacityReservationTargetHasBeenSet = false;
  bool m_reservedCapacityFallbackOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
