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
 * <p>Describes the destination endpoint of an Amazon FSx for NetApp ONTAP
 * SnapMirror relationship. The destination volume is always an Amazon FSx for
 * NetApp ONTAP volume.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorDestination">AWS
 * API Reference</a></p>
 */
class SnapmirrorDestination {
 public:
  AWS_FSX_API SnapmirrorDestination() = default;
  AWS_FSX_API SnapmirrorDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the destination volume, in the format
   * <code>svm_name:volume_name</code>.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  SnapmirrorDestination& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the destination volume.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  SnapmirrorDestination& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  Aws::String m_volumeId;
  bool m_pathHasBeenSet = false;
  bool m_volumeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
