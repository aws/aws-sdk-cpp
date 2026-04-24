/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/TimeAzEl.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

TimeAzEl::TimeAzEl(JsonView jsonValue) { *this = jsonValue; }

TimeAzEl& TimeAzEl::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dt")) {
    m_dt = jsonValue.GetDouble("dt");
    m_dtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("az")) {
    m_az = jsonValue.GetDouble("az");
    m_azHasBeenSet = true;
  }
  if (jsonValue.ValueExists("el")) {
    m_el = jsonValue.GetDouble("el");
    m_elHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeAzEl::Jsonize() const {
  JsonValue payload;

  if (m_dtHasBeenSet) {
    payload.WithDouble("dt", m_dt);
  }

  if (m_azHasBeenSet) {
    payload.WithDouble("az", m_az);
  }

  if (m_elHasBeenSet) {
    payload.WithDouble("el", m_el);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
