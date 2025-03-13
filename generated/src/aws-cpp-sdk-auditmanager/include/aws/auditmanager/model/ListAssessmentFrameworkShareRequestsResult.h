/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentFrameworkShareRequest.h>
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
  class ListAssessmentFrameworkShareRequestsResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult() = default;
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of share requests that the
     * <code>ListAssessmentFrameworkShareRequests</code> API returned. </p>
     */
    inline const Aws::Vector<AssessmentFrameworkShareRequest>& GetAssessmentFrameworkShareRequests() const { return m_assessmentFrameworkShareRequests; }
    template<typename AssessmentFrameworkShareRequestsT = Aws::Vector<AssessmentFrameworkShareRequest>>
    void SetAssessmentFrameworkShareRequests(AssessmentFrameworkShareRequestsT&& value) { m_assessmentFrameworkShareRequestsHasBeenSet = true; m_assessmentFrameworkShareRequests = std::forward<AssessmentFrameworkShareRequestsT>(value); }
    template<typename AssessmentFrameworkShareRequestsT = Aws::Vector<AssessmentFrameworkShareRequest>>
    ListAssessmentFrameworkShareRequestsResult& WithAssessmentFrameworkShareRequests(AssessmentFrameworkShareRequestsT&& value) { SetAssessmentFrameworkShareRequests(std::forward<AssessmentFrameworkShareRequestsT>(value)); return *this;}
    template<typename AssessmentFrameworkShareRequestsT = AssessmentFrameworkShareRequest>
    ListAssessmentFrameworkShareRequestsResult& AddAssessmentFrameworkShareRequests(AssessmentFrameworkShareRequestsT&& value) { m_assessmentFrameworkShareRequestsHasBeenSet = true; m_assessmentFrameworkShareRequests.emplace_back(std::forward<AssessmentFrameworkShareRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentFrameworkShareRequestsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentFrameworkShareRequestsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentFrameworkShareRequest> m_assessmentFrameworkShareRequests;
    bool m_assessmentFrameworkShareRequestsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
