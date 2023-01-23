/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcases/model/SearchRelatedItemsResponseItem.h>
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
namespace ConnectCases
{
namespace Model
{
  class SearchRelatedItemsResult
  {
  public:
    AWS_CONNECTCASES_API SearchRelatedItemsResult();
    AWS_CONNECTCASES_API SearchRelatedItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API SearchRelatedItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline SearchRelatedItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline SearchRelatedItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline SearchRelatedItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of items related to a case. </p>
     */
    inline const Aws::Vector<SearchRelatedItemsResponseItem>& GetRelatedItems() const{ return m_relatedItems; }

    /**
     * <p>A list of items related to a case. </p>
     */
    inline void SetRelatedItems(const Aws::Vector<SearchRelatedItemsResponseItem>& value) { m_relatedItems = value; }

    /**
     * <p>A list of items related to a case. </p>
     */
    inline void SetRelatedItems(Aws::Vector<SearchRelatedItemsResponseItem>&& value) { m_relatedItems = std::move(value); }

    /**
     * <p>A list of items related to a case. </p>
     */
    inline SearchRelatedItemsResult& WithRelatedItems(const Aws::Vector<SearchRelatedItemsResponseItem>& value) { SetRelatedItems(value); return *this;}

    /**
     * <p>A list of items related to a case. </p>
     */
    inline SearchRelatedItemsResult& WithRelatedItems(Aws::Vector<SearchRelatedItemsResponseItem>&& value) { SetRelatedItems(std::move(value)); return *this;}

    /**
     * <p>A list of items related to a case. </p>
     */
    inline SearchRelatedItemsResult& AddRelatedItems(const SearchRelatedItemsResponseItem& value) { m_relatedItems.push_back(value); return *this; }

    /**
     * <p>A list of items related to a case. </p>
     */
    inline SearchRelatedItemsResult& AddRelatedItems(SearchRelatedItemsResponseItem&& value) { m_relatedItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SearchRelatedItemsResponseItem> m_relatedItems;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
