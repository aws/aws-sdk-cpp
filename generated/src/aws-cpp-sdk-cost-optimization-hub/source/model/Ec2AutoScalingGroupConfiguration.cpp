/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/Ec2AutoScalingGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

Ec2AutoScalingGroupConfiguration::Ec2AutoScalingGroupConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2AutoScalingGroupConfiguration& Ec2AutoScalingGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instance"))
  {
    m_instance = jsonValue.GetObject("instance");
    m_instanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mixedInstances"))
  {
    Aws::Utils::Array<JsonView> mixedInstancesJsonList = jsonValue.GetArray("mixedInstances");
    for(unsigned mixedInstancesIndex = 0; mixedInstancesIndex < mixedInstancesJsonList.GetLength(); ++mixedInstancesIndex)
    {
      m_mixedInstances.push_back(mixedInstancesJsonList[mixedInstancesIndex].AsObject());
    }
    m_mixedInstancesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = Ec2AutoScalingGroupTypeMapper::GetEc2AutoScalingGroupTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocationStrategy"))
  {
    m_allocationStrategy = AllocationStrategyMapper::GetAllocationStrategyForName(jsonValue.GetString("allocationStrategy"));
    m_allocationStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2AutoScalingGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceHasBeenSet)
  {
   payload.WithObject("instance", m_instance.Jsonize());

  }

  if(m_mixedInstancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mixedInstancesJsonList(m_mixedInstances.size());
   for(unsigned mixedInstancesIndex = 0; mixedInstancesIndex < mixedInstancesJsonList.GetLength(); ++mixedInstancesIndex)
   {
     mixedInstancesJsonList[mixedInstancesIndex].AsObject(m_mixedInstances[mixedInstancesIndex].Jsonize());
   }
   payload.WithArray("mixedInstances", std::move(mixedInstancesJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", Ec2AutoScalingGroupTypeMapper::GetNameForEc2AutoScalingGroupType(m_type));
  }

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("allocationStrategy", AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
