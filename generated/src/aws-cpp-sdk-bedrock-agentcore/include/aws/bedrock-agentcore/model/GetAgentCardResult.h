/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class GetAgentCardResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetAgentCardResult() = default;
  AWS_BEDROCKAGENTCORE_API GetAgentCardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetAgentCardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the session associated with the AgentCore Runtime agent.</p>
   */
  inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
  template <typename RuntimeSessionIdT = Aws::String>
  void SetRuntimeSessionId(RuntimeSessionIdT&& value) {
    m_runtimeSessionIdHasBeenSet = true;
    m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value);
  }
  template <typename RuntimeSessionIdT = Aws::String>
  GetAgentCardResult& WithRuntimeSessionId(RuntimeSessionIdT&& value) {
    SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An agent card document that contains metadata and capabilities for an
   * AgentCore Runtime agent.</p>
   */
  inline Aws::Utils::DocumentView GetAgentCard() const { return m_agentCard; }
  template <typename AgentCardT = Aws::Utils::Document>
  void SetAgentCard(AgentCardT&& value) {
    m_agentCardHasBeenSet = true;
    m_agentCard = std::forward<AgentCardT>(value);
  }
  template <typename AgentCardT = Aws::Utils::Document>
  GetAgentCardResult& WithAgentCard(AgentCardT&& value) {
    SetAgentCard(std::forward<AgentCardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status code of the request.</p>
   */
  inline int GetStatusCode() const { return m_statusCode; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline GetAgentCardResult& WithStatusCode(int value) {
    SetStatusCode(value);
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
  GetAgentCardResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeSessionId;

  Aws::Utils::Document m_agentCard;

  int m_statusCode{0};

  Aws::String m_requestId;
  bool m_runtimeSessionIdHasBeenSet = false;
  bool m_agentCardHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
