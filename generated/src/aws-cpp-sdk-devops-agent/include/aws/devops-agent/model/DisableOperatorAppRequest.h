/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/AuthFlow.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for disabling the Operator App for an AgentSpace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DisableOperatorAppInput">AWS
 * API Reference</a></p>
 */
class DisableOperatorAppRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API DisableOperatorAppRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisableOperatorApp"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the AgentSpace</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  DisableOperatorAppRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication flow configured for the operator App. e.g. idc</p>
   */
  inline AuthFlow GetAuthFlow() const { return m_authFlow; }
  inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
  inline void SetAuthFlow(AuthFlow value) {
    m_authFlowHasBeenSet = true;
    m_authFlow = value;
  }
  inline DisableOperatorAppRequest& WithAuthFlow(AuthFlow value) {
    SetAuthFlow(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  AuthFlow m_authFlow{AuthFlow::NOT_SET};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_authFlowHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
