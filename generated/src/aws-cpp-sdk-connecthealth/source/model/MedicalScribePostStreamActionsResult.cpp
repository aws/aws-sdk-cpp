/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribePostStreamActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribePostStreamActionsResult::MedicalScribePostStreamActionsResult(JsonView jsonValue) { *this = jsonValue; }

MedicalScribePostStreamActionsResult& MedicalScribePostStreamActionsResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("clinicalNoteGenerationResult")) {
    m_clinicalNoteGenerationResult = jsonValue.GetObject("clinicalNoteGenerationResult");
    m_clinicalNoteGenerationResultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medicalCodeGenerationResult")) {
    m_medicalCodeGenerationResult = jsonValue.GetObject("medicalCodeGenerationResult");
    m_medicalCodeGenerationResultHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribePostStreamActionsResult::Jsonize() const {
  JsonValue payload;

  if (m_clinicalNoteGenerationResultHasBeenSet) {
    payload.WithObject("clinicalNoteGenerationResult", m_clinicalNoteGenerationResult.Jsonize());
  }

  if (m_medicalCodeGenerationResultHasBeenSet) {
    payload.WithObject("medicalCodeGenerationResult", m_medicalCodeGenerationResult.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
