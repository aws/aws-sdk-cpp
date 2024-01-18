/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListInsightsMetricDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListInsightsMetricDataRequest::ListInsightsMetricDataRequest() : 
    m_eventSourceHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_insightType(InsightType::NOT_SET),
    m_insightTypeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_dataType(InsightsMetricDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListInsightsMetricDataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("EventSource", m_eventSource);

  }

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("EventName", m_eventName);

  }

  if(m_insightTypeHasBeenSet)
  {
   payload.WithString("InsightType", InsightTypeMapper::GetNameForInsightType(m_insightType));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", InsightsMetricDataTypeMapper::GetNameForInsightsMetricDataType(m_dataType));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListInsightsMetricDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.ListInsightsMetricData"));
  return headers;

}




