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

StepAdjustment::StepAdjustment(const JsonValue& jsonValue) : 
    m_metricIntervalLowerBound(0.0),
    m_metricIntervalLowerBoundHasBeenSet(false),
    m_metricIntervalUpperBound(0.0),
    m_metricIntervalUpperBoundHasBeenSet(false),
    m_scalingAdjustment(0),
    m_scalingAdjustmentHasBeenSet(false)
{
  *this = jsonValue;
}

StepAdjustment& StepAdjustment::operator =(const JsonValue& jsonValue)
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