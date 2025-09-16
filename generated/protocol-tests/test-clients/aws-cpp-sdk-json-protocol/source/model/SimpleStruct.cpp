/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/SimpleStruct.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

SimpleStruct::SimpleStruct(JsonView jsonValue) { *this = jsonValue; }

SimpleStruct& SimpleStruct::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue SimpleStruct::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
