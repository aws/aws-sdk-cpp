/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Specifies the configuration of the ONTAP snapshot that you are
 * creating.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateOntapSnapshotConfiguration">AWS
 * API Reference</a></p>
 */
class CreateOntapSnapshotConfiguration {
 public:
  AWS_FSX_API CreateOntapSnapshotConfiguration() = default;
  AWS_FSX_API CreateOntapSnapshotConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CreateOntapSnapshotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the SnapMirror label to assign to the snapshot. SnapMirror policies
   * use labels to select which snapshots to replicate to a destination volume.</p>
   */
  inline const Aws::String& GetSnapmirrorLabel() const { return m_snapmirrorLabel; }
  inline bool SnapmirrorLabelHasBeenSet() const { return m_snapmirrorLabelHasBeenSet; }
  template <typename SnapmirrorLabelT = Aws::String>
  void SetSnapmirrorLabel(SnapmirrorLabelT&& value) {
    m_snapmirrorLabelHasBeenSet = true;
    m_snapmirrorLabel = std::forward<SnapmirrorLabelT>(value);
  }
  template <typename SnapmirrorLabelT = Aws::String>
  CreateOntapSnapshotConfiguration& WithSnapmirrorLabel(SnapmirrorLabelT&& value) {
    SetSnapmirrorLabel(std::forward<SnapmirrorLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the date and time when the snapshot expires. You can't delete the
   * snapshot before this time.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiryTime() const { return m_expiryTime; }
  inline bool ExpiryTimeHasBeenSet() const { return m_expiryTimeHasBeenSet; }
  template <typename ExpiryTimeT = Aws::Utils::DateTime>
  void SetExpiryTime(ExpiryTimeT&& value) {
    m_expiryTimeHasBeenSet = true;
    m_expiryTime = std::forward<ExpiryTimeT>(value);
  }
  template <typename ExpiryTimeT = Aws::Utils::DateTime>
  CreateOntapSnapshotConfiguration& WithExpiryTime(ExpiryTimeT&& value) {
    SetExpiryTime(std::forward<ExpiryTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the date and time until which the snapshot is locked. This setting
   * takes effect only if snapshot locking is enabled on the volume. Snapshot locking
   * is separate from SnapLock, and enabling SnapLock on a volume doesn't enable
   * snapshot locking. You can't delete the snapshot before this time.</p>
   */
  inline const Aws::Utils::DateTime& GetSnaplockExpiryTime() const { return m_snaplockExpiryTime; }
  inline bool SnaplockExpiryTimeHasBeenSet() const { return m_snaplockExpiryTimeHasBeenSet; }
  template <typename SnaplockExpiryTimeT = Aws::Utils::DateTime>
  void SetSnaplockExpiryTime(SnaplockExpiryTimeT&& value) {
    m_snaplockExpiryTimeHasBeenSet = true;
    m_snaplockExpiryTime = std::forward<SnaplockExpiryTimeT>(value);
  }
  template <typename SnaplockExpiryTimeT = Aws::Utils::DateTime>
  CreateOntapSnapshotConfiguration& WithSnaplockExpiryTime(SnaplockExpiryTimeT&& value) {
    SetSnaplockExpiryTime(std::forward<SnaplockExpiryTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_snapmirrorLabel;

  Aws::Utils::DateTime m_expiryTime{};

  Aws::Utils::DateTime m_snaplockExpiryTime{};
  bool m_snapmirrorLabelHasBeenSet = false;
  bool m_expiryTimeHasBeenSet = false;
  bool m_snaplockExpiryTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
