/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SearchRecord.h>
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
namespace SageMaker
{
namespace Model
{
  class SearchResult
  {
  public:
    AWS_SAGEMAKER_API SearchResult();
    AWS_SAGEMAKER_API SearchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SearchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline const Aws::Vector<SearchRecord>& GetResults() const{ return m_results; }

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline void SetResults(const Aws::Vector<SearchRecord>& value) { m_results = value; }

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline void SetResults(Aws::Vector<SearchRecord>&& value) { m_results = std::move(value); }

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline SearchResult& WithResults(const Aws::Vector<SearchRecord>& value) { SetResults(value); return *this;}

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline SearchResult& WithResults(Aws::Vector<SearchRecord>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline SearchResult& AddResults(const SearchRecord& value) { m_results.push_back(value); return *this; }

    /**
     * <p>A list of <code>SearchRecord</code> objects.</p>
     */
    inline SearchResult& AddResults(SearchRecord&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline SearchResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline SearchResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>Search</code> request was truncated, the
     * response includes a NextToken. To retrieve the next set of results, use the
     * token in the next request.</p>
     */
    inline SearchResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SearchRecord> m_results;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
