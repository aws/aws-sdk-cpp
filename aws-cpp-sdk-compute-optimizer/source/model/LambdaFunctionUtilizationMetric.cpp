/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionUtilizationMetric.h>
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

LambdaFunctionUtilizationMetric::LambdaFunctionUtilizationMetric() : 
    m_name(LambdaFunctionMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(LambdaFunctionMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

LambdaFunctionUtilizationMetric::LambdaFunctionUtilizationMetric(JsonView jsonValue) : 
    m_name(LambdaFunctionMetricName::NOT_SET),
    m_nameHasBeenSet(false),
    m_statistic(LambdaFunctionMetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaFunctionUtilizationMetric& LambdaFunctionUtilizationMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = LambdaFunctionMetricNameMapper::GetLambdaFunctionMetricNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistic"))
  {
    m_statistic = LambdaFunctionMetricStatisticMapper::GetLambdaFunctionMetricStatisticForName(jsonValue.GetString("statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaFunctionUtilizationMetric::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", LambdaFunctionMetricNameMapper::GetNameForLambdaFunctionMetricName(m_name));
  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("statistic", LambdaFunctionMetricStatisticMapper::GetNameForLambdaFunctionMetricStatistic(m_statistic));
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
