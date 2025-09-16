/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/ComplexNestedErrorData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

ComplexNestedErrorData::ComplexNestedErrorData(JsonView jsonValue) { *this = jsonValue; }

ComplexNestedErrorData& ComplexNestedErrorData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Foo")) {
    m_foo = jsonValue.GetString("Foo");
    m_fooHasBeenSet = true;
  }
  return *this;
}

JsonValue ComplexNestedErrorData::Jsonize() const {
  JsonValue payload;

  if (m_fooHasBeenSet) {
    payload.WithString("Foo", m_foo);
  }

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
