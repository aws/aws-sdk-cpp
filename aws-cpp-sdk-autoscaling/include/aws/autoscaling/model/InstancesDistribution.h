/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes an instances distribution for an Auto Scaling group with
   * <a>MixedInstancesPolicy</a>.</p> <p>The instances distribution specifies the
   * distribution of On-Demand Instances and Spot Instances, the maximum price to pay
   * for Spot Instances, and how the Auto Scaling group allocates instance types to
   * fulfill On-Demand and Spot capacity.</p> <p>When you update
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
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline const Aws::String& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(const Aws::String& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(Aws::String&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline void SetOnDemandAllocationStrategy(const char* value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy.assign(value); }

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const Aws::String& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(Aws::String&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to allocate instance types to fulfill On-Demand capacity.</p>
     * <p>The only valid value is <code>prioritized</code>, which is also the default
     * value. This strategy uses the order of instance type overrides for the
     * <a>LaunchTemplate</a> to define the launch priority of each instance type. The
     * first instance type in the array is prioritized higher than the last. If all
     * your On-Demand capacity cannot be fulfilled using your highest priority
     * instance, then the Auto Scaling groups launches the remaining capacity using the
     * second priority instance type, and so on.</p>
     */
    inline InstancesDistribution& WithOnDemandAllocationStrategy(const char* value) { SetOnDemandAllocationStrategy(value); return *this;}


    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales.</p> <p>Default if not set is 0. If you leave it set to 0,
     * On-Demand Instances are launched as a percentage of the Auto Scaling group's
     * desired capacity, per the <code>OnDemandPercentageAboveBaseCapacity</code>
     * setting.</p> <note> <p>An update to this setting means a gradual replacement of
     * instances to maintain the specified number of On-Demand Instances for your base
     * capacity. When replacing instances, Amazon EC2 Auto Scaling launches new
     * instances before terminating the old ones.</p> </note>
     */
    inline int GetOnDemandBaseCapacity() const{ return m_onDemandBaseCapacity; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales.</p> <p>Default if not set is 0. If you leave it set to 0,
     * On-Demand Instances are launched as a percentage of the Auto Scaling group's
     * desired capacity, per the <code>OnDemandPercentageAboveBaseCapacity</code>
     * setting.</p> <note> <p>An update to this setting means a gradual replacement of
     * instances to maintain the specified number of On-Demand Instances for your base
     * capacity. When replacing instances, Amazon EC2 Auto Scaling launches new
     * instances before terminating the old ones.</p> </note>
     */
    inline bool OnDemandBaseCapacityHasBeenSet() const { return m_onDemandBaseCapacityHasBeenSet; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales.</p> <p>Default if not set is 0. If you leave it set to 0,
     * On-Demand Instances are launched as a percentage of the Auto Scaling group's
     * desired capacity, per the <code>OnDemandPercentageAboveBaseCapacity</code>
     * setting.</p> <note> <p>An update to this setting means a gradual replacement of
     * instances to maintain the specified number of On-Demand Instances for your base
     * capacity. When replacing instances, Amazon EC2 Auto Scaling launches new
     * instances before terminating the old ones.</p> </note>
     */
    inline void SetOnDemandBaseCapacity(int value) { m_onDemandBaseCapacityHasBeenSet = true; m_onDemandBaseCapacity = value; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances. This base portion is provisioned first as your
     * group scales.</p> <p>Default if not set is 0. If you leave it set to 0,
     * On-Demand Instances are launched as a percentage of the Auto Scaling group's
     * desired capacity, per the <code>OnDemandPercentageAboveBaseCapacity</code>
     * setting.</p> <note> <p>An update to this setting means a gradual replacement of
     * instances to maintain the specified number of On-Demand Instances for your base
     * capacity. When replacing instances, Amazon EC2 Auto Scaling launches new
     * instances before terminating the old ones.</p> </note>
     */
    inline InstancesDistribution& WithOnDemandBaseCapacity(int value) { SetOnDemandBaseCapacity(value); return *this;}


    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>.</p> <p>Default if
     * not set is 100. If you leave it set to 100, the percentages are 100% for
     * On-Demand Instances and 0% for Spot Instances.</p> <note> <p>An update to this
     * setting means a gradual replacement of instances to maintain the percentage of
     * On-Demand Instances for your additional capacity above the base capacity. When
     * replacing instances, Amazon EC2 Auto Scaling launches new instances before
     * terminating the old ones.</p> </note> <p>Valid Range: Minimum value of 0.
     * Maximum value of 100.</p>
     */
    inline int GetOnDemandPercentageAboveBaseCapacity() const{ return m_onDemandPercentageAboveBaseCapacity; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>.</p> <p>Default if
     * not set is 100. If you leave it set to 100, the percentages are 100% for
     * On-Demand Instances and 0% for Spot Instances.</p> <note> <p>An update to this
     * setting means a gradual replacement of instances to maintain the percentage of
     * On-Demand Instances for your additional capacity above the base capacity. When
     * replacing instances, Amazon EC2 Auto Scaling launches new instances before
     * terminating the old ones.</p> </note> <p>Valid Range: Minimum value of 0.
     * Maximum value of 100.</p>
     */
    inline bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const { return m_onDemandPercentageAboveBaseCapacityHasBeenSet; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>.</p> <p>Default if
     * not set is 100. If you leave it set to 100, the percentages are 100% for
     * On-Demand Instances and 0% for Spot Instances.</p> <note> <p>An update to this
     * setting means a gradual replacement of instances to maintain the percentage of
     * On-Demand Instances for your additional capacity above the base capacity. When
     * replacing instances, Amazon EC2 Auto Scaling launches new instances before
     * terminating the old ones.</p> </note> <p>Valid Range: Minimum value of 0.
     * Maximum value of 100.</p>
     */
    inline void SetOnDemandPercentageAboveBaseCapacity(int value) { m_onDemandPercentageAboveBaseCapacityHasBeenSet = true; m_onDemandPercentageAboveBaseCapacity = value; }

    /**
     * <p>Controls the percentages of On-Demand Instances and Spot Instances for your
     * additional capacity beyond <code>OnDemandBaseCapacity</code>.</p> <p>Default if
     * not set is 100. If you leave it set to 100, the percentages are 100% for
     * On-Demand Instances and 0% for Spot Instances.</p> <note> <p>An update to this
     * setting means a gradual replacement of instances to maintain the percentage of
     * On-Demand Instances for your additional capacity above the base capacity. When
     * replacing instances, Amazon EC2 Auto Scaling launches new instances before
     * terminating the old ones.</p> </note> <p>Valid Range: Minimum value of 0.
     * Maximum value of 100.</p>
     */
    inline InstancesDistribution& WithOnDemandPercentageAboveBaseCapacity(int value) { SetOnDemandPercentageAboveBaseCapacity(value); return *this;}


    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline const Aws::String& GetSpotAllocationStrategy() const{ return m_spotAllocationStrategy; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline bool SpotAllocationStrategyHasBeenSet() const { return m_spotAllocationStrategyHasBeenSet; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline void SetSpotAllocationStrategy(const Aws::String& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = value; }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline void SetSpotAllocationStrategy(Aws::String&& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline void SetSpotAllocationStrategy(const char* value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy.assign(value); }

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const Aws::String& value) { SetSpotAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(Aws::String&& value) { SetSpotAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>Indicates how to allocate instances across Spot Instance pools.</p> <p>If the
     * allocation strategy is <code>lowest-price</code>, the Auto Scaling group
     * launches instances using the Spot pools with the lowest price, and evenly
     * allocates your instances across the number of Spot pools that you specify. If
     * the allocation strategy is <code>capacity-optimized</code>, the Auto Scaling
     * group launches instances using Spot pools that are optimally chosen based on the
     * available Spot capacity.</p> <p>The default Spot allocation strategy for calls
     * that you make through the API, the AWS CLI, or the AWS SDKs is
     * <code>lowest-price</code>. The default Spot allocation strategy for the AWS
     * Management Console is <code>capacity-optimized</code>.</p> <p>Valid values:
     * <code>lowest-price</code> | <code>capacity-optimized</code> </p>
     */
    inline InstancesDistribution& WithSpotAllocationStrategy(const char* value) { SetSpotAllocationStrategy(value); return *this;}


    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the Overrides array of <a>LaunchTemplate</a>. Default if not set is 2.</p>
     * <p>Used only when the Spot allocation strategy is <code>lowest-price</code>.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 20.</p>
     */
    inline int GetSpotInstancePools() const{ return m_spotInstancePools; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the Overrides array of <a>LaunchTemplate</a>. Default if not set is 2.</p>
     * <p>Used only when the Spot allocation strategy is <code>lowest-price</code>.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 20.</p>
     */
    inline bool SpotInstancePoolsHasBeenSet() const { return m_spotInstancePoolsHasBeenSet; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the Overrides array of <a>LaunchTemplate</a>. Default if not set is 2.</p>
     * <p>Used only when the Spot allocation strategy is <code>lowest-price</code>.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 20.</p>
     */
    inline void SetSpotInstancePools(int value) { m_spotInstancePoolsHasBeenSet = true; m_spotInstancePools = value; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances. The Spot pools are determined from the different instance types in
     * the Overrides array of <a>LaunchTemplate</a>. Default if not set is 2.</p>
     * <p>Used only when the Spot allocation strategy is <code>lowest-price</code>.</p>
     * <p>Valid Range: Minimum value of 1. Maximum value of 20.</p>
     */
    inline InstancesDistribution& WithSpotInstancePools(int value) { SetSpotInstancePools(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline const Aws::String& GetSpotMaxPrice() const{ return m_spotMaxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline bool SpotMaxPriceHasBeenSet() const { return m_spotMaxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline void SetSpotMaxPrice(const Aws::String& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline void SetSpotMaxPrice(Aws::String&& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline void SetSpotMaxPrice(const char* value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(const Aws::String& value) { SetSpotMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
     */
    inline InstancesDistribution& WithSpotMaxPrice(Aws::String&& value) { SetSpotMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance. If you leave the value of this parameter blank (which is the default),
     * the maximum Spot price is set at the On-Demand price.</p> <p>To remove a value
     * that you previously set, include the parameter but leave the value blank.</p>
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
