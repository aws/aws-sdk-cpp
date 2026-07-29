/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetConfig.h>
#include <aws/iotsitewise/model/DatasetSource.h>
#include <aws/iotsitewise/model/DatasetTypeEnum.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class CreateDatasetRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API CreateDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  CreateDatasetRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dataset.</p>
   */
  inline const Aws::String& GetDatasetName() const { return m_datasetName; }
  inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
  template <typename DatasetNameT = Aws::String>
  void SetDatasetName(DatasetNameT&& value) {
    m_datasetNameHasBeenSet = true;
    m_datasetName = std::forward<DatasetNameT>(value);
  }
  template <typename DatasetNameT = Aws::String>
  CreateDatasetRequest& WithDatasetName(DatasetNameT&& value) {
    SetDatasetName(std::forward<DatasetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description about the dataset, and its functionality.</p>
   */
  inline const Aws::String& GetDatasetDescription() const { return m_datasetDescription; }
  inline bool DatasetDescriptionHasBeenSet() const { return m_datasetDescriptionHasBeenSet; }
  template <typename DatasetDescriptionT = Aws::String>
  void SetDatasetDescription(DatasetDescriptionT&& value) {
    m_datasetDescriptionHasBeenSet = true;
    m_datasetDescription = std::forward<DatasetDescriptionT>(value);
  }
  template <typename DatasetDescriptionT = Aws::String>
  CreateDatasetRequest& WithDatasetDescription(DatasetDescriptionT&& value) {
    SetDatasetDescription(std::forward<DatasetDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of dataset: a session dataset, a curated dataset, or a connection to
   * an external datasource.</p>
   */
  inline DatasetTypeEnum GetDatasetType() const { return m_datasetType; }
  inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
  inline void SetDatasetType(DatasetTypeEnum value) {
    m_datasetTypeHasBeenSet = true;
    m_datasetType = value;
  }
  inline CreateDatasetRequest& WithDatasetType(DatasetTypeEnum value) {
    SetDatasetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the dataset.</p>
   */
  inline const DatasetConfig& GetDatasetConfig() const { return m_datasetConfig; }
  inline bool DatasetConfigHasBeenSet() const { return m_datasetConfigHasBeenSet; }
  template <typename DatasetConfigT = DatasetConfig>
  void SetDatasetConfig(DatasetConfigT&& value) {
    m_datasetConfigHasBeenSet = true;
    m_datasetConfig = std::forward<DatasetConfigT>(value);
  }
  template <typename DatasetConfigT = DatasetConfig>
  CreateDatasetRequest& WithDatasetConfig(DatasetConfigT&& value) {
    SetDatasetConfig(std::forward<DatasetConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace that contains the dataset. Required for session and
   * curated datasets. Omit this field for datasets that connect to an external
   * datasource.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CreateDatasetRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata for the dataset, provided as key-value pairs.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  CreateDatasetRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  CreateDatasetRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data source for the dataset.</p>
   */
  inline const DatasetSource& GetDatasetSource() const { return m_datasetSource; }
  inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
  template <typename DatasetSourceT = DatasetSource>
  void SetDatasetSource(DatasetSourceT&& value) {
    m_datasetSourceHasBeenSet = true;
    m_datasetSource = std::forward<DatasetSourceT>(value);
  }
  template <typename DatasetSourceT = DatasetSource>
  CreateDatasetRequest& WithDatasetSource(DatasetSourceT&& value) {
    SetDatasetSource(std::forward<DatasetSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique case-sensitive identifier that you can provide to ensure the
   * idempotency of the request. Don't reuse this client token if a new idempotent
   * request is required.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs that contain metadata for the access policy. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
   * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDatasetRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDatasetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_datasetName;

  Aws::String m_datasetDescription;

  DatasetTypeEnum m_datasetType{DatasetTypeEnum::NOT_SET};

  DatasetConfig m_datasetConfig;

  Aws::String m_workspaceName;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  DatasetSource m_datasetSource;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetNameHasBeenSet = false;
  bool m_datasetDescriptionHasBeenSet = false;
  bool m_datasetTypeHasBeenSet = false;
  bool m_datasetConfigHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_datasetSourceHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
