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
  class BatchDisassociateAssessmentReportEvidenceRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API BatchDisassociateAssessmentReportEvidenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateAssessmentReportEvidence"; }

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
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const{ return m_evidenceFolderId; }

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const Aws::String& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = value; }

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(Aws::String&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::move(value); }

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const char* value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId.assign(value); }

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(const Aws::String& value) { SetEvidenceFolderId(value); return *this;}

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(Aws::String&& value) { SetEvidenceFolderId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the folder that the evidence is stored in. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithEvidenceFolderId(const char* value) { SetEvidenceFolderId(value); return *this;}


    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceIds() const{ return m_evidenceIds; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline bool EvidenceIdsHasBeenSet() const { return m_evidenceIdsHasBeenSet; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline void SetEvidenceIds(const Aws::Vector<Aws::String>& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds = value; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline void SetEvidenceIds(Aws::Vector<Aws::String>&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds = std::move(value); }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithEvidenceIds(const Aws::Vector<Aws::String>& value) { SetEvidenceIds(value); return *this;}

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& WithEvidenceIds(Aws::Vector<Aws::String>&& value) { SetEvidenceIds(std::move(value)); return *this;}

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& AddEvidenceIds(const Aws::String& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(value); return *this; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& AddEvidenceIds(Aws::String&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchDisassociateAssessmentReportEvidenceRequest& AddEvidenceIds(const char* value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.push_back(value); return *this; }

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
