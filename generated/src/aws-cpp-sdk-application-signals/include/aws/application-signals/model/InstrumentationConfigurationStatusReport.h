/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationConfigurationStatus.h>
#include <aws/application-signals/model/InstrumentationErrorCause.h>
#include <aws/application-signals/model/InstrumentationType.h>
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
 * <p>The status of a single instrumentation configuration reported by an SDK
 * instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/InstrumentationConfigurationStatusReport">AWS
 * API Reference</a></p>
 */
class InstrumentationConfigurationStatusReport {
 public:
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationStatusReport() = default;
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationStatusReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationStatusReport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of instrumentation configuration being reported.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline InstrumentationConfigurationStatusReport& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type for this instrumentation configuration.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline InstrumentationConfigurationStatusReport& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable hash of the instrumentation location that identifies the
   * configuration being reported.</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  InstrumentationConfigurationStatusReport& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the instrumentation configuration: <code>READY</code>,
   * <code>ERROR</code>, <code>ACTIVE</code>, or <code>DISABLED</code>.</p>
   */
  inline InstrumentationConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InstrumentationConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InstrumentationConfigurationStatusReport& WithStatus(InstrumentationConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the status event occurred.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  InstrumentationConfigurationStatusReport& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error cause when the status is <code>ERROR</code>, such as the file or
   * method not being found.</p>
   */
  inline InstrumentationErrorCause GetErrorCause() const { return m_errorCause; }
  inline bool ErrorCauseHasBeenSet() const { return m_errorCauseHasBeenSet; }
  inline void SetErrorCause(InstrumentationErrorCause value) {
    m_errorCauseHasBeenSet = true;
    m_errorCause = value;
  }
  inline InstrumentationConfigurationStatusReport& WithErrorCause(InstrumentationErrorCause value) {
    SetErrorCause(value);
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Aws::String m_locationHash;

  InstrumentationConfigurationStatus m_status{InstrumentationConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_time{};

  InstrumentationErrorCause m_errorCause{InstrumentationErrorCause::NOT_SET};
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_timeHasBeenSet = false;
  bool m_errorCauseHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
