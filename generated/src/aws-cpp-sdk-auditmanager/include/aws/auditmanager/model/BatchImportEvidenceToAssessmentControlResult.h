/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/BatchImportEvidenceToAssessmentControlError.h>
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
  class BatchImportEvidenceToAssessmentControlResult
  {
  public:
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlResult();
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline const Aws::Vector<BatchImportEvidenceToAssessmentControlError>& GetErrors() const{ return m_errors; }

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline void SetErrors(const Aws::Vector<BatchImportEvidenceToAssessmentControlError>& value) { m_errors = value; }

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline void SetErrors(Aws::Vector<BatchImportEvidenceToAssessmentControlError>&& value) { m_errors = std::move(value); }

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlResult& WithErrors(const Aws::Vector<BatchImportEvidenceToAssessmentControlError>& value) { SetErrors(value); return *this;}

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlResult& WithErrors(Aws::Vector<BatchImportEvidenceToAssessmentControlError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlResult& AddErrors(const BatchImportEvidenceToAssessmentControlError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> A list of errors that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlResult& AddErrors(BatchImportEvidenceToAssessmentControlError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchImportEvidenceToAssessmentControlError> m_errors;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
