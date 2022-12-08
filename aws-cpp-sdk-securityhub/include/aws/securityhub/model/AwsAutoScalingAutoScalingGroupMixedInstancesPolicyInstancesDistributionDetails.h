/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the instances distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails();
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline const Aws::String& GetOnDemandAllocationStrategy() const{ return m_onDemandAllocationStrategy; }

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline bool OnDemandAllocationStrategyHasBeenSet() const { return m_onDemandAllocationStrategyHasBeenSet; }

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline void SetOnDemandAllocationStrategy(const Aws::String& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = value; }

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline void SetOnDemandAllocationStrategy(Aws::String&& value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy = std::move(value); }

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline void SetOnDemandAllocationStrategy(const char* value) { m_onDemandAllocationStrategyHasBeenSet = true; m_onDemandAllocationStrategy.assign(value); }

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithOnDemandAllocationStrategy(const Aws::String& value) { SetOnDemandAllocationStrategy(value); return *this;}

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithOnDemandAllocationStrategy(Aws::String&& value) { SetOnDemandAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>How to allocate instance types to fulfill On-Demand capacity. The valid value
     * is <code>prioritized</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithOnDemandAllocationStrategy(const char* value) { SetOnDemandAllocationStrategy(value); return *this;}


    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances.</p>
     */
    inline int GetOnDemandBaseCapacity() const{ return m_onDemandBaseCapacity; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances.</p>
     */
    inline bool OnDemandBaseCapacityHasBeenSet() const { return m_onDemandBaseCapacityHasBeenSet; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances.</p>
     */
    inline void SetOnDemandBaseCapacity(int value) { m_onDemandBaseCapacityHasBeenSet = true; m_onDemandBaseCapacity = value; }

    /**
     * <p>The minimum amount of the Auto Scaling group's capacity that must be
     * fulfilled by On-Demand Instances.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithOnDemandBaseCapacity(int value) { SetOnDemandBaseCapacity(value); return *this;}


    /**
     * <p>The percentage of On-Demand Instances and Spot Instances for additional
     * capacity beyond <code>OnDemandBaseCapacity</code>.</p>
     */
    inline int GetOnDemandPercentageAboveBaseCapacity() const{ return m_onDemandPercentageAboveBaseCapacity; }

    /**
     * <p>The percentage of On-Demand Instances and Spot Instances for additional
     * capacity beyond <code>OnDemandBaseCapacity</code>.</p>
     */
    inline bool OnDemandPercentageAboveBaseCapacityHasBeenSet() const { return m_onDemandPercentageAboveBaseCapacityHasBeenSet; }

    /**
     * <p>The percentage of On-Demand Instances and Spot Instances for additional
     * capacity beyond <code>OnDemandBaseCapacity</code>.</p>
     */
    inline void SetOnDemandPercentageAboveBaseCapacity(int value) { m_onDemandPercentageAboveBaseCapacityHasBeenSet = true; m_onDemandPercentageAboveBaseCapacity = value; }

    /**
     * <p>The percentage of On-Demand Instances and Spot Instances for additional
     * capacity beyond <code>OnDemandBaseCapacity</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithOnDemandPercentageAboveBaseCapacity(int value) { SetOnDemandPercentageAboveBaseCapacity(value); return *this;}


    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline const Aws::String& GetSpotAllocationStrategy() const{ return m_spotAllocationStrategy; }

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline bool SpotAllocationStrategyHasBeenSet() const { return m_spotAllocationStrategyHasBeenSet; }

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline void SetSpotAllocationStrategy(const Aws::String& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = value; }

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline void SetSpotAllocationStrategy(Aws::String&& value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy = std::move(value); }

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline void SetSpotAllocationStrategy(const char* value) { m_spotAllocationStrategyHasBeenSet = true; m_spotAllocationStrategy.assign(value); }

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotAllocationStrategy(const Aws::String& value) { SetSpotAllocationStrategy(value); return *this;}

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotAllocationStrategy(Aws::String&& value) { SetSpotAllocationStrategy(std::move(value)); return *this;}

    /**
     * <p>How to allocate instances across Spot Instance pools. Valid values are as
     * follows:</p> <ul> <li> <p> <code>lowest-price</code> </p> </li> <li> <p>
     * <code>capacity-optimized</code> </p> </li> <li> <p>
     * <code>capacity-optimized-prioritized</code> </p> </li> </ul>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotAllocationStrategy(const char* value) { SetSpotAllocationStrategy(value); return *this;}


    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances.</p>
     */
    inline int GetSpotInstancePools() const{ return m_spotInstancePools; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances.</p>
     */
    inline bool SpotInstancePoolsHasBeenSet() const { return m_spotInstancePoolsHasBeenSet; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances.</p>
     */
    inline void SetSpotInstancePools(int value) { m_spotInstancePoolsHasBeenSet = true; m_spotInstancePools = value; }

    /**
     * <p>The number of Spot Instance pools across which to allocate your Spot
     * Instances.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotInstancePools(int value) { SetSpotInstancePools(value); return *this;}


    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline const Aws::String& GetSpotMaxPrice() const{ return m_spotMaxPrice; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline bool SpotMaxPriceHasBeenSet() const { return m_spotMaxPriceHasBeenSet; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotMaxPrice(const Aws::String& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = value; }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotMaxPrice(Aws::String&& value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice = std::move(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline void SetSpotMaxPrice(const char* value) { m_spotMaxPriceHasBeenSet = true; m_spotMaxPrice.assign(value); }

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotMaxPrice(const Aws::String& value) { SetSpotMaxPrice(value); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotMaxPrice(Aws::String&& value) { SetSpotMaxPrice(std::move(value)); return *this;}

    /**
     * <p>The maximum price per unit hour that you are willing to pay for a Spot
     * Instance.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& WithSpotMaxPrice(const char* value) { SetSpotMaxPrice(value); return *this;}

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
} // namespace SecurityHub
} // namespace Aws
