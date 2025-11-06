/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationSearchSummary.h>
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
namespace Connect {
namespace Model {
class SearchContactEvaluationsResult {
 public:
  AWS_CONNECT_API SearchContactEvaluationsResult() = default;
  AWS_CONNECT_API SearchContactEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchContactEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Contains information about contact evaluations.</p>
   */
  inline const Aws::Vector<EvaluationSearchSummary>& GetEvaluationSearchSummaryList() const { return m_evaluationSearchSummaryList; }
  template <typename EvaluationSearchSummaryListT = Aws::Vector<EvaluationSearchSummary>>
  void SetEvaluationSearchSummaryList(EvaluationSearchSummaryListT&& value) {
    m_evaluationSearchSummaryListHasBeenSet = true;
    m_evaluationSearchSummaryList = std::forward<EvaluationSearchSummaryListT>(value);
  }
  template <typename EvaluationSearchSummaryListT = Aws::Vector<EvaluationSearchSummary>>
  SearchContactEvaluationsResult& WithEvaluationSearchSummaryList(EvaluationSearchSummaryListT&& value) {
    SetEvaluationSearchSummaryList(std::forward<EvaluationSearchSummaryListT>(value));
    return *this;
  }
  template <typename EvaluationSearchSummaryListT = EvaluationSearchSummary>
  SearchContactEvaluationsResult& AddEvaluationSearchSummaryList(EvaluationSearchSummaryListT&& value) {
    m_evaluationSearchSummaryListHasBeenSet = true;
    m_evaluationSearchSummaryList.emplace_back(std::forward<EvaluationSearchSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchContactEvaluationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of contact evaluations that matched your search query.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchContactEvaluationsResult& WithApproximateTotalCount(long long value) {
    SetApproximateTotalCount(value);
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
  SearchContactEvaluationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationSearchSummary> m_evaluationSearchSummaryList;
  bool m_evaluationSearchSummaryListHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  long long m_approximateTotalCount{0};
  bool m_approximateTotalCountHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
