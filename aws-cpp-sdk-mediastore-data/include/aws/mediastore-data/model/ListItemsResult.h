/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediastore-data/model/Item.h>
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
namespace MediaStoreData
{
namespace Model
{
  class ListItemsResult
  {
  public:
    AWS_MEDIASTOREDATA_API ListItemsResult();
    AWS_MEDIASTOREDATA_API ListItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIASTOREDATA_API ListItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline const Aws::Vector<Item>& GetItems() const{ return m_items; }

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline void SetItems(const Aws::Vector<Item>& value) { m_items = value; }

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline void SetItems(Aws::Vector<Item>&& value) { m_items = std::move(value); }

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& WithItems(const Aws::Vector<Item>& value) { SetItems(value); return *this;}

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& WithItems(Aws::Vector<Item>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& AddItems(const Item& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& AddItems(Item&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline ListItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline ListItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that can be used in a request to view the next set of results. For
     * example, you submit a <code>ListItems</code> request that matches 2,000 items
     * with <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value that can be used to fetch
     * the next batch of results.</p>
     */
    inline ListItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Item> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
