/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/InstrumentationStatusEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

InstrumentationStatusEvent::InstrumentationStatusEvent(JsonView jsonValue) { *this = jsonValue; }

InstrumentationStatusEvent& InstrumentationStatusEvent::operator=(JsonView jsonValue) {
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

JsonValue InstrumentationStatusEvent::Jsonize() const {
  JsonValue payload;

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
