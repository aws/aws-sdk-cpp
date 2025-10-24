/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeEndpointStatus.h>
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
namespace BedrockAgentCoreControl {
namespace Model {
class DeleteAgentRuntimeEndpointResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DeleteAgentRuntimeEndpointResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DeleteAgentRuntimeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API DeleteAgentRuntimeEndpointResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the AgentCore Runtime endpoint deletion.</p>
   */
  inline AgentRuntimeEndpointStatus GetStatus() const { return m_status; }
  inline void SetStatus(AgentRuntimeEndpointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteAgentRuntimeEndpointResult& WithStatus(AgentRuntimeEndpointStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the AgentCore Runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
  template <typename AgentRuntimeIdT = Aws::String>
  void SetAgentRuntimeId(AgentRuntimeIdT&& value) {
    m_agentRuntimeIdHasBeenSet = true;
    m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value);
  }
  template <typename AgentRuntimeIdT = Aws::String>
  DeleteAgentRuntimeEndpointResult& WithAgentRuntimeId(AgentRuntimeIdT&& value) {
    SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the AgentCore Runtime endpoint.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  DeleteAgentRuntimeEndpointResult& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
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
  DeleteAgentRuntimeEndpointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  AgentRuntimeEndpointStatus m_status{AgentRuntimeEndpointStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_agentRuntimeId;
  bool m_agentRuntimeIdHasBeenSet = false;

  Aws::String m_endpointName;
  bool m_endpointNameHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
