/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/CreateHITWithHITTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest() : 
    m_hITTypeIdHasBeenSet(false),
    m_maxAssignments(0),
    m_maxAssignmentsHasBeenSet(false),
    m_lifetimeInSeconds(0),
    m_lifetimeInSecondsHasBeenSet(false),
    m_questionHasBeenSet(false),
    m_requesterAnnotationHasBeenSet(false),
    m_uniqueRequestTokenHasBeenSet(false),
    m_assignmentReviewPolicyHasBeenSet(false),
    m_hITReviewPolicyHasBeenSet(false),
    m_hITLayoutIdHasBeenSet(false),
    m_hITLayoutParametersHasBeenSet(false)
{
}

Aws::String CreateHITWithHITTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITTypeIdHasBeenSet)
  {
   payload.WithString("HITTypeId", m_hITTypeId);

  }

  if(m_maxAssignmentsHasBeenSet)
  {
   payload.WithInteger("MaxAssignments", m_maxAssignments);

  }

  if(m_lifetimeInSecondsHasBeenSet)
  {
   payload.WithInt64("LifetimeInSeconds", m_lifetimeInSeconds);

  }

  if(m_questionHasBeenSet)
  {
   payload.WithString("Question", m_question);

  }

  if(m_requesterAnnotationHasBeenSet)
  {
   payload.WithString("RequesterAnnotation", m_requesterAnnotation);

  }

  if(m_uniqueRequestTokenHasBeenSet)
  {
   payload.WithString("UniqueRequestToken", m_uniqueRequestToken);

  }

  if(m_assignmentReviewPolicyHasBeenSet)
  {
   payload.WithObject("AssignmentReviewPolicy", m_assignmentReviewPolicy.Jsonize());

  }

  if(m_hITReviewPolicyHasBeenSet)
  {
   payload.WithObject("HITReviewPolicy", m_hITReviewPolicy.Jsonize());

  }

  if(m_hITLayoutIdHasBeenSet)
  {
   payload.WithString("HITLayoutId", m_hITLayoutId);

  }

  if(m_hITLayoutParametersHasBeenSet)
  {
   Array<JsonValue> hITLayoutParametersJsonList(m_hITLayoutParameters.size());
   for(unsigned hITLayoutParametersIndex = 0; hITLayoutParametersIndex < hITLayoutParametersJsonList.GetLength(); ++hITLayoutParametersIndex)
   {
     hITLayoutParametersJsonList[hITLayoutParametersIndex].AsObject(m_hITLayoutParameters[hITLayoutParametersIndex].Jsonize());
   }
   payload.WithArray("HITLayoutParameters", std::move(hITLayoutParametersJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHITWithHITTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateHITWithHITType"));
  return headers;

}




