/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    m_attributesHasBeenSet(false)
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
   Array<JsonValue> totalResourcesJsonList(m_totalResources.size());
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
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterContainerInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.RegisterContainerInstance"));
  return headers;

}



