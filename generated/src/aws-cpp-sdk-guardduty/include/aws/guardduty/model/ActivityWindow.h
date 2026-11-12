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
 * <p>Contains the time range during which activity was observed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ActivityWindow">AWS
 * API Reference</a></p>
 */
class ActivityWindow {
 public:
  AWS_GUARDDUTY_API ActivityWindow() = default;
  AWS_GUARDDUTY_API ActivityWindow(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API ActivityWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp at which the activity was first observed.</p>
   */
  inline const Aws::Utils::DateTime& GetFirstSeenAt() const { return m_firstSeenAt; }
  inline bool FirstSeenAtHasBeenSet() const { return m_firstSeenAtHasBeenSet; }
  template <typename FirstSeenAtT = Aws::Utils::DateTime>
  void SetFirstSeenAt(FirstSeenAtT&& value) {
    m_firstSeenAtHasBeenSet = true;
    m_firstSeenAt = std::forward<FirstSeenAtT>(value);
  }
  template <typename FirstSeenAtT = Aws::Utils::DateTime>
  ActivityWindow& WithFirstSeenAt(FirstSeenAtT&& value) {
    SetFirstSeenAt(std::forward<FirstSeenAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp at which the activity was last observed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
  inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  void SetLastSeenAt(LastSeenAtT&& value) {
    m_lastSeenAtHasBeenSet = true;
    m_lastSeenAt = std::forward<LastSeenAtT>(value);
  }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  ActivityWindow& WithLastSeenAt(LastSeenAtT&& value) {
    SetLastSeenAt(std::forward<LastSeenAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_firstSeenAt{};

  Aws::Utils::DateTime m_lastSeenAt{};
  bool m_firstSeenAtHasBeenSet = false;
  bool m_lastSeenAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
