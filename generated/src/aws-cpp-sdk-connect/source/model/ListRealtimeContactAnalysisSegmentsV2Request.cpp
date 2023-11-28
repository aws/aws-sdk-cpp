/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRealtimeContactAnalysisSegmentsV2Request::ListRealtimeContactAnalysisSegmentsV2Request() : 
    m_instanceIdHasBeenSet(false),
    m_contactIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_outputType(RealTimeContactAnalysisOutputType::NOT_SET),
    m_outputTypeHasBeenSet(false),
    m_segmentTypesHasBeenSet(false)
{
}

Aws::String ListRealtimeContactAnalysisSegmentsV2Request::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("OutputType", RealTimeContactAnalysisOutputTypeMapper::GetNameForRealTimeContactAnalysisOutputType(m_outputType));
  }

  if(m_segmentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentTypesJsonList(m_segmentTypes.size());
   for(unsigned segmentTypesIndex = 0; segmentTypesIndex < segmentTypesJsonList.GetLength(); ++segmentTypesIndex)
   {
     segmentTypesJsonList[segmentTypesIndex].AsString(RealTimeContactAnalysisSegmentTypeMapper::GetNameForRealTimeContactAnalysisSegmentType(m_segmentTypes[segmentTypesIndex]));
   }
   payload.WithArray("SegmentTypes", std::move(segmentTypesJsonList));

  }

  return payload.View().WriteReadable();
}




