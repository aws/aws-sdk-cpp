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
  class GetEvidenceFolderRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API GetEvidenceFolderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEvidenceFolder"; }

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
    GetEvidenceFolderRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
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
    GetEvidenceFolderRequest& WithControlSetId(ControlSetIdT&& value) { SetControlSetId(std::forward<ControlSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the folder that the evidence is stored in. </p>
     */
    inline const Aws::String& GetEvidenceFolderId() const { return m_evidenceFolderId; }
    inline bool EvidenceFolderIdHasBeenSet() const { return m_evidenceFolderIdHasBeenSet; }
    template<typename EvidenceFolderIdT = Aws::String>
    void SetEvidenceFolderId(EvidenceFolderIdT&& value) { m_evidenceFolderIdHasBeenSet = true; m_evidenceFolderId = std::forward<EvidenceFolderIdT>(value); }
    template<typename EvidenceFolderIdT = Aws::String>
    GetEvidenceFolderRequest& WithEvidenceFolderId(EvidenceFolderIdT&& value) { SetEvidenceFolderId(std::forward<EvidenceFolderIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_evidenceFolderId;
    bool m_evidenceFolderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
