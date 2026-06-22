/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda-microvms/LambdaMicrovmsRequest.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/Capability.h>
#include <aws/lambda-microvms/model/CodeArtifact.h>
#include <aws/lambda-microvms/model/CpuConfiguration.h>
#include <aws/lambda-microvms/model/Hooks.h>
#include <aws/lambda-microvms/model/Logging.h>
#include <aws/lambda-microvms/model/Resources.h>

#include <utility>

namespace Aws {
namespace LambdaMicrovms {
namespace Model {

/**
 */
class CreateMicrovmImageRequest : public LambdaMicrovmsRequest {
 public:
  AWS_LAMBDAMICROVMS_API CreateMicrovmImageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMicrovmImage"; }

  AWS_LAMBDAMICROVMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the Lambda-managed base MicroVM image to build upon. Use
   * ListManagedMicrovmImages to discover available base images.</p>
   */
  inline const Aws::String& GetBaseImageArn() const { return m_baseImageArn; }
  inline bool BaseImageArnHasBeenSet() const { return m_baseImageArnHasBeenSet; }
  template <typename BaseImageArnT = Aws::String>
  void SetBaseImageArn(BaseImageArnT&& value) {
    m_baseImageArnHasBeenSet = true;
    m_baseImageArn = std::forward<BaseImageArnT>(value);
  }
  template <typename BaseImageArnT = Aws::String>
  CreateMicrovmImageRequest& WithBaseImageArn(BaseImageArnT&& value) {
    SetBaseImageArn(std::forward<BaseImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific version of the base MicroVM image to use.</p>
   */
  inline const Aws::String& GetBaseImageVersion() const { return m_baseImageVersion; }
  inline bool BaseImageVersionHasBeenSet() const { return m_baseImageVersionHasBeenSet; }
  template <typename BaseImageVersionT = Aws::String>
  void SetBaseImageVersion(BaseImageVersionT&& value) {
    m_baseImageVersionHasBeenSet = true;
    m_baseImageVersion = std::forward<BaseImageVersionT>(value);
  }
  template <typename BaseImageVersionT = Aws::String>
  CreateMicrovmImageRequest& WithBaseImageVersion(BaseImageVersionT&& value) {
    SetBaseImageVersion(std::forward<BaseImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role assumed during the image build process. This role
   * must have permissions to access the code artifact and any required
   * resources.</p>
   */
  inline const Aws::String& GetBuildRoleArn() const { return m_buildRoleArn; }
  inline bool BuildRoleArnHasBeenSet() const { return m_buildRoleArnHasBeenSet; }
  template <typename BuildRoleArnT = Aws::String>
  void SetBuildRoleArn(BuildRoleArnT&& value) {
    m_buildRoleArnHasBeenSet = true;
    m_buildRoleArn = std::forward<BuildRoleArnT>(value);
  }
  template <typename BuildRoleArnT = Aws::String>
  CreateMicrovmImageRequest& WithBuildRoleArn(BuildRoleArnT&& value) {
    SetBuildRoleArn(std::forward<BuildRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the MicroVM image.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateMicrovmImageRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code artifact containing the application code and metadata for the
   * MicroVM image.</p>
   */
  inline const CodeArtifact& GetCodeArtifact() const { return m_codeArtifact; }
  inline bool CodeArtifactHasBeenSet() const { return m_codeArtifactHasBeenSet; }
  template <typename CodeArtifactT = CodeArtifact>
  void SetCodeArtifact(CodeArtifactT&& value) {
    m_codeArtifactHasBeenSet = true;
    m_codeArtifact = std::forward<CodeArtifactT>(value);
  }
  template <typename CodeArtifactT = CodeArtifact>
  CreateMicrovmImageRequest& WithCodeArtifact(CodeArtifactT&& value) {
    SetCodeArtifact(std::forward<CodeArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for build-time and runtime logs. Specify
   * {"cloudWatch": {"logGroup": "..."}} to stream logs to a custom CloudWatch log
   * group, or {"disabled": {}} to turn off logging.</p>
   */
  inline const Logging& GetLogging() const { return m_logging; }
  inline bool LoggingHasBeenSet() const { return m_loggingHasBeenSet; }
  template <typename LoggingT = Logging>
  void SetLogging(LoggingT&& value) {
    m_loggingHasBeenSet = true;
    m_logging = std::forward<LoggingT>(value);
  }
  template <typename LoggingT = Logging>
  CreateMicrovmImageRequest& WithLogging(LoggingT&& value) {
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
  CreateMicrovmImageRequest& WithEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    SetEgressNetworkConnectors(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename EgressNetworkConnectorsT = Aws::String>
  CreateMicrovmImageRequest& AddEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
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
  CreateMicrovmImageRequest& WithCpuConfigurations(CpuConfigurationsT&& value) {
    SetCpuConfigurations(std::forward<CpuConfigurationsT>(value));
    return *this;
  }
  template <typename CpuConfigurationsT = CpuConfiguration>
  CreateMicrovmImageRequest& AddCpuConfigurations(CpuConfigurationsT&& value) {
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
  CreateMicrovmImageRequest& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Resources>
  CreateMicrovmImageRequest& AddResources(ResourcesT&& value) {
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
  CreateMicrovmImageRequest& WithAdditionalOsCapabilities(AdditionalOsCapabilitiesT&& value) {
    SetAdditionalOsCapabilities(std::forward<AdditionalOsCapabilitiesT>(value));
    return *this;
  }
  inline CreateMicrovmImageRequest& AddAdditionalOsCapabilities(Capability value) {
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
  CreateMicrovmImageRequest& WithHooks(HooksT&& value) {
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
  CreateMicrovmImageRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  CreateMicrovmImageRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MicroVM image. Must be unique within the AWS account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateMicrovmImageRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of key-value pairs that you can attach to the resource. Use tags to
   * categorize resources for cost allocation, access control (ABAC), and
   * organization.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateMicrovmImageRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateMicrovmImageRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier you provide to ensure the idempotency of
   * the request. If you retry a request that completed successfully using the same
   * client token, the operation returns the successful response without performing
   * any further actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateMicrovmImageRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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

  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
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
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
