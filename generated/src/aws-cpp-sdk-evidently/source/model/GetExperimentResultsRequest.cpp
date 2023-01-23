/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/GetExperimentResultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExperimentResultsRequest::GetExperimentResultsRequest() : 
    m_baseStat(ExperimentBaseStat::NOT_SET),
    m_baseStatHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_experimentHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_reportNamesHasBeenSet(false),
    m_resultStatsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_treatmentNamesHasBeenSet(false)
{
}

Aws::String GetExperimentResultsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_baseStatHasBeenSet)
  {
   payload.WithString("baseStat", ExperimentBaseStatMapper::GetNameForExperimentBaseStat(m_baseStat));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_metricNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricNamesJsonList(m_metricNames.size());
   for(unsigned metricNamesIndex = 0; metricNamesIndex < metricNamesJsonList.GetLength(); ++metricNamesIndex)
   {
     metricNamesJsonList[metricNamesIndex].AsString(m_metricNames[metricNamesIndex]);
   }
   payload.WithArray("metricNames", std::move(metricNamesJsonList));

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInt64("period", m_period);

  }

  if(m_reportNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reportNamesJsonList(m_reportNames.size());
   for(unsigned reportNamesIndex = 0; reportNamesIndex < reportNamesJsonList.GetLength(); ++reportNamesIndex)
   {
     reportNamesJsonList[reportNamesIndex].AsString(ExperimentReportNameMapper::GetNameForExperimentReportName(m_reportNames[reportNamesIndex]));
   }
   payload.WithArray("reportNames", std::move(reportNamesJsonList));

  }

  if(m_resultStatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resultStatsJsonList(m_resultStats.size());
   for(unsigned resultStatsIndex = 0; resultStatsIndex < resultStatsJsonList.GetLength(); ++resultStatsIndex)
   {
     resultStatsJsonList[resultStatsIndex].AsString(ExperimentResultRequestTypeMapper::GetNameForExperimentResultRequestType(m_resultStats[resultStatsIndex]));
   }
   payload.WithArray("resultStats", std::move(resultStatsJsonList));

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_treatmentNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> treatmentNamesJsonList(m_treatmentNames.size());
   for(unsigned treatmentNamesIndex = 0; treatmentNamesIndex < treatmentNamesJsonList.GetLength(); ++treatmentNamesIndex)
   {
     treatmentNamesJsonList[treatmentNamesIndex].AsString(m_treatmentNames[treatmentNamesIndex]);
   }
   payload.WithArray("treatmentNames", std::move(treatmentNamesJsonList));

  }

  return payload.View().WriteReadable();
}




