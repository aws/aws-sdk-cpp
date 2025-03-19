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
  class DeleteAssessmentReportRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API DeleteAssessmentReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAssessmentReport"; }

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
    DeleteAssessmentReportRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the assessment report. </p>
     */
    inline const Aws::String& GetAssessmentReportId() const { return m_assessmentReportId; }
    inline bool AssessmentReportIdHasBeenSet() const { return m_assessmentReportIdHasBeenSet; }
    template<typename AssessmentReportIdT = Aws::String>
    void SetAssessmentReportId(AssessmentReportIdT&& value) { m_assessmentReportIdHasBeenSet = true; m_assessmentReportId = std::forward<AssessmentReportIdT>(value); }
    template<typename AssessmentReportIdT = Aws::String>
    DeleteAssessmentReportRequest& WithAssessmentReportId(AssessmentReportIdT&& value) { SetAssessmentReportId(std::forward<AssessmentReportIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_assessmentReportId;
    bool m_assessmentReportIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
