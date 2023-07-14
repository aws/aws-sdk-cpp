/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SearchFacesByImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchFacesByImageRequest::SearchFacesByImageRequest() : 
    m_collectionIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_maxFaces(0),
    m_maxFacesHasBeenSet(false),
    m_faceMatchThreshold(0.0),
    m_faceMatchThresholdHasBeenSet(false),
    m_qualityFilter(QualityFilter::NOT_SET),
    m_qualityFilterHasBeenSet(false)
{
}

Aws::String SearchFacesByImageRequest::SerializePayload() const
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

  if(m_maxFacesHasBeenSet)
  {
   payload.WithInteger("MaxFaces", m_maxFaces);

  }

  if(m_faceMatchThresholdHasBeenSet)
  {
   payload.WithDouble("FaceMatchThreshold", m_faceMatchThreshold);

  }

  if(m_qualityFilterHasBeenSet)
  {
   payload.WithString("QualityFilter", QualityFilterMapper::GetNameForQualityFilter(m_qualityFilter));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SearchFacesByImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.SearchFacesByImage"));
  return headers;

}




