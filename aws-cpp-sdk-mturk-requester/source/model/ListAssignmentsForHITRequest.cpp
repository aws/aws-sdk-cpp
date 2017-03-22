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
#include <aws/mturk-requester/model/ListAssignmentsForHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssignmentsForHITRequest::ListAssignmentsForHITRequest() : 
    m_hITIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_assignmentStatusesHasBeenSet(false)
{
}

Aws::String ListAssignmentsForHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_assignmentStatusesHasBeenSet)
  {
   Array<JsonValue> assignmentStatusesJsonList(m_assignmentStatuses.size());
   for(unsigned assignmentStatusesIndex = 0; assignmentStatusesIndex < assignmentStatusesJsonList.GetLength(); ++assignmentStatusesIndex)
   {
     assignmentStatusesJsonList[assignmentStatusesIndex].AsString(AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatuses[assignmentStatusesIndex]));
   }
   payload.WithArray("AssignmentStatuses", std::move(assignmentStatusesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListAssignmentsForHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListAssignmentsForHIT"));
  return headers;

}




