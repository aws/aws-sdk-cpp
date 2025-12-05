/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/RecommendedActionSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {
class ListRecommendedActionSummariesResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListRecommendedActionSummariesResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListRecommendedActionSummariesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API ListRecommendedActionSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The summary of recommended actions that match the specified criteria. </p>
   */
  inline const Aws::Vector<RecommendedActionSummary>& GetRecommendedActionSummaries() const { return m_recommendedActionSummaries; }
  template <typename RecommendedActionSummariesT = Aws::Vector<RecommendedActionSummary>>
  void SetRecommendedActionSummaries(RecommendedActionSummariesT&& value) {
    m_recommendedActionSummariesHasBeenSet = true;
    m_recommendedActionSummaries = std::forward<RecommendedActionSummariesT>(value);
  }
  template <typename RecommendedActionSummariesT = Aws::Vector<RecommendedActionSummary>>
  ListRecommendedActionSummariesResult& WithRecommendedActionSummaries(RecommendedActionSummariesT&& value) {
    SetRecommendedActionSummaries(std::forward<RecommendedActionSummariesT>(value));
    return *this;
  }
  template <typename RecommendedActionSummariesT = RecommendedActionSummary>
  ListRecommendedActionSummariesResult& AddRecommendedActionSummaries(RecommendedActionSummariesT&& value) {
    m_recommendedActionSummariesHasBeenSet = true;
    m_recommendedActionSummaries.emplace_back(std::forward<RecommendedActionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for pagination. If present, indicates there are more results
   * available and can be used in subsequent requests.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommendedActionSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListRecommendedActionSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RecommendedActionSummary> m_recommendedActionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_recommendedActionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
