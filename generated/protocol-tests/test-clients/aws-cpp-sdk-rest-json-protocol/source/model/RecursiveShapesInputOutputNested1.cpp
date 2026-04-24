/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

RecursiveShapesInputOutputNested1::RecursiveShapesInputOutputNested1(JsonView jsonValue) { *this = jsonValue; }

RecursiveShapesInputOutputNested1& RecursiveShapesInputOutputNested1::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("foo")) {
    m_foo = jsonValue.GetString("foo");
    m_fooHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nested")) {
    m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", jsonValue.GetObject("nested"));
    m_nestedHasBeenSet = true;
  }
  return *this;
}

JsonValue RecursiveShapesInputOutputNested1::Jsonize() const {
  JsonValue payload;

  if (m_fooHasBeenSet) {
    payload.WithString("foo", m_foo);
  }

  if (m_nestedHasBeenSet) {
    payload.WithObject("nested", m_nested->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
