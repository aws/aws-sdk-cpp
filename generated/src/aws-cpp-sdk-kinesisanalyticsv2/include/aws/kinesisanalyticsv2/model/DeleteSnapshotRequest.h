/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 */
class DeleteSnapshotRequest : public KinesisAnalyticsV2Request {
 public:
  AWS_KINESISANALYTICSV2_API DeleteSnapshotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteSnapshot"; }

  AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

  AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the enhanced snapshot to delete.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  DeleteSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The creation timestamp of the enhanced snapshot to delete. Use the
   * <code>DescribeSnapshot</code> operation to get this value.</p>
   */
  inline const Aws::Utils::DateTime& GetSnapshotCreationTimestamp() const { return m_snapshotCreationTimestamp; }
  inline bool SnapshotCreationTimestampHasBeenSet() const { return m_snapshotCreationTimestampHasBeenSet; }
  template <typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
  void SetSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) {
    m_snapshotCreationTimestampHasBeenSet = true;
    m_snapshotCreationTimestamp = std::forward<SnapshotCreationTimestampT>(value);
  }
  template <typename SnapshotCreationTimestampT = Aws::Utils::DateTime>
  DeleteSnapshotRequest& WithSnapshotCreationTimestamp(SnapshotCreationTimestampT&& value) {
    SetSnapshotCreationTimestamp(std::forward<SnapshotCreationTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotName;

  Aws::Utils::DateTime m_snapshotCreationTimestamp{};
  bool m_snapshotNameHasBeenSet = false;
  bool m_snapshotCreationTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
