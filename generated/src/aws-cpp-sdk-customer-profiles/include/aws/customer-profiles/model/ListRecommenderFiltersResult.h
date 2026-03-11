/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderFilterSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {
class ListRecommenderFiltersResult {
 public:
  AWS_CUSTOMERPROFILES_API ListRecommenderFiltersResult() = default;
  AWS_CUSTOMERPROFILES_API ListRecommenderFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API ListRecommenderFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A token to retrieve the next page of results. Null if there are no more
   * results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommenderFiltersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of recommender filters and their properties in the specified
   * domain.</p>
   */
  inline const Aws::Vector<RecommenderFilterSummary>& GetRecommenderFilters() const { return m_recommenderFilters; }
  template <typename RecommenderFiltersT = Aws::Vector<RecommenderFilterSummary>>
  void SetRecommenderFilters(RecommenderFiltersT&& value) {
    m_recommenderFiltersHasBeenSet = true;
    m_recommenderFilters = std::forward<RecommenderFiltersT>(value);
  }
  template <typename RecommenderFiltersT = Aws::Vector<RecommenderFilterSummary>>
  ListRecommenderFiltersResult& WithRecommenderFilters(RecommenderFiltersT&& value) {
    SetRecommenderFilters(std::forward<RecommenderFiltersT>(value));
    return *this;
  }
  template <typename RecommenderFiltersT = RecommenderFilterSummary>
  ListRecommenderFiltersResult& AddRecommenderFilters(RecommenderFiltersT&& value) {
    m_recommenderFiltersHasBeenSet = true;
    m_recommenderFilters.emplace_back(std::forward<RecommenderFiltersT>(value));
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
  ListRecommenderFiltersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<RecommenderFilterSummary> m_recommenderFilters;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_recommenderFiltersHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
