/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Braket {
namespace Model {

/**
 * <p>Defines a time range for spending limits, specifying when the limit is
 * active.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/TimePeriod">AWS
 * API Reference</a></p>
 */
class TimePeriod {
 public:
  AWS_BRAKET_API TimePeriod() = default;
  AWS_BRAKET_API TimePeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API TimePeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The start date and time for the spending limit period, in epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
  inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }
  template <typename StartAtT = Aws::Utils::DateTime>
  void SetStartAt(StartAtT&& value) {
    m_startAtHasBeenSet = true;
    m_startAt = std::forward<StartAtT>(value);
  }
  template <typename StartAtT = Aws::Utils::DateTime>
  TimePeriod& WithStartAt(StartAtT&& value) {
    SetStartAt(std::forward<StartAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date and time for the spending limit period, in epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
  inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }
  template <typename EndAtT = Aws::Utils::DateTime>
  void SetEndAt(EndAtT&& value) {
    m_endAtHasBeenSet = true;
    m_endAt = std::forward<EndAtT>(value);
  }
  template <typename EndAtT = Aws::Utils::DateTime>
  TimePeriod& WithEndAt(EndAtT&& value) {
    SetEndAt(std::forward<EndAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startAt{};

  Aws::Utils::DateTime m_endAt{};
  bool m_startAtHasBeenSet = false;
  bool m_endAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
