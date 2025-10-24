﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-places/model/ParsedQuerySecondaryAddressComponent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoPlaces {
namespace Model {

ParsedQuerySecondaryAddressComponent::ParsedQuerySecondaryAddressComponent(JsonView jsonValue) { *this = jsonValue; }

ParsedQuerySecondaryAddressComponent& ParsedQuerySecondaryAddressComponent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StartIndex")) {
    m_startIndex = jsonValue.GetInteger("StartIndex");
    m_startIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndIndex")) {
    m_endIndex = jsonValue.GetInteger("EndIndex");
    m_endIndexHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Number")) {
    m_number = jsonValue.GetString("Number");
    m_numberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Designator")) {
    m_designator = jsonValue.GetString("Designator");
    m_designatorHasBeenSet = true;
  }
  return *this;
}

JsonValue ParsedQuerySecondaryAddressComponent::Jsonize() const {
  JsonValue payload;

  if (m_startIndexHasBeenSet) {
    payload.WithInteger("StartIndex", m_startIndex);
  }

  if (m_endIndexHasBeenSet) {
    payload.WithInteger("EndIndex", m_endIndex);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_numberHasBeenSet) {
    payload.WithString("Number", m_number);
  }

  if (m_designatorHasBeenSet) {
    payload.WithString("Designator", m_designator);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoPlaces
}  // namespace Aws
