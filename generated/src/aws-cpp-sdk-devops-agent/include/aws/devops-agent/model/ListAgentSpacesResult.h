/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AgentSpace.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing a list of AgentSpaces and pagination token.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListAgentSpacesOutput">AWS
 * API Reference</a></p>
 */
class ListAgentSpacesResult {
 public:
  AWS_DEVOPSAGENT_API ListAgentSpacesResult() = default;
  AWS_DEVOPSAGENT_API ListAgentSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListAgentSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Token to retrieve the next page of results, if there are more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentSpacesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of AgentSpaces.</p>
   */
  inline const Aws::Vector<AgentSpace>& GetAgentSpaces() const { return m_agentSpaces; }
  template <typename AgentSpacesT = Aws::Vector<AgentSpace>>
  void SetAgentSpaces(AgentSpacesT&& value) {
    m_agentSpacesHasBeenSet = true;
    m_agentSpaces = std::forward<AgentSpacesT>(value);
  }
  template <typename AgentSpacesT = Aws::Vector<AgentSpace>>
  ListAgentSpacesResult& WithAgentSpaces(AgentSpacesT&& value) {
    SetAgentSpaces(std::forward<AgentSpacesT>(value));
    return *this;
  }
  template <typename AgentSpacesT = AgentSpace>
  ListAgentSpacesResult& AddAgentSpaces(AgentSpacesT&& value) {
    m_agentSpacesHasBeenSet = true;
    m_agentSpaces.emplace_back(std::forward<AgentSpacesT>(value));
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
  ListAgentSpacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<AgentSpace> m_agentSpaces;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_agentSpacesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
