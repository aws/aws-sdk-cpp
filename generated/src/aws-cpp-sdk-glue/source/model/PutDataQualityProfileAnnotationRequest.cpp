/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PutDataQualityProfileAnnotationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDataQualityProfileAnnotationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_inclusionAnnotationHasBeenSet)
  {
   payload.WithString("InclusionAnnotation", InclusionAnnotationValueMapper::GetNameForInclusionAnnotationValue(m_inclusionAnnotation));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutDataQualityProfileAnnotationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutDataQualityProfileAnnotation"));
  return headers;

}




