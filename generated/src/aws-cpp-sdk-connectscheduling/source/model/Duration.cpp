/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/Duration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {

Duration::Duration(JsonView jsonValue) { *this = jsonValue; }

Duration& Duration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetInteger("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Unit")) {
    m_unit = DurationUnitMapper::GetDurationUnitForName(jsonValue.GetString("Unit"));
    m_unitHasBeenSet = true;
  }
  return *this;
}

JsonValue Duration::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithInteger("Value", m_value);
  }

  if (m_unitHasBeenSet) {
    payload.WithString("Unit", DurationUnitMapper::GetNameForDurationUnit(m_unit));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
