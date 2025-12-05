/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/Lambda_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Details about a wait operation that has started.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/WaitStartedDetails">AWS
 * API Reference</a></p>
 */
class WaitStartedDetails {
 public:
  AWS_LAMBDA_API WaitStartedDetails() = default;
  AWS_LAMBDA_API WaitStartedDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API WaitStartedDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration to wait, in seconds.</p>
   */
  inline int GetDuration() const { return m_duration; }
  inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
  inline void SetDuration(int value) {
    m_durationHasBeenSet = true;
    m_duration = value;
  }
  inline WaitStartedDetails& WithDuration(int value) {
    SetDuration(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the wait operation is scheduled to complete, in <a
   * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
   * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
   */
  inline const Aws::Utils::DateTime& GetScheduledEndTimestamp() const { return m_scheduledEndTimestamp; }
  inline bool ScheduledEndTimestampHasBeenSet() const { return m_scheduledEndTimestampHasBeenSet; }
  template <typename ScheduledEndTimestampT = Aws::Utils::DateTime>
  void SetScheduledEndTimestamp(ScheduledEndTimestampT&& value) {
    m_scheduledEndTimestampHasBeenSet = true;
    m_scheduledEndTimestamp = std::forward<ScheduledEndTimestampT>(value);
  }
  template <typename ScheduledEndTimestampT = Aws::Utils::DateTime>
  WaitStartedDetails& WithScheduledEndTimestamp(ScheduledEndTimestampT&& value) {
    SetScheduledEndTimestamp(std::forward<ScheduledEndTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  int m_duration{0};

  Aws::Utils::DateTime m_scheduledEndTimestamp{};
  bool m_durationHasBeenSet = false;
  bool m_scheduledEndTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
