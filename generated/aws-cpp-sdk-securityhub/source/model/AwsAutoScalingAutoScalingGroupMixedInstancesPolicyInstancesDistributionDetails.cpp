/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails() : 
    m_onDemandAllocationStrategyHasBeenSet(false),
    m_onDemandBaseCapacity(0),
    m_onDemandBaseCapacityHasBeenSet(false),
    m_onDemandPercentageAboveBaseCapacity(0),
    m_onDemandPercentageAboveBaseCapacityHasBeenSet(false),
    m_spotAllocationStrategyHasBeenSet(false),
    m_spotInstancePools(0),
    m_spotInstancePoolsHasBeenSet(false),
    m_spotMaxPriceHasBeenSet(false)
{
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails(JsonView jsonValue) : 
    m_onDemandAllocationStrategyHasBeenSet(false),
    m_onDemandBaseCapacity(0),
    m_onDemandBaseCapacityHasBeenSet(false),
    m_onDemandPercentageAboveBaseCapacity(0),
    m_onDemandPercentageAboveBaseCapacityHasBeenSet(false),
    m_spotAllocationStrategyHasBeenSet(false),
    m_spotInstancePools(0),
    m_spotInstancePoolsHasBeenSet(false),
    m_spotMaxPriceHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails& AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OnDemandAllocationStrategy"))
  {
    m_onDemandAllocationStrategy = jsonValue.GetString("OnDemandAllocationStrategy");

    m_onDemandAllocationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandBaseCapacity"))
  {
    m_onDemandBaseCapacity = jsonValue.GetInteger("OnDemandBaseCapacity");

    m_onDemandBaseCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandPercentageAboveBaseCapacity"))
  {
    m_onDemandPercentageAboveBaseCapacity = jsonValue.GetInteger("OnDemandPercentageAboveBaseCapacity");

    m_onDemandPercentageAboveBaseCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotAllocationStrategy"))
  {
    m_spotAllocationStrategy = jsonValue.GetString("SpotAllocationStrategy");

    m_spotAllocationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotInstancePools"))
  {
    m_spotInstancePools = jsonValue.GetInteger("SpotInstancePools");

    m_spotInstancePoolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotMaxPrice"))
  {
    m_spotMaxPrice = jsonValue.GetString("SpotMaxPrice");

    m_spotMaxPriceHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingAutoScalingGroupMixedInstancesPolicyInstancesDistributionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_onDemandAllocationStrategyHasBeenSet)
  {
   payload.WithString("OnDemandAllocationStrategy", m_onDemandAllocationStrategy);

  }

  if(m_onDemandBaseCapacityHasBeenSet)
  {
   payload.WithInteger("OnDemandBaseCapacity", m_onDemandBaseCapacity);

  }

  if(m_onDemandPercentageAboveBaseCapacityHasBeenSet)
  {
   payload.WithInteger("OnDemandPercentageAboveBaseCapacity", m_onDemandPercentageAboveBaseCapacity);

  }

  if(m_spotAllocationStrategyHasBeenSet)
  {
   payload.WithString("SpotAllocationStrategy", m_spotAllocationStrategy);

  }

  if(m_spotInstancePoolsHasBeenSet)
  {
   payload.WithInteger("SpotInstancePools", m_spotInstancePools);

  }

  if(m_spotMaxPriceHasBeenSet)
  {
   payload.WithString("SpotMaxPrice", m_spotMaxPrice);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
