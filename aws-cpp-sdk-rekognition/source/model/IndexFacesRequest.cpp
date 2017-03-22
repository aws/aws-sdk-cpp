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
#include <aws/rekognition/model/IndexFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

IndexFacesRequest::IndexFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_externalImageIdHasBeenSet(false),
    m_detectionAttributesHasBeenSet(false)
{
}

Aws::String IndexFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_externalImageIdHasBeenSet)
  {
   payload.WithString("ExternalImageId", m_externalImageId);

  }

  if(m_detectionAttributesHasBeenSet)
  {
   Array<JsonValue> detectionAttributesJsonList(m_detectionAttributes.size());
   for(unsigned detectionAttributesIndex = 0; detectionAttributesIndex < detectionAttributesJsonList.GetLength(); ++detectionAttributesIndex)
   {
     detectionAttributesJsonList[detectionAttributesIndex].AsString(AttributeMapper::GetNameForAttribute(m_detectionAttributes[detectionAttributesIndex]));
   }
   payload.WithArray("DetectionAttributes", std::move(detectionAttributesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection IndexFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.IndexFaces"));
  return headers;

}




