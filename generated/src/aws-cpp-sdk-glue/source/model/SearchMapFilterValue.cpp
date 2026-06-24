/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/SearchMapFilterValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

SearchMapFilterValue::SearchMapFilterValue(JsonView jsonValue) { *this = jsonValue; }

SearchMapFilterValue& SearchMapFilterValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchMapFilterValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
