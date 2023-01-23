/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/SpotAllocationStrategy.h>
#include <aws/ec2/model/FleetSpotMaintenanceStrategies.h>
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
   * <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotOptions">AWS API
   * Reference</a></p>
   */
  class SpotOptions
  {
  public:
    AWS_EC2_API SpotOptions();
    AWS_EC2_API SpotOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline const SpotAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline void SetAllocationStrategy(const SpotAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline void SetAllocationStrategy(SpotAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline SpotOptions& WithAllocationStrategy(const SpotAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>The strategy that determines how to allocate the target Spot Instance
     * capacity across the Spot Instance pools specified by the EC2 Fleet launch
     * configuration. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-allocation-strategy.html">Allocation
     * strategies for Spot Instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <dl>
     * <dt>price-capacity-optimized (recommended)</dt> <dd> <p>EC2 Fleet identifies the
     * pools with the highest capacity availability for the number of instances that
     * are launching. This means that we will request Spot Instances from the pools
     * that we believe have the lowest chance of interruption in the near term. EC2
     * Fleet then requests Spot Instances from the lowest priced of these pools.</p>
     * </dd> <dt>capacity-optimized</dt> <dd> <p>EC2 Fleet identifies the pools with
     * the highest capacity availability for the number of instances that are
     * launching. This means that we will request Spot Instances from the pools that we
     * believe have the lowest chance of interruption in the near term. To give certain
     * instance types a higher chance of launching first, use
     * <code>capacity-optimized-prioritized</code>. Set a priority for each instance
     * type by using the <code>Priority</code> parameter for
     * <code>LaunchTemplateOverrides</code>. You can assign the same priority to
     * different <code>LaunchTemplateOverrides</code>. EC2 implements the priorities on
     * a best-effort basis, but optimizes for capacity first.
     * <code>capacity-optimized-prioritized</code> is supported only if your EC2 Fleet
     * uses a launch template. Note that if the On-Demand
     * <code>AllocationStrategy</code> is set to <code>prioritized</code>, the same
     * priority is applied when fulfilling On-Demand capacity.</p> </dd>
     * <dt>diversified</dt> <dd> <p>EC2 Fleet requests instances from all of the Spot
     * Instance pools that you specify.</p> </dd> <dt>lowest-price</dt> <dd> <p>EC2
     * Fleet requests instances from the lowest priced Spot Instance pool that has
     * available capacity. If the lowest priced pool doesn't have available capacity,
     * the Spot Instances come from the next lowest priced pool that has available
     * capacity. If a pool runs out of capacity before fulfilling your desired
     * capacity, EC2 Fleet will continue to fulfill your request by drawing from the
     * next lowest priced pool. To ensure that your desired capacity is met, you might
     * receive Spot Instances from several pools. Because this strategy only considers
     * instance price and not capacity availability, it might lead to high interruption
     * rates.</p> </dd> </dl> <p>Default: <code>lowest-price</code> </p>
     */
    inline SpotOptions& WithAllocationStrategy(SpotAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline const FleetSpotMaintenanceStrategies& GetMaintenanceStrategies() const{ return m_maintenanceStrategies; }

    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline bool MaintenanceStrategiesHasBeenSet() const { return m_maintenanceStrategiesHasBeenSet; }

    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline void SetMaintenanceStrategies(const FleetSpotMaintenanceStrategies& value) { m_maintenanceStrategiesHasBeenSet = true; m_maintenanceStrategies = value; }

    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline void SetMaintenanceStrategies(FleetSpotMaintenanceStrategies&& value) { m_maintenanceStrategiesHasBeenSet = true; m_maintenanceStrategies = std::move(value); }

    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline SpotOptions& WithMaintenanceStrategies(const FleetSpotMaintenanceStrategies& value) { SetMaintenanceStrategies(value); return *this;}

    /**
     * <p>The strategies for managing your workloads on your Spot Instances that will
     * be interrupted. Currently only the capacity rebalance strategy is available.</p>
     */
    inline SpotOptions& WithMaintenanceStrategies(FleetSpotMaintenanceStrategies&& value) { SetMaintenanceStrategies(std::move(value)); return *this;}


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
    inline SpotOptions& WithInstanceInterruptionBehavior(const SpotInstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted.</p> <p>Default:
     * <code>terminate</code> </p>
     */
    inline SpotOptions& WithInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}


    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Supported only when <code>AllocationStrategy</code> is set to
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
     * Supported only when <code>AllocationStrategy</code> is set to
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
     * Supported only when <code>AllocationStrategy</code> is set to
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
     * Supported only when <code>AllocationStrategy</code> is set to
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
    inline SpotOptions& WithInstancePoolsToUseCount(int value) { SetInstancePoolsToUseCount(value); return *this;}


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
    inline SpotOptions& WithSingleInstanceType(bool value) { SetSingleInstanceType(value); return *this;}


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
    inline SpotOptions& WithSingleAvailabilityZone(bool value) { SetSingleAvailabilityZone(value); return *this;}


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
    inline SpotOptions& WithMinTargetCapacity(int value) { SetMinTargetCapacity(value); return *this;}


    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline const Aws::String& GetMaxTotalPrice() const{ return m_maxTotalPrice; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline bool MaxTotalPriceHasBeenSet() const { return m_maxTotalPriceHasBeenSet; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetMaxTotalPrice(const Aws::String& value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice = value; }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetMaxTotalPrice(Aws::String&& value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice = std::move(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline void SetMaxTotalPrice(const char* value) { m_maxTotalPriceHasBeenSet = true; m_maxTotalPrice.assign(value); }

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotOptions& WithMaxTotalPrice(const Aws::String& value) { SetMaxTotalPrice(value); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotOptions& WithMaxTotalPrice(Aws::String&& value) { SetMaxTotalPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum amount per hour for Spot Instances that you're willing to pay. We
     * do not recommend using this parameter because it can lead to increased
     * interruptions. If you do not specify this parameter, you will pay the current
     * Spot price.</p>  <p>If you specify a maximum price, your Spot
     * Instances will be interrupted more frequently than if you do not specify this
     * parameter.</p> 
     */
    inline SpotOptions& WithMaxTotalPrice(const char* value) { SetMaxTotalPrice(value); return *this;}

  private:

    SpotAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet = false;

    FleetSpotMaintenanceStrategies m_maintenanceStrategies;
    bool m_maintenanceStrategiesHasBeenSet = false;

    SpotInstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;

    int m_instancePoolsToUseCount;
    bool m_instancePoolsToUseCountHasBeenSet = false;

    bool m_singleInstanceType;
    bool m_singleInstanceTypeHasBeenSet = false;

    bool m_singleAvailabilityZone;
    bool m_singleAvailabilityZoneHasBeenSet = false;

    int m_minTargetCapacity;
    bool m_minTargetCapacityHasBeenSet = false;

    Aws::String m_maxTotalPrice;
    bool m_maxTotalPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
