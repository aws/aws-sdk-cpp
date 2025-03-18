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
    AWS_AUDITMANAGER_API UpdateAssessmentControlRequest() = default;

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
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    UpdateAssessmentControlRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const { return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    template<typename ControlSetIdT = Aws::String>
    void SetControlSetId(ControlSetIdT&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::forward<ControlSetIdT>(value); }
    template<typename ControlSetIdT = Aws::String>
    UpdateAssessmentControlRequest& WithControlSetId(ControlSetIdT&& value) { SetControlSetId(std::forward<ControlSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const { return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    template<typename ControlIdT = Aws::String>
    void SetControlId(ControlIdT&& value) { m_controlIdHasBeenSet = true; m_controlId = std::forward<ControlIdT>(value); }
    template<typename ControlIdT = Aws::String>
    UpdateAssessmentControlRequest& WithControlId(ControlIdT&& value) { SetControlId(std::forward<ControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the control. </p>
     */
    inline ControlStatus GetControlStatus() const { return m_controlStatus; }
    inline bool ControlStatusHasBeenSet() const { return m_controlStatusHasBeenSet; }
    inline void SetControlStatus(ControlStatus value) { m_controlStatusHasBeenSet = true; m_controlStatus = value; }
    inline UpdateAssessmentControlRequest& WithControlStatus(ControlStatus value) { SetControlStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The comment body text for the control. </p>
     */
    inline const Aws::String& GetCommentBody() const { return m_commentBody; }
    inline bool CommentBodyHasBeenSet() const { return m_commentBodyHasBeenSet; }
    template<typename CommentBodyT = Aws::String>
    void SetCommentBody(CommentBodyT&& value) { m_commentBodyHasBeenSet = true; m_commentBody = std::forward<CommentBodyT>(value); }
    template<typename CommentBodyT = Aws::String>
    UpdateAssessmentControlRequest& WithCommentBody(CommentBodyT&& value) { SetCommentBody(std::forward<CommentBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    ControlStatus m_controlStatus{ControlStatus::NOT_SET};
    bool m_controlStatusHasBeenSet = false;

    Aws::String m_commentBody;
    bool m_commentBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
