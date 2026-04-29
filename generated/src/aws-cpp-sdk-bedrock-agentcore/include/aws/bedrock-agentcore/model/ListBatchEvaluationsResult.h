/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BatchEvaluationSummary.h>
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
namespace BedrockAgentCore {
namespace Model {
class ListBatchEvaluationsResult {
 public:
  AWS_BEDROCKAGENTCORE_API ListBatchEvaluationsResult() = default;
  AWS_BEDROCKAGENTCORE_API ListBatchEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ListBatchEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of batch evaluation summaries.</p>
   */
  inline const Aws::Vector<BatchEvaluationSummary>& GetBatchEvaluations() const { return m_batchEvaluations; }
  template <typename BatchEvaluationsT = Aws::Vector<BatchEvaluationSummary>>
  void SetBatchEvaluations(BatchEvaluationsT&& value) {
    m_batchEvaluationsHasBeenSet = true;
    m_batchEvaluations = std::forward<BatchEvaluationsT>(value);
  }
  template <typename BatchEvaluationsT = Aws::Vector<BatchEvaluationSummary>>
  ListBatchEvaluationsResult& WithBatchEvaluations(BatchEvaluationsT&& value) {
    SetBatchEvaluations(std::forward<BatchEvaluationsT>(value));
    return *this;
  }
  template <typename BatchEvaluationsT = BatchEvaluationSummary>
  ListBatchEvaluationsResult& AddBatchEvaluations(BatchEvaluationsT&& value) {
    m_batchEvaluationsHasBeenSet = true;
    m_batchEvaluations.emplace_back(std::forward<BatchEvaluationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, use this token when making another request in the
   * <code>nextToken</code> field to return the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBatchEvaluationsResult& WithNextToken(NextTokenT&& value) {
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
  ListBatchEvaluationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchEvaluationSummary> m_batchEvaluations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_batchEvaluationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
