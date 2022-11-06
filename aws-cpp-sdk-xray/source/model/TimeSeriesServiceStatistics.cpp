/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/TimeSeriesServiceStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

TimeSeriesServiceStatistics::TimeSeriesServiceStatistics() : 
    m_timestampHasBeenSet(false),
    m_edgeSummaryStatisticsHasBeenSet(false),
    m_serviceSummaryStatisticsHasBeenSet(false),
    m_serviceForecastStatisticsHasBeenSet(false),
    m_responseTimeHistogramHasBeenSet(false)
{
}

TimeSeriesServiceStatistics::TimeSeriesServiceStatistics(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_edgeSummaryStatisticsHasBeenSet(false),
    m_serviceSummaryStatisticsHasBeenSet(false),
    m_serviceForecastStatisticsHasBeenSet(false),
    m_responseTimeHistogramHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesServiceStatistics& TimeSeriesServiceStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EdgeSummaryStatistics"))
  {
    m_edgeSummaryStatistics = jsonValue.GetObject("EdgeSummaryStatistics");

    m_edgeSummaryStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceSummaryStatistics"))
  {
    m_serviceSummaryStatistics = jsonValue.GetObject("ServiceSummaryStatistics");

    m_serviceSummaryStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceForecastStatistics"))
  {
    m_serviceForecastStatistics = jsonValue.GetObject("ServiceForecastStatistics");

    m_serviceForecastStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseTimeHistogram"))
  {
    Aws::Utils::Array<JsonView> responseTimeHistogramJsonList = jsonValue.GetArray("ResponseTimeHistogram");
    for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
    {
      m_responseTimeHistogram.push_back(responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject());
    }
    m_responseTimeHistogramHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesServiceStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_edgeSummaryStatisticsHasBeenSet)
  {
   payload.WithObject("EdgeSummaryStatistics", m_edgeSummaryStatistics.Jsonize());

  }

  if(m_serviceSummaryStatisticsHasBeenSet)
  {
   payload.WithObject("ServiceSummaryStatistics", m_serviceSummaryStatistics.Jsonize());

  }

  if(m_serviceForecastStatisticsHasBeenSet)
  {
   payload.WithObject("ServiceForecastStatistics", m_serviceForecastStatistics.Jsonize());

  }

  if(m_responseTimeHistogramHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> responseTimeHistogramJsonList(m_responseTimeHistogram.size());
   for(unsigned responseTimeHistogramIndex = 0; responseTimeHistogramIndex < responseTimeHistogramJsonList.GetLength(); ++responseTimeHistogramIndex)
   {
     responseTimeHistogramJsonList[responseTimeHistogramIndex].AsObject(m_responseTimeHistogram[responseTimeHistogramIndex].Jsonize());
   }
   payload.WithArray("ResponseTimeHistogram", std::move(responseTimeHistogramJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
