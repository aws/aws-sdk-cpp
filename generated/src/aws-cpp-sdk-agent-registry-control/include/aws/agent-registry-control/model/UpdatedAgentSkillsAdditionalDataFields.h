/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsMdDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsPackageDescriptor.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsRepositoryProvider.h>
#include <aws/agent-registry-control/model/UpdatedAgentSkillsSourceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The set of agent skills additional-data fields that can be individually
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/UpdatedAgentSkillsAdditionalDataFields">AWS
 * API Reference</a></p>
 */
class UpdatedAgentSkillsAdditionalDataFields {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields() = default;
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API UpdatedAgentSkillsAdditionalDataFields& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The patch for the agent skills markdown descriptor field.</p>
   */
  inline const UpdatedAgentSkillsMdDescriptor& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = UpdatedAgentSkillsMdDescriptor>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = UpdatedAgentSkillsMdDescriptor>
  UpdatedAgentSkillsAdditionalDataFields& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the skill package source field.</p>
   */
  inline const UpdatedAgentSkillsPackageDescriptor& GetSkillPackage() const { return m_skillPackage; }
  inline bool SkillPackageHasBeenSet() const { return m_skillPackageHasBeenSet; }
  template <typename SkillPackageT = UpdatedAgentSkillsPackageDescriptor>
  void SetSkillPackage(SkillPackageT&& value) {
    m_skillPackageHasBeenSet = true;
    m_skillPackage = std::forward<SkillPackageT>(value);
  }
  template <typename SkillPackageT = UpdatedAgentSkillsPackageDescriptor>
  UpdatedAgentSkillsAdditionalDataFields& WithSkillPackage(SkillPackageT&& value) {
    SetSkillPackage(std::forward<SkillPackageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the repository provider field.</p>
   */
  inline const UpdatedAgentSkillsRepositoryProvider& GetRepositoryProvider() const { return m_repositoryProvider; }
  inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
  template <typename RepositoryProviderT = UpdatedAgentSkillsRepositoryProvider>
  void SetRepositoryProvider(RepositoryProviderT&& value) {
    m_repositoryProviderHasBeenSet = true;
    m_repositoryProvider = std::forward<RepositoryProviderT>(value);
  }
  template <typename RepositoryProviderT = UpdatedAgentSkillsRepositoryProvider>
  UpdatedAgentSkillsAdditionalDataFields& WithRepositoryProvider(RepositoryProviderT&& value) {
    SetRepositoryProvider(std::forward<RepositoryProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The patch for the source configuration field.</p>
   */
  inline const UpdatedAgentSkillsSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = UpdatedAgentSkillsSourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = UpdatedAgentSkillsSourceConfiguration>
  UpdatedAgentSkillsAdditionalDataFields& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  UpdatedAgentSkillsMdDescriptor m_skillMd;

  UpdatedAgentSkillsPackageDescriptor m_skillPackage;

  UpdatedAgentSkillsRepositoryProvider m_repositoryProvider;

  UpdatedAgentSkillsSourceConfiguration m_sourceConfiguration;
  bool m_skillMdHasBeenSet = false;
  bool m_skillPackageHasBeenSet = false;
  bool m_repositoryProviderHasBeenSet = false;
  bool m_sourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
