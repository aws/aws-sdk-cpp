/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ApproveAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ApproveAssignmentRequest::ApproveAssignmentRequest() : 
    m_assignmentIdHasBeenSet(false),
    m_requesterFeedbackHasBeenSet(false),
    m_overrideRejection(false),
    m_overrideRejectionHasBeenSet(false)
{
}

Aws::String ApproveAssignmentRequest::SerializePayload() const
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

  if(m_overrideRejectionHasBeenSet)
  {
   payload.WithBool("OverrideRejection", m_overrideRejection);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ApproveAssignmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ApproveAssignment"));
  return headers;

}




