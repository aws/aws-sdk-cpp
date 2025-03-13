/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/InsightsByAssessment.h>
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
  class GetInsightsByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult() = default;
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline const InsightsByAssessment& GetInsights() const { return m_insights; }
    template<typename InsightsT = InsightsByAssessment>
    void SetInsights(InsightsT&& value) { m_insightsHasBeenSet = true; m_insights = std::forward<InsightsT>(value); }
    template<typename InsightsT = InsightsByAssessment>
    GetInsightsByAssessmentResult& WithInsights(InsightsT&& value) { SetInsights(std::forward<InsightsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInsightsByAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InsightsByAssessment m_insights;
    bool m_insightsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
