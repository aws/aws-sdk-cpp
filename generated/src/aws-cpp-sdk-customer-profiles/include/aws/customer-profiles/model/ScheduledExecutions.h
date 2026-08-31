/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Information about scheduled execution timestamps. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ScheduledExecutions">AWS
 * API Reference</a></p>
 */
class ScheduledExecutions {
 public:
  AWS_CUSTOMERPROFILES_API ScheduledExecutions() = default;
  AWS_CUSTOMERPROFILES_API ScheduledExecutions(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API ScheduledExecutions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp of the next scheduled execution. </p>
   */
  inline const Aws::Utils::DateTime& GetNextExecutedAt() const { return m_nextExecutedAt; }
  inline bool NextExecutedAtHasBeenSet() const { return m_nextExecutedAtHasBeenSet; }
  template <typename NextExecutedAtT = Aws::Utils::DateTime>
  void SetNextExecutedAt(NextExecutedAtT&& value) {
    m_nextExecutedAtHasBeenSet = true;
    m_nextExecutedAt = std::forward<NextExecutedAtT>(value);
  }
  template <typename NextExecutedAtT = Aws::Utils::DateTime>
  ScheduledExecutions& WithNextExecutedAt(NextExecutedAtT&& value) {
    SetNextExecutedAt(std::forward<NextExecutedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the last successful scheduled execution. </p>
   */
  inline const Aws::Utils::DateTime& GetLastExecutedAt() const { return m_lastExecutedAt; }
  inline bool LastExecutedAtHasBeenSet() const { return m_lastExecutedAtHasBeenSet; }
  template <typename LastExecutedAtT = Aws::Utils::DateTime>
  void SetLastExecutedAt(LastExecutedAtT&& value) {
    m_lastExecutedAtHasBeenSet = true;
    m_lastExecutedAt = std::forward<LastExecutedAtT>(value);
  }
  template <typename LastExecutedAtT = Aws::Utils::DateTime>
  ScheduledExecutions& WithLastExecutedAt(LastExecutedAtT&& value) {
    SetLastExecutedAt(std::forward<LastExecutedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_nextExecutedAt{};

  Aws::Utils::DateTime m_lastExecutedAt{};
  bool m_nextExecutedAtHasBeenSet = false;
  bool m_lastExecutedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
