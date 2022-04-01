/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/SourceLocation.h>
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
  class AWS_MEDIATAILOR_API ListSourceLocationsResult
  {
  public:
    ListSourceLocationsResult();
    ListSourceLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListSourceLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of source locations.</p>
     */
    inline const Aws::Vector<SourceLocation>& GetItems() const{ return m_items; }

    /**
     * <p>An array of source locations.</p>
     */
    inline void SetItems(const Aws::Vector<SourceLocation>& value) { m_items = value; }

    /**
     * <p>An array of source locations.</p>
     */
    inline void SetItems(Aws::Vector<SourceLocation>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of source locations.</p>
     */
    inline ListSourceLocationsResult& WithItems(const Aws::Vector<SourceLocation>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of source locations.</p>
     */
    inline ListSourceLocationsResult& WithItems(Aws::Vector<SourceLocation>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of source locations.</p>
     */
    inline ListSourceLocationsResult& AddItems(const SourceLocation& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of source locations.</p>
     */
    inline ListSourceLocationsResult& AddItems(SourceLocation&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline ListSourceLocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline ListSourceLocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline ListSourceLocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SourceLocation> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
