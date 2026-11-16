/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodingContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodingContext::MedicalCodingContext(JsonView jsonValue) { *this = jsonValue; }

MedicalCodingContext& MedicalCodingContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sex")) {
    m_sex = SexMapper::GetSexForName(jsonValue.GetString("sex"));
    m_sexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PatientStatusMapper::GetPatientStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dateOfBirth")) {
    m_dateOfBirth = jsonValue.GetString("dateOfBirth");
    m_dateOfBirthHasBeenSet = true;
  }
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
  return *this;
}

JsonValue MedicalCodingContext::Jsonize() const {
  JsonValue payload;

  if (m_sexHasBeenSet) {
    payload.WithString("sex", SexMapper::GetNameForSex(m_sex));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PatientStatusMapper::GetNameForPatientStatus(m_status));
  }

  if (m_dateOfBirthHasBeenSet) {
    payload.WithString("dateOfBirth", m_dateOfBirth);
  }

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

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
