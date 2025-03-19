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
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchImportEvidenceToAssessmentControl"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    BatchImportEvidenceToAssessmentControlRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const { return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    template<typename ControlSetIdT = Aws::String>
    void SetControlSetId(ControlSetIdT&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::forward<ControlSetIdT>(value); }
    template<typename ControlSetIdT = Aws::String>
    BatchImportEvidenceToAssessmentControlRequest& WithControlSetId(ControlSetIdT&& value) { SetControlSetId(std::forward<ControlSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the control. </p>
     */
    inline const Aws::String& GetControlId() const { return m_controlId; }
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }
    template<typename ControlIdT = Aws::String>
    void SetControlId(ControlIdT&& value) { m_controlIdHasBeenSet = true; m_controlId = std::forward<ControlIdT>(value); }
    template<typename ControlIdT = Aws::String>
    BatchImportEvidenceToAssessmentControlRequest& WithControlId(ControlIdT&& value) { SetControlId(std::forward<ControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of manual evidence objects. </p>
     */
    inline const Aws::Vector<ManualEvidence>& GetManualEvidence() const { return m_manualEvidence; }
    inline bool ManualEvidenceHasBeenSet() const { return m_manualEvidenceHasBeenSet; }
    template<typename ManualEvidenceT = Aws::Vector<ManualEvidence>>
    void SetManualEvidence(ManualEvidenceT&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = std::forward<ManualEvidenceT>(value); }
    template<typename ManualEvidenceT = Aws::Vector<ManualEvidence>>
    BatchImportEvidenceToAssessmentControlRequest& WithManualEvidence(ManualEvidenceT&& value) { SetManualEvidence(std::forward<ManualEvidenceT>(value)); return *this;}
    template<typename ManualEvidenceT = ManualEvidence>
    BatchImportEvidenceToAssessmentControlRequest& AddManualEvidence(ManualEvidenceT&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence.emplace_back(std::forward<ManualEvidenceT>(value)); return *this; }
    ///@}
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
