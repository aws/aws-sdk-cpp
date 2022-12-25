/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/ManualEvidence.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class BatchImportEvidenceToAssessmentControlRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchImportEvidenceToAssessmentControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }

    /**
     * <p> The identifier for the control set. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control set. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p> The identifier for the control. </p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p> The identifier for the control. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p> The identifier for the control. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the control. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithControlId(const char* value) { SetControlId(value); return *this;}


    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline const Aws::Vector<ManualEvidence>& GetManualEvidence() const{ return m_manualEvidence; }

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline bool ManualEvidenceHasBeenSet() const { return m_manualEvidenceHasBeenSet; }

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline void SetManualEvidence(const Aws::Vector<ManualEvidence>& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = value; }

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline void SetManualEvidence(Aws::Vector<ManualEvidence>&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = std::move(value); }

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithManualEvidence(const Aws::Vector<ManualEvidence>& value) { SetManualEvidence(value); return *this;}

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& WithManualEvidence(Aws::Vector<ManualEvidence>&& value) { SetManualEvidence(std::move(value)); return *this;}

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& AddManualEvidence(const ManualEvidence& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence.push_back(value); return *this; }

    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline BatchImportEvidenceToAssessmentControlRequest& AddManualEvidence(ManualEvidence&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::Vector<ManualEvidence> m_manualEvidence;
    bool m_manualEvidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
