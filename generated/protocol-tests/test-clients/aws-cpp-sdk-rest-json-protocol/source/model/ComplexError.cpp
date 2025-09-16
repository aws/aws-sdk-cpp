/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/ComplexError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

ComplexError::ComplexError(JsonView jsonValue) { *this = jsonValue; }

ComplexError& ComplexError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TopLevel")) {
    m_topLevel = jsonValue.GetString("TopLevel");
    m_topLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Nested")) {
    m_nested = jsonValue.GetObject("Nested");
    m_nestedHasBeenSet = true;
  }
  return *this;
}

JsonValue ComplexError::Jsonize() const {
  JsonValue payload;

  if (m_topLevelHasBeenSet) {
    payload.WithString("TopLevel", m_topLevel);
  }

  if (m_nestedHasBeenSet) {
    payload.WithObject("Nested", m_nested.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
