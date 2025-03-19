/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/GroupedResourceCount.h>
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
  class GetAggregateDiscoveredResourceCountsResult
  {
  public:
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult() = default;
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API GetAggregateDiscoveredResourceCountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of resources that are present in an aggregator with the
     * filters that you provide.</p>
     */
    inline long long GetTotalDiscoveredResources() const { return m_totalDiscoveredResources; }
    inline void SetTotalDiscoveredResources(long long value) { m_totalDiscoveredResourcesHasBeenSet = true; m_totalDiscoveredResources = value; }
    inline GetAggregateDiscoveredResourceCountsResult& WithTotalDiscoveredResources(long long value) { SetTotalDiscoveredResources(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key passed into the request object. If <code>GroupByKey</code> is not
     * provided, the result will be empty.</p>
     */
    inline const Aws::String& GetGroupByKey() const { return m_groupByKey; }
    template<typename GroupByKeyT = Aws::String>
    void SetGroupByKey(GroupByKeyT&& value) { m_groupByKeyHasBeenSet = true; m_groupByKey = std::forward<GroupByKeyT>(value); }
    template<typename GroupByKeyT = Aws::String>
    GetAggregateDiscoveredResourceCountsResult& WithGroupByKey(GroupByKeyT&& value) { SetGroupByKey(std::forward<GroupByKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of GroupedResourceCount objects.</p>
     */
    inline const Aws::Vector<GroupedResourceCount>& GetGroupedResourceCounts() const { return m_groupedResourceCounts; }
    template<typename GroupedResourceCountsT = Aws::Vector<GroupedResourceCount>>
    void SetGroupedResourceCounts(GroupedResourceCountsT&& value) { m_groupedResourceCountsHasBeenSet = true; m_groupedResourceCounts = std::forward<GroupedResourceCountsT>(value); }
    template<typename GroupedResourceCountsT = Aws::Vector<GroupedResourceCount>>
    GetAggregateDiscoveredResourceCountsResult& WithGroupedResourceCounts(GroupedResourceCountsT&& value) { SetGroupedResourceCounts(std::forward<GroupedResourceCountsT>(value)); return *this;}
    template<typename GroupedResourceCountsT = GroupedResourceCount>
    GetAggregateDiscoveredResourceCountsResult& AddGroupedResourceCounts(GroupedResourceCountsT&& value) { m_groupedResourceCountsHasBeenSet = true; m_groupedResourceCounts.emplace_back(std::forward<GroupedResourceCountsT>(value)); return *this; }
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
    GetAggregateDiscoveredResourceCountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAggregateDiscoveredResourceCountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_totalDiscoveredResources{0};
    bool m_totalDiscoveredResourcesHasBeenSet = false;

    Aws::String m_groupByKey;
    bool m_groupByKeyHasBeenSet = false;

    Aws::Vector<GroupedResourceCount> m_groupedResourceCounts;
    bool m_groupedResourceCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
