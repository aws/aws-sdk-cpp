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
 * <p>Specifies the destination endpoint of the Amazon FSx for NetApp ONTAP
 * SnapMirror relationship that you are creating.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateSnapmirrorDestination">AWS
 * API Reference</a></p>
 */
class CreateSnapmirrorDestination {
 public:
  AWS_FSX_API CreateSnapmirrorDestination() = default;
  AWS_FSX_API CreateSnapmirrorDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CreateSnapmirrorDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the ID of the destination volume.</p>
   */
  inline const Aws::String& GetVolumeId() const { return m_volumeId; }
  inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
  template <typename VolumeIdT = Aws::String>
  void SetVolumeId(VolumeIdT&& value) {
    m_volumeIdHasBeenSet = true;
    m_volumeId = std::forward<VolumeIdT>(value);
  }
  template <typename VolumeIdT = Aws::String>
  CreateSnapmirrorDestination& WithVolumeId(VolumeIdT&& value) {
    SetVolumeId(std::forward<VolumeIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_volumeId;
  bool m_volumeIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
