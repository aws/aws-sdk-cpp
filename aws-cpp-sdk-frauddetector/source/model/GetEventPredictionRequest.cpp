/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetEventPredictionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEventPredictionRequest::GetEventPredictionRequest() : 
    m_detectorIdHasBeenSet(false),
    m_detectorVersionIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventTypeNameHasBeenSet(false),
    m_entitiesHasBeenSet(false),
    m_eventTimestampHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_externalModelEndpointDataBlobsHasBeenSet(false)
{
}

Aws::String GetEventPredictionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorIdHasBeenSet)
  {
   payload.WithString("detectorId", m_detectorId);

  }

  if(m_detectorVersionIdHasBeenSet)
  {
   payload.WithString("detectorVersionId", m_detectorVersionId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeNameHasBeenSet)
  {
   payload.WithString("eventTypeName", m_eventTypeName);

  }

  if(m_entitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entitiesJsonList(m_entities.size());
   for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
   {
     entitiesJsonList[entitiesIndex].AsObject(m_entities[entitiesIndex].Jsonize());
   }
   payload.WithArray("entities", std::move(entitiesJsonList));

  }

  if(m_eventTimestampHasBeenSet)
  {
   payload.WithString("eventTimestamp", m_eventTimestamp);

  }

  if(m_eventVariablesHasBeenSet)
  {
   JsonValue eventVariablesJsonMap;
   for(auto& eventVariablesItem : m_eventVariables)
   {
     eventVariablesJsonMap.WithString(eventVariablesItem.first, eventVariablesItem.second);
   }
   payload.WithObject("eventVariables", std::move(eventVariablesJsonMap));

  }

  if(m_externalModelEndpointDataBlobsHasBeenSet)
  {
   JsonValue externalModelEndpointDataBlobsJsonMap;
   for(auto& externalModelEndpointDataBlobsItem : m_externalModelEndpointDataBlobs)
   {
     externalModelEndpointDataBlobsJsonMap.WithObject(externalModelEndpointDataBlobsItem.first, externalModelEndpointDataBlobsItem.second.Jsonize());
   }
   payload.WithObject("externalModelEndpointDataBlobs", std::move(externalModelEndpointDataBlobsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEventPredictionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.GetEventPrediction"));
  return headers;

}




