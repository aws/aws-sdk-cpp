﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/SpotAllocationStrategy.h>
#include <aws/ec2/model/FleetSpotMaintenanceStrategiesRequest.h>
#include <aws/ec2/model/SpotInstanceInterruptionBehavior.h>
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
   * <p>Describes the configuration of Spot Instances in an EC2 Fleet
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotOptionsRequest
  {
  public:
    SpotOptionsRequest();
    SpotOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline const SpotAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline void SetAllocationStrategy(const SpotAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline void SetAllocationStrategy(SpotAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline SpotOptionsRequest& WithAllocationStrategy(const SpotAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet.</p> <p>
     * <code>lowest-price</code> - EC2 Fleet launches instances from the Spot Instance
     * pools with the lowest price.</p> <p> <code>diversified</code> - EC2 Fleet
     * launches instances from all of the Spot Instance pools that you specify.</p> <p>
     * <code>capacity-optimized</code> (recommended) - EC2 Fleet launches instances
     * from Spot Instance pools with optimal capacity for the number of instances that
     * are launching. To give certain instance types a higher chance of launching
     * first, use <code>capacity-optimized-prioritized</code>. Set a priority for each
     * instance type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your fleet uses
     * a launch template. Note that if the On-Demand <code>AllocationStrategy</code> is
     * set to <code>prioritized</code>, the same priority is applied when fulfilling
     * On-Demand capacity.</p> <p>Default: <code>lowest-price</code> </p>
     */
    inline SpotOptionsRequest& WithAllocationStrategy(SpotAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline const FleetSpotMaintenanceStrategiesRequest& GetMaintenanceStrategies() const{ return m_maintenanceStrategies; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline bool MaintenanceStrategiesHasBeenSet() const { return m_maintenanceStrategiesHasBeenSet; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline void SetMaintenanceStrategies(const FleetSpotMaintenanceStrategiesRequest& value) { m_maintenanceStrategiesHasBeenSet = true; m_maintenanceStrategies = value; }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline void SetMaintenanceStrategies(FleetSpotMaintenanceStrategiesRequest&& value) { m_maintenanceStrategiesHasBeenSet = true; m_maintenanceStrategies = std::move(value); }

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline SpotOptionsRequest& WithMaintenanceStrategies(const FleetSpotMaintenanceStrategiesRequest& value) { SetMaintenanceStrategies(value); return *this;}

    /**
     * <p>The strategies for managing your Spot Instances that are at an elevated risk
     * of being interrupted.</p>
     */
    inline SpotOptionsRequest& WithMaintenanceStrategies(FleetSpotMaintenanceStrategiesRequest&& value) { SetMaintenanceStrategies(std::move(value)); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline const SpotInstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline void SetInstanceInterruptionBehavior(const SpotInstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline void SetInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline SpotOptionsRequest& WithInstanceInterruptionBehavior(const SpotInstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline SpotOptionsRequest& WithInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}


    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Supported only when Spot <code>AllocationStrategy</code> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p> <p>Note that EC2 Fleet attempts to draw Spot Instances from the
     * number of pools that you specify on a best effort basis. If a pool runs out of
     * Spot capacity before fulfilling your target capacity, EC2 Fleet will continue to
     * fulfill your request by drawing from the next cheapest pool. To ensure that your
     * target capacity is met, you might receive Spot Instances from more than the
     * number of pools that you specified. Similarly, if most of the pools have no Spot
     * capacity, you might receive your full target capacity from fewer than the number
     * of pools that you specified.</p>
     */
    inline int GetInstancePoolsToUseCount() const{ return m_instancePoolsToUseCount; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Supported only when Spot <code>AllocationStrategy</code> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p> <p>Note that EC2 Fleet attempts to draw Spot Instances from the
     * number of pools that you specify on a best effort basis. If a pool runs out of
     * Spot capacity before fulfilling your target capacity, EC2 Fleet will continue to
     * fulfill your request by drawing from the next cheapest pool. To ensure that your
     * target capacity is met, you might receive Spot Instances from more than the
     * number of pools that you specified. Similarly, if most of the pools have no Spot
     * capacity, you might receive your full target capacity from fewer than the number
     * of pools that you specified.</p>
     */
    inline bool InstancePoolsToUseCountHasBeenSet() const { return m_instancePoolsToUseCountHasBeenSet; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Supported only when Spot <code>AllocationStrategy</code> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p> <p>Note that EC2 Fleet attempts to draw Spot Instances from the
     * number of pools that you specify on a best effort basis. If a pool runs out of
     * Spot capacity before fulfilling your target capacity, EC2 Fleet will continue to
     * fulfill your request by drawing from the next cheapest pool. To ensure that your
     * target capacity is met, you might receive Spot Instances from more than the
     * number of pools that you specified. Similarly, if most of the pools have no Spot
     * capacity, you might receive your full target capacity from fewer than the number
     * of pools that you specified.</p>
     */
    inline void SetInstancePoolsToUseCount(int value) { m_instancePoolsToUseCountHasBeenSet = true; m_instancePoolsToUseCount = value; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Supported only when Spot <code>AllocationStrategy</code> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p> <p>Note that EC2 Fleet attempts to draw Spot Instances from the
     * number of pools that you specify on a best effort basis. If a pool runs out of
     * Spot capacity before fulfilling your target capacity, EC2 Fleet will continue to
     * fulfill your request by drawing from the next cheapest pool. To ensure that your
     * target capacity is met, you might receive Spot Instances from more than the
     * number of pools that you specified. Similarly, if most of the pools have no Spot
     * capacity, you might receive your full target capacity from fewer than the number
     * of pools that you specified.</p>
     */
    inline SpotOptionsRequest& WithInstancePoolsToUseCount(int value) { SetInstancePoolsToUseCount(value); return *this;}


    /**
     * <p>Indicates that the fleet uses a single instance type to launch all Spot
     * Instances in the fleet.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool GetSingleInstanceType() const{ return m_singleInstanceType; }

    /**
     * <p>Indicates that the fleet uses a single instance type to launch all Spot
     * Instances in the fleet.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool SingleInstanceTypeHasBeenSet() const { return m_singleInstanceTypeHasBeenSet; }

    /**
     * <p>Indicates that the fleet uses a single instance type to launch all Spot
     * Instances in the fleet.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline void SetSingleInstanceType(bool value) { m_singleInstanceTypeHasBeenSet = true; m_singleInstanceType = value; }

    /**
     * <p>Indicates that the fleet uses a single instance type to launch all Spot
     * Instances in the fleet.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline SpotOptionsRequest& WithSingleInstanceType(bool value) { SetSingleInstanceType(value); return *this;}


    /**
     * <p>Indicates that the fleet launches all Spot Instances into a single
     * Availability Zone.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool GetSingleAvailabilityZone() const{ return m_singleAvailabilityZone; }

    /**
     * <p>Indicates that the fleet launches all Spot Instances into a single
     * Availability Zone.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline bool SingleAvailabilityZoneHasBeenSet() const { return m_singleAvailabilityZoneHasBeenSet; }

    /**
     * <p>Indicates that the fleet launches all Spot Instances into a single
     * Availability Zone.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline void SetSingleAvailabilityZone(bool value) { m_singleAvailabilityZoneHasBeenSet = true; m_singleAvailabilityZone = value; }

    /**
     * <p>Indicates that the fleet launches all Spot Instances into a single
     * Availability Zone.</p> <p>Supported only for fleets of type
     * <code>instant</code>.</p>
     */
    inline SpotOptionsRequest& WithSingleAvailabilityZone(bool value) { SetSingleAvailabilityZone(value); return *this;}


    /**
     * <p>The minimum target capacity for Spot Instances in the fleet. If the minimum
     * target capacity is not reached, the fleet launches no instances.</p>
     * <p>Supported only for fleets of type <code>instant</code>.</p> <p>At least one
     * of the following must be specified: <code>SingleAvailabilityZone</code> |
     * <code>SingleInstanceType</code> </p>
     */
    inline int GetMinTargetCapacity() const{ return m_minTargetCapacity; }

    /**
     * <p>The minimum target capacity for Spot Instances in the fleet. If the minimum
     * target capacity is not reached, the fleet launches no instances.</p>
     * <p>Supported only for fleets of type <code>instant</code>.</p> <p>At least one
     * of the following must be specified: <code>SingleAvailabilityZone</code> |
     * <code>SingleInstanceType</code> </p>
     */
    inline bool MinTargetCapacityHasBeenSet() const { return m_minTargetCapacityHasBeenSet; }

    /**
     * <p>The minimum target capacity for Spot Instances in the fleet. If the minimum
     * target capacity is not reached, the fleet launches no instances.</p>
     * <p>Supported only for fleets of type <code>instant</code>.</p> <p>At least one
     * of the following must be specified: <code>SingleAvailabilityZone</code> |
     * <code>SingleInstanceType</code> </p>
     */
    inline void SetMinTargetCapacity(int value) { m_minTargetCapacityHasBeenSet = true; m_minTargetCapacity = value; }

    /**
     * <p>The minimum target capacity for Spot Instances in the fleet. If the minimum
     * target capacity is not reached, the fleet launches no instances.</p>
     * <p>Supported only for fleets of type <code>instant</code>.</p> <p>At least one
     * of the following must be specified: <code>SingleAvailabilityZone</code> |
     * <code>SingleInstanceType</code> </p>
     */
    inline SpotOptionsRequest& WithMinTargetCapacity(int value) { SetMinTargetCapacity(value); return *this;}


    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline const Aws::String& GetMaxTotalPrice() const{ return m_maxTotalPrice; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline bool MaxTotalPriceHasBeenSet() const { return m_maxTotalPriceHasBeenSet; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline void SetMaxTotalPrice(const Aws::String& value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice = value; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline void SetMaxTotalPrice(Aws::String&& value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice = std::move(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline void SetMaxTotalPrice(const char* value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice.assign(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline SpotOptionsRequest& WithMaxTotalPrice(const Aws::String& value) { SetMaxTotalPrice(value); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline SpotOptionsRequest& WithMaxTotalPrice(Aws::String&& value) { SetMaxTotalPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to
     * pay.</p>
     */
    inline SpotOptionsRequest& WithMaxTotalPrice(const char* value) { SetMaxTotalPrice(value); return *this;}

  private:

    SpotAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet;

    FleetSpotMaintenanceStrategiesRequest m_maintenanceStrategies;
    bool m_maintenanceStrategiesHasBeenSet;

    SpotInstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet;

    int m_instancePoolsToUseCount;
    bool m_instancePoolsToUseCountHasBeenSet;

    bool m_singleInstanceType;
    bool m_singleInstanceTypeHasBeenSet;

    bool m_singleAvailabilityZone;
    bool m_singleAvailabilityZoneHasBeenSet;

    int m_minTargetCapacity;
    bool m_minTargetCapacityHasBeenSet;

    Aws::String m_maxTotalPrice;
    bool m_maxTotalPriceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
