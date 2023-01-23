/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class GetEvidenceRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvidence"; }

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
    inline GetEvidenceRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline GetEvidenceRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the assessment. </p>
     */
    inline GetEvidenceRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}


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
    inline GetEvidenceRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline GetEvidenceRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline GetEvidenceRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}


    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const{ return m_evidenceFolderId; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const Aws::String& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = value; }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(Aws::String&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::move(value); }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline void SetEvidenceFolderId(const char* value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId.assign(value); }

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceRequest& WithEvidenceFolderId(const Aws::String& value) { SetEvidenceFolderId(value); return *this;}

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceRequest& WithEvidenceFolderId(Aws::String&& value) { SetEvidenceFolderId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline GetEvidenceRequest& WithEvidenceFolderId(const char* value) { SetEvidenceFolderId(value); return *this;}


    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline const Aws::String& GetEvidenceId() const{ return m_evidenceId; }

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline bool EvidenceIdHasBeenSet() const { return m_evidenceIdHasBeenSet; }

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline void SetEvidenceId(const Aws::String& value) { m_evidenceIdHasBeenSet = true; m_evidenceId = value; }

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline void SetEvidenceId(Aws::String&& value) { m_evidenceIdHasBeenSet = true; m_evidenceId = std::move(value); }

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline void SetEvidenceId(const char* value) { m_evidenceIdHasBeenSet = true; m_evidenceId.assign(value); }

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline GetEvidenceRequest& WithEvidenceId(const Aws::String& value) { SetEvidenceId(value); return *this;}

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline GetEvidenceRequest& WithEvidenceId(Aws::String&& value) { SetEvidenceId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the evidence. </p>
     */
    inline GetEvidenceRequest& WithEvidenceId(const char* value) { SetEvidenceId(value); return *this;}

  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet = false;

    Aws::String m_evidenceId;
    bool m_evidenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
