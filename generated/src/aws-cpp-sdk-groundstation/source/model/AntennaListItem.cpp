/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AntennaListItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AntennaListItem::AntennaListItem(JsonView jsonValue) { *this = jsonValue; }

AntennaListItem& AntennaListItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("groundStationName")) {
    m_groundStationName = jsonValue.GetString("groundStationName");
    m_groundStationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("antennaName")) {
    m_antennaName = jsonValue.GetString("antennaName");
    m_antennaNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue AntennaListItem::Jsonize() const {
  JsonValue payload;

  if (m_groundStationNameHasBeenSet) {
    payload.WithString("groundStationName", m_groundStationName);
  }

  if (m_antennaNameHasBeenSet) {
    payload.WithString("antennaName", m_antennaName);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
