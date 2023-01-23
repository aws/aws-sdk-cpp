/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DeleteAssessmentRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssessmentRunRequest::DeleteAssessmentRunRequest() : 
    m_assessmentRunArnHasBeenSet(false)
{
}

Aws::String DeleteAssessmentRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAssessmentRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DeleteAssessmentRun"));
  return headers;

}




