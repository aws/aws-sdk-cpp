/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/PutEventTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutEventTypeRequest::PutEventTypeRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventVariablesHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_entityTypesHasBeenSet(false),
    m_eventIngestion(EventIngestion::NOT_SET),
    m_eventIngestionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String PutEventTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_eventVariablesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventVariablesJsonList(m_eventVariables.size());
   for(unsigned eventVariablesIndex = 0; eventVariablesIndex < eventVariablesJsonList.GetLength(); ++eventVariablesIndex)
   {
     eventVariablesJsonList[eventVariablesIndex].AsString(m_eventVariables[eventVariablesIndex]);
   }
   payload.WithArray("eventVariables", std::move(eventVariablesJsonList));

  }

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsString(m_labels[labelsIndex]);
   }
   payload.WithArray("labels", std::move(labelsJsonList));

  }

  if(m_entityTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
   for(unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex)
   {
     entityTypesJsonList[entityTypesIndex].AsString(m_entityTypes[entityTypesIndex]);
   }
   payload.WithArray("entityTypes", std::move(entityTypesJsonList));

  }

  if(m_eventIngestionHasBeenSet)
  {
   payload.WithString("eventIngestion", EventIngestionMapper::GetNameForEventIngestion(m_eventIngestion));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutEventTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHawksNestServiceFacade.PutEventType"));
  return headers;

}




