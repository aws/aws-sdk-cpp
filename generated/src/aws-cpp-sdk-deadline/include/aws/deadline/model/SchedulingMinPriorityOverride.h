/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SchedulingMinPriorityOverrideAlwaysScheduleLast.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>Defines the override behavior for jobs at the minimum priority (0) in
 * weighted balanced scheduling.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SchedulingMinPriorityOverride">AWS
 * API Reference</a></p>
 */
class SchedulingMinPriorityOverride {
 public:
  AWS_DEADLINE_API SchedulingMinPriorityOverride() = default;
  AWS_DEADLINE_API SchedulingMinPriorityOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SchedulingMinPriorityOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Jobs at the minimum priority (0) are always scheduled after all other jobs,
   * regardless of the weighted scheduling formula. If multiple jobs have priority 0,
   * ties are broken using the standard weighted formula.</p>
   */
  inline const SchedulingMinPriorityOverrideAlwaysScheduleLast& GetAlwaysScheduleLast() const { return m_alwaysScheduleLast; }
  inline bool AlwaysScheduleLastHasBeenSet() const { return m_alwaysScheduleLastHasBeenSet; }
  template <typename AlwaysScheduleLastT = SchedulingMinPriorityOverrideAlwaysScheduleLast>
  void SetAlwaysScheduleLast(AlwaysScheduleLastT&& value) {
    m_alwaysScheduleLastHasBeenSet = true;
    m_alwaysScheduleLast = std::forward<AlwaysScheduleLastT>(value);
  }
  template <typename AlwaysScheduleLastT = SchedulingMinPriorityOverrideAlwaysScheduleLast>
  SchedulingMinPriorityOverride& WithAlwaysScheduleLast(AlwaysScheduleLastT&& value) {
    SetAlwaysScheduleLast(std::forward<AlwaysScheduleLastT>(value));
    return *this;
  }
  ///@}
 private:
  SchedulingMinPriorityOverrideAlwaysScheduleLast m_alwaysScheduleLast;
  bool m_alwaysScheduleLastHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
