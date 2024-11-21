﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingMetricStat.h>
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

PredictiveScalingMetricStat::PredictiveScalingMetricStat() : 
    m_metricHasBeenSet(false),
    m_statHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

PredictiveScalingMetricStat::PredictiveScalingMetricStat(JsonView jsonValue)
  : PredictiveScalingMetricStat()
{
  *this = jsonValue;
}

PredictiveScalingMetricStat& PredictiveScalingMetricStat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetObject("Metric");

    m_metricHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stat"))
  {
    m_stat = jsonValue.GetString("Stat");

    m_statHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue PredictiveScalingMetricStat::Jsonize() const
{
  JsonValue payload;

  if(m_metricHasBeenSet)
  {
   payload.WithObject("Metric", m_metric.Jsonize());

  }

  if(m_statHasBeenSet)
  {
   payload.WithString("Stat", m_stat);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
