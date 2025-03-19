/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/QuerySuggestionsBlockListSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListQuerySuggestionsBlockListsResult
  {
  public:
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult() = default;
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::Vector<QuerySuggestionsBlockListSummary>& GetBlockListSummaryItems() const { return m_blockListSummaryItems; }
    template<typename BlockListSummaryItemsT = Aws::Vector<QuerySuggestionsBlockListSummary>>
    void SetBlockListSummaryItems(BlockListSummaryItemsT&& value) { m_blockListSummaryItemsHasBeenSet = true; m_blockListSummaryItems = std::forward<BlockListSummaryItemsT>(value); }
    template<typename BlockListSummaryItemsT = Aws::Vector<QuerySuggestionsBlockListSummary>>
    ListQuerySuggestionsBlockListsResult& WithBlockListSummaryItems(BlockListSummaryItemsT&& value) { SetBlockListSummaryItems(std::forward<BlockListSummaryItemsT>(value)); return *this;}
    template<typename BlockListSummaryItemsT = QuerySuggestionsBlockListSummary>
    ListQuerySuggestionsBlockListsResult& AddBlockListSummaryItems(BlockListSummaryItemsT&& value) { m_blockListSummaryItemsHasBeenSet = true; m_blockListSummaryItems.emplace_back(std::forward<BlockListSummaryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListQuerySuggestionsBlockListsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListQuerySuggestionsBlockListsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<QuerySuggestionsBlockListSummary> m_blockListSummaryItems;
    bool m_blockListSummaryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
