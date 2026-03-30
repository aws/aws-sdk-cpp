/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Recommendation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Response structure containing a list of recommendations</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListRecommendationsResponse">AWS
 * API Reference</a></p>
 */
class ListRecommendationsResult {
 public:
  AWS_DEVOPSAGENT_API ListRecommendationsResult() = default;
  AWS_DEVOPSAGENT_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of recommendations matching the request criteria</p>
   */
  inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  void SetRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations = std::forward<RecommendationsT>(value);
  }
  template <typename RecommendationsT = Aws::Vector<Recommendation>>
  ListRecommendationsResult& WithRecommendations(RecommendationsT&& value) {
    SetRecommendations(std::forward<RecommendationsT>(value));
    return *this;
  }
  template <typename RecommendationsT = Recommendation>
  ListRecommendationsResult& AddRecommendations(RecommendationsT&& value) {
    m_recommendationsHasBeenSet = true;
    m_recommendations.emplace_back(std::forward<RecommendationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results, if more results are
   * available</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommendationsResult& WithNextToken(NextTokenT&& value) {
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
  ListRecommendationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Recommendation> m_recommendations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_recommendationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
