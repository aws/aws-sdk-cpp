/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAssessmentTargetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.UpdateAssessmentTarget"));
  return headers;

}




