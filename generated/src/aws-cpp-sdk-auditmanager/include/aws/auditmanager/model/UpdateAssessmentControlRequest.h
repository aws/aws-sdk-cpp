/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlStatus.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentControlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }
    inline UpdateAssessmentControlRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}
    inline UpdateAssessmentControlRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}
    inline UpdateAssessmentControlRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }
    inline UpdateAssessmentControlRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}
    inline UpdateAssessmentControlRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}
    inline UpdateAssessmentControlRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }
    inline UpdateAssessmentControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}
    inline UpdateAssessmentControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}
    inline UpdateAssessmentControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the control. </p>
     */
    inline const ControlStatus& GetControlStatus() const{ return m_controlStatus; }
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }
    inline void SetControlStatus(const ControlStatus& value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }
    inline void SetControlStatus(ControlStatus&& value) { m_controlStatusHasBeenSet = true; m_controlStatus = std::move(value); }
    inline UpdateAssessmentControlRequest& WithControlStatus(const ControlStatus& value) { SetControlStatus(value); return *this;}
    inline UpdateAssessmentControlRequest& WithControlStatus(ControlStatus&& value) { SetControlStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The comment body text for the control. </p>
     */
    inline const Aws::String& GetCommentBody() const{ return m_commentBody; }
    inline bool CommentBodyHasBeenSet() const { return m_commentBodyHasBeenSet; }
    inline void SetCommentBody(const Aws::String& value) { m_commentBodyHasBeenSet = true; m_commentBody = value; }
    inline void SetCommentBody(Aws::String&& value) { m_commentBodyHasBeenSet = true; m_commentBody = std::move(value); }
    inline void SetCommentBody(const char* value) { m_commentBodyHasBeenSet = true; m_commentBody.assign(value); }
    inline UpdateAssessmentControlRequest& WithCommentBody(const Aws::String& value) { SetCommentBody(value); return *this;}
    inline UpdateAssessmentControlRequest& WithCommentBody(Aws::String&& value) { SetCommentBody(std::move(value)); return *this;}
    inline UpdateAssessmentControlRequest& WithCommentBody(const char* value) { SetCommentBody(value); return *this;}
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    ControlStatus m_controlStatus;
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_commentBody;
    bool m_commentBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
