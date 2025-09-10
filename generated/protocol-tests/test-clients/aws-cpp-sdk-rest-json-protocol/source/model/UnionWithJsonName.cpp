/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/UnionWithJsonName.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

UnionWithJsonName::UnionWithJsonName(JsonView jsonValue) { *this = jsonValue; }

UnionWithJsonName& UnionWithJsonName::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FOO")) {
    m_foo = jsonValue.GetString("FOO");
    m_fooHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bar")) {
    m_bar = jsonValue.GetString("bar");
    m_barHasBeenSet = true;
  }
  if (jsonValue.ValueExists("_baz")) {
    m_baz = jsonValue.GetString("_baz");
    m_bazHasBeenSet = true;
  }
  return *this;
}

JsonValue UnionWithJsonName::Jsonize() const {
  JsonValue payload;

  if (m_fooHasBeenSet) {
    payload.WithString("FOO", m_foo);
  }

  if (m_barHasBeenSet) {
    payload.WithString("bar", m_bar);
  }

  if (m_bazHasBeenSet) {
    payload.WithString("_baz", m_baz);
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
