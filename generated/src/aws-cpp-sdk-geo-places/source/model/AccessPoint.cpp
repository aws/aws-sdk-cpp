/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/AccessPoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

AccessPoint::AccessPoint(JsonView jsonValue) { *this = jsonValue; }

AccessPoint& AccessPoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Position")) {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = AccessPointTypeMapper::GetAccessPointTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Primary")) {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Label")) {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue AccessPoint::Jsonize() const {
  JsonValue payload;

  if (m_positionHasBeenSet) {
    Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
    for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
      positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
    }
    payload.WithArray("Position", std::move(positionJsonList));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", AccessPointTypeMapper::GetNameForAccessPointType(m_type));
  }

  if (m_primaryHasBeenSet) {
    payload.WithBool("Primary", m_primary);
  }

  if (m_labelHasBeenSet) {
    payload.WithString("Label", m_label);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
