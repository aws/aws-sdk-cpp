/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AzElEphemeris.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AzElEphemeris::AzElEphemeris(JsonView jsonValue) { *this = jsonValue; }

AzElEphemeris& AzElEphemeris::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("groundStation")) {
    m_groundStation = jsonValue.GetString("groundStation");
    m_groundStationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("data")) {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  return *this;
}

JsonValue AzElEphemeris::Jsonize() const {
  JsonValue payload;

  if (m_groundStationHasBeenSet) {
    payload.WithString("groundStation", m_groundStation);
  }

  if (m_dataHasBeenSet) {
    payload.WithObject("data", m_data.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
