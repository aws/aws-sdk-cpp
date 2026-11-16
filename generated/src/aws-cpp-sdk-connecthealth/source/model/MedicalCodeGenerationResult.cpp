/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalCodeGenerationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalCodeGenerationResult::MedicalCodeGenerationResult(JsonView jsonValue) { *this = jsonValue; }

MedicalCodeGenerationResult& MedicalCodeGenerationResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("medicalCodesResult")) {
    m_medicalCodesResult = jsonValue.GetObject("medicalCodesResult");
    m_medicalCodesResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalCodeGenerationResult::Jsonize() const {
  JsonValue payload;

  if (m_medicalCodesResultHasBeenSet) {
    payload.WithObject("medicalCodesResult", m_medicalCodesResult.Jsonize());
  }

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
