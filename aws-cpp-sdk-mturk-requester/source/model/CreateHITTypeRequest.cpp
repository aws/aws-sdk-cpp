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
#include <aws/mturk-requester/model/CreateHITTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHITTypeRequest::CreateHITTypeRequest() : 
    m_autoApprovalDelayInSeconds(0),
    m_autoApprovalDelayInSecondsHasBeenSet(false),
    m_assignmentDurationInSeconds(0),
    m_assignmentDurationInSecondsHasBeenSet(false),
    m_rewardHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_qualificationRequirementsHasBeenSet(false)
{
}

Aws::String CreateHITTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoApprovalDelayInSecondsHasBeenSet)
  {
   payload.WithInt64("AutoApprovalDelayInSeconds", m_autoApprovalDelayInSeconds);

  }

  if(m_assignmentDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("AssignmentDurationInSeconds", m_assignmentDurationInSeconds);

  }

  if(m_rewardHasBeenSet)
  {
   payload.WithString("Reward", m_reward);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_keywordsHasBeenSet)
  {
   payload.WithString("Keywords", m_keywords);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_qualificationRequirementsHasBeenSet)
  {
   Array<JsonValue> qualificationRequirementsJsonList(m_qualificationRequirements.size());
   for(unsigned qualificationRequirementsIndex = 0; qualificationRequirementsIndex < qualificationRequirementsJsonList.GetLength(); ++qualificationRequirementsIndex)
   {
     qualificationRequirementsJsonList[qualificationRequirementsIndex].AsObject(m_qualificationRequirements[qualificationRequirementsIndex].Jsonize());
   }
   payload.WithArray("QualificationRequirements", std::move(qualificationRequirementsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateHITTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateHITType"));
  return headers;

}




