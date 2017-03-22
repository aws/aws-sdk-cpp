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
#include <aws/rekognition/model/DeleteFacesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFacesRequest::DeleteFacesRequest() : 
    m_collectionIdHasBeenSet(false),
    m_faceIdsHasBeenSet(false)
{
}

Aws::String DeleteFacesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_collectionIdHasBeenSet)
  {
   payload.WithString("CollectionId", m_collectionId);

  }

  if(m_faceIdsHasBeenSet)
  {
   Array<JsonValue> faceIdsJsonList(m_faceIds.size());
   for(unsigned faceIdsIndex = 0; faceIdsIndex < faceIdsJsonList.GetLength(); ++faceIdsIndex)
   {
     faceIdsJsonList[faceIdsIndex].AsString(m_faceIds[faceIdsIndex]);
   }
   payload.WithArray("FaceIds", std::move(faceIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteFacesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DeleteFaces"));
  return headers;

}




