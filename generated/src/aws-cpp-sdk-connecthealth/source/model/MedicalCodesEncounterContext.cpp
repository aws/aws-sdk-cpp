/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodesEncounterContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodesEncounterContext::MedicalCodesEncounterContext(JsonView jsonValue) { *this = jsonValue; }

MedicalCodesEncounterContext& MedicalCodesEncounterContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("encounterType")) {
    m_encounterType = EncounterTypeMapper::GetEncounterTypeForName(jsonValue.GetString("encounterType"));
    m_encounterTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterReason")) {
    m_encounterReason = jsonValue.GetString("encounterReason");
    m_encounterReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterHours")) {
    m_afterHours = jsonValue.GetBool("afterHours");
    m_afterHoursHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterDate")) {
    m_encounterDate = jsonValue.GetString("encounterDate");
    m_encounterDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encounterDurationMinutes")) {
    m_encounterDurationMinutes = jsonValue.GetInteger("encounterDurationMinutes");
    m_encounterDurationMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalCodesEncounterContext::Jsonize() const {
  JsonValue payload;

  if (m_encounterTypeHasBeenSet) {
    payload.WithString("encounterType", EncounterTypeMapper::GetNameForEncounterType(m_encounterType));
  }

  if (m_encounterReasonHasBeenSet) {
    payload.WithString("encounterReason", m_encounterReason);
  }

  if (m_afterHoursHasBeenSet) {
    payload.WithBool("afterHours", m_afterHours);
  }

  if (m_encounterDateHasBeenSet) {
    payload.WithString("encounterDate", m_encounterDate);
  }

  if (m_encounterDurationMinutesHasBeenSet) {
    payload.WithInteger("encounterDurationMinutes", m_encounterDurationMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
