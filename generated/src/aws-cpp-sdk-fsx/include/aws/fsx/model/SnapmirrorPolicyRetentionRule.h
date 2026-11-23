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
 * <p>Specifies a snapshot retention rule for an Amazon FSx for NetApp ONTAP
 * SnapMirror policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorPolicyRetentionRule">AWS
 * API Reference</a></p>
 */
class SnapmirrorPolicyRetentionRule {
 public:
  AWS_FSX_API SnapmirrorPolicyRetentionRule() = default;
  AWS_FSX_API SnapmirrorPolicyRetentionRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorPolicyRetentionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SnapMirror label of the snapshots that the rule applies to.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  SnapmirrorPolicyRetentionRule& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of snapshots with the label to retain on the destination
   * volume.</p>
   */
  inline int GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(int value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline SnapmirrorPolicyRetentionRule& WithCount(int value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ONTAP schedule on which SnapMirror creates snapshots with the
   * label directly on the destination volume.</p>
   */
  inline const Aws::String& GetCreationSchedule() const { return m_creationSchedule; }
  inline bool CreationScheduleHasBeenSet() const { return m_creationScheduleHasBeenSet; }
  template <typename CreationScheduleT = Aws::String>
  void SetCreationSchedule(CreationScheduleT&& value) {
    m_creationScheduleHasBeenSet = true;
    m_creationSchedule = std::forward<CreationScheduleT>(value);
  }
  template <typename CreationScheduleT = Aws::String>
  SnapmirrorPolicyRetentionRule& WithCreationSchedule(CreationScheduleT&& value) {
    SetCreationSchedule(std::forward<CreationScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_label;

  int m_count{0};

  Aws::String m_creationSchedule;
  bool m_labelHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_creationScheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
