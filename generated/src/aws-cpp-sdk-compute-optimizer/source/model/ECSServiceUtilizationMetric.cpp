/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceUtilizationMetric.h>
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

ECSServiceUtilizationMetric::ECSServiceUtilizationMetric() : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(ECSServiceMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

ECSServiceUtilizationMetric::ECSServiceUtilizationMetric(JsonView jsonValue) : 
    m_name(ECSServiceMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(ECSServiceMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

ECSServiceUtilizationMetric& ECSServiceUtilizationMetric::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue ECSServiceUtilizationMetric::Jsonize() const
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

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
