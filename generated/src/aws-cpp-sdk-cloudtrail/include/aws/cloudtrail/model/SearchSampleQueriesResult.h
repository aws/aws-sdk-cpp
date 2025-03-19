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
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult() = default;
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API SearchSampleQueriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of objects containing the search results ordered from most relevant
     * to least relevant. </p>
     */
    inline const Aws::Vector<SearchSampleQueriesSearchResult>& GetSearchResults() const { return m_searchResults; }
    template<typename SearchResultsT = Aws::Vector<SearchSampleQueriesSearchResult>>
    void SetSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults = std::forward<SearchResultsT>(value); }
    template<typename SearchResultsT = Aws::Vector<SearchSampleQueriesSearchResult>>
    SearchSampleQueriesResult& WithSearchResults(SearchResultsT&& value) { SetSearchResults(std::forward<SearchResultsT>(value)); return *this;}
    template<typename SearchResultsT = SearchSampleQueriesSearchResult>
    SearchSampleQueriesResult& AddSearchResults(SearchResultsT&& value) { m_searchResultsHasBeenSet = true; m_searchResults.emplace_back(std::forward<SearchResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token you can use to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchSampleQueriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchSampleQueriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SearchSampleQueriesSearchResult> m_searchResults;
    bool m_searchResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
