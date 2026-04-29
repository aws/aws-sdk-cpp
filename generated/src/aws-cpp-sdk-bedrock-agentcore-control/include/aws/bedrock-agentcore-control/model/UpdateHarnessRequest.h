/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/HarnessModelConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessSkill.h>
#include <aws/bedrock-agentcore-control/model/HarnessSystemContentBlock.h>
#include <aws/bedrock-agentcore-control/model/HarnessTool.h>
#include <aws/bedrock-agentcore-control/model/HarnessTruncationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/UpdatedAuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/UpdatedHarnessEnvironmentArtifact.h>
#include <aws/bedrock-agentcore-control/model/UpdatedHarnessMemoryConfiguration.h>
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
class UpdateHarnessRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateHarnessRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateHarness"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the harness to update.</p>
   */
  inline const Aws::String& GetHarnessId() const { return m_harnessId; }
  inline bool HarnessIdHasBeenSet() const { return m_harnessIdHasBeenSet; }
  template <typename HarnessIdT = Aws::String>
  void SetHarnessId(HarnessIdT&& value) {
    m_harnessIdHasBeenSet = true;
    m_harnessId = std::forward<HarnessIdT>(value);
  }
  template <typename HarnessIdT = Aws::String>
  UpdateHarnessRequest& WithHarnessId(HarnessIdT&& value) {
    SetHarnessId(std::forward<HarnessIdT>(value));
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
  UpdateHarnessRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that the harness assumes when running. If not
   * specified, the existing value is retained.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  UpdateHarnessRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute environment configuration for the harness. If not specified, the
   * existing value is retained.</p>
   */
  inline const HarnessEnvironmentProviderRequest& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = HarnessEnvironmentProviderRequest>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = HarnessEnvironmentProviderRequest>
  UpdateHarnessRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment artifact for the harness. Use the optionalValue wrapper to
   * set a new value, or set it to null to clear the existing configuration.</p>
   */
  inline const UpdatedHarnessEnvironmentArtifact& GetEnvironmentArtifact() const { return m_environmentArtifact; }
  inline bool EnvironmentArtifactHasBeenSet() const { return m_environmentArtifactHasBeenSet; }
  template <typename EnvironmentArtifactT = UpdatedHarnessEnvironmentArtifact>
  void SetEnvironmentArtifact(EnvironmentArtifactT&& value) {
    m_environmentArtifactHasBeenSet = true;
    m_environmentArtifact = std::forward<EnvironmentArtifactT>(value);
  }
  template <typename EnvironmentArtifactT = UpdatedHarnessEnvironmentArtifact>
  UpdateHarnessRequest& WithEnvironmentArtifact(EnvironmentArtifactT&& value) {
    SetEnvironmentArtifact(std::forward<EnvironmentArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables to set in the harness runtime environment. If
   * specified, this replaces all existing environment variables. If not specified,
   * the existing value is retained.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  UpdateHarnessRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  UpdateHarnessRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UpdatedAuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = UpdatedAuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = UpdatedAuthorizerConfiguration>
  UpdateHarnessRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model configuration for the harness. If not specified, the existing value
   * is retained.</p>
   */
  inline const HarnessModelConfiguration& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = HarnessModelConfiguration>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = HarnessModelConfiguration>
  UpdateHarnessRequest& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt that defines the agent's behavior. If not specified, the
   * existing value is retained.</p>
   */
  inline const Aws::Vector<HarnessSystemContentBlock>& GetSystemPrompt() const { return m_systemPrompt; }
  inline bool SystemPromptHasBeenSet() const { return m_systemPromptHasBeenSet; }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  void SetSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt = std::forward<SystemPromptT>(value);
  }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  UpdateHarnessRequest& WithSystemPrompt(SystemPromptT&& value) {
    SetSystemPrompt(std::forward<SystemPromptT>(value));
    return *this;
  }
  template <typename SystemPromptT = HarnessSystemContentBlock>
  UpdateHarnessRequest& AddSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt.emplace_back(std::forward<SystemPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools available to the agent. If specified, this replaces all existing
   * tools. If not specified, the existing value is retained.</p>
   */
  inline const Aws::Vector<HarnessTool>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  UpdateHarnessRequest& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = HarnessTool>
  UpdateHarnessRequest& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The skills available to the agent. If specified, this replaces all existing
   * skills. If not specified, the existing value is retained.</p>
   */
  inline const Aws::Vector<HarnessSkill>& GetSkills() const { return m_skills; }
  inline bool SkillsHasBeenSet() const { return m_skillsHasBeenSet; }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  void SetSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills = std::forward<SkillsT>(value);
  }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  UpdateHarnessRequest& WithSkills(SkillsT&& value) {
    SetSkills(std::forward<SkillsT>(value));
    return *this;
  }
  template <typename SkillsT = HarnessSkill>
  UpdateHarnessRequest& AddSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills.emplace_back(std::forward<SkillsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools that the agent is allowed to use. If specified, this replaces all
   * existing allowed tools. If not specified, the existing value is retained.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedTools() const { return m_allowedTools; }
  inline bool AllowedToolsHasBeenSet() const { return m_allowedToolsHasBeenSet; }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  void SetAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools = std::forward<AllowedToolsT>(value);
  }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  UpdateHarnessRequest& WithAllowedTools(AllowedToolsT&& value) {
    SetAllowedTools(std::forward<AllowedToolsT>(value));
    return *this;
  }
  template <typename AllowedToolsT = Aws::String>
  UpdateHarnessRequest& AddAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools.emplace_back(std::forward<AllowedToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AgentCore Memory configuration. Use the optionalValue wrapper to set a
   * new value, or set it to null to clear the existing configuration.</p>
   */
  inline const UpdatedHarnessMemoryConfiguration& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = UpdatedHarnessMemoryConfiguration>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = UpdatedHarnessMemoryConfiguration>
  UpdateHarnessRequest& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The truncation configuration for managing conversation context. If not
   * specified, the existing value is retained.</p>
   */
  inline const HarnessTruncationConfiguration& GetTruncation() const { return m_truncation; }
  inline bool TruncationHasBeenSet() const { return m_truncationHasBeenSet; }
  template <typename TruncationT = HarnessTruncationConfiguration>
  void SetTruncation(TruncationT&& value) {
    m_truncationHasBeenSet = true;
    m_truncation = std::forward<TruncationT>(value);
  }
  template <typename TruncationT = HarnessTruncationConfiguration>
  UpdateHarnessRequest& WithTruncation(TruncationT&& value) {
    SetTruncation(std::forward<TruncationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of iterations the agent loop can execute per invocation.
   * If not specified, the existing value is retained.</p>
   */
  inline int GetMaxIterations() const { return m_maxIterations; }
  inline bool MaxIterationsHasBeenSet() const { return m_maxIterationsHasBeenSet; }
  inline void SetMaxIterations(int value) {
    m_maxIterationsHasBeenSet = true;
    m_maxIterations = value;
  }
  inline UpdateHarnessRequest& WithMaxIterations(int value) {
    SetMaxIterations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total number of output tokens the agent can generate across all
   * model calls within a single invocation. If not specified, the existing value is
   * retained.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline UpdateHarnessRequest& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds for the agent loop execution per invocation.
   * If not specified, the existing value is retained.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline UpdateHarnessRequest& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_executionRoleArn;

  HarnessEnvironmentProviderRequest m_environment;

  UpdatedHarnessEnvironmentArtifact m_environmentArtifact;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  UpdatedAuthorizerConfiguration m_authorizerConfiguration;

  HarnessModelConfiguration m_model;

  Aws::Vector<HarnessSystemContentBlock> m_systemPrompt;

  Aws::Vector<HarnessTool> m_tools;

  Aws::Vector<HarnessSkill> m_skills;

  Aws::Vector<Aws::String> m_allowedTools;

  UpdatedHarnessMemoryConfiguration m_memory;

  HarnessTruncationConfiguration m_truncation;

  int m_maxIterations{0};

  int m_maxTokens{0};

  int m_timeoutSeconds{0};
  bool m_harnessIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_environmentArtifactHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_systemPromptHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
  bool m_skillsHasBeenSet = false;
  bool m_allowedToolsHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_truncationHasBeenSet = false;
  bool m_maxIterationsHasBeenSet = false;
  bool m_maxTokensHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
