/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssociateDataSegmentEntry.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class BatchAssociateDataSegmentsToDatasetRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API BatchAssociateDataSegmentsToDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateDataSegmentsToDataset"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the curated dataset to associate data segments with.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  BatchAssociateDataSegmentsToDatasetRequest& WithDatasetId(DatasetIdT&& value) {
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
  BatchAssociateDataSegmentsToDatasetRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of data segment entries to associate with the dataset.</p>
   */
  inline const Aws::Vector<AssociateDataSegmentEntry>& GetAssociateDataSegmentEntries() const { return m_associateDataSegmentEntries; }
  inline bool AssociateDataSegmentEntriesHasBeenSet() const { return m_associateDataSegmentEntriesHasBeenSet; }
  template <typename AssociateDataSegmentEntriesT = Aws::Vector<AssociateDataSegmentEntry>>
  void SetAssociateDataSegmentEntries(AssociateDataSegmentEntriesT&& value) {
    m_associateDataSegmentEntriesHasBeenSet = true;
    m_associateDataSegmentEntries = std::forward<AssociateDataSegmentEntriesT>(value);
  }
  template <typename AssociateDataSegmentEntriesT = Aws::Vector<AssociateDataSegmentEntry>>
  BatchAssociateDataSegmentsToDatasetRequest& WithAssociateDataSegmentEntries(AssociateDataSegmentEntriesT&& value) {
    SetAssociateDataSegmentEntries(std::forward<AssociateDataSegmentEntriesT>(value));
    return *this;
  }
  template <typename AssociateDataSegmentEntriesT = AssociateDataSegmentEntry>
  BatchAssociateDataSegmentsToDatasetRequest& AddAssociateDataSegmentEntries(AssociateDataSegmentEntriesT&& value) {
    m_associateDataSegmentEntriesHasBeenSet = true;
    m_associateDataSegmentEntries.emplace_back(std::forward<AssociateDataSegmentEntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * request is idempotent. If you retry a request that completed successfully using
   * the same client token, the retry succeeds without performing any further
   * actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchAssociateDataSegmentsToDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_workspaceName;

  Aws::Vector<AssociateDataSegmentEntry> m_associateDataSegmentEntries;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_datasetIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_associateDataSegmentEntriesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
