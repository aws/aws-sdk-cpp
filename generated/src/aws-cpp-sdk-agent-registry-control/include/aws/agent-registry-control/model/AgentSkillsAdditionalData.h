/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AgentSkillsMdDescriptor.h>
#include <aws/agent-registry-control/model/AgentSkillsPackageDescriptor.h>
#include <aws/agent-registry-control/model/AgentSkillsRepositoryProvider.h>
#include <aws/agent-registry-control/model/AgentSkillsSourceConfiguration.h>

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
 * <p>Additional data associated with an agent skills definition descriptor: the
 * skill's SKILL.md and the source that the registry synchronizes the skill from. A
 * record synchronizes from one source at most, either <code>skillMd.source</code>
 * for SKILL.md only or <code>skillPackage.source</code> for the full skill
 * package. When the record has a skill package or a synchronized source, the
 * registry sets <code>skillMd.data</code> from the SKILL.md in that package or
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/AgentSkillsAdditionalData">AWS
 * API Reference</a></p>
 */
class AgentSkillsAdditionalData {
 public:
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData() = default;
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API AgentSkillsAdditionalData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The markdown skill content associated with an agent skills definition.</p>
   */
  inline const AgentSkillsMdDescriptor& GetSkillMd() const { return m_skillMd; }
  inline bool SkillMdHasBeenSet() const { return m_skillMdHasBeenSet; }
  template <typename SkillMdT = AgentSkillsMdDescriptor>
  void SetSkillMd(SkillMdT&& value) {
    m_skillMdHasBeenSet = true;
    m_skillMd = std::forward<SkillMdT>(value);
  }
  template <typename SkillMdT = AgentSkillsMdDescriptor>
  AgentSkillsAdditionalData& WithSkillMd(SkillMdT&& value) {
    SetSkillMd(std::forward<SkillMdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source that the registry synchronizes the full skill package from. The
   * registry validates and stores the package, sets <code>skillMd.data</code> from
   * its SKILL.md, and returns the package in the <code>artifact</code> member of
   * <code>GetRegistryRecord</code>. You can't set both this source and
   * <code>skillMd.source</code>.</p>
   */
  inline const AgentSkillsPackageDescriptor& GetSkillPackage() const { return m_skillPackage; }
  inline bool SkillPackageHasBeenSet() const { return m_skillPackageHasBeenSet; }
  template <typename SkillPackageT = AgentSkillsPackageDescriptor>
  void SetSkillPackage(SkillPackageT&& value) {
    m_skillPackageHasBeenSet = true;
    m_skillPackage = std::forward<SkillPackageT>(value);
  }
  template <typename SkillPackageT = AgentSkillsPackageDescriptor>
  AgentSkillsAdditionalData& WithSkillPackage(SkillPackageT&& value) {
    SetSkillPackage(std::forward<SkillPackageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The repository provider of the record's skill source. Set it to
   * <code>GITHUB</code> when <code>skillMd.source</code> or
   * <code>skillPackage.source</code> is a GitHub folder URL. The registry treats an
   * <code>https://</code> source as a GitHub source only when this member is set.
   * Don't set it for an Amazon S3 source.</p>
   */
  inline AgentSkillsRepositoryProvider GetRepositoryProvider() const { return m_repositoryProvider; }
  inline bool RepositoryProviderHasBeenSet() const { return m_repositoryProviderHasBeenSet; }
  inline void SetRepositoryProvider(AgentSkillsRepositoryProvider value) {
    m_repositoryProviderHasBeenSet = true;
    m_repositoryProvider = value;
  }
  inline AgentSkillsAdditionalData& WithRepositoryProvider(AgentSkillsRepositoryProvider value) {
    SetRepositoryProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider-specific settings of the record's skill source. For an Amazon S3
   * source, <code>s3.bucketOwnerAccountId</code> specifies the account that owns the
   * source bucket.</p>
   */
  inline const AgentSkillsSourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
  inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
  template <typename SourceConfigurationT = AgentSkillsSourceConfiguration>
  void SetSourceConfiguration(SourceConfigurationT&& value) {
    m_sourceConfigurationHasBeenSet = true;
    m_sourceConfiguration = std::forward<SourceConfigurationT>(value);
  }
  template <typename SourceConfigurationT = AgentSkillsSourceConfiguration>
  AgentSkillsAdditionalData& WithSourceConfiguration(SourceConfigurationT&& value) {
    SetSourceConfiguration(std::forward<SourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AgentSkillsMdDescriptor m_skillMd;

  AgentSkillsPackageDescriptor m_skillPackage;

  AgentSkillsRepositoryProvider m_repositoryProvider{AgentSkillsRepositoryProvider::NOT_SET};

  AgentSkillsSourceConfiguration m_sourceConfiguration;
  bool m_skillMdHasBeenSet = false;
  bool m_skillPackageHasBeenSet = false;
  bool m_repositoryProviderHasBeenSet = false;
  bool m_sourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
