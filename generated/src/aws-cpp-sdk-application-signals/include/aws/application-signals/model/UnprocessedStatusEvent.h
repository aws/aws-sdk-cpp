/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationConfigurationStatus.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/UnprocessedStatusEventFailureReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A status event that could not be processed by the service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/UnprocessedStatusEvent">AWS
 * API Reference</a></p>
 */
class UnprocessedStatusEvent {
 public:
  AWS_APPLICATIONSIGNALS_API UnprocessedStatusEvent() = default;
  AWS_APPLICATIONSIGNALS_API UnprocessedStatusEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API UnprocessedStatusEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of instrumentation configuration for the unprocessed status
   * event.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline UnprocessedStatusEvent& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type for the unprocessed status event.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline UnprocessedStatusEvent& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable hash of the instrumentation location for the unprocessed
   * event.</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  UnprocessedStatusEvent& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status that failed to be processed.</p>
   */
  inline InstrumentationConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InstrumentationConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UnprocessedStatusEvent& WithStatus(InstrumentationConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the status event that failed to be processed.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  UnprocessedStatusEvent& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why this status event could not be processed, such as throttling
   * or validation errors.</p>
   */
  inline UnprocessedStatusEventFailureReason GetFailedReason() const { return m_failedReason; }
  inline bool FailedReasonHasBeenSet() const { return m_failedReasonHasBeenSet; }
  inline void SetFailedReason(UnprocessedStatusEventFailureReason value) {
    m_failedReasonHasBeenSet = true;
    m_failedReason = value;
  }
  inline UnprocessedStatusEvent& WithFailedReason(UnprocessedStatusEventFailureReason value) {
    SetFailedReason(value);
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Aws::String m_locationHash;

  InstrumentationConfigurationStatus m_status{InstrumentationConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_time{};

  UnprocessedStatusEventFailureReason m_failedReason{UnprocessedStatusEventFailureReason::NOT_SET};
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_timeHasBeenSet = false;
  bool m_failedReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
