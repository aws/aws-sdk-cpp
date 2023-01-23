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
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult();
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListQuerySuggestionsBlockListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline const Aws::Vector<QuerySuggestionsBlockListSummary>& GetBlockListSummaryItems() const{ return m_blockListSummaryItems; }

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetBlockListSummaryItems(const Aws::Vector<QuerySuggestionsBlockListSummary>& value) { m_blockListSummaryItems = value; }

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline void SetBlockListSummaryItems(Aws::Vector<QuerySuggestionsBlockListSummary>&& value) { m_blockListSummaryItems = std::move(value); }

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& WithBlockListSummaryItems(const Aws::Vector<QuerySuggestionsBlockListSummary>& value) { SetBlockListSummaryItems(value); return *this;}

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& WithBlockListSummaryItems(Aws::Vector<QuerySuggestionsBlockListSummary>&& value) { SetBlockListSummaryItems(std::move(value)); return *this;}

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& AddBlockListSummaryItems(const QuerySuggestionsBlockListSummary& value) { m_blockListSummaryItems.push_back(value); return *this; }

    /**
     * <p>Summary items for a block list.</p> <p>This includes summary items on the
     * block list ID, block list name, when the block list was created, when the block
     * list was last updated, and the count of block words/phrases in the block
     * list.</p> <p>For information on the current quota limits for block lists, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/quotas.html">Quotas for
     * Amazon Kendra</a>.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& AddBlockListSummaryItems(QuerySuggestionsBlockListSummary&& value) { m_blockListSummaryItems.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of block lists.</p>
     */
    inline ListQuerySuggestionsBlockListsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<QuerySuggestionsBlockListSummary> m_blockListSummaryItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
