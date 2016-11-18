/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/ScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ScalingPolicy::ScalingPolicy() : 
    m_fleetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ScalingStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_scalingAdjustmentType(ScalingAdjustmentType::NOT_SET),
    m_scalingAdjustmentTypeHasBeenSet(false),
    m_comparisonOperator(ComparisonOperatorType::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false)
{
}

ScalingPolicy::ScalingPolicy(const JsonValue& jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ScalingStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false),
    m_scalingAdjustmentType(ScalingAdjustmentType::NOT_SET),
    m_scalingAdjustmentTypeHasBeenSet(false),
    m_comparisonOperator(ComparisonOperatorType::NOT_SET),
    m_comparisonOperatorHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_evaluationPeriods(0),
    m_evaluationPeriodsHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPolicy& ScalingPolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ScalingStatusTypeMapper::GetScalingStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingAdjustment"))
  {
    m_scalingAdjustment = jsonValue.GetInteger("ScalingAdjustment");

    m_scalingAdjustmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingAdjustmentType"))
  {
    m_scalingAdjustmentType = ScalingAdjustmentTypeMapper::GetScalingAdjustmentTypeForName(jsonValue.GetString("ScalingAdjustmentType"));

    m_scalingAdjustmentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = ComparisonOperatorTypeMapper::GetComparisonOperatorTypeForName(jsonValue.GetString("ComparisonOperator"));

    m_comparisonOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetDouble("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationPeriods"))
  {
    m_evaluationPeriods = jsonValue.GetInteger("EvaluationPeriods");

    m_evaluationPeriodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = MetricNameMapper::GetMetricNameForName(jsonValue.GetString("MetricName"));

    m_metricNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ScalingStatusTypeMapper::GetNameForScalingStatusType(m_status));
  }

  if(m_scalingAdjustmentHasBeenSet)
  {
   payload.WithInteger("ScalingAdjustment", m_scalingAdjustment);

  }

  if(m_scalingAdjustmentTypeHasBeenSet)
  {
   payload.WithString("ScalingAdjustmentType", ScalingAdjustmentTypeMapper::GetNameForScalingAdjustmentType(m_scalingAdjustmentType));
  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorTypeMapper::GetNameForComparisonOperatorType(m_comparisonOperator));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("Threshold", m_threshold);

  }

  if(m_evaluationPeriodsHasBeenSet)
  {
   payload.WithInteger("EvaluationPeriods", m_evaluationPeriods);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", MetricNameMapper::GetNameForMetricName(m_metricName));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws