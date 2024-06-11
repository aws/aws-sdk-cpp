/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class BatchAssociateAssessmentReportEvidenceRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateAssessmentReportEvidence"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }
    inline BatchAssociateAssessmentReportEvidenceRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const{ return m_evidenceFolderId; }
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }
    inline void SetEvidenceFolderId(const Aws::String& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = value; }
    inline void SetEvidenceFolderId(Aws::String&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::move(value); }
    inline void SetEvidenceFolderId(const char* value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId.assign(value); }
    inline BatchAssociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(const Aws::String& value) { SetEvidenceFolderId(value); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(Aws::String&& value) { SetEvidenceFolderId(std::move(value)); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(const char* value) { SetEvidenceFolderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceIds() const{ return m_evidenceIds; }
    inline bool EvidenceIdsHasBeenSet() const { return m_evidenceIdsHasBeenSet; }
    inline void SetEvidenceIds(const Aws::Vector<Aws::String>& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds = value; }
    inline void SetEvidenceIds(Aws::Vector<Aws::String>&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds = std::move(value); }
    inline BatchAssociateAssessmentReportEvidenceRequest& WithEvidenceIds(const Aws::Vector<Aws::String>& value) { SetEvidenceIds(value); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& WithEvidenceIds(Aws::Vector<Aws::String>&& value) { SetEvidenceIds(std::move(value)); return *this;}
    inline BatchAssociateAssessmentReportEvidenceRequest& AddEvidenceIds(const Aws::String& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(value); return *this; }
    inline BatchAssociateAssessmentReportEvidenceRequest& AddEvidenceIds(Aws::String&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(std::move(value)); return *this; }
    inline BatchAssociateAssessmentReportEvidenceRequest& AddEvidenceIds(const char* value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_evidenceIds;
    bool m_evidenceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
