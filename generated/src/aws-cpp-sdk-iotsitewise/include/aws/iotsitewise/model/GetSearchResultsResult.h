/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Output of the GetSearchResults operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/GetSearchResultsResponse">AWS
 * API Reference</a></p>
 */
class GetSearchResultsResult {
 public:
  AWS_IOTSITEWISE_API GetSearchResultsResult() = default;
  AWS_IOTSITEWISE_API GetSearchResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API GetSearchResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A page of search results, ordered by descending relevance score.</p>
   */
  inline const Aws::Vector<SearchResult>& GetSearchResults() const { return m_searchResults; }
  template <typename SearchResultsT = Aws::Vector<SearchResult>>
  void SetSearchResults(SearchResultsT&& value) {
    m_searchResultsHasBeenSet = true;
    m_searchResults = std::forward<SearchResultsT>(value);
  }
  template <typename SearchResultsT = Aws::Vector<SearchResult>>
  GetSearchResultsResult& WithSearchResults(SearchResultsT&& value) {
    SetSearchResults(std::forward<SearchResultsT>(value));
    return *this;
  }
  template <typename SearchResultsT = SearchResult>
  GetSearchResultsResult& AddSearchResults(SearchResultsT&& value) {
    m_searchResultsHasBeenSet = true;
    m_searchResults.emplace_back(std::forward<SearchResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent GetSearchResults call to retrieve
   * the next page. Absent when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetSearchResultsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetSearchResultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SearchResult> m_searchResults;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_searchResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
