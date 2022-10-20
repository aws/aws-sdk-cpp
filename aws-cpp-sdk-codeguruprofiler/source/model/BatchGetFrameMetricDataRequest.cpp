/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/BatchGetFrameMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

BatchGetFrameMetricDataRequest::BatchGetFrameMetricDataRequest() : 
    m_endTimeHasBeenSet(false),
    m_frameMetricsHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_targetResolution(AggregationPeriod::NOT_SET),
    m_targetResolutionHasBeenSet(false)
{
}

Aws::String BatchGetFrameMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_frameMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> frameMetricsJsonList(m_frameMetrics.size());
   for(unsigned frameMetricsIndex = 0; frameMetricsIndex < frameMetricsJsonList.GetLength(); ++frameMetricsIndex)
   {
     frameMetricsJsonList[frameMetricsIndex].AsObject(m_frameMetrics[frameMetricsIndex].Jsonize());
   }
   payload.WithArray("frameMetrics", std::move(frameMetricsJsonList));

  }

  return payload.View().WriteReadable();
}

void BatchGetFrameMetricDataRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_endTimeHasBeenSet)
    {
      ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("endTime", ss.str());
      ss.str("");
    }

    if(m_periodHasBeenSet)
    {
      ss << m_period;
      uri.AddQueryStringParameter("period", ss.str());
      ss.str("");
    }

    if(m_startTimeHasBeenSet)
    {
      ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("startTime", ss.str());
      ss.str("");
    }

    if(m_targetResolutionHasBeenSet)
    {
      ss << AggregationPeriodMapper::GetNameForAggregationPeriod(m_targetResolution);
      uri.AddQueryStringParameter("targetResolution", ss.str());
      ss.str("");
    }

}



