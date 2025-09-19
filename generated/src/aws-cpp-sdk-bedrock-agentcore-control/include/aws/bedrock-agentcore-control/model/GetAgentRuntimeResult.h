/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeArtifact.h>
#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ProtocolConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/RequestHeaderConfiguration.h>
#include <aws/bedrock-agentcore-control/model/AgentRuntimeStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{
  class GetAgentRuntimeResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetAgentRuntimeResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API GetAgentRuntimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API GetAgentRuntimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
    template<typename AgentRuntimeArnT = Aws::String>
    void SetAgentRuntimeArn(AgentRuntimeArnT&& value) { m_agentRuntimeArnHasBeenSet = true; m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value); }
    template<typename AgentRuntimeArnT = Aws::String>
    GetAgentRuntimeResult& WithAgentRuntimeArn(AgentRuntimeArnT&& value) { SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload identity details for the AgentCore Runtime.</p>
     */
    inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { m_workloadIdentityDetailsHasBeenSet = true; m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value); }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    GetAgentRuntimeResult& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeName() const { return m_agentRuntimeName; }
    template<typename AgentRuntimeNameT = Aws::String>
    void SetAgentRuntimeName(AgentRuntimeNameT&& value) { m_agentRuntimeNameHasBeenSet = true; m_agentRuntimeName = std::forward<AgentRuntimeNameT>(value); }
    template<typename AgentRuntimeNameT = Aws::String>
    GetAgentRuntimeResult& WithAgentRuntimeName(AgentRuntimeNameT&& value) { SetAgentRuntimeName(std::forward<AgentRuntimeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAgentRuntimeResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
    template<typename AgentRuntimeIdT = Aws::String>
    void SetAgentRuntimeId(AgentRuntimeIdT&& value) { m_agentRuntimeIdHasBeenSet = true; m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value); }
    template<typename AgentRuntimeIdT = Aws::String>
    GetAgentRuntimeResult& WithAgentRuntimeId(AgentRuntimeIdT&& value) { SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeVersion() const { return m_agentRuntimeVersion; }
    template<typename AgentRuntimeVersionT = Aws::String>
    void SetAgentRuntimeVersion(AgentRuntimeVersionT&& value) { m_agentRuntimeVersionHasBeenSet = true; m_agentRuntimeVersion = std::forward<AgentRuntimeVersionT>(value); }
    template<typename AgentRuntimeVersionT = Aws::String>
    GetAgentRuntimeResult& WithAgentRuntimeVersion(AgentRuntimeVersionT&& value) { SetAgentRuntimeVersion(std::forward<AgentRuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the AgentCore Runtime was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetAgentRuntimeResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the AgentCore Runtime was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetAgentRuntimeResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role ARN that provides permissions for the AgentCore Runtime.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetAgentRuntimeResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The artifact of the AgentCore Runtime.</p>
     */
    inline const AgentRuntimeArtifact& GetAgentRuntimeArtifact() const { return m_agentRuntimeArtifact; }
    template<typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
    void SetAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) { m_agentRuntimeArtifactHasBeenSet = true; m_agentRuntimeArtifact = std::forward<AgentRuntimeArtifactT>(value); }
    template<typename AgentRuntimeArtifactT = AgentRuntimeArtifact>
    GetAgentRuntimeResult& WithAgentRuntimeArtifact(AgentRuntimeArtifactT&& value) { SetAgentRuntimeArtifact(std::forward<AgentRuntimeArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for the AgentCore Runtime.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    GetAgentRuntimeResult& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProtocolConfiguration& GetProtocolConfiguration() const { return m_protocolConfiguration; }
    template<typename ProtocolConfigurationT = ProtocolConfiguration>
    void SetProtocolConfiguration(ProtocolConfigurationT&& value) { m_protocolConfigurationHasBeenSet = true; m_protocolConfiguration = std::forward<ProtocolConfigurationT>(value); }
    template<typename ProtocolConfigurationT = ProtocolConfiguration>
    GetAgentRuntimeResult& WithProtocolConfiguration(ProtocolConfigurationT&& value) { SetProtocolConfiguration(std::forward<ProtocolConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment variables set in the AgentCore Runtime environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    GetAgentRuntimeResult& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    GetAgentRuntimeResult& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The authorizer configuration for the AgentCore Runtime.</p>
     */
    inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) { m_authorizerConfigurationHasBeenSet = true; m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value); }
    template<typename AuthorizerConfigurationT = AuthorizerConfiguration>
    GetAgentRuntimeResult& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) { SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for HTTP request headers that will be passed through to the
     * runtime.</p>
     */
    inline const RequestHeaderConfiguration& GetRequestHeaderConfiguration() const { return m_requestHeaderConfiguration; }
    template<typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
    void SetRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) { m_requestHeaderConfigurationHasBeenSet = true; m_requestHeaderConfiguration = std::forward<RequestHeaderConfigurationT>(value); }
    template<typename RequestHeaderConfigurationT = RequestHeaderConfiguration>
    GetAgentRuntimeResult& WithRequestHeaderConfiguration(RequestHeaderConfigurationT&& value) { SetRequestHeaderConfiguration(std::forward<RequestHeaderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the AgentCore Runtime.</p>
     */
    inline AgentRuntimeStatus GetStatus() const { return m_status; }
    inline void SetStatus(AgentRuntimeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAgentRuntimeResult& WithStatus(AgentRuntimeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAgentRuntimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentRuntimeArn;
    bool m_agentRuntimeArnHasBeenSet = false;

    WorkloadIdentityDetails m_workloadIdentityDetails;
    bool m_workloadIdentityDetailsHasBeenSet = false;

    Aws::String m_agentRuntimeName;
    bool m_agentRuntimeNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_agentRuntimeId;
    bool m_agentRuntimeIdHasBeenSet = false;

    Aws::String m_agentRuntimeVersion;
    bool m_agentRuntimeVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    AgentRuntimeArtifact m_agentRuntimeArtifact;
    bool m_agentRuntimeArtifactHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    ProtocolConfiguration m_protocolConfiguration;
    bool m_protocolConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    AuthorizerConfiguration m_authorizerConfiguration;
    bool m_authorizerConfigurationHasBeenSet = false;

    RequestHeaderConfiguration m_requestHeaderConfiguration;
    bool m_requestHeaderConfigurationHasBeenSet = false;

    AgentRuntimeStatus m_status{AgentRuntimeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
