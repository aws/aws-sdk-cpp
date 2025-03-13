/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ManagedScalingPolicy::ManagedScalingPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedScalingPolicy& ManagedScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputeLimits"))
  {
    m_computeLimits = jsonValue.GetObject("ComputeLimits");
    m_computeLimitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UtilizationPerformanceIndex"))
  {
    m_utilizationPerformanceIndex = jsonValue.GetInteger("UtilizationPerformanceIndex");
    m_utilizationPerformanceIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScalingStrategy"))
  {
    m_scalingStrategy = ScalingStrategyMapper::GetScalingStrategyForName(jsonValue.GetString("ScalingStrategy"));
    m_scalingStrategyHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_computeLimitsHasBeenSet)
  {
   payload.WithObject("ComputeLimits", m_computeLimits.Jsonize());

  }

  if(m_utilizationPerformanceIndexHasBeenSet)
  {
   payload.WithInteger("UtilizationPerformanceIndex", m_utilizationPerformanceIndex);

  }

  if(m_scalingStrategyHasBeenSet)
  {
   payload.WithString("ScalingStrategy", ScalingStrategyMapper::GetNameForScalingStrategy(m_scalingStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
