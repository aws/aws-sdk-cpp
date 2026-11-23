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
 * <p>Describes the parent volume, and the snapshot if one was specified, that an
 * FSx for ONTAP volume clone was created from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CloneConfiguration">AWS
 * API Reference</a></p>
 */
class CloneConfiguration {
 public:
  AWS_FSX_API CloneConfiguration() = default;
  AWS_FSX_API CloneConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CloneConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the parent volume that the clone was created from.</p>
   */
  inline const Aws::String& GetParentVolumeId() const { return m_parentVolumeId; }
  inline bool ParentVolumeIdHasBeenSet() const { return m_parentVolumeIdHasBeenSet; }
  template <typename ParentVolumeIdT = Aws::String>
  void SetParentVolumeId(ParentVolumeIdT&& value) {
    m_parentVolumeIdHasBeenSet = true;
    m_parentVolumeId = std::forward<ParentVolumeIdT>(value);
  }
  template <typename ParentVolumeIdT = Aws::String>
  CloneConfiguration& WithParentVolumeId(ParentVolumeIdT&& value) {
    SetParentVolumeId(std::forward<ParentVolumeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the snapshot of the parent volume that the clone was created from,
   * if you specified one when you created the clone.</p>
   */
  inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
  inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
  template <typename SnapshotIdT = Aws::String>
  void SetSnapshotId(SnapshotIdT&& value) {
    m_snapshotIdHasBeenSet = true;
    m_snapshotId = std::forward<SnapshotIdT>(value);
  }
  template <typename SnapshotIdT = Aws::String>
  CloneConfiguration& WithSnapshotId(SnapshotIdT&& value) {
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
