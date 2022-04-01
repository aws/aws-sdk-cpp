/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/VodSource.h>
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
  class AWS_MEDIATAILOR_API ListVodSourcesResult
  {
  public:
    ListVodSourcesResult();
    ListVodSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListVodSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the VOD sources.</p>
     */
    inline const Aws::Vector<VodSource>& GetItems() const{ return m_items; }

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline void SetItems(const Aws::Vector<VodSource>& value) { m_items = value; }

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline void SetItems(Aws::Vector<VodSource>&& value) { m_items = std::move(value); }

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline ListVodSourcesResult& WithItems(const Aws::Vector<VodSource>& value) { SetItems(value); return *this;}

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline ListVodSourcesResult& WithItems(Aws::Vector<VodSource>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline ListVodSourcesResult& AddItems(const VodSource& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Lists the VOD sources.</p>
     */
    inline ListVodSourcesResult& AddItems(VodSource&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline ListVodSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline ListVodSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token from the list request. Use the token to fetch the next page
     * of results.</p>
     */
    inline ListVodSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<VodSource> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
