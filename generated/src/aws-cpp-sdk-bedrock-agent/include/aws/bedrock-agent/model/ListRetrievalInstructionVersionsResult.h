/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/RetrievalInstructionVersionSummary.h>
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
class ListRetrievalInstructionVersionsResult {
 public:
  AWS_BEDROCKAGENT_API ListRetrievalInstructionVersionsResult() = default;
  AWS_BEDROCKAGENT_API ListRetrievalInstructionVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENT_API ListRetrievalInstructionVersionsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The version summaries in this page, newest first.</p>
   */
  inline const Aws::Vector<RetrievalInstructionVersionSummary>& GetRetrievalInstructionVersionSummaries() const {
    return m_retrievalInstructionVersionSummaries;
  }
  template <typename RetrievalInstructionVersionSummariesT = Aws::Vector<RetrievalInstructionVersionSummary>>
  void SetRetrievalInstructionVersionSummaries(RetrievalInstructionVersionSummariesT&& value) {
    m_retrievalInstructionVersionSummariesHasBeenSet = true;
    m_retrievalInstructionVersionSummaries = std::forward<RetrievalInstructionVersionSummariesT>(value);
  }
  template <typename RetrievalInstructionVersionSummariesT = Aws::Vector<RetrievalInstructionVersionSummary>>
  ListRetrievalInstructionVersionsResult& WithRetrievalInstructionVersionSummaries(RetrievalInstructionVersionSummariesT&& value) {
    SetRetrievalInstructionVersionSummaries(std::forward<RetrievalInstructionVersionSummariesT>(value));
    return *this;
  }
  template <typename RetrievalInstructionVersionSummariesT = RetrievalInstructionVersionSummary>
  ListRetrievalInstructionVersionsResult& AddRetrievalInstructionVersionSummaries(RetrievalInstructionVersionSummariesT&& value) {
    m_retrievalInstructionVersionSummariesHasBeenSet = true;
    m_retrievalInstructionVersionSummaries.emplace_back(std::forward<RetrievalInstructionVersionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to pass to the next ListRetrievalInstructionVersions
   * call, absent on the last page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRetrievalInstructionVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListRetrievalInstructionVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<RetrievalInstructionVersionSummary> m_retrievalInstructionVersionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_retrievalInstructionVersionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
