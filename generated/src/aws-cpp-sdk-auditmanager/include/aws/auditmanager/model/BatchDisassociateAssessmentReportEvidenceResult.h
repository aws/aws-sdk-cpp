﻿/**
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
  class BatchDisassociateAssessmentReportEvidenceResult
  {
  public:
    AWS_AUDITMANAGER_API BatchDisassociateAssessmentReportEvidenceResult();
    AWS_AUDITMANAGER_API BatchDisassociateAssessmentReportEvidenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchDisassociateAssessmentReportEvidenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier for the evidence. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEvidenceIds() const{ return m_evidenceIds; }
    inline void SetEvidenceIds(const Aws::Vector<Aws::String>& value) { m_evidenceIds = value; }
    inline void SetEvidenceIds(Aws::Vector<Aws::String>&& value) { m_evidenceIds = std::move(value); }
    inline BatchDisassociateAssessmentReportEvidenceResult& WithEvidenceIds(const Aws::Vector<Aws::String>& value) { SetEvidenceIds(value); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& WithEvidenceIds(Aws::Vector<Aws::String>&& value) { SetEvidenceIds(std::move(value)); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& AddEvidenceIds(const Aws::String& value) { m_evidenceIds.push_back(value); return *this; }
    inline BatchDisassociateAssessmentReportEvidenceResult& AddEvidenceIds(Aws::String&& value) { m_evidenceIds.push_back(std::move(value)); return *this; }
    inline BatchDisassociateAssessmentReportEvidenceResult& AddEvidenceIds(const char* value) { m_evidenceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of errors that the
     * <code>BatchDisassociateAssessmentReportEvidence</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentReportEvidenceError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<AssessmentReportEvidenceError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<AssessmentReportEvidenceError>&& value) { m_errors = std::move(value); }
    inline BatchDisassociateAssessmentReportEvidenceResult& WithErrors(const Aws::Vector<AssessmentReportEvidenceError>& value) { SetErrors(value); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& WithErrors(Aws::Vector<AssessmentReportEvidenceError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& AddErrors(const AssessmentReportEvidenceError& value) { m_errors.push_back(value); return *this; }
    inline BatchDisassociateAssessmentReportEvidenceResult& AddErrors(AssessmentReportEvidenceError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDisassociateAssessmentReportEvidenceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDisassociateAssessmentReportEvidenceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_evidenceIds;

    Aws::Vector<AssessmentReportEvidenceError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
