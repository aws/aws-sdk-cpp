/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/oam/model/ListSinksItem.h>
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
  class ListSinksResult
  {
  public:
    AWS_OAM_API ListSinksResult();
    AWS_OAM_API ListSinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API ListSinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline const Aws::Vector<ListSinksItem>& GetItems() const{ return m_items; }

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline void SetItems(const Aws::Vector<ListSinksItem>& value) { m_items = value; }

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline void SetItems(Aws::Vector<ListSinksItem>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline ListSinksResult& WithItems(const Aws::Vector<ListSinksItem>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline ListSinksResult& WithItems(Aws::Vector<ListSinksItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline ListSinksResult& AddItems(const ListSinksItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the information about the returned
     * sinks.</p>
     */
    inline ListSinksResult& AddItems(ListSinksItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline ListSinksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline ListSinksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of sinks.</p>
     */
    inline ListSinksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListSinksItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
