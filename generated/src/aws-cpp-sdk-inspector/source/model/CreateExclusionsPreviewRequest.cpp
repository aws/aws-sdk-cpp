/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/CreateExclusionsPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateExclusionsPreviewRequest::CreateExclusionsPreviewRequest() : 
    m_assessmentTemplateArnHasBeenSet(false)
{
}

Aws::String CreateExclusionsPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTemplateArnHasBeenSet)
  {
   payload.WithString("assessmentTemplateArn", m_assessmentTemplateArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExclusionsPreviewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateExclusionsPreview"));
  return headers;

}




