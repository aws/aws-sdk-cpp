/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult() = default;
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The delegations that are associated with the assessment. </p>
     */
    inline const Aws::Vector<Delegation>& GetDelegations() const { return m_delegations; }
    template<typename DelegationsT = Aws::Vector<Delegation>>
    void SetDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations = std::forward<DelegationsT>(value); }
    template<typename DelegationsT = Aws::Vector<Delegation>>
    BatchCreateDelegationByAssessmentResult& WithDelegations(DelegationsT&& value) { SetDelegations(std::forward<DelegationsT>(value)); return *this;}
    template<typename DelegationsT = Delegation>
    BatchCreateDelegationByAssessmentResult& AddDelegations(DelegationsT&& value) { m_delegationsHasBeenSet = true; m_delegations.emplace_back(std::forward<DelegationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of errors that the <code>BatchCreateDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::Vector<BatchCreateDelegationByAssessmentError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchCreateDelegationByAssessmentError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchCreateDelegationByAssessmentError>>
    BatchCreateDelegationByAssessmentResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchCreateDelegationByAssessmentError>
    BatchCreateDelegationByAssessmentResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchCreateDelegationByAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Delegation> m_delegations;
    bool m_delegationsHasBeenSet = false;

    Aws::Vector<BatchCreateDelegationByAssessmentError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
