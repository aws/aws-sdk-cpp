/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/FieldValueInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

FieldValueInput::FieldValueInput(JsonView jsonValue) { *this = jsonValue; }

FieldValueInput& FieldValueInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fieldIdentifier")) {
    m_fieldIdentifier = jsonValue.GetObject("fieldIdentifier");
    m_fieldIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldValueInput::Jsonize() const {
  JsonValue payload;

  if (m_fieldIdentifierHasBeenSet) {
    payload.WithObject("fieldIdentifier", m_fieldIdentifier.Jsonize());
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
