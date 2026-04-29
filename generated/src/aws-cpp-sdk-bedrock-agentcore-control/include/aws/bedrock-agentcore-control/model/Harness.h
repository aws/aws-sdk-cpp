/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AuthorizerConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentArtifact.h>
#include <aws/bedrock-agentcore-control/model/HarnessEnvironmentProvider.h>
#include <aws/bedrock-agentcore-control/model/HarnessMemoryConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessModelConfiguration.h>
#include <aws/bedrock-agentcore-control/model/HarnessSkill.h>
#include <aws/bedrock-agentcore-control/model/HarnessStatus.h>
#include <aws/bedrock-agentcore-control/model/HarnessSystemContentBlock.h>
#include <aws/bedrock-agentcore-control/model/HarnessTool.h>
#include <aws/bedrock-agentcore-control/model/HarnessTruncationConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Representation of a Harness.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Harness">AWS
 * API Reference</a></p>
 */
class Harness {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Harness() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Harness(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Harness& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the Harness.</p>
   */
  inline const Aws::String& GetHarnessId() const { return m_harnessId; }
  inline bool HarnessIdHasBeenSet() const { return m_harnessIdHasBeenSet; }
  template <typename HarnessIdT = Aws::String>
  void SetHarnessId(HarnessIdT&& value) {
    m_harnessIdHasBeenSet = true;
    m_harnessId = std::forward<HarnessIdT>(value);
  }
  template <typename HarnessIdT = Aws::String>
  Harness& WithHarnessId(HarnessIdT&& value) {
    SetHarnessId(std::forward<HarnessIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Harness.</p>
   */
  inline const Aws::String& GetHarnessName() const { return m_harnessName; }
  inline bool HarnessNameHasBeenSet() const { return m_harnessNameHasBeenSet; }
  template <typename HarnessNameT = Aws::String>
  void SetHarnessName(HarnessNameT&& value) {
    m_harnessNameHasBeenSet = true;
    m_harnessName = std::forward<HarnessNameT>(value);
  }
  template <typename HarnessNameT = Aws::String>
  Harness& WithHarnessName(HarnessNameT&& value) {
    SetHarnessName(std::forward<HarnessNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Harness.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Harness& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Harness.</p>
   */
  inline HarnessStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(HarnessStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Harness& WithStatus(HarnessStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role the Harness assumes when running.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  Harness& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The createdAt time of the Harness.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Harness& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updatedAt time of the Harness.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Harness& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the default model used by the Harness.</p>
   */
  inline const HarnessModelConfiguration& GetModel() const { return m_model; }
  inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
  template <typename ModelT = HarnessModelConfiguration>
  void SetModel(ModelT&& value) {
    m_modelHasBeenSet = true;
    m_model = std::forward<ModelT>(value);
  }
  template <typename ModelT = HarnessModelConfiguration>
  Harness& WithModel(ModelT&& value) {
    SetModel(std::forward<ModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system prompt of the Harness.</p>
   */
  inline const Aws::Vector<HarnessSystemContentBlock>& GetSystemPrompt() const { return m_systemPrompt; }
  inline bool SystemPromptHasBeenSet() const { return m_systemPromptHasBeenSet; }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  void SetSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt = std::forward<SystemPromptT>(value);
  }
  template <typename SystemPromptT = Aws::Vector<HarnessSystemContentBlock>>
  Harness& WithSystemPrompt(SystemPromptT&& value) {
    SetSystemPrompt(std::forward<SystemPromptT>(value));
    return *this;
  }
  template <typename SystemPromptT = HarnessSystemContentBlock>
  Harness& AddSystemPrompt(SystemPromptT&& value) {
    m_systemPromptHasBeenSet = true;
    m_systemPrompt.emplace_back(std::forward<SystemPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tools of the Harness.</p>
   */
  inline const Aws::Vector<HarnessTool>& GetTools() const { return m_tools; }
  inline bool ToolsHasBeenSet() const { return m_toolsHasBeenSet; }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  void SetTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools = std::forward<ToolsT>(value);
  }
  template <typename ToolsT = Aws::Vector<HarnessTool>>
  Harness& WithTools(ToolsT&& value) {
    SetTools(std::forward<ToolsT>(value));
    return *this;
  }
  template <typename ToolsT = HarnessTool>
  Harness& AddTools(ToolsT&& value) {
    m_toolsHasBeenSet = true;
    m_tools.emplace_back(std::forward<ToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The skills of the Harness.</p>
   */
  inline const Aws::Vector<HarnessSkill>& GetSkills() const { return m_skills; }
  inline bool SkillsHasBeenSet() const { return m_skillsHasBeenSet; }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  void SetSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills = std::forward<SkillsT>(value);
  }
  template <typename SkillsT = Aws::Vector<HarnessSkill>>
  Harness& WithSkills(SkillsT&& value) {
    SetSkills(std::forward<SkillsT>(value));
    return *this;
  }
  template <typename SkillsT = HarnessSkill>
  Harness& AddSkills(SkillsT&& value) {
    m_skillsHasBeenSet = true;
    m_skills.emplace_back(std::forward<SkillsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allowed tools of the Harness. All tools are allowed by default.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedTools() const { return m_allowedTools; }
  inline bool AllowedToolsHasBeenSet() const { return m_allowedToolsHasBeenSet; }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  void SetAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools = std::forward<AllowedToolsT>(value);
  }
  template <typename AllowedToolsT = Aws::Vector<Aws::String>>
  Harness& WithAllowedTools(AllowedToolsT&& value) {
    SetAllowedTools(std::forward<AllowedToolsT>(value));
    return *this;
  }
  template <typename AllowedToolsT = Aws::String>
  Harness& AddAllowedTools(AllowedToolsT&& value) {
    m_allowedToolsHasBeenSet = true;
    m_allowedTools.emplace_back(std::forward<AllowedToolsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for truncating model context.</p>
   */
  inline const HarnessTruncationConfiguration& GetTruncation() const { return m_truncation; }
  inline bool TruncationHasBeenSet() const { return m_truncationHasBeenSet; }
  template <typename TruncationT = HarnessTruncationConfiguration>
  void SetTruncation(TruncationT&& value) {
    m_truncationHasBeenSet = true;
    m_truncation = std::forward<TruncationT>(value);
  }
  template <typename TruncationT = HarnessTruncationConfiguration>
  Harness& WithTruncation(TruncationT&& value) {
    SetTruncation(std::forward<TruncationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute environment on which the Harness runs.</p>
   */
  inline const HarnessEnvironmentProvider& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = HarnessEnvironmentProvider>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = HarnessEnvironmentProvider>
  Harness& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment artifact (e.g., container) in which the Harness operates.</p>
   */
  inline const HarnessEnvironmentArtifact& GetEnvironmentArtifact() const { return m_environmentArtifact; }
  inline bool EnvironmentArtifactHasBeenSet() const { return m_environmentArtifactHasBeenSet; }
  template <typename EnvironmentArtifactT = HarnessEnvironmentArtifact>
  void SetEnvironmentArtifact(EnvironmentArtifactT&& value) {
    m_environmentArtifactHasBeenSet = true;
    m_environmentArtifact = std::forward<EnvironmentArtifactT>(value);
  }
  template <typename EnvironmentArtifactT = HarnessEnvironmentArtifact>
  Harness& WithEnvironmentArtifact(EnvironmentArtifactT&& value) {
    SetEnvironmentArtifact(std::forward<EnvironmentArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables exposed in the environment in which the Harness
   * operates.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  Harness& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  Harness& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
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
  Harness& WithAuthorizerConfiguration(AuthorizerConfigurationT&& value) {
    SetAuthorizerConfiguration(std::forward<AuthorizerConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AgentCore Memory instance configuration for short and long term memory.</p>
   */
  inline const HarnessMemoryConfiguration& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = HarnessMemoryConfiguration>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = HarnessMemoryConfiguration>
  Harness& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of iterations in the agent loop allowed before exiting per
   * invocation.</p>
   */
  inline int GetMaxIterations() const { return m_maxIterations; }
  inline bool MaxIterationsHasBeenSet() const { return m_maxIterationsHasBeenSet; }
  inline void SetMaxIterations(int value) {
    m_maxIterationsHasBeenSet = true;
    m_maxIterations = value;
  }
  inline Harness& WithMaxIterations(int value) {
    SetMaxIterations(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum total number of output tokens the agent can generate across all
   * model calls within a single invocation.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline Harness& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum duration per invocation.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline Harness& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason why create or update operations fail.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  Harness& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_harnessId;

  Aws::String m_harnessName;

  Aws::String m_arn;

  HarnessStatus m_status{HarnessStatus::NOT_SET};

  Aws::String m_executionRoleArn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  HarnessModelConfiguration m_model;

  Aws::Vector<HarnessSystemContentBlock> m_systemPrompt;

  Aws::Vector<HarnessTool> m_tools;

  Aws::Vector<HarnessSkill> m_skills;

  Aws::Vector<Aws::String> m_allowedTools;

  HarnessTruncationConfiguration m_truncation;

  HarnessEnvironmentProvider m_environment;

  HarnessEnvironmentArtifact m_environmentArtifact;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  AuthorizerConfiguration m_authorizerConfiguration;

  HarnessMemoryConfiguration m_memory;

  int m_maxIterations{0};

  int m_maxTokens{0};

  int m_timeoutSeconds{0};

  Aws::String m_failureReason;
  bool m_harnessIdHasBeenSet = false;
  bool m_harnessNameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_modelHasBeenSet = false;
  bool m_systemPromptHasBeenSet = false;
  bool m_toolsHasBeenSet = false;
  bool m_skillsHasBeenSet = false;
  bool m_allowedToolsHasBeenSet = false;
  bool m_truncationHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_environmentArtifactHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_authorizerConfigurationHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_maxIterationsHasBeenSet = false;
  bool m_maxTokensHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
