/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Use this structure to specify the distribution of On-Demand Instances and
   * Spot Instances and the allocation strategies used to fulfill On-Demand and Spot
   * capacities for a mixed instances policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstancesDistribution">AWS
   * API Reference</a></p>
   */
  class InstancesDistribution
  {
  public:
    AWS_AUTOSCALING_API InstancesDistribution();
    AWS_AUTOSCALING_API InstancesDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API InstancesDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline const Aws::String& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline void SetOnDemandAllocationStrategy(const Aws::String& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline void SetOnDemandAllocationStrategy(Aws::String&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline void SetOnDemandAllocationStrategy(const char* value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy.assign(value); }

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const Aws::String& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(Aws::String&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The allocation strategy to apply to your On-Demand Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>lowest-price</dt> <dd> <p>Uses price to determine which instance types
     * are the highest priority, launching the lowest priced instance types within an
     * Availability Zone first. This is the default value for Auto Scaling groups that
     * specify <a>InstanceRequirements</a>. </p> </dd> <dt>prioritized</dt> <dd> <p>You
     * set the order of instance types for the launch template overrides from highest
     * to lowest priority (from first to last in the list). Amazon EC2 Auto Scaling
     * launches your highest priority instance types first. If all your On-Demand
     * capacity cannot be fulfilled using your highest priority instance type, then
     * Amazon EC2 Auto Scaling launches the remaining capacity using the second
     * priority instance type, and so on. This is the default value for Auto Scaling
     * groups that don't specify <a>InstanceRequirements</a> and cannot be used for
     * groups that do.</p> </dd> </dl>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const char* value) { SetOnDemandAllocationStrategy(value); return *this;}


    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>This number has the same unit of measurement as the group's
     * desired capacity. If you change the default unit of measurement (number of
     * instances) by specifying weighted capacity values in your launch template
     * overrides list, or by changing the default desired capacity type setting of the
     * group, you must specify this number using the same unit of measurement.</p>
     * <p>Default: 0</p>
     */
    inline int GetOnDemandBaseCapacity() const{ return m_onDemandBaseCapacity; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>This number has the same unit of measurement as the group's
     * desired capacity. If you change the default unit of measurement (number of
     * instances) by specifying weighted capacity values in your launch template
     * overrides list, or by changing the default desired capacity type setting of the
     * group, you must specify this number using the same unit of measurement.</p>
     * <p>Default: 0</p>
     */
    inline bool OnDemandBaseCapacityHasBeenSet() const { return m_onDemandBaseCapacityHasBeenSet; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>This number has the same unit of measurement as the group's
     * desired capacity. If you change the default unit of measurement (number of
     * instances) by specifying weighted capacity values in your launch template
     * overrides list, or by changing the default desired capacity type setting of the
     * group, you must specify this number using the same unit of measurement.</p>
     * <p>Default: 0</p>
     */
    inline void SetOnDemandBaseCapacity(int value) { m_onDemandBaseCapacityHasBeenSet = true; m_onDemandBaseCapacity = value; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>This number has the same unit of measurement as the group's
     * desired capacity. If you change the default unit of measurement (number of
     * instances) by specifying weighted capacity values in your launch template
     * overrides list, or by changing the default desired capacity type setting of the
     * group, you must specify this number using the same unit of measurement.</p>
     * <p>Default: 0</p>
     */
    inline InstancesDistribution& WithOnDemandBaseCapacity(int value) { SetOnDemandBaseCapacity(value); return *this;}


    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default: 100</p>
     */
    inline int GetOnDemandPercentageAboveBaseCapacity() const{ return m_onDemandPercentageAboveBaseCapacity; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default: 100</p>
     */
    inline bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const { return m_onDemandPercentageAboveBaseCapacityHasBeenSet; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default: 100</p>
     */
    inline void SetOnDemandPercentageAboveBaseCapacity(int value) { m_onDemandPercentageAboveBaseCapacityHasBeenSet = true; m_onDemandPercentageAboveBaseCapacity = value; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default: 100</p>
     */
    inline InstancesDistribution& WithOnDemandPercentageAboveBaseCapacity(int value) { SetOnDemandPercentageAboveBaseCapacity(value); return *this;}


    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline const Aws::String& GetSpotAllocationStrategy() const{ return m_spotAllocationStrategy; }

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline bool SpotAllocationStrategyHasBeenSet() const { return m_spotAllocationStrategyHasBeenSet; }

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline void SetSpotAllocationStrategy(const Aws::String& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = value; }

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline void SetSpotAllocationStrategy(Aws::String&& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = std::move(value); }

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline void SetSpotAllocationStrategy(const char* value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy.assign(value); }

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const Aws::String& value) { SetSpotAllocationStrategy(value); return *this;}

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(Aws::String&& value) { SetSpotAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The allocation strategy to apply to your Spot Instances when they are
     * launched. Possible instance types are determined by the launch template
     * overrides that you specify.</p> <p>The following lists the valid values:</p>
     * <dl> <dt>capacity-optimized</dt> <dd> <p>Requests Spot Instances using pools
     * that are optimally chosen based on the available Spot capacity. This strategy
     * has the lowest risk of interruption. To give certain instance types a higher
     * chance of launching first, use <code>capacity-optimized-prioritized</code>.</p>
     * </dd> <dt>capacity-optimized-prioritized</dt> <dd> <p>You set the order of
     * instance types for the launch template overrides from highest to lowest priority
     * (from first to last in the list). Amazon EC2 Auto Scaling honors the instance
     * type priorities on a best effort basis but optimizes for capacity first. Note
     * that if the On-Demand allocation strategy is set to <code>prioritized</code>,
     * the same priority is applied when fulfilling On-Demand capacity. This is not a
     * valid value for Auto Scaling groups that specify
     * <a>InstanceRequirements</a>.</p> </dd> <dt>lowest-price</dt> <dd> <p>Requests
     * Spot Instances using the lowest priced pools within an Availability Zone, across
     * the number of Spot pools that you specify for the <code>SpotInstancePools</code>
     * property. To ensure that your desired capacity is met, you might receive Spot
     * Instances from several pools. This is the default value, but it might lead to
     * high interruption rates because this strategy only considers instance price and
     * not available capacity.</p> </dd> <dt>price-capacity-optimized
     * (recommended)</dt> <dd> <p>The price and capacity optimized allocation strategy
     * looks at both price and capacity to select the Spot Instance pools that are the
     * least likely to be interrupted and have the lowest possible price.</p> </dd>
     * </dl>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const char* value) { SetSpotAllocationStrategy(value); return *this;}


    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the <code>SpotAllocationStrategy</code> is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * 2</p>
     */
    inline int GetSpotInstancePools() const{ return m_spotInstancePools; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the <code>SpotAllocationStrategy</code> is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * 2</p>
     */
    inline bool SpotInstancePoolsHasBeenSet() const { return m_spotInstancePoolsHasBeenSet; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the <code>SpotAllocationStrategy</code> is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * 2</p>
     */
    inline void SetSpotInstancePools(int value) { m_spotInstancePoolsHasBeenSet = true; m_spotInstancePools = value; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the <code>SpotAllocationStrategy</code> is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * 2</p>
     */
    inline InstancesDistribution& WithSpotInstancePools(int value) { SetSpotInstancePools(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline const Aws::String& GetSpotMaxPrice() const{ return m_spotMaxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline bool SpotMaxPriceHasBeenSet() const { return m_spotMaxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(const Aws::String& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(Aws::String&& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(const char* value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const Aws::String& value) { SetSpotMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(Aws::String&& value) { SetSpotMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If your maximum price is lower than the Spot price for the instance
     * types that you selected, your Spot Instances are not launched. We do not
     * recommend specifying a maximum price because it can lead to increased
     * interruptions. When Spot Instances launch, you pay the current Spot price. To
     * remove a maximum price that you previously set, include the property but specify
     * an empty string ("") for the value.</p>  <p>If you specify a maximum
     * price, your instances will be interrupted more frequently than if you do not
     * specify one.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const char* value) { SetSpotMaxPrice(value); return *this;}

  private:

    Aws::String m_onDemandAllocationStrategy;
    bool m_onDemandAllocationStrategyHasBeenSet = false;

    int m_onDemandBaseCapacity;
    bool m_onDemandBaseCapacityHasBeenSet = false;

    int m_onDemandPercentageAboveBaseCapacity;
    bool m_onDemandPercentageAboveBaseCapacityHasBeenSet = false;

    Aws::String m_spotAllocationStrategy;
    bool m_spotAllocationStrategyHasBeenSet = false;

    int m_spotInstancePools;
    bool m_spotInstancePoolsHasBeenSet = false;

    Aws::String m_spotMaxPrice;
    bool m_spotMaxPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
