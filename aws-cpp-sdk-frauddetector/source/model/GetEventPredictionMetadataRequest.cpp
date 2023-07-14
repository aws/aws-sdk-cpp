/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetEventPredictionMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEventPredictionMetadataRequest::GetEventPredictionMetadataRequest() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false),
    m_predictionTimestampHasBeenSet(false)
{
}

Aws::String GetEventPredictionMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithString("detectorVersionId", m_detectorVersionId);

  }

  if(m_predictionTimestampHasBeenSet)
  {
   payload.WithString("predictionTimestamp", m_predictionTimestamp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEventPredictionMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.GetEventPredictionMetadata"));
  return headers;

}




