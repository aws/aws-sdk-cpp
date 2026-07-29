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
#include <aws/iotsitewise/model/DisassociateDataSegmentEntry.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class BatchDisassociateDataSegmentsFromDatasetRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API BatchDisassociateDataSegmentsFromDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateDataSegmentsFromDataset"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the curated dataset to disassociate data segments from.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  BatchDisassociateDataSegmentsFromDatasetRequest& WithDatasetId(DatasetIdT&& value) {
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
  BatchDisassociateDataSegmentsFromDatasetRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of data segment entries to disassociate from the dataset.</p>
   */
  inline const Aws::Vector<DisassociateDataSegmentEntry>& GetDisassociateDataSegmentEntries() const {
    return m_disassociateDataSegmentEntries;
  }
  inline bool DisassociateDataSegmentEntriesHasBeenSet() const { return m_disassociateDataSegmentEntriesHasBeenSet; }
  template <typename DisassociateDataSegmentEntriesT = Aws::Vector<DisassociateDataSegmentEntry>>
  void SetDisassociateDataSegmentEntries(DisassociateDataSegmentEntriesT&& value) {
    m_disassociateDataSegmentEntriesHasBeenSet = true;
    m_disassociateDataSegmentEntries = std::forward<DisassociateDataSegmentEntriesT>(value);
  }
  template <typename DisassociateDataSegmentEntriesT = Aws::Vector<DisassociateDataSegmentEntry>>
  BatchDisassociateDataSegmentsFromDatasetRequest& WithDisassociateDataSegmentEntries(DisassociateDataSegmentEntriesT&& value) {
    SetDisassociateDataSegmentEntries(std::forward<DisassociateDataSegmentEntriesT>(value));
    return *this;
  }
  template <typename DisassociateDataSegmentEntriesT = DisassociateDataSegmentEntry>
  BatchDisassociateDataSegmentsFromDatasetRequest& AddDisassociateDataSegmentEntries(DisassociateDataSegmentEntriesT&& value) {
    m_disassociateDataSegmentEntriesHasBeenSet = true;
    m_disassociateDataSegmentEntries.emplace_back(std::forward<DisassociateDataSegmentEntriesT>(value));
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
  BatchDisassociateDataSegmentsFromDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_workspaceName;

  Aws::Vector<DisassociateDataSegmentEntry> m_disassociateDataSegmentEntries;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_datasetIdHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_disassociateDataSegmentEntriesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
