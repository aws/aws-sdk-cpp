/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ComponentConfiguration.h>
#include <aws/bedrock-agentcore-control/model/VersionLineageMetadata.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class GetConfigurationBundleVersionResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetConfigurationBundleVersionResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API GetConfigurationBundleVersionResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API GetConfigurationBundleVersionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleArn() const { return m_bundleArn; }
  template <typename BundleArnT = Aws::String>
  void SetBundleArn(BundleArnT&& value) {
    m_bundleArnHasBeenSet = true;
    m_bundleArn = std::forward<BundleArnT>(value);
  }
  template <typename BundleArnT = Aws::String>
  GetConfigurationBundleVersionResult& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  GetConfigurationBundleVersionResult& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleName() const { return m_bundleName; }
  template <typename BundleNameT = Aws::String>
  void SetBundleName(BundleNameT&& value) {
    m_bundleNameHasBeenSet = true;
    m_bundleName = std::forward<BundleNameT>(value);
  }
  template <typename BundleNameT = Aws::String>
  GetConfigurationBundleVersionResult& WithBundleName(BundleNameT&& value) {
    SetBundleName(std::forward<BundleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the configuration bundle.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetConfigurationBundleVersionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of this configuration bundle version.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  GetConfigurationBundleVersionResult& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of component identifiers to their configurations for this version.</p>
   */
  inline const Aws::Map<Aws::String, ComponentConfiguration>& GetComponents() const { return m_components; }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  void SetComponents(ComponentsT&& value) {
    m_componentsHasBeenSet = true;
    m_components = std::forward<ComponentsT>(value);
  }
  template <typename ComponentsT = Aws::Map<Aws::String, ComponentConfiguration>>
  GetConfigurationBundleVersionResult& WithComponents(ComponentsT&& value) {
    SetComponents(std::forward<ComponentsT>(value));
    return *this;
  }
  template <typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentConfiguration>
  GetConfigurationBundleVersionResult& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
    m_componentsHasBeenSet = true;
    m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version lineage metadata, including parent versions, branch name, and
   * creation source.</p>
   */
  inline const VersionLineageMetadata& GetLineageMetadata() const { return m_lineageMetadata; }
  template <typename LineageMetadataT = VersionLineageMetadata>
  void SetLineageMetadata(LineageMetadataT&& value) {
    m_lineageMetadataHasBeenSet = true;
    m_lineageMetadata = std::forward<LineageMetadataT>(value);
  }
  template <typename LineageMetadataT = VersionLineageMetadata>
  GetConfigurationBundleVersionResult& WithLineageMetadata(LineageMetadataT&& value) {
    SetLineageMetadata(std::forward<LineageMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the configuration bundle was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetConfigurationBundleVersionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this specific version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetVersionCreatedAt() const { return m_versionCreatedAt; }
  template <typename VersionCreatedAtT = Aws::Utils::DateTime>
  void SetVersionCreatedAt(VersionCreatedAtT&& value) {
    m_versionCreatedAtHasBeenSet = true;
    m_versionCreatedAt = std::forward<VersionCreatedAtT>(value);
  }
  template <typename VersionCreatedAtT = Aws::Utils::DateTime>
  GetConfigurationBundleVersionResult& WithVersionCreatedAt(VersionCreatedAtT&& value) {
    SetVersionCreatedAt(std::forward<VersionCreatedAtT>(value));
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
  GetConfigurationBundleVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_bundleArn;

  Aws::String m_bundleId;

  Aws::String m_bundleName;

  Aws::String m_description;

  Aws::String m_versionId;

  Aws::Map<Aws::String, ComponentConfiguration> m_components;

  VersionLineageMetadata m_lineageMetadata;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_versionCreatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bundleArnHasBeenSet = false;
  bool m_bundleIdHasBeenSet = false;
  bool m_bundleNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_componentsHasBeenSet = false;
  bool m_lineageMetadataHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_versionCreatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
