/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodesPatientContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodesPatientContext::MedicalCodesPatientContext(JsonView jsonValue) { *this = jsonValue; }

MedicalCodesPatientContext& MedicalCodesPatientContext::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("insurance")) {
    m_insurance = jsonValue.GetString("insurance");
    m_insuranceHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalCodesPatientContext::Jsonize() const {
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

  if (m_insuranceHasBeenSet) {
    payload.WithString("insurance", m_insurance);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
