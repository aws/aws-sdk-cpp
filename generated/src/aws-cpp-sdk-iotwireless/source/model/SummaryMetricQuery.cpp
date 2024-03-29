/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SummaryMetricQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SummaryMetricQuery::SummaryMetricQuery() : 
    m_queryIdHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_aggregationPeriod(AggregationPeriod::NOT_SET),
    m_aggregationPeriodHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
}

SummaryMetricQuery::SummaryMetricQuery(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_aggregationPeriod(AggregationPeriod::NOT_SET),
    m_aggregationPeriodHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

SummaryMetricQuery& SummaryMetricQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = MetricNameMapper::GetMetricNameForName(jsonValue.GetString("MetricName"));

    m_metricNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("AggregationPeriod"))
  {
    m_aggregationPeriod = AggregationPeriodMapper::GetAggregationPeriodForName(jsonValue.GetString("AggregationPeriod"));

    m_aggregationPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimestamp"))
  {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");

    m_endTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue SummaryMetricQuery::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("MetricName", MetricNameMapper::GetNameForMetricName(m_metricName));
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

  if(m_aggregationPeriodHasBeenSet)
  {
   payload.WithString("AggregationPeriod", AggregationPeriodMapper::GetNameForAggregationPeriod(m_aggregationPeriod));
  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_endTimestampHasBeenSet)
  {
   payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
