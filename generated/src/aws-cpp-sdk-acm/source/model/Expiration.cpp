/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/Expiration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

Expiration::Expiration(JsonView jsonValue) { *this = jsonValue; }

Expiration& Expiration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetInt64("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = TimeTypeMapper::GetTimeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue Expiration::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithInt64("Value", m_value);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", TimeTypeMapper::GetNameForTimeType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
