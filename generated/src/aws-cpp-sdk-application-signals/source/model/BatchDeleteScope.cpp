/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

BatchDeleteScope::BatchDeleteScope(JsonView jsonValue) { *this = jsonValue; }

BatchDeleteScope& BatchDeleteScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Service")) {
    m_service = jsonValue.GetString("Service");
    m_serviceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Environment")) {
    m_environment = jsonValue.GetString("Environment");
    m_environmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstrumentationType")) {
    m_instrumentationType = InstrumentationTypeMapper::GetInstrumentationTypeForName(jsonValue.GetString("InstrumentationType"));
    m_instrumentationTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteScope::Jsonize() const {
  JsonValue payload;

  if (m_serviceHasBeenSet) {
    payload.WithString("Service", m_service);
  }

  if (m_environmentHasBeenSet) {
    payload.WithString("Environment", m_environment);
  }

  if (m_instrumentationTypeHasBeenSet) {
    payload.WithString("InstrumentationType", InstrumentationTypeMapper::GetNameForInstrumentationType(m_instrumentationType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
