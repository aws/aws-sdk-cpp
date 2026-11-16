/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ChecklistItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

ChecklistItem::ChecklistItem(JsonView jsonValue) { *this = jsonValue; }

ChecklistItem& ChecklistItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("itemKey")) {
    m_itemKey = jsonValue.GetString("itemKey");
    m_itemKeyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ChecklistItemStatusMapper::GetChecklistItemStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ChecklistItem::Jsonize() const {
  JsonValue payload;

  if (m_itemKeyHasBeenSet) {
    payload.WithString("itemKey", m_itemKey);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ChecklistItemStatusMapper::GetNameForChecklistItemStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
