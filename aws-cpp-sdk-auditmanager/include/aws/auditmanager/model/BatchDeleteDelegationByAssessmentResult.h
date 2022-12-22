/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentError.h>
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
  class BatchDeleteDelegationByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult();
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::Vector<BatchDeleteDelegationByAssessmentError>& GetErrors() const{ return m_errors; }

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrors(const Aws::Vector<BatchDeleteDelegationByAssessmentError>& value) { m_errors = value; }

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrors(Aws::Vector<BatchDeleteDelegationByAssessmentError>&& value) { m_errors = std::move(value); }

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentResult& WithErrors(const Aws::Vector<BatchDeleteDelegationByAssessmentError>& value) { SetErrors(value); return *this;}

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentResult& WithErrors(Aws::Vector<BatchDeleteDelegationByAssessmentError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentResult& AddErrors(const BatchDeleteDelegationByAssessmentError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchDeleteDelegationByAssessmentResult& AddErrors(BatchDeleteDelegationByAssessmentError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDeleteDelegationByAssessmentError> m_errors;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
