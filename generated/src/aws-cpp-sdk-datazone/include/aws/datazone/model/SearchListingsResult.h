/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AggregationOutput.h>
#include <aws/datazone/model/SearchResultItem.h>
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
namespace DataZone
{
namespace Model
{
  class SearchListingsResult
  {
  public:
    AWS_DATAZONE_API SearchListingsResult() = default;
    AWS_DATAZONE_API SearchListingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API SearchListingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains computed counts grouped by field values based on the requested
     * aggregation attributes for the matching listings.</p>
     */
    inline const Aws::Vector<AggregationOutput>& GetAggregates() const { return m_aggregates; }
    template<typename AggregatesT = Aws::Vector<AggregationOutput>>
    void SetAggregates(AggregatesT&& value) { m_aggregatesHasBeenSet = true; m_aggregates = std::forward<AggregatesT>(value); }
    template<typename AggregatesT = Aws::Vector<AggregationOutput>>
    SearchListingsResult& WithAggregates(AggregatesT&& value) { SetAggregates(std::forward<AggregatesT>(value)); return *this;}
    template<typename AggregatesT = AggregationOutput>
    SearchListingsResult& AddAggregates(AggregatesT&& value) { m_aggregatesHasBeenSet = true; m_aggregates.emplace_back(std::forward<AggregatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The results of the <code>SearchListings</code> action.</p>
     */
    inline const Aws::Vector<SearchResultItem>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<SearchResultItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<SearchResultItem>>
    SearchListingsResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = SearchResultItem>
    SearchListingsResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of results is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of results, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to <code>SearchListings</code>
     * to list the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchListingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of search results.</p>
     */
    inline int GetTotalMatchCount() const { return m_totalMatchCount; }
    inline void SetTotalMatchCount(int value) { m_totalMatchCountHasBeenSet = true; m_totalMatchCount = value; }
    inline SearchListingsResult& WithTotalMatchCount(int value) { SetTotalMatchCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchListingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AggregationOutput> m_aggregates;
    bool m_aggregatesHasBeenSet = false;

    Aws::Vector<SearchResultItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_totalMatchCount{0};
    bool m_totalMatchCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
