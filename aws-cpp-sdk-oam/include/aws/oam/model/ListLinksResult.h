/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/oam/model/ListLinksItem.h>
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
namespace OAM
{
namespace Model
{
  class ListLinksResult
  {
  public:
    AWS_OAM_API ListLinksResult();
    AWS_OAM_API ListLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API ListLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline const Aws::Vector<ListLinksItem>& GetItems() const{ return m_items; }

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline void SetItems(const Aws::Vector<ListLinksItem>& value) { m_items = value; }

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline void SetItems(Aws::Vector<ListLinksItem>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline ListLinksResult& WithItems(const Aws::Vector<ListLinksItem>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline ListLinksResult& WithItems(Aws::Vector<ListLinksItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline ListLinksResult& AddItems(const ListLinksItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the information about the returned
     * links.</p>
     */
    inline ListLinksResult& AddItems(ListLinksItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline ListLinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline ListLinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of links.</p>
     */
    inline ListLinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListLinksItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
