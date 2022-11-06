/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartSegmentDetectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSegmentDetectionRequest::StartSegmentDetectionRequest() : 
    m_videoHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_notificationChannelHasBeenSet(false),
    m_jobTagHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_segmentTypesHasBeenSet(false)
{
}

Aws::String StartSegmentDetectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_videoHasBeenSet)
  {
   payload.WithObject("Video", m_video.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_notificationChannelHasBeenSet)
  {
   payload.WithObject("NotificationChannel", m_notificationChannel.Jsonize());

  }

  if(m_jobTagHasBeenSet)
  {
   payload.WithString("JobTag", m_jobTag);

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_segmentTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentTypesJsonList(m_segmentTypes.size());
   for(unsigned segmentTypesIndex = 0; segmentTypesIndex < segmentTypesJsonList.GetLength(); ++segmentTypesIndex)
   {
     segmentTypesJsonList[segmentTypesIndex].AsString(SegmentTypeMapper::GetNameForSegmentType(m_segmentTypes[segmentTypesIndex]));
   }
   payload.WithArray("SegmentTypes", std::move(segmentTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartSegmentDetectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartSegmentDetection"));
  return headers;

}




