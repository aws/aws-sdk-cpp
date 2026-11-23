/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapshotPolicyRetentionPeriod.h>

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
 * <p>Specifies a schedule for an Amazon FSx for NetApp ONTAP snapshot
 * policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapshotPolicySchedule">AWS
 * API Reference</a></p>
 */
class SnapshotPolicySchedule {
 public:
  AWS_FSX_API SnapshotPolicySchedule() = default;
  AWS_FSX_API SnapshotPolicySchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapshotPolicySchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the ONTAP schedule that determines when snapshots are
   * created.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SnapshotPolicySchedule& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of snapshots to retain for the schedule.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline SnapshotPolicySchedule& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix for the schedule to use when creating snapshots.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  SnapshotPolicySchedule& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SnapMirror label to assign to the snapshots that the schedule creates.
   * SnapMirror policies use labels to select which snapshots to replicate to a
   * destination volume.</p>
   */
  inline const Aws::String& GetSnapmirrorLabel() const { return m_snapmirrorLabel; }
  inline bool SnapmirrorLabelHasBeenSet() const { return m_snapmirrorLabelHasBeenSet; }
  template <typename SnapmirrorLabelT = Aws::String>
  void SetSnapmirrorLabel(SnapmirrorLabelT&& value) {
    m_snapmirrorLabelHasBeenSet = true;
    m_snapmirrorLabel = std::forward<SnapmirrorLabelT>(value);
  }
  template <typename SnapmirrorLabelT = Aws::String>
  SnapshotPolicySchedule& WithSnapmirrorLabel(SnapmirrorLabelT&& value) {
    SetSnapmirrorLabel(std::forward<SnapmirrorLabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of time that the snapshots that the schedule creates are locked.
   * This setting applies only to volumes that have snapshot locking enabled.</p>
   */
  inline const SnapshotPolicyRetentionPeriod& GetRetentionPeriod() const { return m_retentionPeriod; }
  inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
  template <typename RetentionPeriodT = SnapshotPolicyRetentionPeriod>
  void SetRetentionPeriod(RetentionPeriodT&& value) {
    m_retentionPeriodHasBeenSet = true;
    m_retentionPeriod = std::forward<RetentionPeriodT>(value);
  }
  template <typename RetentionPeriodT = SnapshotPolicyRetentionPeriod>
  SnapshotPolicySchedule& WithRetentionPeriod(RetentionPeriodT&& value) {
    SetRetentionPeriod(std::forward<RetentionPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  int m_count{0};

  Aws::String m_prefix;

  Aws::String m_snapmirrorLabel;

  SnapshotPolicyRetentionPeriod m_retentionPeriod;
  bool m_nameHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
  bool m_snapmirrorLabelHasBeenSet = false;
  bool m_retentionPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
