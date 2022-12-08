/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlDomainInsights.h>
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
  class ListControlDomainInsightsByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API ListControlDomainInsightsByAssessmentResult();
    AWS_AUDITMANAGER_API ListControlDomainInsightsByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlDomainInsightsByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline const Aws::Vector<ControlDomainInsights>& GetControlDomainInsights() const{ return m_controlDomainInsights; }

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline void SetControlDomainInsights(const Aws::Vector<ControlDomainInsights>& value) { m_controlDomainInsights = value; }

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline void SetControlDomainInsights(Aws::Vector<ControlDomainInsights>&& value) { m_controlDomainInsights = std::move(value); }

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& WithControlDomainInsights(const Aws::Vector<ControlDomainInsights>& value) { SetControlDomainInsights(value); return *this;}

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& WithControlDomainInsights(Aws::Vector<ControlDomainInsights>&& value) { SetControlDomainInsights(std::move(value)); return *this;}

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& AddControlDomainInsights(const ControlDomainInsights& value) { m_controlDomainInsights.push_back(value); return *this; }

    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsightsByAssessment</code> API returned. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& AddControlDomainInsights(ControlDomainInsights&& value) { m_controlDomainInsights.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlDomainInsightsByAssessmentResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ControlDomainInsights> m_controlDomainInsights;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
