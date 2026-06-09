/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents an asset in an agent space, including its identifier, type,
 * metadata, version, and timestamps.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Asset">AWS
 * API Reference</a></p>
 */
class Asset {
 public:
  AWS_DEVOPSAGENT_API Asset() = default;
  AWS_DEVOPSAGENT_API Asset(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Asset& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for this asset</p>
   */
  inline const Aws::String& GetAssetId() const { return m_assetId; }
  inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
  template <typename AssetIdT = Aws::String>
  void SetAssetId(AssetIdT&& value) {
    m_assetIdHasBeenSet = true;
    m_assetId = std::forward<AssetIdT>(value);
  }
  template <typename AssetIdT = Aws::String>
  Asset& WithAssetId(AssetIdT&& value) {
    SetAssetId(std::forward<AssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of this asset</p>
   */
  inline const Aws::String& GetAssetType() const { return m_assetType; }
  inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
  template <typename AssetTypeT = Aws::String>
  void SetAssetType(AssetTypeT&& value) {
    m_assetTypeHasBeenSet = true;
    m_assetType = std::forward<AssetTypeT>(value);
  }
  template <typename AssetTypeT = Aws::String>
  Asset& WithAssetType(AssetTypeT&& value) {
    SetAssetType(std::forward<AssetTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata for this asset</p>
   */
  inline Aws::Utils::DocumentView GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Utils::Document>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Utils::Document>
  Asset& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of this asset</p>
   */
  inline int GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  inline void SetVersion(int value) {
    m_versionHasBeenSet = true;
    m_version = value;
  }
  inline Asset& WithVersion(int value) {
    SetVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this asset was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  Asset& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when this asset was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Asset& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assetId;

  Aws::String m_assetType;

  Aws::Utils::Document m_metadata;

  int m_version{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_assetIdHasBeenSet = false;
  bool m_assetTypeHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
