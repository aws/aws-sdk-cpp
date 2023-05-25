/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ListEventPredictionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEventPredictionsRequest::ListEventPredictionsRequest() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false),
    m_predictionTimeRangeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListEventPredictionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithObject("eventId", m_eventId.Jsonize());

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithObject("eventType", m_eventType.Jsonize());

  }

  if(m_detectorIdHasBeenSet)
  {
   payload.WithObject("detectorId", m_detectorId.Jsonize());

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithObject("detectorVersionId", m_detectorVersionId.Jsonize());

  }

  if(m_predictionTimeRangeHasBeenSet)
  {
   payload.WithObject("predictionTimeRange", m_predictionTimeRange.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListEventPredictionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.ListEventPredictions"));
  return headers;

}




