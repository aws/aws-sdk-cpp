/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/OverrideHour.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

OverrideHour::OverrideHour(JsonView jsonValue) { *this = jsonValue; }

OverrideHour& OverrideHour::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Start")) {
    m_start = jsonValue.GetObject("Start");
    m_startHasBeenSet = true;
  }
  if (jsonValue.ValueExists("End")) {
    m_end = jsonValue.GetObject("End");
    m_endHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OverrideName")) {
    m_overrideName = jsonValue.GetString("OverrideName");
    m_overrideNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OperationalStatus")) {
    m_operationalStatus = OperationalStatusMapper::GetOperationalStatusForName(jsonValue.GetString("OperationalStatus"));
    m_operationalStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue OverrideHour::Jsonize() const {
  JsonValue payload;

  if (m_startHasBeenSet) {
    payload.WithObject("Start", m_start.Jsonize());
  }

  if (m_endHasBeenSet) {
    payload.WithObject("End", m_end.Jsonize());
  }

  if (m_overrideNameHasBeenSet) {
    payload.WithString("OverrideName", m_overrideName);
  }

  if (m_operationalStatusHasBeenSet) {
    payload.WithString("OperationalStatus", OperationalStatusMapper::GetNameForOperationalStatus(m_operationalStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
