/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchAttributeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchAttributeFilter::SearchAttributeFilter(JsonView jsonValue) { *this = jsonValue; }

SearchAttributeFilter& SearchAttributeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attribute")) {
    m_attribute = jsonValue.GetString("Attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Comparator")) {
    m_comparator = SearchFilterComparatorMapper::GetSearchFilterComparatorForName(jsonValue.GetString("Comparator"));
    m_comparatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchAttributeFilter::Jsonize() const {
  JsonValue payload;

  if (m_attributeHasBeenSet) {
    payload.WithString("Attribute", m_attribute);
  }

  if (m_comparatorHasBeenSet) {
    payload.WithString("Comparator", SearchFilterComparatorMapper::GetNameForSearchFilterComparator(m_comparator));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
