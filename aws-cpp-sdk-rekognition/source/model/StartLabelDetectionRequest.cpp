﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartLabelDetectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartLabelDetectionRequest::StartLabelDetectionRequest() : 
    m_videoHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_notificationChannelHasBeenSet(false),
    m_jobTagHasBeenSet(false)
{
}

Aws::String StartLabelDetectionRequest::SerializePayload() const
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

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_notificationChannelHasBeenSet)
  {
   payload.WithObject("NotificationChannel", m_notificationChannel.Jsonize());

  }

  if(m_jobTagHasBeenSet)
  {
   payload.WithString("JobTag", m_jobTag);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartLabelDetectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.StartLabelDetection"));
  return headers;

}




