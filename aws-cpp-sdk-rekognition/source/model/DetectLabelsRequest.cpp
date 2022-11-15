/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectLabelsRequest::DetectLabelsRequest() : 
    m_imageHasBeenSet(false),
    m_maxLabels(0),
    m_maxLabelsHasBeenSet(false),
    m_minConfidence(0.0),
    m_minConfidenceHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_settingsHasBeenSet(false)
{
}

Aws::String DetectLabelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_maxLabelsHasBeenSet)
  {
   payload.WithInteger("MaxLabels", m_maxLabels);

  }

  if(m_minConfidenceHasBeenSet)
  {
   payload.WithDouble("MinConfidence", m_minConfidence);

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsString(DetectLabelsFeatureNameMapper::GetNameForDetectLabelsFeatureName(m_features[featuresIndex]));
   }
   payload.WithArray("Features", std::move(featuresJsonList));

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("Settings", m_settings.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectLabels"));
  return headers;

}




