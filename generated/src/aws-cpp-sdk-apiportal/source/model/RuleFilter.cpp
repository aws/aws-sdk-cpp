/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/RuleFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

RuleFilter::RuleFilter(JsonView jsonValue) { *this = jsonValue; }

RuleFilter& RuleFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = RuleFilterKeyMapper::GetRuleFilterKeyForName(jsonValue.GetString("key"));
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("values")) {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleFilter::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", RuleFilterKeyMapper::GetNameForRuleFilterKey(m_key));
  }

  if (m_valuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
    for (unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex) {
      valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
    }
    payload.WithArray("values", std::move(valuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
