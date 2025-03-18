/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

AutoScalingGroupConfiguration::AutoScalingGroupConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoScalingGroupConfiguration& AutoScalingGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("desiredCapacity"))
  {
    m_desiredCapacity = jsonValue.GetInteger("desiredCapacity");
    m_desiredCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minSize"))
  {
    m_minSize = jsonValue.GetInteger("minSize");
    m_minSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxSize"))
  {
    m_maxSize = jsonValue.GetInteger("maxSize");
    m_maxSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocationStrategy"))
  {
    m_allocationStrategy = AllocationStrategyMapper::GetAllocationStrategyForName(jsonValue.GetString("allocationStrategy"));
    m_allocationStrategyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("estimatedInstanceHourReductionPercentage"))
  {
    m_estimatedInstanceHourReductionPercentage = jsonValue.GetDouble("estimatedInstanceHourReductionPercentage");
    m_estimatedInstanceHourReductionPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AsgTypeMapper::GetAsgTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mixedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> mixedInstanceTypesJsonList = jsonValue.GetArray("mixedInstanceTypes");
    for(unsigned mixedInstanceTypesIndex = 0; mixedInstanceTypesIndex < mixedInstanceTypesJsonList.GetLength(); ++mixedInstanceTypesIndex)
    {
      m_mixedInstanceTypes.push_back(mixedInstanceTypesJsonList[mixedInstanceTypesIndex].AsString());
    }
    m_mixedInstanceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoScalingGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_desiredCapacityHasBeenSet)
  {
   payload.WithInteger("desiredCapacity", m_desiredCapacity);

  }

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("minSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("maxSize", m_maxSize);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("allocationStrategy", AllocationStrategyMapper::GetNameForAllocationStrategy(m_allocationStrategy));
  }

  if(m_estimatedInstanceHourReductionPercentageHasBeenSet)
  {
   payload.WithDouble("estimatedInstanceHourReductionPercentage", m_estimatedInstanceHourReductionPercentage);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AsgTypeMapper::GetNameForAsgType(m_type));
  }

  if(m_mixedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mixedInstanceTypesJsonList(m_mixedInstanceTypes.size());
   for(unsigned mixedInstanceTypesIndex = 0; mixedInstanceTypesIndex < mixedInstanceTypesJsonList.GetLength(); ++mixedInstanceTypesIndex)
   {
     mixedInstanceTypesJsonList[mixedInstanceTypesIndex].AsString(m_mixedInstanceTypes[mixedInstanceTypesIndex]);
   }
   payload.WithArray("mixedInstanceTypes", std::move(mixedInstanceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
