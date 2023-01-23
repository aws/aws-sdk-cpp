/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/CustomizedMetricSpecification.h>
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

CustomizedMetricSpecification::CustomizedMetricSpecification() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

CustomizedMetricSpecification::CustomizedMetricSpecification(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_statistic(MetricStatistic::NOT_SET),
    m_statisticHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

CustomizedMetricSpecification& CustomizedMetricSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsObject());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = MetricStatisticMapper::GetMetricStatisticForName(jsonValue.GetString("Statistic"));

    m_statisticHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomizedMetricSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsObject(m_dimensions[dimensionsIndex].Jsonize());
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_statisticHasBeenSet)
  {
   payload.WithString("Statistic", MetricStatisticMapper::GetNameForMetricStatistic(m_statistic));
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
