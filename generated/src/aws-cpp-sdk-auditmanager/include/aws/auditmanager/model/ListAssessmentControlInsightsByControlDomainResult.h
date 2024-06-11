﻿/**
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
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult();
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentControlInsightsByControlDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assessment control analytics data that the
     * <code>ListAssessmentControlInsightsByControlDomain</code> API returned. </p>
     */
    inline const Aws::Vector<ControlInsightsMetadataByAssessmentItem>& GetControlInsightsByAssessment() const{ return m_controlInsightsByAssessment; }
    inline void SetControlInsightsByAssessment(const Aws::Vector<ControlInsightsMetadataByAssessmentItem>& value) { m_controlInsightsByAssessment = value; }
    inline void SetControlInsightsByAssessment(Aws::Vector<ControlInsightsMetadataByAssessmentItem>&& value) { m_controlInsightsByAssessment = std::move(value); }
    inline ListAssessmentControlInsightsByControlDomainResult& WithControlInsightsByAssessment(const Aws::Vector<ControlInsightsMetadataByAssessmentItem>& value) { SetControlInsightsByAssessment(value); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& WithControlInsightsByAssessment(Aws::Vector<ControlInsightsMetadataByAssessmentItem>&& value) { SetControlInsightsByAssessment(std::move(value)); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& AddControlInsightsByAssessment(const ControlInsightsMetadataByAssessmentItem& value) { m_controlInsightsByAssessment.push_back(value); return *this; }
    inline ListAssessmentControlInsightsByControlDomainResult& AddControlInsightsByAssessment(ControlInsightsMetadataByAssessmentItem&& value) { m_controlInsightsByAssessment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssessmentControlInsightsByControlDomainResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssessmentControlInsightsByControlDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssessmentControlInsightsByControlDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ControlInsightsMetadataByAssessmentItem> m_controlInsightsByAssessment;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
