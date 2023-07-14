﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingsFilterListItem.h>
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
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API ListFindingsFiltersResult
  {
  public:
    ListFindingsFiltersResult();
    ListFindingsFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFindingsFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline const Aws::Vector<FindingsFilterListItem>& GetFindingsFilterListItems() const{ return m_findingsFilterListItems; }

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline void SetFindingsFilterListItems(const Aws::Vector<FindingsFilterListItem>& value) { m_findingsFilterListItems = value; }

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline void SetFindingsFilterListItems(Aws::Vector<FindingsFilterListItem>&& value) { m_findingsFilterListItems = std::move(value); }

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline ListFindingsFiltersResult& WithFindingsFilterListItems(const Aws::Vector<FindingsFilterListItem>& value) { SetFindingsFilterListItems(value); return *this;}

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline ListFindingsFiltersResult& WithFindingsFilterListItems(Aws::Vector<FindingsFilterListItem>&& value) { SetFindingsFilterListItems(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline ListFindingsFiltersResult& AddFindingsFilterListItems(const FindingsFilterListItem& value) { m_findingsFilterListItems.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each filter that's associated with the
     * account.</p>
     */
    inline ListFindingsFiltersResult& AddFindingsFilterListItems(FindingsFilterListItem&& value) { m_findingsFilterListItems.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListFindingsFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListFindingsFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListFindingsFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FindingsFilterListItem> m_findingsFilterListItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
