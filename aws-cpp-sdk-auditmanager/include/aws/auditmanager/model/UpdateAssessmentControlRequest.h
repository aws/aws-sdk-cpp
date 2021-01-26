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
  class AWS_AUDITMANAGER_API UpdateAssessmentControlRequest : public AuditManagerRequest
  {
  public:
    UpdateAssessmentControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentControl"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline UpdateAssessmentControlRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline UpdateAssessmentControlRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified assessment. </p>
     */
    inline UpdateAssessmentControlRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified control set. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The identifier for the specified control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}


    /**
     * <p> The status of the specified control. </p>
     */
    inline const ControlStatus& GetControlStatus() const{ return m_controlStatus; }

    /**
     * <p> The status of the specified control. </p>
     */
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }

    /**
     * <p> The status of the specified control. </p>
     */
    inline void SetControlStatus(const ControlStatus& value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }

    /**
     * <p> The status of the specified control. </p>
     */
    inline void SetControlStatus(ControlStatus&& value) { m_controlStatusHasBeenSet = true; m_controlStatus = std::move(value); }

    /**
     * <p> The status of the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlStatus(const ControlStatus& value) { SetControlStatus(value); return *this;}

    /**
     * <p> The status of the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithControlStatus(ControlStatus&& value) { SetControlStatus(std::move(value)); return *this;}


    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline const Aws::String& GetCommentBody() const{ return m_commentBody; }

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline bool CommentBodyHasBeenSet() const { return m_commentBodyHasBeenSet; }

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline void SetCommentBody(const Aws::String& value) { m_commentBodyHasBeenSet = true; m_commentBody = value; }

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline void SetCommentBody(Aws::String&& value) { m_commentBodyHasBeenSet = true; m_commentBody = std::move(value); }

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline void SetCommentBody(const char* value) { m_commentBodyHasBeenSet = true; m_commentBody.assign(value); }

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithCommentBody(const Aws::String& value) { SetCommentBody(value); return *this;}

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithCommentBody(Aws::String&& value) { SetCommentBody(std::move(value)); return *this;}

    /**
     * <p> The comment body text for the specified control. </p>
     */
    inline UpdateAssessmentControlRequest& WithCommentBody(const char* value) { SetCommentBody(value); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet;

    ControlStatus m_controlStatus;
    bool m_controlStatusHasBeenSet;

    Aws::String m_commentBody;
    bool m_commentBodyHasBeenSet;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
