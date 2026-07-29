/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/SearchSummary.h>

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
 * <p>Output of the ListSearches operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ListSearchesResponse">AWS
 * API Reference</a></p>
 */
class ListSearchesResult {
 public:
  AWS_IOTSITEWISE_API ListSearchesResult() = default;
  AWS_IOTSITEWISE_API ListSearchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API ListSearchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A page of search summaries, most recently started first.</p>
   */
  inline const Aws::Vector<SearchSummary>& GetSearchSummaries() const { return m_searchSummaries; }
  template <typename SearchSummariesT = Aws::Vector<SearchSummary>>
  void SetSearchSummaries(SearchSummariesT&& value) {
    m_searchSummariesHasBeenSet = true;
    m_searchSummaries = std::forward<SearchSummariesT>(value);
  }
  template <typename SearchSummariesT = Aws::Vector<SearchSummary>>
  ListSearchesResult& WithSearchSummaries(SearchSummariesT&& value) {
    SetSearchSummaries(std::forward<SearchSummariesT>(value));
    return *this;
  }
  template <typename SearchSummariesT = SearchSummary>
  ListSearchesResult& AddSearchSummaries(SearchSummariesT&& value) {
    m_searchSummariesHasBeenSet = true;
    m_searchSummaries.emplace_back(std::forward<SearchSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent ListSearches call to retrieve the
   * next page. Absent when there are no more searches.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSearchesResult& WithNextToken(NextTokenT&& value) {
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
  ListSearchesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SearchSummary> m_searchSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_searchSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
