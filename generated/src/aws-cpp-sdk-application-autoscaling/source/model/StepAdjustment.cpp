/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/StepAdjustment.h>
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

StepAdjustment::StepAdjustment() : 
    m_metricIntervalLowerBound(0.0),
    m_metricIntervalLowerBoundHasBeenSet(false),
    m_metricIntervalUpperBound(0.0),
    m_metricIntervalUpperBoundHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false)
{
}

StepAdjustment::StepAdjustment(JsonView jsonValue) : 
    m_metricIntervalLowerBound(0.0),
    m_metricIntervalLowerBoundHasBeenSet(false),
    m_metricIntervalUpperBound(0.0),
    m_metricIntervalUpperBoundHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false)
{
  *this = jsonValue;
}

StepAdjustment& StepAdjustment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricIntervalLowerBound"))
  {
    m_metricIntervalLowerBound = jsonValue.GetDouble("MetricIntervalLowerBound");

    m_metricIntervalLowerBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricIntervalUpperBound"))
  {
    m_metricIntervalUpperBound = jsonValue.GetDouble("MetricIntervalUpperBound");

    m_metricIntervalUpperBoundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingAdjustment"))
  {
    m_scalingAdjustment = jsonValue.GetInteger("ScalingAdjustment");

    m_scalingAdjustmentHasBeenSet = true;
  }

  return *this;
}

JsonValue StepAdjustment::Jsonize() const
{
  JsonValue payload;

  if(m_metricIntervalLowerBoundHasBeenSet)
  {
   payload.WithDouble("MetricIntervalLowerBound", m_metricIntervalLowerBound);

  }

  if(m_metricIntervalUpperBoundHasBeenSet)
  {
   payload.WithDouble("MetricIntervalUpperBound", m_metricIntervalUpperBound);

  }

  if(m_scalingAdjustmentHasBeenSet)
  {
   payload.WithInteger("ScalingAdjustment", m_scalingAdjustment);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
