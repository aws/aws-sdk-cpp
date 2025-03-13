/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportEvidenceError.h>
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
  class BatchAssociateAssessmentReportEvidenceResult
  {
  public:
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult() = default;
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceIds() const { return m_evidenceIds; }
    template<typename EvidenceIdsT = Aws::Vector<Aws::String>>
    void SetEvidenceIds(EvidenceIdsT&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds = std::forward<EvidenceIdsT>(value); }
    template<typename EvidenceIdsT = Aws::Vector<Aws::String>>
    BatchAssociateAssessmentReportEvidenceResult& WithEvidenceIds(EvidenceIdsT&& value) { SetEvidenceIds(std::forward<EvidenceIdsT>(value)); return *this;}
    template<typename EvidenceIdsT = Aws::String>
    BatchAssociateAssessmentReportEvidenceResult& AddEvidenceIds(EvidenceIdsT&& value) { m_evidenceIdsHasBeenSet = true; m_evidenceIds.emplace_back(std::forward<EvidenceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentReportEvidenceError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<AssessmentReportEvidenceError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<AssessmentReportEvidenceError>>
    BatchAssociateAssessmentReportEvidenceResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = AssessmentReportEvidenceError>
    BatchAssociateAssessmentReportEvidenceResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAssociateAssessmentReportEvidenceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_evidenceIds;
    bool m_evidenceIdsHasBeenSet = false;

    Aws::Vector<AssessmentReportEvidenceError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
