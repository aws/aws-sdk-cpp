/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/identitystore/model/Photo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {

Photo::Photo(JsonView jsonValue) { *this = jsonValue; }

Photo& Photo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Display")) {
    m_display = jsonValue.GetString("Display");
    m_displayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Primary")) {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  return *this;
}

JsonValue Photo::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_displayHasBeenSet) {
    payload.WithString("Display", m_display);
  }

  if (m_primaryHasBeenSet) {
    payload.WithBool("Primary", m_primary);
  }

  return payload;
}

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
