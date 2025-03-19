/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/PutScalingPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutScalingPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_scalingAdjustmentHasBeenSet)
  {
   payload.WithInteger("ScalingAdjustment", m_scalingAdjustment);

  }

  if(m_scalingAdjustmentTypeHasBeenSet)
  {
   payload.WithString("ScalingAdjustmentType", ScalingAdjustmentTypeMapper::GetNameForScalingAdjustmentType(m_scalingAdjustmentType));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("Threshold", m_threshold);

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", ComparisonOperatorTypeMapper::GetNameForComparisonOperatorType(m_comparisonOperator));
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutScalingPolicyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.PutScalingPolicy"));
  return headers;

}




