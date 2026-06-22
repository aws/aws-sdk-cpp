/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/InstrumentationConfigurationStatusReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

InstrumentationConfigurationStatusReport::InstrumentationConfigurationStatusReport(JsonView jsonValue) { *this = jsonValue; }

InstrumentationConfigurationStatusReport& InstrumentationConfigurationStatusReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstrumentationType")) {
    m_instrumentationType = InstrumentationTypeMapper::GetInstrumentationTypeForName(jsonValue.GetString("InstrumentationType"));
    m_instrumentationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SignalType")) {
    m_signalType = DynamicInstrumentationSignalTypeMapper::GetDynamicInstrumentationSignalTypeForName(jsonValue.GetString("SignalType"));
    m_signalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocationHash")) {
    m_locationHash = jsonValue.GetString("LocationHash");
    m_locationHashHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InstrumentationConfigurationStatusMapper::GetInstrumentationConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Time")) {
    m_time = jsonValue.GetDouble("Time");
    m_timeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCause")) {
    m_errorCause = InstrumentationErrorCauseMapper::GetInstrumentationErrorCauseForName(jsonValue.GetString("ErrorCause"));
    m_errorCauseHasBeenSet = true;
  }
  return *this;
}

JsonValue InstrumentationConfigurationStatusReport::Jsonize() const {
  JsonValue payload;

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  if (m_signalTypeHasBeenSet) {
    payload.WithString("SignalType", DynamicInstrumentationSignalTypeMapper::GetNameForDynamicInstrumentationSignalType(m_signalType));
  }

  if (m_locationHashHasBeenSet) {
    payload.WithString("LocationHash", m_locationHash);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", InstrumentationConfigurationStatusMapper::GetNameForInstrumentationConfigurationStatus(m_status));
  }

  if (m_timeHasBeenSet) {
    payload.WithDouble("Time", m_time.SecondsWithMSPrecision());
  }

  if (m_errorCauseHasBeenSet) {
    payload.WithString("ErrorCause", InstrumentationErrorCauseMapper::GetNameForInstrumentationErrorCause(m_errorCause));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
