/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/NestedUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

NestedUnion::NestedUnion(JsonView jsonValue) { *this = jsonValue; }

NestedUnion& NestedUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stringValue")) {
    m_stringValue = jsonValue.GetString("stringValue");
    m_stringValueHasBeenSet = true;
  }
  return *this;
}

JsonValue NestedUnion::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("stringValue", m_stringValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
