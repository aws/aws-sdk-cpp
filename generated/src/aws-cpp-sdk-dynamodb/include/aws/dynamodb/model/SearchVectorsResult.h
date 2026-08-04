/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/SearchResultItem.h>
#include <aws/dynamodb/model/VectorCapacity.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {
class SearchVectorsResult {
 public:
  AWS_DYNAMODB_API SearchVectorsResult() = default;
  AWS_DYNAMODB_API SearchVectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DYNAMODB_API SearchVectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The capacity units consumed by the <code>SearchVectors</code> operation.
   * Contains <code>VectorSearchRequestBytes</code>, which represents the vector
   * search capacity consumed.</p>
   */
  inline const VectorCapacity& GetConsumedCapacity() const { return m_consumedCapacity; }
  template <typename ConsumedCapacityT = VectorCapacity>
  void SetConsumedCapacity(ConsumedCapacityT&& value) {
    m_consumedCapacityHasBeenSet = true;
    m_consumedCapacity = std::forward<ConsumedCapacityT>(value);
  }
  template <typename ConsumedCapacityT = VectorCapacity>
  SearchVectorsResult& WithConsumedCapacity(ConsumedCapacityT&& value) {
    SetConsumedCapacity(std::forward<ConsumedCapacityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of items returned by the vector similarity search, sorted by
   * similarity with the most similar item first. Each item contains the projected
   * attributes and a similarity score.</p>
   */
  inline const Aws::Vector<SearchResultItem>& GetSearchResults() const { return m_searchResults; }
  template <typename SearchResultsT = Aws::Vector<SearchResultItem>>
  void SetSearchResults(SearchResultsT&& value) {
    m_searchResultsHasBeenSet = true;
    m_searchResults = std::forward<SearchResultsT>(value);
  }
  template <typename SearchResultsT = Aws::Vector<SearchResultItem>>
  SearchVectorsResult& WithSearchResults(SearchResultsT&& value) {
    SetSearchResults(std::forward<SearchResultsT>(value));
    return *this;
  }
  template <typename SearchResultsT = SearchResultItem>
  SearchVectorsResult& AddSearchResults(SearchResultsT&& value) {
    m_searchResultsHasBeenSet = true;
    m_searchResults.emplace_back(std::forward<SearchResultsT>(value));
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
  SearchVectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  VectorCapacity m_consumedCapacity;

  Aws::Vector<SearchResultItem> m_searchResults;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_consumedCapacityHasBeenSet = false;
  bool m_searchResultsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
