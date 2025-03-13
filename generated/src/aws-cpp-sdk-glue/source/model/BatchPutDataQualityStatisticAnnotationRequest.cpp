/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchPutDataQualityStatisticAnnotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchPutDataQualityStatisticAnnotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_inclusionAnnotationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionAnnotationsJsonList(m_inclusionAnnotations.size());
   for(unsigned inclusionAnnotationsIndex = 0; inclusionAnnotationsIndex < inclusionAnnotationsJsonList.GetLength(); ++inclusionAnnotationsIndex)
   {
     inclusionAnnotationsJsonList[inclusionAnnotationsIndex].AsObject(m_inclusionAnnotations[inclusionAnnotationsIndex].Jsonize());
   }
   payload.WithArray("InclusionAnnotations", std::move(inclusionAnnotationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchPutDataQualityStatisticAnnotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchPutDataQualityStatisticAnnotation"));
  return headers;

}




