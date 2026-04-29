/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/VersionLineageMetadata.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Summary information about a configuration bundle version.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ConfigurationBundleVersionSummary">AWS
 * API Reference</a></p>
 */
class ConfigurationBundleVersionSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleVersionSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ConfigurationBundleVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleArn() const { return m_bundleArn; }
  inline bool BundleArnHasBeenSet() const { return m_bundleArnHasBeenSet; }
  template <typename BundleArnT = Aws::String>
  void SetBundleArn(BundleArnT&& value) {
    m_bundleArnHasBeenSet = true;
    m_bundleArn = std::forward<BundleArnT>(value);
  }
  template <typename BundleArnT = Aws::String>
  ConfigurationBundleVersionSummary& WithBundleArn(BundleArnT&& value) {
    SetBundleArn(std::forward<BundleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the configuration bundle.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  ConfigurationBundleVersionSummary& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of this configuration bundle version.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  ConfigurationBundleVersionSummary& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version lineage metadata, including parent versions, branch name, and
   * creation source.</p>
   */
  inline const VersionLineageMetadata& GetLineageMetadata() const { return m_lineageMetadata; }
  inline bool LineageMetadataHasBeenSet() const { return m_lineageMetadataHasBeenSet; }
  template <typename LineageMetadataT = VersionLineageMetadata>
  void SetLineageMetadata(LineageMetadataT&& value) {
    m_lineageMetadataHasBeenSet = true;
    m_lineageMetadata = std::forward<LineageMetadataT>(value);
  }
  template <typename LineageMetadataT = VersionLineageMetadata>
  ConfigurationBundleVersionSummary& WithLineageMetadata(LineageMetadataT&& value) {
    SetLineageMetadata(std::forward<LineageMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetVersionCreatedAt() const { return m_versionCreatedAt; }
  inline bool VersionCreatedAtHasBeenSet() const { return m_versionCreatedAtHasBeenSet; }
  template <typename VersionCreatedAtT = Aws::Utils::DateTime>
  void SetVersionCreatedAt(VersionCreatedAtT&& value) {
    m_versionCreatedAtHasBeenSet = true;
    m_versionCreatedAt = std::forward<VersionCreatedAtT>(value);
  }
  template <typename VersionCreatedAtT = Aws::Utils::DateTime>
  ConfigurationBundleVersionSummary& WithVersionCreatedAt(VersionCreatedAtT&& value) {
    SetVersionCreatedAt(std::forward<VersionCreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleArn;

  Aws::String m_bundleId;

  Aws::String m_versionId;

  VersionLineageMetadata m_lineageMetadata;

  Aws::Utils::DateTime m_versionCreatedAt{};
  bool m_bundleArnHasBeenSet = false;
  bool m_bundleIdHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_lineageMetadataHasBeenSet = false;
  bool m_versionCreatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
