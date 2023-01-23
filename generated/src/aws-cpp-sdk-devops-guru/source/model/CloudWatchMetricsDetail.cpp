/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudWatchMetricsDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

CloudWatchMetricsDetail::CloudWatchMetricsDetail() : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_stat(CloudWatchMetricsStat::NOT_SET),
    m_statHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_metricDataSummaryHasBeenSet(false)
{
}

CloudWatchMetricsDetail::CloudWatchMetricsDetail(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_stat(CloudWatchMetricsStat::NOT_SET),
    m_statHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_metricDataSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchMetricsDetail& CloudWatchMetricsDetail::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Stat"))
  {
    m_stat = CloudWatchMetricsStatMapper::GetCloudWatchMetricsStatForName(jsonValue.GetString("Stat"));

    m_statHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDataSummary"))
  {
    m_metricDataSummary = jsonValue.GetObject("MetricDataSummary");

    m_metricDataSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchMetricsDetail::Jsonize() const
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

  if(m_statHasBeenSet)
  {
   payload.WithString("Stat", CloudWatchMetricsStatMapper::GetNameForCloudWatchMetricsStat(m_stat));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_metricDataSummaryHasBeenSet)
  {
   payload.WithObject("MetricDataSummary", m_metricDataSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
