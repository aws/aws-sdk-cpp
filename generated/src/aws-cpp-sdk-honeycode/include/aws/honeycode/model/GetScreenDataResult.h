/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/ResultSet.h>
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
namespace Honeycode
{
namespace Model
{
  class GetScreenDataResult
  {
  public:
    AWS_HONEYCODE_API GetScreenDataResult();
    AWS_HONEYCODE_API GetScreenDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HONEYCODE_API GetScreenDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline const Aws::Map<Aws::String, ResultSet>& GetResults() const{ return m_results; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline void SetResults(const Aws::Map<Aws::String, ResultSet>& value) { m_results = value; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline void SetResults(Aws::Map<Aws::String, ResultSet>&& value) { m_results = std::move(value); }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& WithResults(const Aws::Map<Aws::String, ResultSet>& value) { SetResults(value); return *this;}

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& WithResults(Aws::Map<Aws::String, ResultSet>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(const Aws::String& key, const ResultSet& value) { m_results.emplace(key, value); return *this; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(Aws::String&& key, const ResultSet& value) { m_results.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(const Aws::String& key, ResultSet&& value) { m_results.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(Aws::String&& key, ResultSet&& value) { m_results.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(const char* key, ResultSet&& value) { m_results.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of all the rows on the screen keyed by block name.</p>
     */
    inline GetScreenDataResult& AddResults(const char* key, const ResultSet& value) { m_results.emplace(key, value); return *this; }


    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * workbook is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline long long GetWorkbookCursor() const{ return m_workbookCursor; }

    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * workbook is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline void SetWorkbookCursor(long long value) { m_workbookCursor = value; }

    /**
     * <p> Indicates the cursor of the workbook at which the data returned by this
     * workbook is read. Workbook cursor keeps increasing with every update and the
     * increments are not sequential. </p>
     */
    inline GetScreenDataResult& WithWorkbookCursor(long long value) { SetWorkbookCursor(value); return *this;}


    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline GetScreenDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline GetScreenDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Provides the pagination token to load the next page if there are more
     * results matching the request. If a pagination token is not present in the
     * response, it means that all data matching the query has been loaded. </p>
     */
    inline GetScreenDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, ResultSet> m_results;

    long long m_workbookCursor;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
