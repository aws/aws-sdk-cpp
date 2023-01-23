/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/UpdateAssessmentTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentTargetRequest::UpdateAssessmentTargetRequest() : 
    m_assessmentTargetArnHasBeenSet(false),
    m_assessmentTargetNameHasBeenSet(false),
    m_resourceGroupArnHasBeenSet(false)
{
}

Aws::String UpdateAssessmentTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTargetArnHasBeenSet)
  {
   payload.WithString("assessmentTargetArn", m_assessmentTargetArn);

  }

  if(m_assessmentTargetNameHasBeenSet)
  {
   payload.WithString("assessmentTargetName", m_assessmentTargetName);

  }

  if(m_resourceGroupArnHasBeenSet)
  {
   payload.WithString("resourceGroupArn", m_resourceGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAssessmentTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.UpdateAssessmentTarget"));
  return headers;

}




