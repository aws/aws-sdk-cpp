/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PatientInsightsEncounterContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

PatientInsightsEncounterContext::PatientInsightsEncounterContext(JsonView jsonValue) { *this = jsonValue; }

PatientInsightsEncounterContext& PatientInsightsEncounterContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encounterReason")) {
    m_encounterReason = jsonValue.GetString("encounterReason");
    m_encounterReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue PatientInsightsEncounterContext::Jsonize() const {
  JsonValue payload;

  if (m_encounterReasonHasBeenSet) {
    payload.WithString("encounterReason", m_encounterReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
