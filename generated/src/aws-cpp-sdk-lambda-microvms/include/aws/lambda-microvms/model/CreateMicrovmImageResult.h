/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
#include <aws/lambda-microvms/model/MicrovmImageState.h>
#include <aws/lambda-microvms/model/Resources.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class CreateMicrovmImageResult {
 public:
  AWS_LAMBDAMICROVMS_API CreateMicrovmImageResult() = default;
  AWS_LAMBDAMICROVMS_API CreateMicrovmImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API CreateMicrovmImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the created MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  CreateMicrovmImageResult& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MicroVM image.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateMicrovmImageResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the MicroVM image.</p>
   */
  inline MicrovmImageState GetState() const { return m_state; }
  inline void SetState(MicrovmImageState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline CreateMicrovmImageResult& WithState(MicrovmImageState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest active version of the MicroVM image.</p>
   */
  inline const Aws::String& GetLatestActiveImageVersion() const { return m_latestActiveImageVersion; }
  template <typename LatestActiveImageVersionT = Aws::String>
  void SetLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    m_latestActiveImageVersionHasBeenSet = true;
    m_latestActiveImageVersion = std::forward<LatestActiveImageVersionT>(value);
  }
  template <typename LatestActiveImageVersionT = Aws::String>
  CreateMicrovmImageResult& WithLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    SetLatestActiveImageVersion(std::forward<LatestActiveImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest failed version of the MicroVM image, if any.</p>
   */
  inline const Aws::String& GetLatestFailedImageVersion() const { return m_latestFailedImageVersion; }
  template <typename LatestFailedImageVersionT = Aws::String>
  void SetLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    m_latestFailedImageVersionHasBeenSet = true;
    m_latestFailedImageVersion = std::forward<LatestFailedImageVersionT>(value);
  }
  template <typename LatestFailedImageVersionT = Aws::String>
  CreateMicrovmImageResult& WithLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    SetLatestFailedImageVersion(std::forward<LatestFailedImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM image was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateMicrovmImageResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the base MicroVM image.</p>
   */
  inline const Aws::String& GetBaseImageArn() const { return m_baseImageArn; }
  template <typename BaseImageArnT = Aws::String>
  void SetBaseImageArn(BaseImageArnT&& value) {
    m_baseImageArnHasBeenSet = true;
    m_baseImageArn = std::forward<BaseImageArnT>(value);
  }
  template <typename BaseImageArnT = Aws::String>
  CreateMicrovmImageResult& WithBaseImageArn(BaseImageArnT&& value) {
    SetBaseImageArn(std::forward<BaseImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific version of the base MicroVM image.</p>
   */
  inline const Aws::String& GetBaseImageVersion() const { return m_baseImageVersion; }
  template <typename BaseImageVersionT = Aws::String>
  void SetBaseImageVersion(BaseImageVersionT&& value) {
    m_baseImageVersionHasBeenSet = true;
    m_baseImageVersion = std::forward<BaseImageVersionT>(value);
  }
  template <typename BaseImageVersionT = Aws::String>
  CreateMicrovmImageResult& WithBaseImageVersion(BaseImageVersionT&& value) {
    SetBaseImageVersion(std::forward<BaseImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM build role.</p>
   */
  inline const Aws::String& GetBuildRoleArn() const { return m_buildRoleArn; }
  template <typename BuildRoleArnT = Aws::String>
  void SetBuildRoleArn(BuildRoleArnT&& value) {
    m_buildRoleArnHasBeenSet = true;
    m_buildRoleArn = std::forward<BuildRoleArnT>(value);
  }
  template <typename BuildRoleArnT = Aws::String>
  CreateMicrovmImageResult& WithBuildRoleArn(BuildRoleArnT&& value) {
    SetBuildRoleArn(std::forward<BuildRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the MicroVM image.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateMicrovmImageResult& WithDescription(DescriptionT&& value) {
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
  template <typename CodeArtifactT = CodeArtifact>
  void SetCodeArtifact(CodeArtifactT&& value) {
    m_codeArtifactHasBeenSet = true;
    m_codeArtifact = std::forward<CodeArtifactT>(value);
  }
  template <typename CodeArtifactT = CodeArtifact>
  CreateMicrovmImageResult& WithCodeArtifact(CodeArtifactT&& value) {
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
  template <typename LoggingT = Logging>
  void SetLogging(LoggingT&& value) {
    m_loggingHasBeenSet = true;
    m_logging = std::forward<LoggingT>(value);
  }
  template <typename LoggingT = Logging>
  CreateMicrovmImageResult& WithLogging(LoggingT&& value) {
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
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  void SetEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    m_egressNetworkConnectorsHasBeenSet = true;
    m_egressNetworkConnectors = std::forward<EgressNetworkConnectorsT>(value);
  }
  template <typename EgressNetworkConnectorsT = Aws::Vector<Aws::String>>
  CreateMicrovmImageResult& WithEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
    SetEgressNetworkConnectors(std::forward<EgressNetworkConnectorsT>(value));
    return *this;
  }
  template <typename EgressNetworkConnectorsT = Aws::String>
  CreateMicrovmImageResult& AddEgressNetworkConnectors(EgressNetworkConnectorsT&& value) {
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
  template <typename CpuConfigurationsT = Aws::Vector<CpuConfiguration>>
  void SetCpuConfigurations(CpuConfigurationsT&& value) {
    m_cpuConfigurationsHasBeenSet = true;
    m_cpuConfigurations = std::forward<CpuConfigurationsT>(value);
  }
  template <typename CpuConfigurationsT = Aws::Vector<CpuConfiguration>>
  CreateMicrovmImageResult& WithCpuConfigurations(CpuConfigurationsT&& value) {
    SetCpuConfigurations(std::forward<CpuConfigurationsT>(value));
    return *this;
  }
  template <typename CpuConfigurationsT = CpuConfiguration>
  CreateMicrovmImageResult& AddCpuConfigurations(CpuConfigurationsT&& value) {
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
  template <typename ResourcesT = Aws::Vector<Resources>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Resources>>
  CreateMicrovmImageResult& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Resources>
  CreateMicrovmImageResult& AddResources(ResourcesT&& value) {
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
  template <typename AdditionalOsCapabilitiesT = Aws::Vector<Capability>>
  void SetAdditionalOsCapabilities(AdditionalOsCapabilitiesT&& value) {
    m_additionalOsCapabilitiesHasBeenSet = true;
    m_additionalOsCapabilities = std::forward<AdditionalOsCapabilitiesT>(value);
  }
  template <typename AdditionalOsCapabilitiesT = Aws::Vector<Capability>>
  CreateMicrovmImageResult& WithAdditionalOsCapabilities(AdditionalOsCapabilitiesT&& value) {
    SetAdditionalOsCapabilities(std::forward<AdditionalOsCapabilitiesT>(value));
    return *this;
  }
  inline CreateMicrovmImageResult& AddAdditionalOsCapabilities(Capability value) {
    m_additionalOsCapabilitiesHasBeenSet = true;
    m_additionalOsCapabilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Hooks& GetHooks() const { return m_hooks; }
  template <typename HooksT = Hooks>
  void SetHooks(HooksT&& value) {
    m_hooksHasBeenSet = true;
    m_hooks = std::forward<HooksT>(value);
  }
  template <typename HooksT = Hooks>
  CreateMicrovmImageResult& WithHooks(HooksT&& value) {
    SetHooks(std::forward<HooksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables set in the MicroVM runtime environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  CreateMicrovmImageResult& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  CreateMicrovmImageResult& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
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
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateMicrovmImageResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateMicrovmImageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM image was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CreateMicrovmImageResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  CreateMicrovmImageResult& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateMicrovmImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_imageArn;

  Aws::String m_name;

  MicrovmImageState m_state{MicrovmImageState::NOT_SET};

  Aws::String m_latestActiveImageVersion;

  Aws::String m_latestFailedImageVersion;

  Aws::Utils::DateTime m_createdAt{};

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

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_imageVersion;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_latestActiveImageVersionHasBeenSet = false;
  bool m_latestFailedImageVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
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
  bool m_tagsHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
