/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/AggregateConformancePackComplianceSummary.h>
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
namespace ConfigService
{
namespace Model
{
  class GetAggregateConformancePackComplianceSummaryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult();
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>AggregateConformancePackComplianceSummary</code>
     * object.</p>
     */
    inline const Aws::Vector<AggregateConformancePackComplianceSummary>& GetAggregateConformancePackComplianceSummaries() const{ return m_aggregateConformancePackComplianceSummaries; }
    inline void SetAggregateConformancePackComplianceSummaries(const Aws::Vector<AggregateConformancePackComplianceSummary>& value) { m_aggregateConformancePackComplianceSummaries = value; }
    inline void SetAggregateConformancePackComplianceSummaries(Aws::Vector<AggregateConformancePackComplianceSummary>&& value) { m_aggregateConformancePackComplianceSummaries = std::move(value); }
    inline GetAggregateConformancePackComplianceSummaryResult& WithAggregateConformancePackComplianceSummaries(const Aws::Vector<AggregateConformancePackComplianceSummary>& value) { SetAggregateConformancePackComplianceSummaries(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithAggregateConformancePackComplianceSummaries(Aws::Vector<AggregateConformancePackComplianceSummary>&& value) { SetAggregateConformancePackComplianceSummaries(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& AddAggregateConformancePackComplianceSummaries(const AggregateConformancePackComplianceSummary& value) { m_aggregateConformancePackComplianceSummaries.push_back(value); return *this; }
    inline GetAggregateConformancePackComplianceSummaryResult& AddAggregateConformancePackComplianceSummaries(AggregateConformancePackComplianceSummary&& value) { m_aggregateConformancePackComplianceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetGroupByKey() const{ return m_groupByKey; }
    inline void SetGroupByKey(const Aws::String& value) { m_groupByKey = value; }
    inline void SetGroupByKey(Aws::String&& value) { m_groupByKey = std::move(value); }
    inline void SetGroupByKey(const char* value) { m_groupByKey.assign(value); }
    inline GetAggregateConformancePackComplianceSummaryResult& WithGroupByKey(const Aws::String& value) { SetGroupByKey(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithGroupByKey(Aws::String&& value) { SetGroupByKey(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithGroupByKey(const char* value) { SetGroupByKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAggregateConformancePackComplianceSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAggregateConformancePackComplianceSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAggregateConformancePackComplianceSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateConformancePackComplianceSummary> m_aggregateConformancePackComplianceSummaries;

    Aws::String m_groupByKey;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
