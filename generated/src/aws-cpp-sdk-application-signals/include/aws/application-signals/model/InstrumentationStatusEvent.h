/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/InstrumentationErrorCause.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A status event for an instrumentation configuration returned by
 * <code>GetInstrumentationConfigurationStatus</code>. Events include the timestamp
 * and, for errors, an error cause.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/InstrumentationStatusEvent">AWS
 * API Reference</a></p>
 */
class InstrumentationStatusEvent {
 public:
  AWS_APPLICATIONSIGNALS_API InstrumentationStatusEvent() = default;
  AWS_APPLICATIONSIGNALS_API InstrumentationStatusEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API InstrumentationStatusEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The time when the status was reported, rounded to the nearest minute.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  InstrumentationStatusEvent& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error cause when the status is <code>ERROR</code>.</p>
   */
  inline InstrumentationErrorCause GetErrorCause() const { return m_errorCause; }
  inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }
  inline void SetErrorCause(InstrumentationErrorCause value) {
    m_errorCauseHasBeenSet = true;
    m_errorCause = value;
  }
  inline InstrumentationStatusEvent& WithErrorCause(InstrumentationErrorCause value) {
    SetErrorCause(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_time{};

  InstrumentationErrorCause m_errorCause{InstrumentationErrorCause::NOT_SET};
  bool m_timeHasBeenSet = false;
  bool m_errorCauseHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
