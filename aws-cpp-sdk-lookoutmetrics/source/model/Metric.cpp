/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/Metric.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

Metric::Metric() : 
    m_metricNameHasBeenSet(false),
    m_aggregationFunction(AggregationFunction::NOT_SET),
    m_aggregationFunctionHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Metric::Metric(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_aggregationFunction(AggregationFunction::NOT_SET),
    m_aggregationFunctionHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

Metric& Metric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AggregationFunction"))
  {
    m_aggregationFunction = AggregationFunctionMapper::GetAggregationFunctionForName(jsonValue.GetString("AggregationFunction"));

    m_aggregationFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue Metric::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_aggregationFunctionHasBeenSet)
  {
   payload.WithString("AggregationFunction", AggregationFunctionMapper::GetNameForAggregationFunction(m_aggregationFunction));
  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
