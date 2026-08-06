/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeVersionSummary.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class ListAgentRuntimeVersionsByCapacityProviderResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeVersionsByCapacityProviderResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeVersionsByCapacityProviderResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListAgentRuntimeVersionsByCapacityProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of agent runtime versions that are associated with the capacity
   * provider.</p>
   */
  inline const Aws::Vector<AgentRuntimeVersionSummary>& GetAgentRuntimes() const { return m_agentRuntimes; }
  template <typename AgentRuntimesT = Aws::Vector<AgentRuntimeVersionSummary>>
  void SetAgentRuntimes(AgentRuntimesT&& value) {
    m_agentRuntimesHasBeenSet = true;
    m_agentRuntimes = std::forward<AgentRuntimesT>(value);
  }
  template <typename AgentRuntimesT = Aws::Vector<AgentRuntimeVersionSummary>>
  ListAgentRuntimeVersionsByCapacityProviderResult& WithAgentRuntimes(AgentRuntimesT&& value) {
    SetAgentRuntimes(std::forward<AgentRuntimesT>(value));
    return *this;
  }
  template <typename AgentRuntimesT = AgentRuntimeVersionSummary>
  ListAgentRuntimeVersionsByCapacityProviderResult& AddAgentRuntimes(AgentRuntimesT&& value) {
    m_agentRuntimesHasBeenSet = true;
    m_agentRuntimes.emplace_back(std::forward<AgentRuntimesT>(value));
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
  ListAgentRuntimeVersionsByCapacityProviderResult& WithNextToken(NextTokenT&& value) {
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
  ListAgentRuntimeVersionsByCapacityProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgentRuntimeVersionSummary> m_agentRuntimes;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentRuntimesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
