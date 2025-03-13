/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/IdleUtilizationMetric.h>
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

IdleUtilizationMetric::IdleUtilizationMetric(JsonView jsonValue)
{
  *this = jsonValue;
}

IdleUtilizationMetric& IdleUtilizationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = IdleMetricNameMapper::GetIdleMetricNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = MetricStatisticMapper::GetMetricStatisticForName(jsonValue.GetString("statistic"));
    m_statisticHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue IdleUtilizationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", IdleMetricNameMapper::GetNameForIdleMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", MetricStatisticMapper::GetNameForMetricStatistic(m_statistic));
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
