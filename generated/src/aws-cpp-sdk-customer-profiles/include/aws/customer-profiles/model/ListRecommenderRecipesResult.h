/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RecommenderRecipe.h>

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
class ListRecommenderRecipesResult {
 public:
  AWS_CUSTOMERPROFILES_API ListRecommenderRecipesResult() = default;
  AWS_CUSTOMERPROFILES_API ListRecommenderRecipesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CUSTOMERPROFILES_API ListRecommenderRecipesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListRecommenderRecipesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of available recommender recipes and their properties.</p>
   */
  inline const Aws::Vector<RecommenderRecipe>& GetRecommenderRecipes() const { return m_recommenderRecipes; }
  template <typename RecommenderRecipesT = Aws::Vector<RecommenderRecipe>>
  void SetRecommenderRecipes(RecommenderRecipesT&& value) {
    m_recommenderRecipesHasBeenSet = true;
    m_recommenderRecipes = std::forward<RecommenderRecipesT>(value);
  }
  template <typename RecommenderRecipesT = Aws::Vector<RecommenderRecipe>>
  ListRecommenderRecipesResult& WithRecommenderRecipes(RecommenderRecipesT&& value) {
    SetRecommenderRecipes(std::forward<RecommenderRecipesT>(value));
    return *this;
  }
  template <typename RecommenderRecipesT = RecommenderRecipe>
  ListRecommenderRecipesResult& AddRecommenderRecipes(RecommenderRecipesT&& value) {
    m_recommenderRecipesHasBeenSet = true;
    m_recommenderRecipes.emplace_back(std::forward<RecommenderRecipesT>(value));
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
  ListRecommenderRecipesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<RecommenderRecipe> m_recommenderRecipes;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_recommenderRecipesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
