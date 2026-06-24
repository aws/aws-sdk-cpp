/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Capability.h>
#include <aws/lambda-microvms/model/CodeArtifact.h>
#include <aws/lambda-microvms/model/CpuConfiguration.h>
#include <aws/lambda-microvms/model/Hooks.h>
#include <aws/lambda-microvms/model/Logging.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionState.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionStatus.h>
#include <aws/lambda-microvms/model/Resources.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Contains summary information about a version of a MicroVM
 * image.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/MicrovmImageVersionSummary">AWS
 * API Reference</a></p>
 */
class MicrovmImageVersionSummary {
 public:
  AWS_LAMBDAMICROVMS_API MicrovmImageVersionSummary() = default;
  AWS_LAMBDAMICROVMS_API MicrovmImageVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API MicrovmImageVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the base MicroVM image used.</p>
   */
  inline const Aws::String& GetBaseImageArn() const { return m_baseImageArn; }
  inline bool BaseImageArnHasBeenSet() const { return m_baseImageArnHasBeenSet; }
  template <typename BaseImageArnT = Aws::String>
  void SetBaseImageArn(BaseImageArnT&& value) {
    m_baseImageArnHasBeenSet = true;
    m_baseImageArn = std::forward<BaseImageArnT>(value);
  }
  template <typename BaseImageArnT = Aws::String>
  MicrovmImageVersionSummary& WithBaseImageArn(BaseImageArnT&& value) {
    SetBaseImageArn(std::forward<BaseImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific version of the base MicroVM image.</p>
   */
  inline const Aws::String& GetBaseImageVersion() const { return m_baseImageVersion; }
  inline bool BaseImageVersionHasBeenSet() const { return m_baseImageVersionHasBeenSet; }
  template <typename BaseImageVersionT = Aws::String>
  void SetBaseImageVersion(BaseImageVersionT&& value) {
    m_baseImageVersionHasBeenSet = true;
    m_baseImageVersion = std::forward<BaseImageVersionT>(value);
  }
  template <typename BaseImageVersionT = Aws::String>
  MicrovmImageVersionSummary& WithBaseImageVersion(BaseImageVersionT&& value) {
    SetBaseImageVersion(std::forward<BaseImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM build role.</p>
   */
  inline const Aws::String& GetBuildRoleArn() const { return m_buildRoleArn; }
  inline bool BuildRoleArnHasBeenSet() const { return m_buildRoleArnHasBeenSet; }
  template <typename BuildRoleArnT = Aws::String>
  void SetBuildRoleArn(BuildRoleArnT&& value) {
    m_buildRoleArnHasBeenSet = true;
    m_buildRoleArn = std::forward<BuildRoleArnT>(value);
  }
  template <typename BuildRoleArnT = Aws::String>
  MicrovmImageVersionSummary& WithBuildRoleArn(BuildRoleArnT&& value) {
    SetBuildRoleArn(std::forward<BuildRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the version.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  MicrovmImageVersionSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code artifact for this version.</p>
   */
  inline const CodeArtifact& GetCodeArtifact() const { return m_codeArtifact; }
  inline bool CodeArtifactHasBeenSet() const { return m_codeArtifactHasBeenSet; }
  template <typename CodeArtifactT = CodeArtifact>
  void SetCodeArtifact(CodeArtifactT&& value) {
    m_codeArtifactHasBeenSet = true;
    m_codeArtifact = std::forward<CodeArtifactT>(value);
  }
  template <typename CodeArtifactT = CodeArtifact>
  MicrovmImageVersionSummary& WithCodeArtifact(CodeArtifactT&& value) {
    SetCodeArtifact(std::forward<CodeArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for this version.</p>
   */
  inline const Logging& GetLogging() const { return m_logging; }
  inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
  template <typename LoggingT = Logging>
  void SetLogging(LoggingT&& value) {
    m_loggingHasBeenSet = true;
    m_logging = std::forward<LoggingT>(value);
  }
  template <typename LoggingT = Logging>
  MicrovmImageVersionSummary& WithLogging(LoggingT&& value) {
    SetLogging(std::forward<LoggingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of egress network connectors available to the MicroVM at
   * runtime.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEgressNetworkConnectors() const { return m_egressNetworkConnectors; }
  inline bool EgressNetworkConnectorsHasBeenSet() const { return m_egressNetworkConnectorsHasBeenSet; }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors = std::forward<EgressNetworkConnectorsT>(value);
  }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  MicrovmImageVersionSummary& WithEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    SetEgressNetworkConnectors(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename EgressNetworkConnectorsT = Aws::String>
  MicrovmImageVersionSummary& AddEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors.emplace_back(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of supported CPU configurations for the MicroVM.</p>
   */
  inline const Aws::Vector<CpuConfiguration>& GetCpuConfigurations() const { return m_cpuConfigurations; }
  inline bool CpuConfigurationsHasBeenSet() const { return m_cpuConfigurationsHasBeenSet; }
  template <typename CpuConfigurationsT = Aws::Vector<CpuConfiguration>>
  void SetCpuConfigurations(CpuConfigurationsT&& value) {
    m_cpuConfigurationsHasBeenSet = true;
    m_cpuConfigurations = std::forward<CpuConfigurationsT>(value);
  }
  template <typename CpuConfigurationsT = Aws::Vector<CpuConfiguration>>
  MicrovmImageVersionSummary& WithCpuConfigurations(CpuConfigurationsT&& value) {
    SetCpuConfigurations(std::forward<CpuConfigurationsT>(value));
    return *this;
  }
  template <typename CpuConfigurationsT = CpuConfiguration>
  MicrovmImageVersionSummary& AddCpuConfigurations(CpuConfigurationsT&& value) {
    m_cpuConfigurationsHasBeenSet = true;
    m_cpuConfigurations.emplace_back(std::forward<CpuConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource requirements for the MicroVM.</p>
   */
  inline const Aws::Vector<Resources>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Resources>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Resources>>
  MicrovmImageVersionSummary& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Resources>
  MicrovmImageVersionSummary& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional OS capabilities granted to the MicroVM runtime environment.</p>
   */
  inline const Aws::Vector<Capability>& GetAdditionalOsCapabilities() const { return m_additionalOsCapabilities; }
  inline bool AdditionalOsCapabilitiesHasBeenSet() const { return m_additionalOsCapabilitiesHasBeenSet; }
  template <typename AdditionalOsCapabilitiesT = Aws::Vector<Capability>>
  void SetAdditionalOsCapabilities(AdditionalOsCapabilitiesT&& value) {
    m_additionalOsCapabilitiesHasBeenSet = true;
    m_additionalOsCapabilities = std::forward<AdditionalOsCapabilitiesT>(value);
  }
  template <typename AdditionalOsCapabilitiesT = Aws::Vector<Capability>>
  MicrovmImageVersionSummary& WithAdditionalOsCapabilities(AdditionalOsCapabilitiesT&& value) {
    SetAdditionalOsCapabilities(std::forward<AdditionalOsCapabilitiesT>(value));
    return *this;
  }
  inline MicrovmImageVersionSummary& AddAdditionalOsCapabilities(Capability value) {
    m_additionalOsCapabilitiesHasBeenSet = true;
    m_additionalOsCapabilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Hooks& GetHooks() const { return m_hooks; }
  inline bool HooksHasBeenSet() const { return m_hooksHasBeenSet; }
  template <typename HooksT = Hooks>
  void SetHooks(HooksT&& value) {
    m_hooksHasBeenSet = true;
    m_hooks = std::forward<HooksT>(value);
  }
  template <typename HooksT = Hooks>
  MicrovmImageVersionSummary& WithHooks(HooksT&& value) {
    SetHooks(std::forward<HooksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables set in the MicroVM runtime environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  MicrovmImageVersionSummary& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  MicrovmImageVersionSummary& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  MicrovmImageVersionSummary& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  MicrovmImageVersionSummary& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the version.</p>
   */
  inline MicrovmImageVersionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(MicrovmImageVersionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline MicrovmImageVersionSummary& WithState(MicrovmImageVersionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability status of the version: ACTIVE (can be used by RunMicrovm) or
   * INACTIVE (blocked from launching new MicroVMs).</p>
   */
  inline MicrovmImageVersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(MicrovmImageVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MicrovmImageVersionSummary& WithStatus(MicrovmImageVersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MicrovmImageVersionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the version was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  MicrovmImageVersionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current state. For example, one or more builds failed.</p>
   */
  inline const Aws::String& GetStateReason() const { return m_stateReason; }
  inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
  template <typename StateReasonT = Aws::String>
  void SetStateReason(StateReasonT&& value) {
    m_stateReasonHasBeenSet = true;
    m_stateReason = std::forward<StateReasonT>(value);
  }
  template <typename StateReasonT = Aws::String>
  MicrovmImageVersionSummary& WithStateReason(StateReasonT&& value) {
    SetStateReason(std::forward<StateReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs associated with the version.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  MicrovmImageVersionSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  MicrovmImageVersionSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseImageArn;

  Aws::String m_baseImageVersion;

  Aws::String m_buildRoleArn;

  Aws::String m_description;

  CodeArtifact m_codeArtifact;

  Logging m_logging;

  Aws::Vector<Aws::String> m_egressNetworkConnectors;

  Aws::Vector<CpuConfiguration> m_cpuConfigurations;

  Aws::Vector<Resources> m_resources;

  Aws::Vector<Capability> m_additionalOsCapabilities;

  Hooks m_hooks;

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  Aws::String m_imageArn;

  Aws::String m_imageVersion;

  MicrovmImageVersionState m_state{MicrovmImageVersionState::NOT_SET};

  MicrovmImageVersionStatus m_status{MicrovmImageVersionStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_stateReason;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_baseImageArnHasBeenSet = false;
  bool m_baseImageVersionHasBeenSet = false;
  bool m_buildRoleArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_codeArtifactHasBeenSet = false;
  bool m_loggingHasBeenSet = false;
  bool m_egressNetworkConnectorsHasBeenSet = false;
  bool m_cpuConfigurationsHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_additionalOsCapabilitiesHasBeenSet = false;
  bool m_hooksHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_imageArnHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_stateReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
