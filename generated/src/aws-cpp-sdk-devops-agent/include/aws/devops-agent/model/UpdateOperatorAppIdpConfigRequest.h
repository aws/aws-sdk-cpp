/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Input for updating the external Identity Provider configuration for the
 * Operator App.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateOperatorAppIdpConfigInput">AWS
 * API Reference</a></p>
 */
class UpdateOperatorAppIdpConfigRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateOperatorAppIdpConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOperatorAppIdpConfig"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

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
  UpdateOperatorAppIdpConfigRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OIDC client secret for the IdP application</p>
   */
  inline const Aws::String& GetIdpClientSecret() const { return m_idpClientSecret; }
  inline bool IdpClientSecretHasBeenSet() const { return m_idpClientSecretHasBeenSet; }
  template <typename IdpClientSecretT = Aws::String>
  void SetIdpClientSecret(IdpClientSecretT&& value) {
    m_idpClientSecretHasBeenSet = true;
    m_idpClientSecret = std::forward<IdpClientSecretT>(value);
  }
  template <typename IdpClientSecretT = Aws::String>
  UpdateOperatorAppIdpConfigRequest& WithIdpClientSecret(IdpClientSecretT&& value) {
    SetIdpClientSecret(std::forward<IdpClientSecretT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_idpClientSecret;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_idpClientSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
