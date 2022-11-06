/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/RegisterContainerInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterContainerInstanceRequest::RegisterContainerInstanceRequest() : 
    m_clusterHasBeenSet(false),
    m_instanceIdentityDocumentHasBeenSet(false),
    m_instanceIdentityDocumentSignatureHasBeenSet(false),
    m_totalResourcesHasBeenSet(false),
    m_versionInfoHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_platformDevicesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String RegisterContainerInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_instanceIdentityDocumentHasBeenSet)
  {
   payload.WithString("instanceIdentityDocument", m_instanceIdentityDocument);

  }

  if(m_instanceIdentityDocumentSignatureHasBeenSet)
  {
   payload.WithString("instanceIdentityDocumentSignature", m_instanceIdentityDocumentSignature);

  }

  if(m_totalResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> totalResourcesJsonList(m_totalResources.size());
   for(unsigned totalResourcesIndex = 0; totalResourcesIndex < totalResourcesJsonList.GetLength(); ++totalResourcesIndex)
   {
     totalResourcesJsonList[totalResourcesIndex].AsObject(m_totalResources[totalResourcesIndex].Jsonize());
   }
   payload.WithArray("totalResources", std::move(totalResourcesJsonList));

  }

  if(m_versionInfoHasBeenSet)
  {
   payload.WithObject("versionInfo", m_versionInfo.Jsonize());

  }

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_platformDevicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformDevicesJsonList(m_platformDevices.size());
   for(unsigned platformDevicesIndex = 0; platformDevicesIndex < platformDevicesJsonList.GetLength(); ++platformDevicesIndex)
   {
     platformDevicesJsonList[platformDevicesIndex].AsObject(m_platformDevices[platformDevicesIndex].Jsonize());
   }
   payload.WithArray("platformDevices", std::move(platformDevicesJsonList));

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

Aws::Http::HeaderValueCollection RegisterContainerInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RegisterContainerInstance"));
  return headers;

}




