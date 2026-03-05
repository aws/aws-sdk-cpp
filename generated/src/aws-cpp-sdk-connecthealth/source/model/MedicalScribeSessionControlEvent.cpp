/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/MedicalScribeSessionControlEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

MedicalScribeSessionControlEvent::MedicalScribeSessionControlEvent(JsonView jsonValue) { *this = jsonValue; }

MedicalScribeSessionControlEvent& MedicalScribeSessionControlEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = MedicalScribeSessionControlEventTypeMapper::GetMedicalScribeSessionControlEventTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeSessionControlEvent::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", MedicalScribeSessionControlEventTypeMapper::GetNameForMedicalScribeSessionControlEventType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
