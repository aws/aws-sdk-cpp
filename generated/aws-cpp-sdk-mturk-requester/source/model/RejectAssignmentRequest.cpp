/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/RejectAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RejectAssignmentRequest::RejectAssignmentRequest() : 
    m_assignmentIdHasBeenSet(false),
    m_requesterFeedbackHasBeenSet(false)
{
}

Aws::String RejectAssignmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_requesterFeedbackHasBeenSet)
  {
   payload.WithString("RequesterFeedback", m_requesterFeedback);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RejectAssignmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.RejectAssignment"));
  return headers;

}




