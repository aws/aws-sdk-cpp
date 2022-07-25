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
   * <p>Describes an instances distribution for an Auto Scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/InstancesDistribution">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API InstancesDistribution
  {
  public:
    InstancesDistribution();
    InstancesDistribution(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstancesDistribution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline const Aws::String& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline void SetOnDemandAllocationStrategy(const Aws::String& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline void SetOnDemandAllocationStrategy(Aws::String&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline void SetOnDemandAllocationStrategy(const char* value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy.assign(value); }

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const Aws::String& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(Aws::String&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>The order of the launch template overrides to use in fulfilling On-Demand
     * capacity. </p> <p>If you specify <code>lowest-price</code>, Amazon EC2 Auto
     * Scaling uses price to determine the order, launching the lowest price first.
     * </p> <p>If you specify <code>prioritized</code>, Amazon EC2 Auto Scaling uses
     * the priority that you assigned to each launch template override, launching the
     * highest priority first. If all your On-Demand capacity cannot be fulfilled using
     * your highest priority instance, then Amazon EC2 Auto Scaling launches the
     * remaining capacity using the second priority instance type, and so on.</p>
     * <p>Default: <code>lowest-price</code> for Auto Scaling groups that specify
     * <a>InstanceRequirements</a> in the overrides and <code>prioritized</code> for
     * Auto Scaling groups that don't.</p> <p>Valid values: <code>lowest-price</code> |
     * <code>prioritized</code> </p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const char* value) { SetOnDemandAllocationStrategy(value); return *this;}


    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>If you specify weights for the instance types in the
     * overrides, the base capacity is measured in the same unit of measurement as the
     * instance types. If you specify <a>InstanceRequirements</a> in the overrides, the
     * base capacity is measured in the same unit of measurement as your group's
     * desired capacity.</p> <p>Default: <code>0</code> </p>
     */
    inline int GetOnDemandBaseCapacity() const{ return m_onDemandBaseCapacity; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>If you specify weights for the instance types in the
     * overrides, the base capacity is measured in the same unit of measurement as the
     * instance types. If you specify <a>InstanceRequirements</a> in the overrides, the
     * base capacity is measured in the same unit of measurement as your group's
     * desired capacity.</p> <p>Default: <code>0</code> </p>
     */
    inline bool OnDemandBaseCapacityHasBeenSet() const { return m_onDemandBaseCapacityHasBeenSet; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>If you specify weights for the instance types in the
     * overrides, the base capacity is measured in the same unit of measurement as the
     * instance types. If you specify <a>InstanceRequirements</a> in the overrides, the
     * base capacity is measured in the same unit of measurement as your group's
     * desired capacity.</p> <p>Default: <code>0</code> </p>
     */
    inline void SetOnDemandBaseCapacity(int value) { m_onDemandBaseCapacityHasBeenSet = true; m_onDemandBaseCapacity = value; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is launched first as your
     * group scales.</p> <p>If you specify weights for the instance types in the
     * overrides, the base capacity is measured in the same unit of measurement as the
     * instance types. If you specify <a>InstanceRequirements</a> in the overrides, the
     * base capacity is measured in the same unit of measurement as your group's
     * desired capacity.</p> <p>Default: <code>0</code> </p>
     */
    inline InstancesDistribution& WithOnDemandBaseCapacity(int value) { SetOnDemandBaseCapacity(value); return *this;}


    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline int GetOnDemandPercentageAboveBaseCapacity() const{ return m_onDemandPercentageAboveBaseCapacity; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const { return m_onDemandPercentageAboveBaseCapacityHasBeenSet; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline void SetOnDemandPercentageAboveBaseCapacity(int value) { m_onDemandPercentageAboveBaseCapacityHasBeenSet = true; m_onDemandPercentageAboveBaseCapacity = value; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * If set to 100, only On-Demand Instances are used.</p> <p>Default:
     * <code>100</code> </p>
     */
    inline InstancesDistribution& WithOnDemandPercentageAboveBaseCapacity(int value) { SetOnDemandPercentageAboveBaseCapacity(value); return *this;}


    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline const Aws::String& GetSpotAllocationStrategy() const{ return m_spotAllocationStrategy; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline bool SpotAllocationStrategyHasBeenSet() const { return m_spotAllocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline void SetSpotAllocationStrategy(const Aws::String& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = value; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline void SetSpotAllocationStrategy(Aws::String&& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline void SetSpotAllocationStrategy(const char* value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy.assign(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const Aws::String& value) { SetSpotAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(Aws::String&& value) { SetSpotAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. </p>
     * <p>If the allocation strategy is <code>capacity-optimized</code> (recommended),
     * the Auto Scaling group launches instances using Spot pools that are optimally
     * chosen based on the available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     * <p>Default: <code>lowest-price</code> </p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> |
     * <code>capacity-optimized-prioritized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const char* value) { SetSpotAllocationStrategy(value); return *this;}


    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * <code>2</code> </p>
     */
    inline int GetSpotInstancePools() const{ return m_spotInstancePools; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * <code>2</code> </p>
     */
    inline bool SpotInstancePoolsHasBeenSet() const { return m_spotInstancePoolsHasBeenSet; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * <code>2</code> </p>
     */
    inline void SetSpotInstancePools(int value) { m_spotInstancePoolsHasBeenSet = true; m_spotInstancePools = value; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1–20.</p> <p>Default:
     * <code>2</code> </p>
     */
    inline InstancesDistribution& WithSpotInstancePools(int value) { SetSpotInstancePools(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline const Aws::String& GetSpotMaxPrice() const{ return m_spotMaxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline bool SpotMaxPriceHasBeenSet() const { return m_spotMaxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(const Aws::String& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(Aws::String&& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline void SetSpotMaxPrice(const char* value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const Aws::String& value) { SetSpotMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(Aws::String&& value) { SetSpotMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you keep the value at its default (unspecified), Amazon EC2 Auto
     * Scaling uses the On-Demand price as the maximum Spot price. To remove a value
     * that you previously set, include the property but specify an empty string ("")
     * for the value.</p>  <p>If your maximum price is lower than the Spot
     * price for the instance types that you selected, your Spot Instances are not
     * launched.</p>  <p>Valid Range: Minimum value of 0.001</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const char* value) { SetSpotMaxPrice(value); return *this;}

  private:

    Aws::String m_onDemandAllocationStrategy;
    bool m_onDemandAllocationStrategyHasBeenSet;

    int m_onDemandBaseCapacity;
    bool m_onDemandBaseCapacityHasBeenSet;

    int m_onDemandPercentageAboveBaseCapacity;
    bool m_onDemandPercentageAboveBaseCapacityHasBeenSet;

    Aws::String m_spotAllocationStrategy;
    bool m_spotAllocationStrategyHasBeenSet;

    int m_spotInstancePools;
    bool m_spotInstancePoolsHasBeenSet;

    Aws::String m_spotMaxPrice;
    bool m_spotMaxPriceHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
