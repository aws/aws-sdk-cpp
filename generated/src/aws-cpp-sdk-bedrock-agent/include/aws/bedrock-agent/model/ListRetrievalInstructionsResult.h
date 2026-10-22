/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionSummary.h>
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
namespace BedrockAgent {
namespace Model {
class ListRetrievalInstructionsResult {
 public:
  AWS_BEDROCKAGENT_API ListRetrievalInstructionsResult() = default;
  AWS_BEDROCKAGENT_API ListRetrievalInstructionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API ListRetrievalInstructionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The retrieval instruction summaries in this page.</p>
   */
  inline const Aws::Vector<RetrievalInstructionSummary>& GetRetrievalInstructionSummaries() const {
    return m_retrievalInstructionSummaries;
  }
  template <typename RetrievalInstructionSummariesT = Aws::Vector<RetrievalInstructionSummary>>
  void SetRetrievalInstructionSummaries(RetrievalInstructionSummariesT&& value) {
    m_retrievalInstructionSummariesHasBeenSet = true;
    m_retrievalInstructionSummaries = std::forward<RetrievalInstructionSummariesT>(value);
  }
  template <typename RetrievalInstructionSummariesT = Aws::Vector<RetrievalInstructionSummary>>
  ListRetrievalInstructionsResult& WithRetrievalInstructionSummaries(RetrievalInstructionSummariesT&& value) {
    SetRetrievalInstructionSummaries(std::forward<RetrievalInstructionSummariesT>(value));
    return *this;
  }
  template <typename RetrievalInstructionSummariesT = RetrievalInstructionSummary>
  ListRetrievalInstructionsResult& AddRetrievalInstructionSummaries(RetrievalInstructionSummariesT&& value) {
    m_retrievalInstructionSummariesHasBeenSet = true;
    m_retrievalInstructionSummaries.emplace_back(std::forward<RetrievalInstructionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to pass to the next ListRetrievalInstructions call,
   * absent on the last page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRetrievalInstructionsResult& WithNextToken(NextTokenT&& value) {
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
  ListRetrievalInstructionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RetrievalInstructionSummary> m_retrievalInstructionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_retrievalInstructionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
