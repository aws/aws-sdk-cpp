/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ItemizedMetricStats.h>
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

ItemizedMetricStats::ItemizedMetricStats() : 
    m_metricNameHasBeenSet(false),
    m_occurrenceCount(0),
    m_occurrenceCountHasBeenSet(false)
{
}

ItemizedMetricStats::ItemizedMetricStats(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_occurrenceCount(0),
    m_occurrenceCountHasBeenSet(false)
{
  *this = jsonValue;
}

ItemizedMetricStats& ItemizedMetricStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OccurrenceCount"))
  {
    m_occurrenceCount = jsonValue.GetInteger("OccurrenceCount");

    m_occurrenceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ItemizedMetricStats::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", m_metricName);

  }

  if(m_occurrenceCountHasBeenSet)
  {
   payload.WithInteger("OccurrenceCount", m_occurrenceCount);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
