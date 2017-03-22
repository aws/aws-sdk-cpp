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
#include <aws/mturk-requester/model/ListReviewPolicyResultsForHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReviewPolicyResultsForHITRequest::ListReviewPolicyResultsForHITRequest() : 
    m_hITIdHasBeenSet(false),
    m_policyLevelsHasBeenSet(false),
    m_retrieveActions(false),
    m_retrieveActionsHasBeenSet(false),
    m_retrieveResults(false),
    m_retrieveResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListReviewPolicyResultsForHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_policyLevelsHasBeenSet)
  {
   Array<JsonValue> policyLevelsJsonList(m_policyLevels.size());
   for(unsigned policyLevelsIndex = 0; policyLevelsIndex < policyLevelsJsonList.GetLength(); ++policyLevelsIndex)
   {
     policyLevelsJsonList[policyLevelsIndex].AsString(ReviewPolicyLevelMapper::GetNameForReviewPolicyLevel(m_policyLevels[policyLevelsIndex]));
   }
   payload.WithArray("PolicyLevels", std::move(policyLevelsJsonList));

  }

  if(m_retrieveActionsHasBeenSet)
  {
   payload.WithBool("RetrieveActions", m_retrieveActions);

  }

  if(m_retrieveResultsHasBeenSet)
  {
   payload.WithBool("RetrieveResults", m_retrieveResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListReviewPolicyResultsForHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListReviewPolicyResultsForHIT"));
  return headers;

}




