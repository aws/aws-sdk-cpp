/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetOnDemandAllocationStrategy.h>
#include <aws/ec2/model/CapacityReservationOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the configuration of On-Demand Instances in an EC2
   * Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/OnDemandOptions">AWS
   * API Reference</a></p>
   */
  class OnDemandOptions
  {
  public:
    AWS_EC2_API OnDemandOptions() = default;
    AWS_EC2_API OnDemandOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API OnDemandOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The strategy that determines the order of the launch template overrides to
     * use in fulfilling On-Demand capacity.</p> <p> <code>lowest-price</code> - EC2
     * Fleet uses price to determine the order, launching the lowest price first.</p>
     * <p> <code>prioritized</code> - EC2 Fleet uses the priority that you assigned to
     * each launch template override, launching the highest priority first.</p>
     * <p>Default: <code>lowest-price</code> </p>
     */
    inline FleetOnDemandAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(FleetOnDemandAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline OnDemandOptions& WithAllocationStrategy(FleetOnDemandAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy for using unused Capacity Reservations for fulfilling On-Demand
     * capacity.</p> <p>Supported only for fleets of type <code>instant</code>.</p>
     */
    inline const CapacityReservationOptions& GetCapacityReservationOptions() const { return m_capacityReservationOptions; }
    inline bool CapacityReservationOptionsHasBeenSet() const { return m_capacityReservationOptionsHasBeenSet; }
    template<typename CapacityReservationOptionsT = CapacityReservationOptions>
    void SetCapacityReservationOptions(CapacityReservationOptionsT&& value) { m_capacityReservationOptionsHasBeenSet = true; m_capacityReservationOptions = std::forward<CapacityReservationOptionsT>(value); }
    template<typename CapacityReservationOptionsT = CapacityReservationOptions>
    OnDemandOptions& WithCapacityReservationOptions(CapacityReservationOptionsT&& value) { SetCapacityReservationOptions(std::forward<CapacityReservationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the fleet uses a single instance type to launch all On-Demand
     * Instances in the fleet.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool GetSingleInstanceType() const { return m_singleInstanceType; }
    inline bool SingleInstanceTypeHasBeenSet() const { return m_singleInstanceTypeHasBeenSet; }
    inline void SetSingleInstanceType(bool value) { m_singleInstanceTypeHasBeenSet = true; m_singleInstanceType = value; }
    inline OnDemandOptions& WithSingleInstanceType(bool value) { SetSingleInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the fleet launches all On-Demand Instances into a single
     * Availability Zone.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool GetSingleAvailabilityZone() const { return m_singleAvailabilityZone; }
    inline bool SingleAvailabilityZoneHasBeenSet() const { return m_singleAvailabilityZoneHasBeenSet; }
    inline void SetSingleAvailabilityZone(bool value) { m_singleAvailabilityZoneHasBeenSet = true; m_singleAvailabilityZone = value; }
    inline OnDemandOptions& WithSingleAvailabilityZone(bool value) { SetSingleAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum target capacity for On-Demand Instances in the fleet. If this
     * minimum capacity isn't reached, no instances are launched.</p> <p>Constraints:
     * Maximum value of <code>1000</code>. Supported only for fleets of type
     * <code>instant</code>.</p> <p>At least one of the following must be specified:
     * <code>SingleAvailabilityZone</code> | <code>SingleInstanceType</code> </p>
     */
    inline int GetMinTargetCapacity() const { return m_minTargetCapacity; }
    inline bool MinTargetCapacityHasBeenSet() const { return m_minTargetCapacityHasBeenSet; }
    inline void SetMinTargetCapacity(int value) { m_minTargetCapacityHasBeenSet = true; m_minTargetCapacity = value; }
    inline OnDemandOptions& WithMinTargetCapacity(int value) { SetMinTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount per hour for On-Demand Instances that you're willing to
     * pay.</p>  <p>If your fleet includes T instances that are configured as
     * <code>unlimited</code>, and if their average CPU usage exceeds the baseline
     * utilization, you will incur a charge for surplus credits. The
     * <code>maxTotalPrice</code> does not account for surplus credits, and, if you use
     * surplus credits, your final cost might be higher than what you specified for
     * <code>maxTotalPrice</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances-unlimited-mode-concepts.html#unlimited-mode-surplus-credits">Surplus
     * credits can incur charges</a> in the <i>Amazon EC2 User Guide</i>.</p> 
     */
    inline const Aws::String& GetMaxTotalPrice() const { return m_maxTotalPrice; }
    inline bool MaxTotalPriceHasBeenSet() const { return m_maxTotalPriceHasBeenSet; }
    template<typename MaxTotalPriceT = Aws::String>
    void SetMaxTotalPrice(MaxTotalPriceT&& value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice = std::forward<MaxTotalPriceT>(value); }
    template<typename MaxTotalPriceT = Aws::String>
    OnDemandOptions& WithMaxTotalPrice(MaxTotalPriceT&& value) { SetMaxTotalPrice(std::forward<MaxTotalPriceT>(value)); return *this;}
    ///@}
  private:

    FleetOnDemandAllocationStrategy m_allocationStrategy{FleetOnDemandAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    CapacityReservationOptions m_capacityReservationOptions;
    bool m_capacityReservationOptionsHasBeenSet = false;

    bool m_singleInstanceType{false};
    bool m_singleInstanceTypeHasBeenSet = false;

    bool m_singleAvailabilityZone{false};
    bool m_singleAvailabilityZoneHasBeenSet = false;

    int m_minTargetCapacity{0};
    bool m_minTargetCapacityHasBeenSet = false;

    Aws::String m_maxTotalPrice;
    bool m_maxTotalPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
