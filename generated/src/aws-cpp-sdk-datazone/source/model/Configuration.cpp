/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/Configuration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

Configuration::Configuration(JsonView jsonValue) { *this = jsonValue; }

Configuration& Configuration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("classification")) {
    m_classification = jsonValue.GetString("classification");
    m_classificationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("properties")) {
    Aws::Map<Aws::String, JsonView> propertiesJsonMap = jsonValue.GetObject("properties").GetAllObjects();
    for (auto& propertiesItem : propertiesJsonMap) {
      m_properties[propertiesItem.first] = propertiesItem.second.AsString();
    }
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Configuration::Jsonize() const {
  JsonValue payload;

  if (m_classificationHasBeenSet) {
    payload.WithString("classification", m_classification);
  }

  if (m_propertiesHasBeenSet) {
    JsonValue propertiesJsonMap;
    for (auto& propertiesItem : m_properties) {
      propertiesJsonMap.WithString(propertiesItem.first, propertiesItem.second);
    }
    payload.WithObject("properties", std::move(propertiesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
