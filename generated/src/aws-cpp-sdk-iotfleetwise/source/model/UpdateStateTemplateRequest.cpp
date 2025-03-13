/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateStateTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStateTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_stateTemplatePropertiesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatePropertiesToAddJsonList(m_stateTemplatePropertiesToAdd.size());
   for(unsigned stateTemplatePropertiesToAddIndex = 0; stateTemplatePropertiesToAddIndex < stateTemplatePropertiesToAddJsonList.GetLength(); ++stateTemplatePropertiesToAddIndex)
   {
     stateTemplatePropertiesToAddJsonList[stateTemplatePropertiesToAddIndex].AsString(m_stateTemplatePropertiesToAdd[stateTemplatePropertiesToAddIndex]);
   }
   payload.WithArray("stateTemplatePropertiesToAdd", std::move(stateTemplatePropertiesToAddJsonList));

  }

  if(m_stateTemplatePropertiesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatePropertiesToRemoveJsonList(m_stateTemplatePropertiesToRemove.size());
   for(unsigned stateTemplatePropertiesToRemoveIndex = 0; stateTemplatePropertiesToRemoveIndex < stateTemplatePropertiesToRemoveJsonList.GetLength(); ++stateTemplatePropertiesToRemoveIndex)
   {
     stateTemplatePropertiesToRemoveJsonList[stateTemplatePropertiesToRemoveIndex].AsString(m_stateTemplatePropertiesToRemove[stateTemplatePropertiesToRemoveIndex]);
   }
   payload.WithArray("stateTemplatePropertiesToRemove", std::move(stateTemplatePropertiesToRemoveJsonList));

  }

  if(m_dataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataExtraDimensionsJsonList(m_dataExtraDimensions.size());
   for(unsigned dataExtraDimensionsIndex = 0; dataExtraDimensionsIndex < dataExtraDimensionsJsonList.GetLength(); ++dataExtraDimensionsIndex)
   {
     dataExtraDimensionsJsonList[dataExtraDimensionsIndex].AsString(m_dataExtraDimensions[dataExtraDimensionsIndex]);
   }
   payload.WithArray("dataExtraDimensions", std::move(dataExtraDimensionsJsonList));

  }

  if(m_metadataExtraDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataExtraDimensionsJsonList(m_metadataExtraDimensions.size());
   for(unsigned metadataExtraDimensionsIndex = 0; metadataExtraDimensionsIndex < metadataExtraDimensionsJsonList.GetLength(); ++metadataExtraDimensionsIndex)
   {
     metadataExtraDimensionsJsonList[metadataExtraDimensionsIndex].AsString(m_metadataExtraDimensions[metadataExtraDimensionsIndex]);
   }
   payload.WithArray("metadataExtraDimensions", std::move(metadataExtraDimensionsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStateTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateStateTemplate"));
  return headers;

}




