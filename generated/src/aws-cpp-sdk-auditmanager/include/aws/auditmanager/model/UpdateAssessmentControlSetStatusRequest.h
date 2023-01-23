/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlSetStatus.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentControlSetStatusRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentControlSetStatus"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline const ControlSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline void SetStatus(const ControlSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline void SetStatus(ControlSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithStatus(const ControlSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the control set that's being updated. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithStatus(ControlSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> The comment that's related to the status update. </p>
     */
    inline UpdateAssessmentControlSetStatusRequest& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    ControlSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
