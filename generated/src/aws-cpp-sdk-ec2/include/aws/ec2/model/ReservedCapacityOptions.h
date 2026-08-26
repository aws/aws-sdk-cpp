/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/FleetReservationType.h>
#include <aws/ec2/model/ReservedCapacityAllocationStrategy.h>
#include <aws/ec2/model/ReservedCapacityFallbackOptions.h>

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
 * Capacity Blocks for ML, and interruptible Capacity Reservations.</p><p><h3>See
 * Also:</h3>   <a
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
  inline ReservedCapacityOptions& WithAllocationStrategy(ReservedCapacityAllocationStrategy value) {
    SetAllocationStrategy(value);
    return *this;
  }
  ///@}

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

  ///@{
  /**
   * <p>The fallback behavior for the EC2 Fleet when there is not enough reserved
   * capacity available to meet the target capacity.</p>
   */
  inline const ReservedCapacityFallbackOptions& GetReservedCapacityFallbackOptions() const { return m_reservedCapacityFallbackOptions; }
  inline bool ReservedCapacityFallbackOptionsHasBeenSet() const { return m_reservedCapacityFallbackOptionsHasBeenSet; }
  template <typename ReservedCapacityFallbackOptionsT = ReservedCapacityFallbackOptions>
  void SetReservedCapacityFallbackOptions(ReservedCapacityFallbackOptionsT&& value) {
    m_reservedCapacityFallbackOptionsHasBeenSet = true;
    m_reservedCapacityFallbackOptions = std::forward<ReservedCapacityFallbackOptionsT>(value);
  }
  template <typename ReservedCapacityFallbackOptionsT = ReservedCapacityFallbackOptions>
  ReservedCapacityOptions& WithReservedCapacityFallbackOptions(ReservedCapacityFallbackOptionsT&& value) {
    SetReservedCapacityFallbackOptions(std::forward<ReservedCapacityFallbackOptionsT>(value));
    return *this;
  }
  ///@}
 private:
  ReservedCapacityAllocationStrategy m_allocationStrategy{ReservedCapacityAllocationStrategy::NOT_SET};

  Aws::Vector<FleetReservationType> m_reservationTypes;

  ReservedCapacityFallbackOptions m_reservedCapacityFallbackOptions;
  bool m_allocationStrategyHasBeenSet = false;
  bool m_reservationTypesHasBeenSet = false;
  bool m_reservedCapacityFallbackOptionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
