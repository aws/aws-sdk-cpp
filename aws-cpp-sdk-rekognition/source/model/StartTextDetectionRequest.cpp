/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/rekognition/model/StartTextDetectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTextDetectionRequest::StartTextDetectionRequest() : 
    m_videoHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_notificationChannelHasBeenSet(false),
    m_jobTagHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String StartTextDetectionRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTextDetectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartTextDetection"));
  return headers;

}




