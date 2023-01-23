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
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult();
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchAssociateAssessmentReportEvidenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceIds() const{ return m_evidenceIds; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline void SetEvidenceIds(const Aws::Vector<Aws::String>& value) { m_evidenceIds = value; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline void SetEvidenceIds(Aws::Vector<Aws::String>&& value) { m_evidenceIds = std::move(value); }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& WithEvidenceIds(const Aws::Vector<Aws::String>& value) { SetEvidenceIds(value); return *this;}

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& WithEvidenceIds(Aws::Vector<Aws::String>&& value) { SetEvidenceIds(std::move(value)); return *this;}

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& AddEvidenceIds(const Aws::String& value) { m_evidenceIds.push_back(value); return *this; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& AddEvidenceIds(Aws::String&& value) { m_evidenceIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of evidence identifiers. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& AddEvidenceIds(const char* value) { m_evidenceIds.push_back(value); return *this; }


    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentReportEvidenceError>& GetErrors() const{ return m_errors; }

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline void SetErrors(const Aws::Vector<AssessmentReportEvidenceError>& value) { m_errors = value; }

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline void SetErrors(Aws::Vector<AssessmentReportEvidenceError>&& value) { m_errors = std::move(value); }

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& WithErrors(const Aws::Vector<AssessmentReportEvidenceError>& value) { SetErrors(value); return *this;}

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& WithErrors(Aws::Vector<AssessmentReportEvidenceError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& AddErrors(const AssessmentReportEvidenceError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> A list of errors that the
     * <code>BatchAssociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline BatchAssociateAssessmentReportEvidenceResult& AddErrors(AssessmentReportEvidenceError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_evidenceIds;

    Aws::Vector<AssessmentReportEvidenceError> m_errors;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
