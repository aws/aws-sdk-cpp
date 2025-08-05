/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/UpdateAutomatedReasoningPolicyAnnotationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAutomatedReasoningPolicyAnnotationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_annotationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> annotationsJsonList(m_annotations.size());
   for(unsigned annotationsIndex = 0; annotationsIndex < annotationsJsonList.GetLength(); ++annotationsIndex)
   {
     annotationsJsonList[annotationsIndex].AsObject(m_annotations[annotationsIndex].Jsonize());
   }
   payload.WithArray("annotations", std::move(annotationsJsonList));

  }

  if(m_lastUpdatedAnnotationSetHashHasBeenSet)
  {
   payload.WithString("lastUpdatedAnnotationSetHash", m_lastUpdatedAnnotationSetHash);

  }

  return payload.View().WriteReadable();
}




