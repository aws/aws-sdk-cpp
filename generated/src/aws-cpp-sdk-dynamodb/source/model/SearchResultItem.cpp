/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/SearchResultItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

SearchResultItem::SearchResultItem(JsonView jsonValue) { *this = jsonValue; }

SearchResultItem& SearchResultItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Item")) {
    Aws::Map<Aws::String, JsonView> itemJsonMap = jsonValue.GetObject("Item").GetAllObjects();
    for (auto& itemItem : itemJsonMap) {
      m_item[itemItem.first] = itemItem.second.AsObject();
    }
    m_itemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Score")) {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchResultItem::Jsonize() const {
  JsonValue payload;

  if (m_itemHasBeenSet) {
    JsonValue itemJsonMap;
    for (auto& itemItem : m_item) {
      itemJsonMap.WithObject(itemItem.first, itemItem.second.Jsonize());
    }
    payload.WithObject("Item", std::move(itemJsonMap));
  }

  if (m_scoreHasBeenSet) {
    payload.WithDouble("Score", m_score);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
