/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SummaryMetricQueryResult.h>
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

SummaryMetricQueryResult::SummaryMetricQueryResult() : 
    m_queryIdHasBeenSet(false),
    m_queryStatus(MetricQueryStatus::NOT_SET),
    m_queryStatusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_aggregationPeriod(AggregationPeriod::NOT_SET),
    m_aggregationPeriodHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_unitHasBeenSet(false)
{
}

SummaryMetricQueryResult::SummaryMetricQueryResult(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_queryStatus(MetricQueryStatus::NOT_SET),
    m_queryStatusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_metricName(MetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_aggregationPeriod(AggregationPeriod::NOT_SET),
    m_aggregationPeriodHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_endTimestampHasBeenSet(false),
    m_timestampsHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

SummaryMetricQueryResult& SummaryMetricQueryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = MetricQueryStatusMapper::GetMetricQueryStatusForName(jsonValue.GetString("QueryStatus"));

    m_queryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
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

  if(jsonValue.ValueExists("Timestamps"))
  {
    Aws::Utils::Array<JsonView> timestampsJsonList = jsonValue.GetArray("Timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsDouble());
    }
    m_timestampsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("Values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = jsonValue.GetString("Unit");

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue SummaryMetricQueryResult::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryStatusHasBeenSet)
  {
   payload.WithString("QueryStatus", MetricQueryStatusMapper::GetNameForMetricQueryStatus(m_queryStatus));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

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

  if(m_timestampsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsDouble(m_timestamps[timestampsIndex].SecondsWithMSPrecision());
   }
   payload.WithArray("Timestamps", std::move(timestampsJsonList));

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", m_unit);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
