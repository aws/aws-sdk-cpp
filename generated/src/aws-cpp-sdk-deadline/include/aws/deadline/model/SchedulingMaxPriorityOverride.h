/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SchedulingMaxPriorityOverrideAlwaysScheduleFirst.h>

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
 * <p>Defines the override behavior for jobs at the maximum priority (100) in
 * weighted balanced scheduling.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SchedulingMaxPriorityOverride">AWS
 * API Reference</a></p>
 */
class SchedulingMaxPriorityOverride {
 public:
  AWS_DEADLINE_API SchedulingMaxPriorityOverride() = default;
  AWS_DEADLINE_API SchedulingMaxPriorityOverride(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API SchedulingMaxPriorityOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Jobs at the maximum priority (100) are always scheduled before other jobs,
   * regardless of the weighted scheduling formula. If multiple jobs have priority
   * 100, ties are broken using the standard weighted formula.</p>
   */
  inline const SchedulingMaxPriorityOverrideAlwaysScheduleFirst& GetAlwaysScheduleFirst() const { return m_alwaysScheduleFirst; }
  inline bool AlwaysScheduleFirstHasBeenSet() const { return m_alwaysScheduleFirstHasBeenSet; }
  template <typename AlwaysScheduleFirstT = SchedulingMaxPriorityOverrideAlwaysScheduleFirst>
  void SetAlwaysScheduleFirst(AlwaysScheduleFirstT&& value) {
    m_alwaysScheduleFirstHasBeenSet = true;
    m_alwaysScheduleFirst = std::forward<AlwaysScheduleFirstT>(value);
  }
  template <typename AlwaysScheduleFirstT = SchedulingMaxPriorityOverrideAlwaysScheduleFirst>
  SchedulingMaxPriorityOverride& WithAlwaysScheduleFirst(AlwaysScheduleFirstT&& value) {
    SetAlwaysScheduleFirst(std::forward<AlwaysScheduleFirstT>(value));
    return *this;
  }
  ///@}
 private:
  SchedulingMaxPriorityOverrideAlwaysScheduleFirst m_alwaysScheduleFirst;
  bool m_alwaysScheduleFirstHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
