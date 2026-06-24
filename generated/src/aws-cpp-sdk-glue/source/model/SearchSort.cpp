/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchSort::SearchSort(JsonView jsonValue) { *this = jsonValue; }

SearchSort& SearchSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attribute")) {
    m_attribute = jsonValue.GetString("Attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Order")) {
    m_order = SearchSortOrderMapper::GetSearchSortOrderForName(jsonValue.GetString("Order"));
    m_orderHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSort::Jsonize() const {
  JsonValue payload;

  if (m_attributeHasBeenSet) {
    payload.WithString("Attribute", m_attribute);
  }

  if (m_orderHasBeenSet) {
    payload.WithString("Order", SearchSortOrderMapper::GetNameForSearchSortOrder(m_order));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
