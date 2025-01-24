/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/SearchSampleQueriesSearchResult.h>
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
namespace CloudTrail
{
namespace Model
{
  class SearchSampleQueriesResult
  {
  public:
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult();
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of objects containing the search results ordered from most relevant
     * to least relevant. </p>
     */
    inline const Aws::Vector<SearchSampleQueriesSearchResult>& GetSearchResults() const{ return m_searchResults; }
    inline void SetSearchResults(const Aws::Vector<SearchSampleQueriesSearchResult>& value) { m_searchResults = value; }
    inline void SetSearchResults(Aws::Vector<SearchSampleQueriesSearchResult>&& value) { m_searchResults = std::move(value); }
    inline SearchSampleQueriesResult& WithSearchResults(const Aws::Vector<SearchSampleQueriesSearchResult>& value) { SetSearchResults(value); return *this;}
    inline SearchSampleQueriesResult& WithSearchResults(Aws::Vector<SearchSampleQueriesSearchResult>&& value) { SetSearchResults(std::move(value)); return *this;}
    inline SearchSampleQueriesResult& AddSearchResults(const SearchSampleQueriesSearchResult& value) { m_searchResults.push_back(value); return *this; }
    inline SearchSampleQueriesResult& AddSearchResults(SearchSampleQueriesSearchResult&& value) { m_searchResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchSampleQueriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchSampleQueriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchSampleQueriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchSampleQueriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchSampleQueriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchSampleQueriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SearchSampleQueriesSearchResult> m_searchResults;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
