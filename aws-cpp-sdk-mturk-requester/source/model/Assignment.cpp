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
#include <aws/mturk-requester/model/Assignment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

Assignment::Assignment() : 
    m_assignmentIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_hITIdHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false),
    m_autoApprovalTimeHasBeenSet(false),
    m_acceptTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_rejectionTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_requesterFeedbackHasBeenSet(false)
{
}

Assignment::Assignment(const JsonValue& jsonValue) : 
    m_assignmentIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_hITIdHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false),
    m_autoApprovalTimeHasBeenSet(false),
    m_acceptTimeHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_approvalTimeHasBeenSet(false),
    m_rejectionTimeHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_answerHasBeenSet(false),
    m_requesterFeedbackHasBeenSet(false)
{
  *this = jsonValue;
}

Assignment& Assignment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AssignmentId"))
  {
    m_assignmentId = jsonValue.GetString("AssignmentId");

    m_assignmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HITId"))
  {
    m_hITId = jsonValue.GetString("HITId");

    m_hITIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentStatus"))
  {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));

    m_assignmentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoApprovalTime"))
  {
    m_autoApprovalTime = jsonValue.GetDouble("AutoApprovalTime");

    m_autoApprovalTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceptTime"))
  {
    m_acceptTime = jsonValue.GetDouble("AcceptTime");

    m_acceptTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTime"))
  {
    m_submitTime = jsonValue.GetDouble("SubmitTime");

    m_submitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovalTime"))
  {
    m_approvalTime = jsonValue.GetDouble("ApprovalTime");

    m_approvalTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RejectionTime"))
  {
    m_rejectionTime = jsonValue.GetDouble("RejectionTime");

    m_rejectionTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deadline"))
  {
    m_deadline = jsonValue.GetDouble("Deadline");

    m_deadlineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Answer"))
  {
    m_answer = jsonValue.GetString("Answer");

    m_answerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterFeedback"))
  {
    m_requesterFeedback = jsonValue.GetString("RequesterFeedback");

    m_requesterFeedbackHasBeenSet = true;
  }

  return *this;
}

JsonValue Assignment::Jsonize() const
{
  JsonValue payload;

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_assignmentStatusHasBeenSet)
  {
   payload.WithString("AssignmentStatus", AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatus));
  }

  if(m_autoApprovalTimeHasBeenSet)
  {
   payload.WithDouble("AutoApprovalTime", m_autoApprovalTime.SecondsWithMSPrecision());
  }

  if(m_acceptTimeHasBeenSet)
  {
   payload.WithDouble("AcceptTime", m_acceptTime.SecondsWithMSPrecision());
  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("SubmitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_approvalTimeHasBeenSet)
  {
   payload.WithDouble("ApprovalTime", m_approvalTime.SecondsWithMSPrecision());
  }

  if(m_rejectionTimeHasBeenSet)
  {
   payload.WithDouble("RejectionTime", m_rejectionTime.SecondsWithMSPrecision());
  }

  if(m_deadlineHasBeenSet)
  {
   payload.WithDouble("Deadline", m_deadline.SecondsWithMSPrecision());
  }

  if(m_answerHasBeenSet)
  {
   payload.WithString("Answer", m_answer);

  }

  if(m_requesterFeedbackHasBeenSet)
  {
   payload.WithString("RequesterFeedback", m_requesterFeedback);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws