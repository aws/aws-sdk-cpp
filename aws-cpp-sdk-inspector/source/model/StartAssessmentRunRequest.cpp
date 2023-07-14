/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/StartAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssessmentRunRequest::StartAssessmentRunRequest() : 
    m_assessmentTemplateArnHasBeenSet(false),
    m_assessmentRunNameHasBeenSet(false)
{
}

Aws::String StartAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTemplateArnHasBeenSet)
  {
   payload.WithString("assessmentTemplateArn", m_assessmentTemplateArn);

  }

  if(m_assessmentRunNameHasBeenSet)
  {
   payload.WithString("assessmentRunName", m_assessmentRunName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.StartAssessmentRun"));
  return headers;

}




