/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlInsightsMetadataByAssessmentItem.h>
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
  class ListAssessmentControlInsightsByControlDomainResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult() = default;
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assessment control analytics data that the
     * <code>ListAssessmentControlInsightsByControlDomain</code> API returned. </p>
     */
    inline const Aws::Vector<ControlInsightsMetadataByAssessmentItem>& GetControlInsightsByAssessment() const { return m_controlInsightsByAssessment; }
    template<typename ControlInsightsByAssessmentT = Aws::Vector<ControlInsightsMetadataByAssessmentItem>>
    void SetControlInsightsByAssessment(ControlInsightsByAssessmentT&& value) { m_controlInsightsByAssessmentHasBeenSet = true; m_controlInsightsByAssessment = std::forward<ControlInsightsByAssessmentT>(value); }
    template<typename ControlInsightsByAssessmentT = Aws::Vector<ControlInsightsMetadataByAssessmentItem>>
    ListAssessmentControlInsightsByControlDomainResult& WithControlInsightsByAssessment(ControlInsightsByAssessmentT&& value) { SetControlInsightsByAssessment(std::forward<ControlInsightsByAssessmentT>(value)); return *this;}
    template<typename ControlInsightsByAssessmentT = ControlInsightsMetadataByAssessmentItem>
    ListAssessmentControlInsightsByControlDomainResult& AddControlInsightsByAssessment(ControlInsightsByAssessmentT&& value) { m_controlInsightsByAssessmentHasBeenSet = true; m_controlInsightsByAssessment.emplace_back(std::forward<ControlInsightsByAssessmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentControlInsightsByControlDomainResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentControlInsightsByControlDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlInsightsMetadataByAssessmentItem> m_controlInsightsByAssessment;
    bool m_controlInsightsByAssessmentHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
