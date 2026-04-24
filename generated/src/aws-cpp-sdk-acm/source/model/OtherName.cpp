/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/OtherName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

OtherName::OtherName(JsonView jsonValue) { *this = jsonValue; }

OtherName& OtherName::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ObjectIdentifier")) {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");
    m_objectIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue OtherName::Jsonize() const {
  JsonValue payload;

  if (m_objectIdentifierHasBeenSet) {
    payload.WithString("ObjectIdentifier", m_objectIdentifier);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
