/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectProtectiveEquipmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetectProtectiveEquipmentRequest::DetectProtectiveEquipmentRequest() : 
    m_imageHasBeenSet(false),
    m_summarizationAttributesHasBeenSet(false)
{
}

Aws::String DetectProtectiveEquipmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageHasBeenSet)
  {
   payload.WithObject("Image", m_image.Jsonize());

  }

  if(m_summarizationAttributesHasBeenSet)
  {
   payload.WithObject("SummarizationAttributes", m_summarizationAttributes.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DetectProtectiveEquipmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "RekognitionService.DetectProtectiveEquipment"));
  return headers;

}




