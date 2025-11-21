/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Defines a time range with inclusive start time and exclusive end time for
 * filtering and analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/TimePeriod">AWS
 * API Reference</a></p>
 */
class TimePeriod {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API TimePeriod() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start time of the period, inclusive. Events at or after this time are
   * included.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimeInclusive() const { return m_startTimeInclusive; }
  inline bool StartTimeInclusiveHasBeenSet() const { return m_startTimeInclusiveHasBeenSet; }
  template <typename StartTimeInclusiveT = Aws::Utils::DateTime>
  void SetStartTimeInclusive(StartTimeInclusiveT&& value) {
    m_startTimeInclusiveHasBeenSet = true;
    m_startTimeInclusive = std::forward<StartTimeInclusiveT>(value);
  }
  template <typename StartTimeInclusiveT = Aws::Utils::DateTime>
  TimePeriod& WithStartTimeInclusive(StartTimeInclusiveT&& value) {
    SetStartTimeInclusive(std::forward<StartTimeInclusiveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the period, exclusive. Events before this time are
   * included.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimeExclusive() const { return m_endTimeExclusive; }
  inline bool EndTimeExclusiveHasBeenSet() const { return m_endTimeExclusiveHasBeenSet; }
  template <typename EndTimeExclusiveT = Aws::Utils::DateTime>
  void SetEndTimeExclusive(EndTimeExclusiveT&& value) {
    m_endTimeExclusiveHasBeenSet = true;
    m_endTimeExclusive = std::forward<EndTimeExclusiveT>(value);
  }
  template <typename EndTimeExclusiveT = Aws::Utils::DateTime>
  TimePeriod& WithEndTimeExclusive(EndTimeExclusiveT&& value) {
    SetEndTimeExclusive(std::forward<EndTimeExclusiveT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTimeInclusive{};
  bool m_startTimeInclusiveHasBeenSet = false;

  Aws::Utils::DateTime m_endTimeExclusive{};
  bool m_endTimeExclusiveHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
