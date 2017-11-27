/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MEDIASTOREDATA_API ListItemsResult
  {
  public:
    ListItemsResult();
    ListItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline const Aws::Vector<Item>& GetItems() const{ return m_items; }

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline void SetItems(const Aws::Vector<Item>& value) { m_items = value; }

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline void SetItems(Aws::Vector<Item>&& value) { m_items = std::move(value); }

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& WithItems(const Aws::Vector<Item>& value) { SetItems(value); return *this;}

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& WithItems(Aws::Vector<Item>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& AddItems(const Item& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Metadata entries for the folders and objects at the requested path.</p>
     */
    inline ListItemsResult& AddItems(Item&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline ListItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline ListItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> used to request the next page of results using
     * <code>ListItems</code>.</p>
     */
    inline ListItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Item> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
