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

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class UpdateDatasetRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API UpdateDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataset"; }

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
  UpdateDatasetRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace that contains the dataset.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  UpdateDatasetRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
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
  UpdateDatasetRequest& WithDatasetName(DatasetNameT&& value) {
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
  UpdateDatasetRequest& WithDatasetDescription(DatasetDescriptionT&& value) {
    SetDatasetDescription(std::forward<DatasetDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated configuration for the dataset.</p>
   */
  inline const DatasetConfig& GetDatasetConfig() const { return m_datasetConfig; }
  inline bool DatasetConfigHasBeenSet() const { return m_datasetConfigHasBeenSet; }
  template <typename DatasetConfigT = DatasetConfig>
  void SetDatasetConfig(DatasetConfigT&& value) {
    m_datasetConfigHasBeenSet = true;
    m_datasetConfig = std::forward<DatasetConfigT>(value);
  }
  template <typename DatasetConfigT = DatasetConfig>
  UpdateDatasetRequest& WithDatasetConfig(DatasetConfigT&& value) {
    SetDatasetConfig(std::forward<DatasetConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated metadata for the dataset.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  UpdateDatasetRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  UpdateDatasetRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
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
  UpdateDatasetRequest& WithDatasetSource(DatasetSourceT&& value) {
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
  UpdateDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_workspaceName;

  Aws::String m_datasetName;

  Aws::String m_datasetDescription;

  DatasetConfig m_datasetConfig;

  Aws::Map<Aws::String, Aws::String> m_metadata;

  DatasetSource m_datasetSource;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_datasetIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_datasetNameHasBeenSet = false;
  bool m_datasetDescriptionHasBeenSet = false;
  bool m_datasetConfigHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
  bool m_datasetSourceHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
