/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/auditmanager/model/Delegation.h>
#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentError.h>
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
  class BatchCreateDelegationByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult();
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const{ return m_delegations; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline void SetDelegations(const Aws::Vector<Delegation>& value) { m_delegations = value; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline void SetDelegations(Aws::Vector<Delegation>&& value) { m_delegations = std::move(value); }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& WithDelegations(const Aws::Vector<Delegation>& value) { SetDelegations(value); return *this;}

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& WithDelegations(Aws::Vector<Delegation>&& value) { SetDelegations(std::move(value)); return *this;}

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& AddDelegations(const Delegation& value) { m_delegations.push_back(value); return *this; }

    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& AddDelegations(Delegation&& value) { m_delegations.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::Vector<BatchCreateDelegationByAssessmentError>& GetErrors() const{ return m_errors; }

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrors(const Aws::Vector<BatchCreateDelegationByAssessmentError>& value) { m_errors = value; }

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline void SetErrors(Aws::Vector<BatchCreateDelegationByAssessmentError>&& value) { m_errors = std::move(value); }

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& WithErrors(const Aws::Vector<BatchCreateDelegationByAssessmentError>& value) { SetErrors(value); return *this;}

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& WithErrors(Aws::Vector<BatchCreateDelegationByAssessmentError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& AddErrors(const BatchCreateDelegationByAssessmentError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline BatchCreateDelegationByAssessmentResult& AddErrors(BatchCreateDelegationByAssessmentError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Delegation> m_delegations;

    Aws::Vector<BatchCreateDelegationByAssessmentError> m_errors;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
