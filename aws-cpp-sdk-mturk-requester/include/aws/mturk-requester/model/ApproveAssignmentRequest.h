/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class ApproveAssignmentRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API ApproveAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ApproveAssignment"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline const Aws::String& GetAssignmentId() const{ return m_assignmentId; }

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline bool AssignmentIdHasBeenSet() const { return m_assignmentIdHasBeenSet; }

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline void SetAssignmentId(const Aws::String& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = value; }

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline void SetAssignmentId(Aws::String&& value) { m_assignmentIdHasBeenSet = true; m_assignmentId = std::move(value); }

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline void SetAssignmentId(const char* value) { m_assignmentIdHasBeenSet = true; m_assignmentId.assign(value); }

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline ApproveAssignmentRequest& WithAssignmentId(const Aws::String& value) { SetAssignmentId(value); return *this;}

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline ApproveAssignmentRequest& WithAssignmentId(Aws::String&& value) { SetAssignmentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the assignment. The assignment must correspond to a HIT created by
     * the Requester. </p>
     */
    inline ApproveAssignmentRequest& WithAssignmentId(const char* value) { SetAssignmentId(value); return *this;}


    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline const Aws::String& GetRequesterFeedback() const{ return m_requesterFeedback; }

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline bool RequesterFeedbackHasBeenSet() const { return m_requesterFeedbackHasBeenSet; }

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline void SetRequesterFeedback(const Aws::String& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = value; }

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline void SetRequesterFeedback(Aws::String&& value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback = std::move(value); }

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline void SetRequesterFeedback(const char* value) { m_requesterFeedbackHasBeenSet = true; m_requesterFeedback.assign(value); }

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline ApproveAssignmentRequest& WithRequesterFeedback(const Aws::String& value) { SetRequesterFeedback(value); return *this;}

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline ApproveAssignmentRequest& WithRequesterFeedback(Aws::String&& value) { SetRequesterFeedback(std::move(value)); return *this;}

    /**
     * <p> A message for the Worker, which the Worker can see in the Status section of
     * the web site. </p>
     */
    inline ApproveAssignmentRequest& WithRequesterFeedback(const char* value) { SetRequesterFeedback(value); return *this;}


    /**
     * <p> A flag indicating that an assignment should be approved even if it was
     * previously rejected. Defaults to <code>False</code>. </p>
     */
    inline bool GetOverrideRejection() const{ return m_overrideRejection; }

    /**
     * <p> A flag indicating that an assignment should be approved even if it was
     * previously rejected. Defaults to <code>False</code>. </p>
     */
    inline bool OverrideRejectionHasBeenSet() const { return m_overrideRejectionHasBeenSet; }

    /**
     * <p> A flag indicating that an assignment should be approved even if it was
     * previously rejected. Defaults to <code>False</code>. </p>
     */
    inline void SetOverrideRejection(bool value) { m_overrideRejectionHasBeenSet = true; m_overrideRejection = value; }

    /**
     * <p> A flag indicating that an assignment should be approved even if it was
     * previously rejected. Defaults to <code>False</code>. </p>
     */
    inline ApproveAssignmentRequest& WithOverrideRejection(bool value) { SetOverrideRejection(value); return *this;}

  private:

    Aws::String m_assignmentId;
    bool m_assignmentIdHasBeenSet = false;

    Aws::String m_requesterFeedback;
    bool m_requesterFeedbackHasBeenSet = false;

    bool m_overrideRejection;
    bool m_overrideRejectionHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
