/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/CompositeSliConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

CompositeSliConfig::CompositeSliConfig(JsonView jsonValue) { *this = jsonValue; }

CompositeSliConfig& CompositeSliConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SelectionConfig")) {
    m_selectionConfig = jsonValue.GetObject("SelectionConfig");
    m_selectionConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Components")) {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("Components");
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      m_components.push_back(componentsJsonList[componentsIndex].AsObject());
    }
    m_componentsHasBeenSet = true;
  }
  return *this;
}

JsonValue CompositeSliConfig::Jsonize() const {
  JsonValue payload;

  if (m_selectionConfigHasBeenSet) {
    payload.WithObject("SelectionConfig", m_selectionConfig.Jsonize());
  }

  if (m_componentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
    for (unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex) {
      componentsJsonList[componentsIndex].AsObject(m_components[componentsIndex].Jsonize());
    }
    payload.WithArray("Components", std::move(componentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
