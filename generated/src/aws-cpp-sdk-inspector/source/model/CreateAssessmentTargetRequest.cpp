/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/CreateAssessmentTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssessmentTargetRequest::CreateAssessmentTargetRequest() : 
    m_assessmentTargetNameHasBeenSet(false),
    m_resourceGroupArnHasBeenSet(false)
{
}

Aws::String CreateAssessmentTargetRequest::SerializePayload() const
{
  JsonValue payload;

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

Aws::Http::HeaderValueCollection CreateAssessmentTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.CreateAssessmentTarget"));
  return headers;

}




