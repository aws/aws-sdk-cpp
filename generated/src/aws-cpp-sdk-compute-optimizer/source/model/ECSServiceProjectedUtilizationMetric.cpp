/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceProjectedUtilizationMetric.h>
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

ECSServiceProjectedUtilizationMetric::ECSServiceProjectedUtilizationMetric() : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(ECSServiceMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_lowerBoundValue(0.0),
    m_lowerBoundValueHasBeenSet(false),
    m_upperBoundValue(0.0),
    m_upperBoundValueHasBeenSet(false)
{
}

ECSServiceProjectedUtilizationMetric::ECSServiceProjectedUtilizationMetric(JsonView jsonValue) : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(ECSServiceMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_lowerBoundValue(0.0),
    m_lowerBoundValueHasBeenSet(false),
    m_upperBoundValue(0.0),
    m_upperBoundValueHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceProjectedUtilizationMetric& ECSServiceProjectedUtilizationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = ECSServiceMetricNameMapper::GetECSServiceMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = ECSServiceMetricStatisticMapper::GetECSServiceMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lowerBoundValue"))
  {
    m_lowerBoundValue = jsonValue.GetDouble("lowerBoundValue");

    m_lowerBoundValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upperBoundValue"))
  {
    m_upperBoundValue = jsonValue.GetDouble("upperBoundValue");

    m_upperBoundValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceProjectedUtilizationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", ECSServiceMetricNameMapper::GetNameForECSServiceMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", ECSServiceMetricStatisticMapper::GetNameForECSServiceMetricStatistic(m_statistic));
  }

  if(m_lowerBoundValueHasBeenSet)
  {
   payload.WithDouble("lowerBoundValue", m_lowerBoundValue);

  }

  if(m_upperBoundValueHasBeenSet)
  {
   payload.WithDouble("upperBoundValue", m_upperBoundValue);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
