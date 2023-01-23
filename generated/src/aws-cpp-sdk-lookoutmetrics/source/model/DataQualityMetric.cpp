/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DataQualityMetric.h>
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

DataQualityMetric::DataQualityMetric() : 
    m_metricType(DataQualityMetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_metricDescriptionHasBeenSet(false),
    m_relatedColumnNameHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
}

DataQualityMetric::DataQualityMetric(JsonView jsonValue) : 
    m_metricType(DataQualityMetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_metricDescriptionHasBeenSet(false),
    m_relatedColumnNameHasBeenSet(false),
    m_metricValue(0.0),
    m_metricValueHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityMetric& DataQualityMetric::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricType"))
  {
    m_metricType = DataQualityMetricTypeMapper::GetDataQualityMetricTypeForName(jsonValue.GetString("MetricType"));

    m_metricTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricDescription"))
  {
    m_metricDescription = jsonValue.GetString("MetricDescription");

    m_metricDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelatedColumnName"))
  {
    m_relatedColumnName = jsonValue.GetString("RelatedColumnName");

    m_relatedColumnNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricValue"))
  {
    m_metricValue = jsonValue.GetDouble("MetricValue");

    m_metricValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityMetric::Jsonize() const
{
  JsonValue payload;

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("MetricType", DataQualityMetricTypeMapper::GetNameForDataQualityMetricType(m_metricType));
  }

  if(m_metricDescriptionHasBeenSet)
  {
   payload.WithString("MetricDescription", m_metricDescription);

  }

  if(m_relatedColumnNameHasBeenSet)
  {
   payload.WithString("RelatedColumnName", m_relatedColumnName);

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithDouble("MetricValue", m_metricValue);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
