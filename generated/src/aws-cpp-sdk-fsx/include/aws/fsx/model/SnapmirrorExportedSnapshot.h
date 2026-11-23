/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes the latest snapshot that SnapMirror transferred to the destination
 * volume of an Amazon FSx for NetApp ONTAP SnapMirror relationship.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorExportedSnapshot">AWS
 * API Reference</a></p>
 */
class SnapmirrorExportedSnapshot {
 public:
  AWS_FSX_API SnapmirrorExportedSnapshot() = default;
  AWS_FSX_API SnapmirrorExportedSnapshot(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorExportedSnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the snapshot, if Amazon FSx manages the snapshot.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  SnapmirrorExportedSnapshot& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the snapshot in ONTAP.</p>
   */
  inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
  inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
  template <typename SnapshotNameT = Aws::String>
  void SetSnapshotName(SnapshotNameT&& value) {
    m_snapshotNameHasBeenSet = true;
    m_snapshotName = std::forward<SnapshotNameT>(value);
  }
  template <typename SnapshotNameT = Aws::String>
  SnapmirrorExportedSnapshot& WithSnapshotName(SnapshotNameT&& value) {
    SetSnapshotName(std::forward<SnapshotNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapshotId;

  Aws::String m_snapshotName;
  bool m_snapshotIdHasBeenSet = false;
  bool m_snapshotNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
