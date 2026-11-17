/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightSummary.h>
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
class ListAgentInsightsResult {
 public:
  AWS_BEDROCKAGENTCORE_API ListAgentInsightsResult() = default;
  AWS_BEDROCKAGENTCORE_API ListAgentInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ListAgentInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Agent Insight summaries.</p>
   */
  inline const Aws::Vector<AgentInsightSummary>& GetAgentInsights() const { return m_agentInsights; }
  template <typename AgentInsightsT = Aws::Vector<AgentInsightSummary>>
  void SetAgentInsights(AgentInsightsT&& value) {
    m_agentInsightsHasBeenSet = true;
    m_agentInsights = std::forward<AgentInsightsT>(value);
  }
  template <typename AgentInsightsT = Aws::Vector<AgentInsightSummary>>
  ListAgentInsightsResult& WithAgentInsights(AgentInsightsT&& value) {
    SetAgentInsights(std::forward<AgentInsightsT>(value));
    return *this;
  }
  template <typename AgentInsightsT = AgentInsightSummary>
  ListAgentInsightsResult& AddAgentInsights(AgentInsightsT&& value) {
    m_agentInsightsHasBeenSet = true;
    m_agentInsights.emplace_back(std::forward<AgentInsightsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to use to retrieve the next page of results. This value is present
   * only when additional results are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentInsightsResult& WithNextToken(NextTokenT&& value) {
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
  ListAgentInsightsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgentInsightSummary> m_agentInsights;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentInsightsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
