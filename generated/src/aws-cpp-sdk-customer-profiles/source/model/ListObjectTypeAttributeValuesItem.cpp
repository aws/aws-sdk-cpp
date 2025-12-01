/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/ListObjectTypeAttributeValuesItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

ListObjectTypeAttributeValuesItem::ListObjectTypeAttributeValuesItem(JsonView jsonValue) { *this = jsonValue; }

ListObjectTypeAttributeValuesItem& ListObjectTypeAttributeValuesItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ListObjectTypeAttributeValuesItem::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
