/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PatientInsightsPatientContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

PatientInsightsPatientContext::PatientInsightsPatientContext(JsonView jsonValue) { *this = jsonValue; }

PatientInsightsPatientContext& PatientInsightsPatientContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("patientId")) {
    m_patientId = jsonValue.GetString("patientId");
    m_patientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dateOfBirth")) {
    m_dateOfBirth = jsonValue.GetString("dateOfBirth");
    m_dateOfBirthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pronouns")) {
    m_pronouns = PronounsMapper::GetPronounsForName(jsonValue.GetString("pronouns"));
    m_pronounsHasBeenSet = true;
  }
  return *this;
}

JsonValue PatientInsightsPatientContext::Jsonize() const {
  JsonValue payload;

  if (m_patientIdHasBeenSet) {
    payload.WithString("patientId", m_patientId);
  }

  if (m_dateOfBirthHasBeenSet) {
    payload.WithString("dateOfBirth", m_dateOfBirth);
  }

  if (m_pronounsHasBeenSet) {
    payload.WithString("pronouns", PronounsMapper::GetNameForPronouns(m_pronouns));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
