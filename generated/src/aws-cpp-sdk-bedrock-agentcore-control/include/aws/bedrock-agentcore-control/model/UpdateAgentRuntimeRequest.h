/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeArtifact.h>
#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ProtocolConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/RequestHeaderConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class UpdateAgentRuntimeRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentRuntime"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the AgentCore Runtime to update.</p>
     */
    inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
    inline bool AgentRuntimeIdHasBeenSet() const { return m_agentRuntimeIdHasBeenSet; }
    template<typename AgentRuntimeIdT = Aws::String>
    void SetAgentRuntimeId(AgentRuntimeIdT&& value) { m_agentRuntimeIdHasBeenSet = true; m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value); }
    template<typename AgentRuntimeIdT = Aws::String>
    UpdateAgentRuntimeRequest& WithAgentRuntimeId(AgentRuntimeIdT&& value) { SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAgentRuntimeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated artifact of the AgentCore Runtime.</p>
     */
    inline const AgentRuntimeArtifact& GetAgentRuntimeArtifact() const { return m_agentRuntimeArtifact; }
    inline bool AgentRuntimeArtifactHasBeenSet() const { return m_agentRuntimeArtifactHasBeenSet; }
    template<typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
    void SetAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) { m_agentRuntimeArtifactHasBeenSet = true; m_agentRuntimeArtifact = std::forward<AgentRuntimeArtifactT>(value); }
    template<typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
    UpdateAgentRuntimeRequest& WithAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) { SetAgentRuntimeArtifact(std::forward<AgentRuntimeArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated IAM role ARN that provides permissions for the AgentCore
     * Runtime.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateAgentRuntimeRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated network configuration for the AgentCore Runtime.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    UpdateAgentRuntimeRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
    inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
    template<typename ProtocolConfigurationT = ProtocolConfiguration>
    void SetProtocolConfiguration(ProtocolConfigurationT&& value) { m_protocolConfigurationHasBeenSet = true; m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value); }
    template<typename ProtocolConfigurationT = ProtocolConfiguration>
    UpdateAgentRuntimeRequest& WithProtocolConfiguration(ProtocolConfigurationT&& value) { SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateAgentRuntimeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updated environment variables to set in the AgentCore Runtime
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    UpdateAgentRuntimeRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    UpdateAgentRuntimeRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The updated authorizer configuration for the AgentCore Runtime.</p>
     */
    inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
    inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) { m_authorizerConfigurationHasBeenSet = true; m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value); }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    UpdateAgentRuntimeRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) { SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated configuration for HTTP request headers that will be passed
     * through to the runtime.</p>
     */
    inline const RequestHeaderConfiguration& GetRequestHeaderConfiguration() const { return m_requestHeaderConfiguration; }
    inline bool RequestHeaderConfigurationHasBeenSet() const { return m_requestHeaderConfigurationHasBeenSet; }
    template<typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
    void SetRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) { m_requestHeaderConfigurationHasBeenSet = true; m_requestHeaderConfiguration = std::forward<RequestHeaderConfigurationT>(value); }
    template<typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
    UpdateAgentRuntimeRequest& WithRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) { SetRequestHeaderConfiguration(std::forward<RequestHeaderConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentRuntimeId;
    bool m_agentRuntimeIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgentRuntimeArtifact m_agentRuntimeArtifact;
    bool m_agentRuntimeArtifactHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    ProtocolConfiguration m_protocolConfiguration;
    bool m_protocolConfigurationHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    AuthorizerConfiguration m_authorizerConfiguration;
    bool m_authorizerConfigurationHasBeenSet = false;

    RequestHeaderConfiguration m_requestHeaderConfiguration;
    bool m_requestHeaderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
