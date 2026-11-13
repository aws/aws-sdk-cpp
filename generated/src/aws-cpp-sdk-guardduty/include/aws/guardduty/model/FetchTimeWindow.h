/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the time range of the data that GuardDuty requested. The range is
 * defined by a start time and a duration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FetchTimeWindow">AWS
 * API Reference</a></p>
 */
class FetchTimeWindow {
 public:
  AWS_GUARDDUTY_API FetchTimeWindow() = default;
  AWS_GUARDDUTY_API FetchTimeWindow(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API FetchTimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp at which the time range starts.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  FetchTimeWindow& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The length of the time range, in minutes. Valid values are 1 to 120.</p>
   */
  inline int GetDurationInMinutes() const { return m_durationInMinutes; }
  inline bool DurationInMinutesHasBeenSet() const { return m_durationInMinutesHasBeenSet; }
  inline void SetDurationInMinutes(int value) {
    m_durationInMinutesHasBeenSet = true;
    m_durationInMinutes = value;
  }
  inline FetchTimeWindow& WithDurationInMinutes(int value) {
    SetDurationInMinutes(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startedAt{};

  int m_durationInMinutes{0};
  bool m_startedAtHasBeenSet = false;
  bool m_durationInMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
