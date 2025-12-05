/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormSearchSummary.h>
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
class SearchEvaluationFormsResult {
 public:
  AWS_CONNECT_API SearchEvaluationFormsResult() = default;
  AWS_CONNECT_API SearchEvaluationFormsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchEvaluationFormsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the returned evaluation forms.</p>
   */
  inline const Aws::Vector<EvaluationFormSearchSummary>& GetEvaluationFormSearchSummaryList() const {
    return m_evaluationFormSearchSummaryList;
  }
  template <typename EvaluationFormSearchSummaryListT = Aws::Vector<EvaluationFormSearchSummary>>
  void SetEvaluationFormSearchSummaryList(EvaluationFormSearchSummaryListT&& value) {
    m_evaluationFormSearchSummaryListHasBeenSet = true;
    m_evaluationFormSearchSummaryList = std::forward<EvaluationFormSearchSummaryListT>(value);
  }
  template <typename EvaluationFormSearchSummaryListT = Aws::Vector<EvaluationFormSearchSummary>>
  SearchEvaluationFormsResult& WithEvaluationFormSearchSummaryList(EvaluationFormSearchSummaryListT&& value) {
    SetEvaluationFormSearchSummaryList(std::forward<EvaluationFormSearchSummaryListT>(value));
    return *this;
  }
  template <typename EvaluationFormSearchSummaryListT = EvaluationFormSearchSummary>
  SearchEvaluationFormsResult& AddEvaluationFormSearchSummaryList(EvaluationFormSearchSummaryListT&& value) {
    m_evaluationFormSearchSummaryListHasBeenSet = true;
    m_evaluationFormSearchSummaryList.emplace_back(std::forward<EvaluationFormSearchSummaryListT>(value));
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
  SearchEvaluationFormsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of evaluation forms that matched your search query.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchEvaluationFormsResult& WithApproximateTotalCount(long long value) {
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
  SearchEvaluationFormsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationFormSearchSummary> m_evaluationFormSearchSummaryList;

  Aws::String m_nextToken;

  long long m_approximateTotalCount{0};

  Aws::String m_requestId;
  bool m_evaluationFormSearchSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_approximateTotalCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
