/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMemoryProjectedMetric.h>
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

LambdaFunctionMemoryProjectedMetric::LambdaFunctionMemoryProjectedMetric() : 
    m_name(LambdaFunctionMemoryMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(LambdaFunctionMemoryMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

LambdaFunctionMemoryProjectedMetric::LambdaFunctionMemoryProjectedMetric(JsonView jsonValue) : 
    m_name(LambdaFunctionMemoryMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(LambdaFunctionMemoryMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionMemoryProjectedMetric& LambdaFunctionMemoryProjectedMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = LambdaFunctionMemoryMetricNameMapper::GetLambdaFunctionMemoryMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = LambdaFunctionMemoryMetricStatisticMapper::GetLambdaFunctionMemoryMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionMemoryProjectedMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", LambdaFunctionMemoryMetricNameMapper::GetNameForLambdaFunctionMemoryMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", LambdaFunctionMemoryMetricStatisticMapper::GetNameForLambdaFunctionMemoryMetricStatistic(m_statistic));
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
