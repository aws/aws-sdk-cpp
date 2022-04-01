/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetTraceSummariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTraceSummariesRequest::GetTraceSummariesRequest() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_timeRangeType(TimeRangeType::NOT_SET),
    m_timeRangeTypeHasBeenSet(false),
    m_sampling(false),
    m_samplingHasBeenSet(false),
    m_samplingStrategyHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetTraceSummariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_timeRangeTypeHasBeenSet)
  {
   payload.WithString("TimeRangeType", TimeRangeTypeMapper::GetNameForTimeRangeType(m_timeRangeType));
  }

  if(m_samplingHasBeenSet)
  {
   payload.WithBool("Sampling", m_sampling);

  }

  if(m_samplingStrategyHasBeenSet)
  {
   payload.WithObject("SamplingStrategy", m_samplingStrategy.Jsonize());

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




