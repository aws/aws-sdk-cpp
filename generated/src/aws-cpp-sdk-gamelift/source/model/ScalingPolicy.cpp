/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ScalingPolicy::ScalingPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

ScalingPolicy& ScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");
    m_fleetArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("PolicyType"));
    m_policyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetConfiguration"))
  {
    m_targetConfiguration = jsonValue.GetObject("TargetConfiguration");
    m_targetConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateStatus"))
  {
    m_updateStatus = LocationUpdateStatusMapper::GetLocationUpdateStatusForName(jsonValue.GetString("UpdateStatus"));
    m_updateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
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

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

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

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_targetConfigurationHasBeenSet)
  {
   payload.WithObject("TargetConfiguration", m_targetConfiguration.Jsonize());

  }

  if(m_updateStatusHasBeenSet)
  {
   payload.WithString("UpdateStatus", LocationUpdateStatusMapper::GetNameForLocationUpdateStatus(m_updateStatus));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
