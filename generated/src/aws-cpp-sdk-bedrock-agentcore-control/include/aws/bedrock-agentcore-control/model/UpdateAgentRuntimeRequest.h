/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeArtifact.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/FilesystemConfiguration.h>
#include <aws/bedrock-agentcore-control/model/LifecycleConfiguration.h>
#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ProtocolConfiguration.h>
#include <aws/bedrock-agentcore-control/model/RequestHeaderConfiguration.h>
#include <aws/bedrock-agentcore-control/model/RuntimeMetadataConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateAgentRuntimeRequest : public BedrockAgentCoreControlRequest {
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
  template <typename AgentRuntimeIdT = Aws::String>
  void SetAgentRuntimeId(AgentRuntimeIdT&& value) {
    m_agentRuntimeIdHasBeenSet = true;
    m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value);
  }
  template <typename AgentRuntimeIdT = Aws::String>
  UpdateAgentRuntimeRequest& WithAgentRuntimeId(AgentRuntimeIdT&& value) {
    SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated artifact of the AgentCore Runtime.</p>
   */
  inline const AgentRuntimeArtifact& GetAgentRuntimeArtifact() const { return m_agentRuntimeArtifact; }
  inline bool AgentRuntimeArtifactHasBeenSet() const { return m_agentRuntimeArtifactHasBeenSet; }
  template <typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
  void SetAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) {
    m_agentRuntimeArtifactHasBeenSet = true;
    m_agentRuntimeArtifact = std::forward<AgentRuntimeArtifactT>(value);
  }
  template <typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
  UpdateAgentRuntimeRequest& WithAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) {
    SetAgentRuntimeArtifact(std::forward<AgentRuntimeArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated IAM role ARN that provides permissions for the AgentCore
   * Runtime.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  UpdateAgentRuntimeRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated network configuration for the AgentCore Runtime.</p>
   */
  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  UpdateAgentRuntimeRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the AgentCore Runtime.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateAgentRuntimeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated authorizer configuration for the AgentCore Runtime.</p>
   */
  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  UpdateAgentRuntimeRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for HTTP request headers that will be passed
   * through to the runtime.</p>
   */
  inline const RequestHeaderConfiguration& GetRequestHeaderConfiguration() const { return m_requestHeaderConfiguration; }
  inline bool RequestHeaderConfigurationHasBeenSet() const { return m_requestHeaderConfigurationHasBeenSet; }
  template <typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
  void SetRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) {
    m_requestHeaderConfigurationHasBeenSet = true;
    m_requestHeaderConfiguration = std::forward<RequestHeaderConfigurationT>(value);
  }
  template <typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
  UpdateAgentRuntimeRequest& WithRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) {
    SetRequestHeaderConfiguration(std::forward<RequestHeaderConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
  inline bool ProtocolConfigurationHasBeenSet() const { return m_protocolConfigurationHasBeenSet; }
  template <typename ProtocolConfigurationT = ProtocolConfiguration>
  void SetProtocolConfiguration(ProtocolConfigurationT&& value) {
    m_protocolConfigurationHasBeenSet = true;
    m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value);
  }
  template <typename ProtocolConfigurationT = ProtocolConfiguration>
  UpdateAgentRuntimeRequest& WithProtocolConfiguration(ProtocolConfigurationT&& value) {
    SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated life cycle configuration for the AgentCore Runtime.</p>
   */
  inline const LifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
  inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  void SetLifecycleConfiguration(LifecycleConfigurationT&& value) {
    m_lifecycleConfigurationHasBeenSet = true;
    m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value);
  }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  UpdateAgentRuntimeRequest& WithLifecycleConfiguration(LifecycleConfigurationT&& value) {
    SetLifecycleConfiguration(std::forward<LifecycleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for microVM Metadata Service (MMDS) settings for
   * the AgentCore Runtime.</p>
   */
  inline const RuntimeMetadataConfiguration& GetMetadataConfiguration() const { return m_metadataConfiguration; }
  inline bool MetadataConfigurationHasBeenSet() const { return m_metadataConfigurationHasBeenSet; }
  template <typename MetadataConfigurationT = RuntimeMetadataConfiguration>
  void SetMetadataConfiguration(MetadataConfigurationT&& value) {
    m_metadataConfigurationHasBeenSet = true;
    m_metadataConfiguration = std::forward<MetadataConfigurationT>(value);
  }
  template <typename MetadataConfigurationT = RuntimeMetadataConfiguration>
  UpdateAgentRuntimeRequest& WithMetadataConfiguration(MetadataConfigurationT&& value) {
    SetMetadataConfiguration(std::forward<MetadataConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated environment variables to set in the AgentCore Runtime
   * environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  UpdateAgentRuntimeRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  UpdateAgentRuntimeRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated filesystem configurations to mount into the AgentCore
   * Runtime.</p>
   */
  inline const Aws::Vector<FilesystemConfiguration>& GetFilesystemConfigurations() const { return m_filesystemConfigurations; }
  inline bool FilesystemConfigurationsHasBeenSet() const { return m_filesystemConfigurationsHasBeenSet; }
  template <typename FilesystemConfigurationsT = Aws::Vector<FilesystemConfiguration>>
  void SetFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations = std::forward<FilesystemConfigurationsT>(value);
  }
  template <typename FilesystemConfigurationsT = Aws::Vector<FilesystemConfiguration>>
  UpdateAgentRuntimeRequest& WithFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    SetFilesystemConfigurations(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  template <typename FilesystemConfigurationsT = FilesystemConfiguration>
  UpdateAgentRuntimeRequest& AddFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations.emplace_back(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateAgentRuntimeRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentRuntimeId;

  AgentRuntimeArtifact m_agentRuntimeArtifact;

  Aws::String m_roleArn;

  NetworkConfiguration m_networkConfiguration;

  Aws::String m_description;

  AuthorizerConfiguration m_authorizerConfiguration;

  RequestHeaderConfiguration m_requestHeaderConfiguration;

  ProtocolConfiguration m_protocolConfiguration;

  LifecycleConfiguration m_lifecycleConfiguration;

  RuntimeMetadataConfiguration m_metadataConfiguration;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  Aws::Vector<FilesystemConfiguration> m_filesystemConfigurations;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_agentRuntimeIdHasBeenSet = false;
  bool m_agentRuntimeArtifactHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_requestHeaderConfigurationHasBeenSet = false;
  bool m_protocolConfigurationHasBeenSet = false;
  bool m_lifecycleConfigurationHasBeenSet = false;
  bool m_metadataConfigurationHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_filesystemConfigurationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
