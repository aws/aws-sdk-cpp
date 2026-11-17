/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/QuestionSetSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class ListQuestionSetsResult {
 public:
  AWS_ELEMENTALINFERENCE_API ListQuestionSetsResult() = default;
  AWS_ELEMENTALINFERENCE_API ListQuestionSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API ListQuestionSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of QuestionSetSummary objects.</p>
   */
  inline const Aws::Vector<QuestionSetSummary>& GetQuestionSets() const { return m_questionSets; }
  template <typename QuestionSetsT = Aws::Vector<QuestionSetSummary>>
  void SetQuestionSets(QuestionSetsT&& value) {
    m_questionSetsHasBeenSet = true;
    m_questionSets = std::forward<QuestionSetsT>(value);
  }
  template <typename QuestionSetsT = Aws::Vector<QuestionSetSummary>>
  ListQuestionSetsResult& WithQuestionSets(QuestionSetsT&& value) {
    SetQuestionSets(std::forward<QuestionSetsT>(value));
    return *this;
  }
  template <typename QuestionSetsT = QuestionSetSummary>
  ListQuestionSetsResult& AddQuestionSets(QuestionSetsT&& value) {
    m_questionSetsHasBeenSet = true;
    m_questionSets.emplace_back(std::forward<QuestionSetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListQuestionSetsResult& WithNextToken(NextTokenT&& value) {
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
  ListQuestionSetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QuestionSetSummary> m_questionSets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_questionSetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
