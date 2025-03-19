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
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult() = default;
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateConformancePackComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>AggregateConformancePackComplianceSummary</code>
     * object.</p>
     */
    inline const Aws::Vector<AggregateConformancePackComplianceSummary>& GetAggregateConformancePackComplianceSummaries() const { return m_aggregateConformancePackComplianceSummaries; }
    template<typename AggregateConformancePackComplianceSummariesT = Aws::Vector<AggregateConformancePackComplianceSummary>>
    void SetAggregateConformancePackComplianceSummaries(AggregateConformancePackComplianceSummariesT&& value) { m_aggregateConformancePackComplianceSummariesHasBeenSet = true; m_aggregateConformancePackComplianceSummaries = std::forward<AggregateConformancePackComplianceSummariesT>(value); }
    template<typename AggregateConformancePackComplianceSummariesT = Aws::Vector<AggregateConformancePackComplianceSummary>>
    GetAggregateConformancePackComplianceSummaryResult& WithAggregateConformancePackComplianceSummaries(AggregateConformancePackComplianceSummariesT&& value) { SetAggregateConformancePackComplianceSummaries(std::forward<AggregateConformancePackComplianceSummariesT>(value)); return *this;}
    template<typename AggregateConformancePackComplianceSummariesT = AggregateConformancePackComplianceSummary>
    GetAggregateConformancePackComplianceSummaryResult& AddAggregateConformancePackComplianceSummaries(AggregateConformancePackComplianceSummariesT&& value) { m_aggregateConformancePackComplianceSummariesHasBeenSet = true; m_aggregateConformancePackComplianceSummaries.emplace_back(std::forward<AggregateConformancePackComplianceSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Groups the result based on Amazon Web Services account ID or Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetGroupByKey() const { return m_groupByKey; }
    template<typename GroupByKeyT = Aws::String>
    void SetGroupByKey(GroupByKeyT&& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = std::forward<GroupByKeyT>(value); }
    template<typename GroupByKeyT = Aws::String>
    GetAggregateConformancePackComplianceSummaryResult& WithGroupByKey(GroupByKeyT&& value) { SetGroupByKey(std::forward<GroupByKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAggregateConformancePackComplianceSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAggregateConformancePackComplianceSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregateConformancePackComplianceSummary> m_aggregateConformancePackComplianceSummaries;
    bool m_aggregateConformancePackComplianceSummariesHasBeenSet = false;

    Aws::String m_groupByKey;
    bool m_groupByKeyHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
