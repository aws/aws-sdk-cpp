/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DeleteAssessmentTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAssessmentTargetRequest::DeleteAssessmentTargetRequest() : 
    m_assessmentTargetArnHasBeenSet(false)
{
}

Aws::String DeleteAssessmentTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTargetArnHasBeenSet)
  {
   payload.WithString("assessmentTargetArn", m_assessmentTargetArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAssessmentTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.DeleteAssessmentTarget"));
  return headers;

}




