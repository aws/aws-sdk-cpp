/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/AggregateComplianceCount.h>
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
  class GetAggregateConfigRuleComplianceSummaryResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryResult() = default;
    AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateConfigRuleComplianceSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Groups the result based on ACCOUNT_ID or AWS_REGION.</p>
     */
    inline const Aws::String& GetGroupByKey() const { return m_groupByKey; }
    template<typename GroupByKeyT = Aws::String>
    void SetGroupByKey(GroupByKeyT&& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = std::forward<GroupByKeyT>(value); }
    template<typename GroupByKeyT = Aws::String>
    GetAggregateConfigRuleComplianceSummaryResult& WithGroupByKey(GroupByKeyT&& value) { SetGroupByKey(std::forward<GroupByKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of AggregateComplianceCounts object.</p>
     */
    inline const Aws::Vector<AggregateComplianceCount>& GetAggregateComplianceCounts() const { return m_aggregateComplianceCounts; }
    template<typename AggregateComplianceCountsT = Aws::Vector<AggregateComplianceCount>>
    void SetAggregateComplianceCounts(AggregateComplianceCountsT&& value) { m_aggregateComplianceCountsHasBeenSet = true; m_aggregateComplianceCounts = std::forward<AggregateComplianceCountsT>(value); }
    template<typename AggregateComplianceCountsT = Aws::Vector<AggregateComplianceCount>>
    GetAggregateConfigRuleComplianceSummaryResult& WithAggregateComplianceCounts(AggregateComplianceCountsT&& value) { SetAggregateComplianceCounts(std::forward<AggregateComplianceCountsT>(value)); return *this;}
    template<typename AggregateComplianceCountsT = AggregateComplianceCount>
    GetAggregateConfigRuleComplianceSummaryResult& AddAggregateComplianceCounts(AggregateComplianceCountsT&& value) { m_aggregateComplianceCountsHasBeenSet = true; m_aggregateComplianceCounts.emplace_back(std::forward<AggregateComplianceCountsT>(value)); return *this; }
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
    GetAggregateConfigRuleComplianceSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAggregateConfigRuleComplianceSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupByKey;
    bool m_groupByKeyHasBeenSet = false;

    Aws::Vector<AggregateComplianceCount> m_aggregateComplianceCounts;
    bool m_aggregateComplianceCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
