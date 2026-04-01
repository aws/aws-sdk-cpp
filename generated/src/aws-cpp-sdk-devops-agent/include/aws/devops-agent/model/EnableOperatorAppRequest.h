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
 * <p>Input for enabling the Operator App for an AgentSpace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/EnableOperatorAppInput">AWS
 * API Reference</a></p>
 */
class EnableOperatorAppRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API EnableOperatorAppRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "EnableOperatorApp"; }

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
  EnableOperatorAppRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication flow configured for the operator App. e.g. iam or idc</p>
   */
  inline AuthFlow GetAuthFlow() const { return m_authFlow; }
  inline bool AuthFlowHasBeenSet() const { return m_authFlowHasBeenSet; }
  inline void SetAuthFlow(AuthFlow value) {
    m_authFlowHasBeenSet = true;
    m_authFlow = value;
  }
  inline EnableOperatorAppRequest& WithAuthFlow(AuthFlow value) {
    SetAuthFlow(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role end users assume to access AIDevOps APIs</p>
   */
  inline const Aws::String& GetOperatorAppRoleArn() const { return m_operatorAppRoleArn; }
  inline bool OperatorAppRoleArnHasBeenSet() const { return m_operatorAppRoleArnHasBeenSet; }
  template <typename OperatorAppRoleArnT = Aws::String>
  void SetOperatorAppRoleArn(OperatorAppRoleArnT&& value) {
    m_operatorAppRoleArnHasBeenSet = true;
    m_operatorAppRoleArn = std::forward<OperatorAppRoleArnT>(value);
  }
  template <typename OperatorAppRoleArnT = Aws::String>
  EnableOperatorAppRequest& WithOperatorAppRoleArn(OperatorAppRoleArnT&& value) {
    SetOperatorAppRoleArn(std::forward<OperatorAppRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IdC instance Arn used to create an IdC auth application</p>
   */
  inline const Aws::String& GetIdcInstanceArn() const { return m_idcInstanceArn; }
  inline bool IdcInstanceArnHasBeenSet() const { return m_idcInstanceArnHasBeenSet; }
  template <typename IdcInstanceArnT = Aws::String>
  void SetIdcInstanceArn(IdcInstanceArnT&& value) {
    m_idcInstanceArnHasBeenSet = true;
    m_idcInstanceArn = std::forward<IdcInstanceArnT>(value);
  }
  template <typename IdcInstanceArnT = Aws::String>
  EnableOperatorAppRequest& WithIdcInstanceArn(IdcInstanceArnT&& value) {
    SetIdcInstanceArn(std::forward<IdcInstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OIDC issuer URL of the external Identity Provider</p>
   */
  inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
  inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
  template <typename IssuerUrlT = Aws::String>
  void SetIssuerUrl(IssuerUrlT&& value) {
    m_issuerUrlHasBeenSet = true;
    m_issuerUrl = std::forward<IssuerUrlT>(value);
  }
  template <typename IssuerUrlT = Aws::String>
  EnableOperatorAppRequest& WithIssuerUrl(IssuerUrlT&& value) {
    SetIssuerUrl(std::forward<IssuerUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OIDC client ID for the IdP application</p>
   */
  inline const Aws::String& GetIdpClientId() const { return m_idpClientId; }
  inline bool IdpClientIdHasBeenSet() const { return m_idpClientIdHasBeenSet; }
  template <typename IdpClientIdT = Aws::String>
  void SetIdpClientId(IdpClientIdT&& value) {
    m_idpClientIdHasBeenSet = true;
    m_idpClientId = std::forward<IdpClientIdT>(value);
  }
  template <typename IdpClientIdT = Aws::String>
  EnableOperatorAppRequest& WithIdpClientId(IdpClientIdT&& value) {
    SetIdpClientId(std::forward<IdpClientIdT>(value));
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
  EnableOperatorAppRequest& WithIdpClientSecret(IdpClientSecretT&& value) {
    SetIdpClientSecret(std::forward<IdpClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Identity Provider name (e.g., Entra, Okta, Google)</p>
   */
  inline const Aws::String& GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  template <typename ProviderT = Aws::String>
  void SetProvider(ProviderT&& value) {
    m_providerHasBeenSet = true;
    m_provider = std::forward<ProviderT>(value);
  }
  template <typename ProviderT = Aws::String>
  EnableOperatorAppRequest& WithProvider(ProviderT&& value) {
    SetProvider(std::forward<ProviderT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  AuthFlow m_authFlow{AuthFlow::NOT_SET};

  Aws::String m_operatorAppRoleArn;

  Aws::String m_idcInstanceArn;

  Aws::String m_issuerUrl;

  Aws::String m_idpClientId;

  Aws::String m_idpClientSecret;

  Aws::String m_provider;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_authFlowHasBeenSet = false;
  bool m_operatorAppRoleArnHasBeenSet = false;
  bool m_idcInstanceArnHasBeenSet = false;
  bool m_issuerUrlHasBeenSet = false;
  bool m_idpClientIdHasBeenSet = false;
  bool m_idpClientSecretHasBeenSet = false;
  bool m_providerHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
