/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/Elevation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

Elevation::Elevation(JsonView jsonValue) { *this = jsonValue; }

Elevation& Elevation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("unit")) {
    m_unit = AngleUnitsMapper::GetAngleUnitsForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue Elevation::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithDouble("value", m_value);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("unit", AngleUnitsMapper::GetNameForAngleUnits(m_unit));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
