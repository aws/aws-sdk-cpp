/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentReport.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{
  class CreateAssessmentReportResult
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentReportResult() = default;
    AWS_AUDITMANAGER_API CreateAssessmentReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API CreateAssessmentReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline const AssessmentReport& GetAssessmentReport() const { return m_assessmentReport; }
    template<typename AssessmentReportT = AssessmentReport>
    void SetAssessmentReport(AssessmentReportT&& value) { m_assessmentReportHasBeenSet = true; m_assessmentReport = std::forward<AssessmentReportT>(value); }
    template<typename AssessmentReportT = AssessmentReport>
    CreateAssessmentReportResult& WithAssessmentReport(AssessmentReportT&& value) { SetAssessmentReport(std::forward<AssessmentReportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssessmentReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentReport m_assessmentReport;
    bool m_assessmentReportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
