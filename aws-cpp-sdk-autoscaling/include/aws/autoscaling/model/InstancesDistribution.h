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
   * <p>Describes an instances distribution for an Auto Scaling group with a
   * <a>MixedInstancesPolicy</a>.</p> <p>The instances distribution specifies the
   * distribution of On-Demand Instances and Spot Instances, the maximum price to pay
   * for Spot Instances, and how the Auto Scaling group allocates instance types to
   * fulfill On-Demand and Spot capacities.</p> <p>When you update
   * <code>SpotAllocationStrategy</code>, <code>SpotInstancePools</code>, or
   * <code>SpotMaxPrice</code>, this update action does not deploy any changes across
   * the running Amazon EC2 instances in the group. Your existing Spot Instances
   * continue to run as long as the maximum price for those instances is higher than
   * the current Spot price. When scale out occurs, Amazon EC2 Auto Scaling launches
   * instances based on the new settings. When scale in occurs, Amazon EC2 Auto
   * Scaling terminates instances according to the group's termination
   * policies.</p><p><h3>See Also:</h3>   <a
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
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline const Aws::String& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(const Aws::String& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(Aws::String&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(const char* value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy.assign(value); }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const Aws::String& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(Aws::String&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity. The
     * only valid value is <code>prioritized</code>, which is also the default value.
     * This strategy uses the order of instance types in the
     * <code>LaunchTemplateOverrides</code> to define the launch priority of each
     * instance type. The first instance type in the array is prioritized higher than
     * the last. If all your On-Demand capacity cannot be fulfilled using your highest
     * priority instance, then the Auto Scaling groups launches the remaining capacity
     * using the second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const char* value) { SetOnDemandAllocationStrategy(value); return *this;}


    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales. Defaults to 0 if not specified. If you specify weights for the
     * instance types in the overrides, set the value of
     * <code>OnDemandBaseCapacity</code> in terms of the number of capacity units, and
     * not the number of instances.</p>
     */
    inline int GetOnDemandBaseCapacity() const{ return m_onDemandBaseCapacity; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales. Defaults to 0 if not specified. If you specify weights for the
     * instance types in the overrides, set the value of
     * <code>OnDemandBaseCapacity</code> in terms of the number of capacity units, and
     * not the number of instances.</p>
     */
    inline bool OnDemandBaseCapacityHasBeenSet() const { return m_onDemandBaseCapacityHasBeenSet; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales. Defaults to 0 if not specified. If you specify weights for the
     * instance types in the overrides, set the value of
     * <code>OnDemandBaseCapacity</code> in terms of the number of capacity units, and
     * not the number of instances.</p>
     */
    inline void SetOnDemandBaseCapacity(int value) { m_onDemandBaseCapacityHasBeenSet = true; m_onDemandBaseCapacity = value; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales. Defaults to 0 if not specified. If you specify weights for the
     * instance types in the overrides, set the value of
     * <code>OnDemandBaseCapacity</code> in terms of the number of capacity units, and
     * not the number of instances.</p>
     */
    inline InstancesDistribution& WithOnDemandBaseCapacity(int value) { SetOnDemandBaseCapacity(value); return *this;}


    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * Defaults to 100 if not specified. If set to 100, only On-Demand Instances are
     * provisioned.</p>
     */
    inline int GetOnDemandPercentageAboveBaseCapacity() const{ return m_onDemandPercentageAboveBaseCapacity; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * Defaults to 100 if not specified. If set to 100, only On-Demand Instances are
     * provisioned.</p>
     */
    inline bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const { return m_onDemandPercentageAboveBaseCapacityHasBeenSet; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * Defaults to 100 if not specified. If set to 100, only On-Demand Instances are
     * provisioned.</p>
     */
    inline void SetOnDemandPercentageAboveBaseCapacity(int value) { m_onDemandPercentageAboveBaseCapacityHasBeenSet = true; m_onDemandPercentageAboveBaseCapacity = value; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>. Expressed as a
     * number (for example, 20 specifies 20% On-Demand Instances, 80% Spot Instances).
     * Defaults to 100 if not specified. If set to 100, only On-Demand Instances are
     * provisioned.</p>
     */
    inline InstancesDistribution& WithOnDemandPercentageAboveBaseCapacity(int value) { SetOnDemandPercentageAboveBaseCapacity(value); return *this;}


    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline const Aws::String& GetSpotAllocationStrategy() const{ return m_spotAllocationStrategy; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline bool SpotAllocationStrategyHasBeenSet() const { return m_spotAllocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline void SetSpotAllocationStrategy(const Aws::String& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = value; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline void SetSpotAllocationStrategy(Aws::String&& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline void SetSpotAllocationStrategy(const char* value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy.assign(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const Aws::String& value) { SetSpotAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(Aws::String&& value) { SetSpotAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools. </p> <p>If
     * the allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify.
     * Defaults to <code>lowest-price</code> if not specified.</p> <p>If the allocation
     * strategy is <code>capacity-optimized</code> (recommended), the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity. Alternatively, you can use
     * <code>capacity-optimized-prioritized</code> and set the order of instance types
     * in the list of launch template overrides from highest to lowest priority (from
     * first to last in the list). Amazon EC2 Auto Scaling honors the instance type
     * priorities on a best-effort basis but optimizes for capacity first. </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const char* value) { SetSpotAllocationStrategy(value); return *this;}


    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1 to 20. Defaults to 2
     * if not specified.</p>
     */
    inline int GetSpotInstancePools() const{ return m_spotInstancePools; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1 to 20. Defaults to 2
     * if not specified.</p>
     */
    inline bool SpotInstancePoolsHasBeenSet() const { return m_spotInstancePoolsHasBeenSet; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1 to 20. Defaults to 2
     * if not specified.</p>
     */
    inline void SetSpotInstancePools(int value) { m_spotInstancePoolsHasBeenSet = true; m_spotInstancePools = value; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the overrides. Valid only when the Spot allocation strategy is
     * <code>lowest-price</code>. Value must be in the range of 1 to 20. Defaults to 2
     * if not specified.</p>
     */
    inline InstancesDistribution& WithSpotInstancePools(int value) { SetSpotInstancePools(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline const Aws::String& GetSpotMaxPrice() const{ return m_spotMaxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline bool SpotMaxPriceHasBeenSet() const { return m_spotMaxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline void SetSpotMaxPrice(const Aws::String& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline void SetSpotMaxPrice(Aws::String&& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline void SetSpotMaxPrice(const char* value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const Aws::String& value) { SetSpotMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(Aws::String&& value) { SetSpotMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value at its default (empty), Amazon EC2 Auto Scaling
     * uses the On-Demand price as the maximum Spot price. To remove a value that you
     * previously set, include the property but specify an empty string ("") for the
     * value.</p>
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
