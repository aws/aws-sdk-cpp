/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/Checklist.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

Checklist::Checklist(JsonView jsonValue) { *this = jsonValue; }

Checklist& Checklist::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("checklistId")) {
    m_checklistId = jsonValue.GetString("checklistId");
    m_checklistIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("items")) {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("items");
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  return *this;
}

JsonValue Checklist::Jsonize() const {
  JsonValue payload;

  if (m_checklistIdHasBeenSet) {
    payload.WithString("checklistId", m_checklistId);
  }

  if (m_itemsHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
    for (unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex) {
      itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
    }
    payload.WithArray("items", std::move(itemsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
