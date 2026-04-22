/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentArtifact.h>
#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentProviderRequest.h>
#include <aws/bedrock-agentcore-control/model/HarnessMemoryConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessModelConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessSkill.h>
#include <aws/bedrock-agentcore-control/model/HarnessSystemContentBlock.h>
#include <aws/bedrock-agentcore-control/model/HarnessTool.h>
#include <aws/bedrock-agentcore-control/model/HarnessTruncationConfiguration.h>
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
class CreateHarnessRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateHarnessRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateHarness"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the harness. Must start with a letter and contain only
   * alphanumeric characters and underscores.</p>
   */
  inline const Aws::String& GetHarnessName() const { return m_harnessName; }
  inline bool HarnessNameHasBeenSet() const { return m_harnessNameHasBeenSet; }
  template <typename HarnessNameT = Aws::String>
  void SetHarnessName(HarnessNameT&& value) {
    m_harnessNameHasBeenSet = true;
    m_harnessName = std::forward<HarnessNameT>(value);
  }
  template <typename HarnessNameT = Aws::String>
  CreateHarnessRequest& WithHarnessName(HarnessNameT&& value) {
    SetHarnessName(std::forward<HarnessNameT>(value));
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
  CreateHarnessRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that the harness assumes when running. This role must
   * have permissions for the services the agent needs to access, such as Amazon
   * Bedrock for model invocation.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  CreateHarnessRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute environment configuration for the harness, including network and
   * lifecycle settings.</p>
   */
  inline const HarnessEnvironmentProviderRequest& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = HarnessEnvironmentProviderRequest>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = HarnessEnvironmentProviderRequest>
  CreateHarnessRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment artifact for the harness, such as a custom container image
   * containing additional dependencies.</p>
   */
  inline const HarnessEnvironmentArtifact& GetEnvironmentArtifact() const { return m_environmentArtifact; }
  inline bool EnvironmentArtifactHasBeenSet() const { return m_environmentArtifactHasBeenSet; }
  template <typename EnvironmentArtifactT = HarnessEnvironmentArtifact>
  void SetEnvironmentArtifact(EnvironmentArtifactT&& value) {
    m_environmentArtifactHasBeenSet = true;
    m_environmentArtifact = std::forward<EnvironmentArtifactT>(value);
  }
  template <typename EnvironmentArtifactT = HarnessEnvironmentArtifact>
  CreateHarnessRequest& WithEnvironmentArtifact(EnvironmentArtifactT&& value) {
    SetEnvironmentArtifact(std::forward<EnvironmentArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables to set in the harness runtime environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  CreateHarnessRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  CreateHarnessRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const AuthorizerConfiguration& GetAuthorizerConfiguration() const { return m_authorizerConfiguration; }
  inline bool AuthorizerConfigurationHasBeenSet() const { return m_authorizerConfigurationHasBeenSet; }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  void SetAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    m_authorizerConfigurationHasBeenSet = true;
    m_authorizerConfiguration = std::forward<AuthorizerConfigurationT>(value);
  }
  template <typename AuthorizerConfigurationT = AuthorizerConfiguration>
  CreateHarnessRequest& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model configuration for the harness. Supports Amazon Bedrock, OpenAI, and
   * Google Gemini model providers.</p>
   */
  inline const HarnessModelConfiguration& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = HarnessModelConfiguration>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = HarnessModelConfiguration>
  CreateHarnessRequest& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt that defines the agent's behavior and instructions.</p>
   */
  inline const Aws::Vector<HarnessSystemContentBlock>& GetSystemPrompt() const { return m_systemPrompt; }
  inline bool SystemPromptHasBeenSet() const { return m_systemPromptHasBeenSet; }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  void SetSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt = std::forward<SystemPromptT>(value);
  }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  CreateHarnessRequest& WithSystemPrompt(SystemPromptT&& value) {
    SetSystemPrompt(std::forward<SystemPromptT>(value));
    return *this;
  }
  template <typename SystemPromptT = HarnessSystemContentBlock>
  CreateHarnessRequest& AddSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt.emplace_back(std::forward<SystemPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools available to the agent, such as remote MCP servers, AgentCore
   * Gateway, AgentCore Browser, Code Interpreter, or inline functions.</p>
   */
  inline const Aws::Vector<HarnessTool>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  CreateHarnessRequest& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = HarnessTool>
  CreateHarnessRequest& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The skills available to the agent. Skills are bundles of files that the agent
   * can pull into its context on demand.</p>
   */
  inline const Aws::Vector<HarnessSkill>& GetSkills() const { return m_skills; }
  inline bool SkillsHasBeenSet() const { return m_skillsHasBeenSet; }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  void SetSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills = std::forward<SkillsT>(value);
  }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  CreateHarnessRequest& WithSkills(SkillsT&& value) {
    SetSkills(std::forward<SkillsT>(value));
    return *this;
  }
  template <typename SkillsT = HarnessSkill>
  CreateHarnessRequest& AddSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills.emplace_back(std::forward<SkillsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools that the agent is allowed to use. Supports glob patterns such as *
   * for all tools, @builtin for all built-in tools, or @serverName/toolName for
   * specific MCP server tools.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedTools() const { return m_allowedTools; }
  inline bool AllowedToolsHasBeenSet() const { return m_allowedToolsHasBeenSet; }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  void SetAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools = std::forward<AllowedToolsT>(value);
  }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  CreateHarnessRequest& WithAllowedTools(AllowedToolsT&& value) {
    SetAllowedTools(std::forward<AllowedToolsT>(value));
    return *this;
  }
  template <typename AllowedToolsT = Aws::String>
  CreateHarnessRequest& AddAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools.emplace_back(std::forward<AllowedToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AgentCore Memory configuration for persisting conversation context across
   * sessions.</p>
   */
  inline const HarnessMemoryConfiguration& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = HarnessMemoryConfiguration>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = HarnessMemoryConfiguration>
  CreateHarnessRequest& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The truncation configuration for managing conversation context when it
   * exceeds model limits.</p>
   */
  inline const HarnessTruncationConfiguration& GetTruncation() const { return m_truncation; }
  inline bool TruncationHasBeenSet() const { return m_truncationHasBeenSet; }
  template <typename TruncationT = HarnessTruncationConfiguration>
  void SetTruncation(TruncationT&& value) {
    m_truncationHasBeenSet = true;
    m_truncation = std::forward<TruncationT>(value);
  }
  template <typename TruncationT = HarnessTruncationConfiguration>
  CreateHarnessRequest& WithTruncation(TruncationT&& value) {
    SetTruncation(std::forward<TruncationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of iterations the agent loop can execute per
   * invocation.</p>
   */
  inline int GetMaxIterations() const { return m_maxIterations; }
  inline bool MaxIterationsHasBeenSet() const { return m_maxIterationsHasBeenSet; }
  inline void SetMaxIterations(int value) {
    m_maxIterationsHasBeenSet = true;
    m_maxIterations = value;
  }
  inline CreateHarnessRequest& WithMaxIterations(int value) {
    SetMaxIterations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tokens the agent can generate per iteration.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline CreateHarnessRequest& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration in seconds for the agent loop execution per
   * invocation.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline CreateHarnessRequest& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to apply to the harness resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateHarnessRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateHarnessRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessName;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_executionRoleArn;

  HarnessEnvironmentProviderRequest m_environment;

  HarnessEnvironmentArtifact m_environmentArtifact;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  AuthorizerConfiguration m_authorizerConfiguration;

  HarnessModelConfiguration m_model;

  Aws::Vector<HarnessSystemContentBlock> m_systemPrompt;

  Aws::Vector<HarnessTool> m_tools;

  Aws::Vector<HarnessSkill> m_skills;

  Aws::Vector<Aws::String> m_allowedTools;

  HarnessMemoryConfiguration m_memory;

  HarnessTruncationConfiguration m_truncation;

  int m_maxIterations{0};

  int m_maxTokens{0};

  int m_timeoutSeconds{0};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_harnessNameHasBeenSet = false;
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
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
