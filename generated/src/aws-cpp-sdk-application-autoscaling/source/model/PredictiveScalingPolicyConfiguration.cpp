/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingPolicyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

PredictiveScalingPolicyConfiguration::PredictiveScalingPolicyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictiveScalingPolicyConfiguration& PredictiveScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricSpecifications"))
  {
    Aws::Utils::Array<JsonView> metricSpecificationsJsonList = jsonValue.GetArray("MetricSpecifications");
    for(unsigned metricSpecificationsIndex = 0; metricSpecificationsIndex < metricSpecificationsJsonList.GetLength(); ++metricSpecificationsIndex)
    {
      m_metricSpecifications.push_back(metricSpecificationsJsonList[metricSpecificationsIndex].AsObject());
    }
    m_metricSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = PredictiveScalingModeMapper::GetPredictiveScalingModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SchedulingBufferTime"))
  {
    m_schedulingBufferTime = jsonValue.GetInteger("SchedulingBufferTime");
    m_schedulingBufferTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCapacityBreachBehavior"))
  {
    m_maxCapacityBreachBehavior = PredictiveScalingMaxCapacityBreachBehaviorMapper::GetPredictiveScalingMaxCapacityBreachBehaviorForName(jsonValue.GetString("MaxCapacityBreachBehavior"));
    m_maxCapacityBreachBehaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxCapacityBuffer"))
  {
    m_maxCapacityBuffer = jsonValue.GetInteger("MaxCapacityBuffer");
    m_maxCapacityBufferHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictiveScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_metricSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricSpecificationsJsonList(m_metricSpecifications.size());
   for(unsigned metricSpecificationsIndex = 0; metricSpecificationsIndex < metricSpecificationsJsonList.GetLength(); ++metricSpecificationsIndex)
   {
     metricSpecificationsJsonList[metricSpecificationsIndex].AsObject(m_metricSpecifications[metricSpecificationsIndex].Jsonize());
   }
   payload.WithArray("MetricSpecifications", std::move(metricSpecificationsJsonList));

  }

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", PredictiveScalingModeMapper::GetNameForPredictiveScalingMode(m_mode));
  }

  if(m_schedulingBufferTimeHasBeenSet)
  {
   payload.WithInteger("SchedulingBufferTime", m_schedulingBufferTime);

  }

  if(m_maxCapacityBreachBehaviorHasBeenSet)
  {
   payload.WithString("MaxCapacityBreachBehavior", PredictiveScalingMaxCapacityBreachBehaviorMapper::GetNameForPredictiveScalingMaxCapacityBreachBehavior(m_maxCapacityBreachBehavior));
  }

  if(m_maxCapacityBufferHasBeenSet)
  {
   payload.WithInteger("MaxCapacityBuffer", m_maxCapacityBuffer);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
