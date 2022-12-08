/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PrefetchSchedule.h>
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
namespace MediaTailor
{
namespace Model
{
  class ListPrefetchSchedulesResult
  {
  public:
    AWS_MEDIATAILOR_API ListPrefetchSchedulesResult();
    AWS_MEDIATAILOR_API ListPrefetchSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ListPrefetchSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline const Aws::Vector<PrefetchSchedule>& GetItems() const{ return m_items; }

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline void SetItems(const Aws::Vector<PrefetchSchedule>& value) { m_items = value; }

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline void SetItems(Aws::Vector<PrefetchSchedule>&& value) { m_items = std::move(value); }

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline ListPrefetchSchedulesResult& WithItems(const Aws::Vector<PrefetchSchedule>& value) { SetItems(value); return *this;}

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline ListPrefetchSchedulesResult& WithItems(Aws::Vector<PrefetchSchedule>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline ListPrefetchSchedulesResult& AddItems(const PrefetchSchedule& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Lists the prefetch schedules. An empty <code>Items</code> list doesn't mean
     * there aren't more items to fetch, just that that page was empty.</p>
     */
    inline ListPrefetchSchedulesResult& AddItems(PrefetchSchedule&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPrefetchSchedulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPrefetchSchedulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPrefetchSchedulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PrefetchSchedule> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
