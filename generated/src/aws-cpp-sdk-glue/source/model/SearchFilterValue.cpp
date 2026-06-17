/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchFilterValue::SearchFilterValue(JsonView jsonValue) { *this = jsonValue; }

SearchFilterValue& SearchFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LongValue")) {
    m_longValue = jsonValue.GetInt64("LongValue");
    m_longValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  if (m_longValueHasBeenSet) {
    payload.WithInt64("LongValue", m_longValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
