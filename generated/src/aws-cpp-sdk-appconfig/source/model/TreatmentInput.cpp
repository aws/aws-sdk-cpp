/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/TreatmentInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

TreatmentInput::TreatmentInput(JsonView jsonValue) { *this = jsonValue; }

TreatmentInput& TreatmentInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Weight")) {
    m_weight = jsonValue.GetDouble("Weight");
    m_weightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlagValue")) {
    m_flagValue = jsonValue.GetObject("FlagValue");
    m_flagValueHasBeenSet = true;
  }
  return *this;
}

JsonValue TreatmentInput::Jsonize() const {
  JsonValue payload;

  if (m_weightHasBeenSet) {
    payload.WithDouble("Weight", m_weight);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_flagValueHasBeenSet) {
    payload.WithObject("FlagValue", m_flagValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
