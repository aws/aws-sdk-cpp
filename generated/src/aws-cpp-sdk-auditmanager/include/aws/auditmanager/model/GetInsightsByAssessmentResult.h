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
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult();
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetInsightsByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline const InsightsByAssessment& GetInsights() const{ return m_insights; }

    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline void SetInsights(const InsightsByAssessment& value) { m_insights = value; }

    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline void SetInsights(InsightsByAssessment&& value) { m_insights = std::move(value); }

    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline GetInsightsByAssessmentResult& WithInsights(const InsightsByAssessment& value) { SetInsights(value); return *this;}

    /**
     * <p> The assessment analytics data that the <code>GetInsightsByAssessment</code>
     * API returned. </p>
     */
    inline GetInsightsByAssessmentResult& WithInsights(InsightsByAssessment&& value) { SetInsights(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInsightsByAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInsightsByAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInsightsByAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InsightsByAssessment m_insights;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
