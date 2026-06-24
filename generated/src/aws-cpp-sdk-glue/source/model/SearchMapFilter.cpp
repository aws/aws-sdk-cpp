/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchMapFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchMapFilter::SearchMapFilter(JsonView jsonValue) { *this = jsonValue; }

SearchMapFilter& SearchMapFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attribute")) {
    m_attribute = jsonValue.GetString("Attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Key")) {
    m_key = jsonValue.GetString("Key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchMapFilter::Jsonize() const {
  JsonValue payload;

  if (m_attributeHasBeenSet) {
    payload.WithString("Attribute", m_attribute);
  }

  if (m_keyHasBeenSet) {
    payload.WithString("Key", m_key);
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
