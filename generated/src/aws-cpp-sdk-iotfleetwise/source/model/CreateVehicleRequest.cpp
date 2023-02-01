/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateVehicleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVehicleRequest::CreateVehicleRequest() : 
    m_vehicleNameHasBeenSet(false),
    m_modelManifestArnHasBeenSet(false),
    m_decoderManifestArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_associationBehavior(VehicleAssociationBehavior::NOT_SET),
    m_associationBehaviorHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateVehicleRequest::SerializePayload() const
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

  if(m_associationBehaviorHasBeenSet)
  {
   payload.WithString("associationBehavior", VehicleAssociationBehaviorMapper::GetNameForVehicleAssociationBehavior(m_associationBehavior));
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

Aws::Http::HeaderValueCollection CreateVehicleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.CreateVehicle"));
  return headers;

}




