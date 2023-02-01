/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
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

StepScalingPolicyConfiguration::StepScalingPolicyConfiguration() : 
    m_adjustmentType(AdjustmentType::NOT_SET),
    m_adjustmentTypeHasBeenSet(false),
    m_stepAdjustmentsHasBeenSet(false),
    m_minAdjustmentMagnitude(0),
    m_minAdjustmentMagnitudeHasBeenSet(false),
    m_cooldown(0),
    m_cooldownHasBeenSet(false),
    m_metricAggregationType(MetricAggregationType::NOT_SET),
    m_metricAggregationTypeHasBeenSet(false)
{
}

StepScalingPolicyConfiguration::StepScalingPolicyConfiguration(JsonView jsonValue) : 
    m_adjustmentType(AdjustmentType::NOT_SET),
    m_adjustmentTypeHasBeenSet(false),
    m_stepAdjustmentsHasBeenSet(false),
    m_minAdjustmentMagnitude(0),
    m_minAdjustmentMagnitudeHasBeenSet(false),
    m_cooldown(0),
    m_cooldownHasBeenSet(false),
    m_metricAggregationType(MetricAggregationType::NOT_SET),
    m_metricAggregationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StepScalingPolicyConfiguration& StepScalingPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdjustmentType"))
  {
    m_adjustmentType = AdjustmentTypeMapper::GetAdjustmentTypeForName(jsonValue.GetString("AdjustmentType"));

    m_adjustmentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepAdjustments"))
  {
    Aws::Utils::Array<JsonView> stepAdjustmentsJsonList = jsonValue.GetArray("StepAdjustments");
    for(unsigned stepAdjustmentsIndex = 0; stepAdjustmentsIndex < stepAdjustmentsJsonList.GetLength(); ++stepAdjustmentsIndex)
    {
      m_stepAdjustments.push_back(stepAdjustmentsJsonList[stepAdjustmentsIndex].AsObject());
    }
    m_stepAdjustmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinAdjustmentMagnitude"))
  {
    m_minAdjustmentMagnitude = jsonValue.GetInteger("MinAdjustmentMagnitude");

    m_minAdjustmentMagnitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cooldown"))
  {
    m_cooldown = jsonValue.GetInteger("Cooldown");

    m_cooldownHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricAggregationType"))
  {
    m_metricAggregationType = MetricAggregationTypeMapper::GetMetricAggregationTypeForName(jsonValue.GetString("MetricAggregationType"));

    m_metricAggregationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StepScalingPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adjustmentTypeHasBeenSet)
  {
   payload.WithString("AdjustmentType", AdjustmentTypeMapper::GetNameForAdjustmentType(m_adjustmentType));
  }

  if(m_stepAdjustmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepAdjustmentsJsonList(m_stepAdjustments.size());
   for(unsigned stepAdjustmentsIndex = 0; stepAdjustmentsIndex < stepAdjustmentsJsonList.GetLength(); ++stepAdjustmentsIndex)
   {
     stepAdjustmentsJsonList[stepAdjustmentsIndex].AsObject(m_stepAdjustments[stepAdjustmentsIndex].Jsonize());
   }
   payload.WithArray("StepAdjustments", std::move(stepAdjustmentsJsonList));

  }

  if(m_minAdjustmentMagnitudeHasBeenSet)
  {
   payload.WithInteger("MinAdjustmentMagnitude", m_minAdjustmentMagnitude);

  }

  if(m_cooldownHasBeenSet)
  {
   payload.WithInteger("Cooldown", m_cooldown);

  }

  if(m_metricAggregationTypeHasBeenSet)
  {
   payload.WithString("MetricAggregationType", MetricAggregationTypeMapper::GetNameForMetricAggregationType(m_metricAggregationType));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
