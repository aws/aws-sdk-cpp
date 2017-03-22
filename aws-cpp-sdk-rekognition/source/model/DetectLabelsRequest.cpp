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
    m_minConfidenceHasBeenSet(false)
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DetectLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectLabels"));
  return headers;

}




