/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectedMetricSetConfig.h>
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

DetectedMetricSetConfig::DetectedMetricSetConfig() : 
    m_offsetHasBeenSet(false),
    m_metricSetFrequencyHasBeenSet(false),
    m_metricSourceHasBeenSet(false)
{
}

DetectedMetricSetConfig::DetectedMetricSetConfig(JsonView jsonValue) : 
    m_offsetHasBeenSet(false),
    m_metricSetFrequencyHasBeenSet(false),
    m_metricSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedMetricSetConfig& DetectedMetricSetConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetObject("Offset");

    m_offsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricSetFrequency"))
  {
    m_metricSetFrequency = jsonValue.GetObject("MetricSetFrequency");

    m_metricSetFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricSource"))
  {
    m_metricSource = jsonValue.GetObject("MetricSource");

    m_metricSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedMetricSetConfig::Jsonize() const
{
  JsonValue payload;

  if(m_offsetHasBeenSet)
  {
   payload.WithObject("Offset", m_offset.Jsonize());

  }

  if(m_metricSetFrequencyHasBeenSet)
  {
   payload.WithObject("MetricSetFrequency", m_metricSetFrequency.Jsonize());

  }

  if(m_metricSourceHasBeenSet)
  {
   payload.WithObject("MetricSource", m_metricSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
