/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DeleteInstrumentationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteInstrumentationConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", m_environment);
  }

  if (m_signalTypeHasBeenSet) {
    payload.WithString("SignalType", DynamicInstrumentationSignalTypeMapper::GetNameForDynamicInstrumentationSignalType(m_signalType));
  }

  if (m_locationIdentifierHasBeenSet) {
    payload.WithObject("LocationIdentifier", m_locationIdentifier.Jsonize());
  }

  return payload.View().WriteReadable();
}
