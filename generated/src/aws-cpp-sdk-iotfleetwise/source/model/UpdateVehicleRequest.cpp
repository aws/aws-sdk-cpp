/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateVehicleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateVehicleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  if(m_modelManifestArnHasBeenSet)
  {
   payload.WithString("modelManifestArn", m_modelManifestArn);

  }

  if(m_decoderManifestArnHasBeenSet)
  {
   payload.WithString("decoderManifestArn", m_decoderManifestArn);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_attributeUpdateModeHasBeenSet)
  {
   payload.WithString("attributeUpdateMode", UpdateModeMapper::GetNameForUpdateMode(m_attributeUpdateMode));
  }

  if(m_stateTemplatesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToAddJsonList(m_stateTemplatesToAdd.size());
   for(unsigned stateTemplatesToAddIndex = 0; stateTemplatesToAddIndex < stateTemplatesToAddJsonList.GetLength(); ++stateTemplatesToAddIndex)
   {
     stateTemplatesToAddJsonList[stateTemplatesToAddIndex].AsObject(m_stateTemplatesToAdd[stateTemplatesToAddIndex].Jsonize());
   }
   payload.WithArray("stateTemplatesToAdd", std::move(stateTemplatesToAddJsonList));

  }

  if(m_stateTemplatesToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToRemoveJsonList(m_stateTemplatesToRemove.size());
   for(unsigned stateTemplatesToRemoveIndex = 0; stateTemplatesToRemoveIndex < stateTemplatesToRemoveJsonList.GetLength(); ++stateTemplatesToRemoveIndex)
   {
     stateTemplatesToRemoveJsonList[stateTemplatesToRemoveIndex].AsString(m_stateTemplatesToRemove[stateTemplatesToRemoveIndex]);
   }
   payload.WithArray("stateTemplatesToRemove", std::move(stateTemplatesToRemoveJsonList));

  }

  if(m_stateTemplatesToUpdateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stateTemplatesToUpdateJsonList(m_stateTemplatesToUpdate.size());
   for(unsigned stateTemplatesToUpdateIndex = 0; stateTemplatesToUpdateIndex < stateTemplatesToUpdateJsonList.GetLength(); ++stateTemplatesToUpdateIndex)
   {
     stateTemplatesToUpdateJsonList[stateTemplatesToUpdateIndex].AsObject(m_stateTemplatesToUpdate[stateTemplatesToUpdateIndex].Jsonize());
   }
   payload.WithArray("stateTemplatesToUpdate", std::move(stateTemplatesToUpdateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVehicleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.UpdateVehicle"));
  return headers;

}




