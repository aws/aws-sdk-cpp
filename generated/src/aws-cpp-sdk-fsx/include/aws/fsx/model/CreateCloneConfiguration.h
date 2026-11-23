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
 * <p>Specifies the parent volume, and optionally the snapshot, that an FSx for
 * ONTAP volume clone is created from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateCloneConfiguration">AWS
 * API Reference</a></p>
 */
class CreateCloneConfiguration {
 public:
  AWS_FSX_API CreateCloneConfiguration() = default;
  AWS_FSX_API CreateCloneConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CreateCloneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the ID of the volume to clone.</p>
   */
  inline const Aws::String& GetParentVolumeId() const { return m_parentVolumeId; }
  inline bool ParentVolumeIdHasBeenSet() const { return m_parentVolumeIdHasBeenSet; }
  template <typename ParentVolumeIdT = Aws::String>
  void SetParentVolumeId(ParentVolumeIdT&& value) {
    m_parentVolumeIdHasBeenSet = true;
    m_parentVolumeId = std::forward<ParentVolumeIdT>(value);
  }
  template <typename ParentVolumeIdT = Aws::String>
  CreateCloneConfiguration& WithParentVolumeId(ParentVolumeIdT&& value) {
    SetParentVolumeId(std::forward<ParentVolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of a snapshot of the parent volume to create the clone from.
   * The snapshot's lifecycle state must be <code>AVAILABLE</code>. If you don't
   * specify a snapshot, ONTAP creates a new snapshot of the parent volume and
   * creates the clone from it.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  CreateCloneConfiguration& WithSnapshotId(SnapshotIdT&& value) {
    SetSnapshotId(std::forward<SnapshotIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_parentVolumeId;

  Aws::String m_snapshotId;
  bool m_parentVolumeIdHasBeenSet = false;
  bool m_snapshotIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
