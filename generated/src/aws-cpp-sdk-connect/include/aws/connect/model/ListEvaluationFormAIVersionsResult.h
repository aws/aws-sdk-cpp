/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormAIVersionSummary.h>
#include <aws/core/http/HttpResponse.h>
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
class ListEvaluationFormAIVersionsResult {
 public:
  AWS_CONNECT_API ListEvaluationFormAIVersionsResult() = default;
  AWS_CONNECT_API ListEvaluationFormAIVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListEvaluationFormAIVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of AI version summaries.</p>
   */
  inline const Aws::Vector<EvaluationFormAIVersionSummary>& GetAIVersionSummaries() const { return m_aIVersionSummaries; }
  template <typename AIVersionSummariesT = Aws::Vector<EvaluationFormAIVersionSummary>>
  void SetAIVersionSummaries(AIVersionSummariesT&& value) {
    m_aIVersionSummariesHasBeenSet = true;
    m_aIVersionSummaries = std::forward<AIVersionSummariesT>(value);
  }
  template <typename AIVersionSummariesT = Aws::Vector<EvaluationFormAIVersionSummary>>
  ListEvaluationFormAIVersionsResult& WithAIVersionSummaries(AIVersionSummariesT&& value) {
    SetAIVersionSummaries(std::forward<AIVersionSummariesT>(value));
    return *this;
  }
  template <typename AIVersionSummariesT = EvaluationFormAIVersionSummary>
  ListEvaluationFormAIVersionsResult& AddAIVersionSummaries(AIVersionSummariesT&& value) {
    m_aIVersionSummariesHasBeenSet = true;
    m_aIVersionSummaries.emplace_back(std::forward<AIVersionSummariesT>(value));
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
  ListEvaluationFormAIVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListEvaluationFormAIVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EvaluationFormAIVersionSummary> m_aIVersionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIVersionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
