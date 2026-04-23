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

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mturk-requester/model/AssignmentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MTurk
{
namespace Model
{

  /**
   * <p> The Assignment data structure represents a single assignment of a HIT to a
   * Worker. The assignment tracks the Worker's efforts to complete the HIT, and
   * contains the results for later retrieval. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/Assignment">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API Assignment
  {
  public:
    Assignment();
    Assignment(Aws::Utils::Json::JsonView jsonValue);
    Assignment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline Assignment& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline Assignment& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the assignment.</p>
     */
    inline Assignment& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline Assignment& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline Assignment& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker who accepted the HIT.</p>
     */
    inline Assignment& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p> The ID of the HIT.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p> The ID of the HIT.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p> The ID of the HIT.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> The ID of the HIT.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p> The ID of the HIT.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p> The ID of the HIT.</p>
     */
    inline Assignment& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p> The ID of the HIT.</p>
     */
    inline Assignment& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p> The ID of the HIT.</p>
     */
    inline Assignment& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p> The status of the assignment.</p>
     */
    inline const AssignmentStatus& GetAssignmentStatus() const{ return m_assignmentStatus; }

    /**
     * <p> The status of the assignment.</p>
     */
    inline bool AssignmentStatusHasBeenSet() const { return m_assignmentStatusHasBeenSet; }

    /**
     * <p> The status of the assignment.</p>
     */
    inline void SetAssignmentStatus(const AssignmentStatus& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = value; }

    /**
     * <p> The status of the assignment.</p>
     */
    inline void SetAssignmentStatus(AssignmentStatus&& value) { m_assignmentStatusHasBeenSet = true; m_assignmentStatus = std::move(value); }

    /**
     * <p> The status of the assignment.</p>
     */
    inline Assignment& WithAssignmentStatus(const AssignmentStatus& value) { SetAssignmentStatus(value); return *this;}

    /**
     * <p> The status of the assignment.</p>
     */
    inline Assignment& WithAssignmentStatus(AssignmentStatus&& value) { SetAssignmentStatus(std::move(value)); return *this;}


    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline const Aws::Utils::DateTime& GetAutoApprovalTime() const{ return m_autoApprovalTime; }

    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline bool AutoApprovalTimeHasBeenSet() const { return m_autoApprovalTimeHasBeenSet; }

    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline void SetAutoApprovalTime(const Aws::Utils::DateTime& value) { m_autoApprovalTimeHasBeenSet = true; m_autoApprovalTime = value; }

    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline void SetAutoApprovalTime(Aws::Utils::DateTime&& value) { m_autoApprovalTimeHasBeenSet = true; m_autoApprovalTime = std::move(value); }

    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline Assignment& WithAutoApprovalTime(const Aws::Utils::DateTime& value) { SetAutoApprovalTime(value); return *this;}

    /**
     * <p> If results have been submitted, AutoApprovalTime is the date and time the
     * results of the assignment results are considered Approved automatically if they
     * have not already been explicitly approved or rejected by the Requester. This
     * value is derived from the auto-approval delay specified by the Requester in the
     * HIT. This value is omitted from the assignment if the Worker has not yet
     * submitted results.</p>
     */
    inline Assignment& WithAutoApprovalTime(Aws::Utils::DateTime&& value) { SetAutoApprovalTime(std::move(value)); return *this;}


    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptTime() const{ return m_acceptTime; }

    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline bool AcceptTimeHasBeenSet() const { return m_acceptTimeHasBeenSet; }

    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline void SetAcceptTime(const Aws::Utils::DateTime& value) { m_acceptTimeHasBeenSet = true; m_acceptTime = value; }

    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline void SetAcceptTime(Aws::Utils::DateTime&& value) { m_acceptTimeHasBeenSet = true; m_acceptTime = std::move(value); }

    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline Assignment& WithAcceptTime(const Aws::Utils::DateTime& value) { SetAcceptTime(value); return *this;}

    /**
     * <p> The date and time the Worker accepted the assignment.</p>
     */
    inline Assignment& WithAcceptTime(Aws::Utils::DateTime&& value) { SetAcceptTime(std::move(value)); return *this;}


    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline Assignment& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p> If the Worker has submitted results, SubmitTime is the date and time the
     * assignment was submitted. This value is omitted from the assignment if the
     * Worker has not yet submitted results.</p>
     */
    inline Assignment& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline const Aws::Utils::DateTime& GetApprovalTime() const{ return m_approvalTime; }

    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline bool ApprovalTimeHasBeenSet() const { return m_approvalTimeHasBeenSet; }

    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline void SetApprovalTime(const Aws::Utils::DateTime& value) { m_approvalTimeHasBeenSet = true; m_approvalTime = value; }

    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline void SetApprovalTime(Aws::Utils::DateTime&& value) { m_approvalTimeHasBeenSet = true; m_approvalTime = std::move(value); }

    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline Assignment& WithApprovalTime(const Aws::Utils::DateTime& value) { SetApprovalTime(value); return *this;}

    /**
     * <p> If the Worker has submitted results and the Requester has approved the
     * results, ApprovalTime is the date and time the Requester approved the results.
     * This value is omitted from the assignment if the Requester has not yet approved
     * the results.</p>
     */
    inline Assignment& WithApprovalTime(Aws::Utils::DateTime&& value) { SetApprovalTime(std::move(value)); return *this;}


    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline const Aws::Utils::DateTime& GetRejectionTime() const{ return m_rejectionTime; }

    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline bool RejectionTimeHasBeenSet() const { return m_rejectionTimeHasBeenSet; }

    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline void SetRejectionTime(const Aws::Utils::DateTime& value) { m_rejectionTimeHasBeenSet = true; m_rejectionTime = value; }

    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline void SetRejectionTime(Aws::Utils::DateTime&& value) { m_rejectionTimeHasBeenSet = true; m_rejectionTime = std::move(value); }

    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline Assignment& WithRejectionTime(const Aws::Utils::DateTime& value) { SetRejectionTime(value); return *this;}

    /**
     * <p> If the Worker has submitted results and the Requester has rejected the
     * results, RejectionTime is the date and time the Requester rejected the
     * results.</p>
     */
    inline Assignment& WithRejectionTime(Aws::Utils::DateTime&& value) { SetRejectionTime(std::move(value)); return *this;}


    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline const Aws::Utils::DateTime& GetDeadline() const{ return m_deadline; }

    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline bool DeadlineHasBeenSet() const { return m_deadlineHasBeenSet; }

    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline void SetDeadline(const Aws::Utils::DateTime& value) { m_deadlineHasBeenSet = true; m_deadline = value; }

    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline void SetDeadline(Aws::Utils::DateTime&& value) { m_deadlineHasBeenSet = true; m_deadline = std::move(value); }

    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline Assignment& WithDeadline(const Aws::Utils::DateTime& value) { SetDeadline(value); return *this;}

    /**
     * <p> The date and time of the deadline for the assignment. This value is derived
     * from the deadline specification for the HIT and the date and time the Worker
     * accepted the HIT.</p>
     */
    inline Assignment& WithDeadline(Aws::Utils::DateTime&& value) { SetDeadline(std::move(value)); return *this;}


    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline void SetAnswer(const Aws::String& value) { m_answerHasBeenSet = true; m_answer = value; }

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline void SetAnswer(Aws::String&& value) { m_answerHasBeenSet = true; m_answer = std::move(value); }

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline void SetAnswer(const char* value) { m_answerHasBeenSet = true; m_answer.assign(value); }

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline Assignment& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline Assignment& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}

    /**
     * <p> The Worker's answers submitted for the HIT contained in a
     * QuestionFormAnswers document, if the Worker provides an answer. If the Worker
     * does not provide any answers, Answer may contain a QuestionFormAnswers document,
     * or Answer may be empty.</p>
     */
    inline Assignment& WithAnswer(const char* value) { SetAnswer(value); return *this;}


    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline const Aws::String& GetRequesterFeedback() const{ return m_requesterFeedback; }

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline bool RequesterFeedbackHasBeenSet() const { return m_requesterFeedbackHasBeenSet; }

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline void SetRequesterFeedback(const Aws::String& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = value; }

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline void SetRequesterFeedback(Aws::String&& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = std::move(value); }

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline void SetRequesterFeedback(const char* value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback.assign(value); }

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline Assignment& WithRequesterFeedback(const Aws::String& value) { SetRequesterFeedback(value); return *this;}

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline Assignment& WithRequesterFeedback(Aws::String&& value) { SetRequesterFeedback(std::move(value)); return *this;}

    /**
     * <p> The feedback string included with the call to the ApproveAssignment
     * operation or the RejectAssignment operation, if the Requester approved or
     * rejected the assignment and specified feedback.</p>
     */
    inline Assignment& WithRequesterFeedback(const char* value) { SetRequesterFeedback(value); return *this;}

  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    AssignmentStatus m_assignmentStatus;
    bool m_assignmentStatusHasBeenSet;

    Aws::Utils::DateTime m_autoApprovalTime;
    bool m_autoApprovalTimeHasBeenSet;

    Aws::Utils::DateTime m_acceptTime;
    bool m_acceptTimeHasBeenSet;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet;

    Aws::Utils::DateTime m_approvalTime;
    bool m_approvalTimeHasBeenSet;

    Aws::Utils::DateTime m_rejectionTime;
    bool m_rejectionTimeHasBeenSet;

    Aws::Utils::DateTime m_deadline;
    bool m_deadlineHasBeenSet;

    Aws::String m_answer;
    bool m_answerHasBeenSet;

    Aws::String m_requesterFeedback;
    bool m_requesterFeedbackHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
