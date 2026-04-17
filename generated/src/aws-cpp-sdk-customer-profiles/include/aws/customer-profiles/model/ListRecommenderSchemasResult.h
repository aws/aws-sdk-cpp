/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderSchemaSummary.h>

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
class ListRecommenderSchemasResult {
 public:
  AWS_CUSTOMERPROFILES_API ListRecommenderSchemasResult() = default;
  AWS_CUSTOMERPROFILES_API ListRecommenderSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API ListRecommenderSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListRecommenderSchemasResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of recommender schemas and their properties in the specified
   * domain.</p>
   */
  inline const Aws::Vector<RecommenderSchemaSummary>& GetRecommenderSchemas() const { return m_recommenderSchemas; }
  template <typename RecommenderSchemasT = Aws::Vector<RecommenderSchemaSummary>>
  void SetRecommenderSchemas(RecommenderSchemasT&& value) {
    m_recommenderSchemasHasBeenSet = true;
    m_recommenderSchemas = std::forward<RecommenderSchemasT>(value);
  }
  template <typename RecommenderSchemasT = Aws::Vector<RecommenderSchemaSummary>>
  ListRecommenderSchemasResult& WithRecommenderSchemas(RecommenderSchemasT&& value) {
    SetRecommenderSchemas(std::forward<RecommenderSchemasT>(value));
    return *this;
  }
  template <typename RecommenderSchemasT = RecommenderSchemaSummary>
  ListRecommenderSchemasResult& AddRecommenderSchemas(RecommenderSchemasT&& value) {
    m_recommenderSchemasHasBeenSet = true;
    m_recommenderSchemas.emplace_back(std::forward<RecommenderSchemasT>(value));
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
  ListRecommenderSchemasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<RecommenderSchemaSummary> m_recommenderSchemas;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_recommenderSchemasHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
