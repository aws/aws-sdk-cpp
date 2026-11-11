/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ExportDestinationConfiguration.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class ExportSnapshotRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API ExportSnapshotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ExportSnapshot"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the enhanced snapshot to export.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  ExportSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the location, IAM role, and encryption configuration of the export
   * destination.</p>
   */
  inline const ExportDestinationConfiguration& GetExportDestinationConfiguration() const { return m_exportDestinationConfiguration; }
  inline bool ExportDestinationConfigurationHasBeenSet() const { return m_exportDestinationConfigurationHasBeenSet; }
  template <typename ExportDestinationConfigurationT = ExportDestinationConfiguration>
  void SetExportDestinationConfiguration(ExportDestinationConfigurationT&& value) {
    m_exportDestinationConfigurationHasBeenSet = true;
    m_exportDestinationConfiguration = std::forward<ExportDestinationConfigurationT>(value);
  }
  template <typename ExportDestinationConfigurationT = ExportDestinationConfiguration>
  ExportSnapshotRequest& WithExportDestinationConfiguration(ExportDestinationConfigurationT&& value) {
    SetExportDestinationConfiguration(std::forward<ExportDestinationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  ExportDestinationConfiguration m_exportDestinationConfiguration;
  bool m_snapshotNameHasBeenSet = false;
  bool m_exportDestinationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
