/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FontFamily.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

FontFamily::FontFamily(JsonView jsonValue) { *this = jsonValue; }

FontFamily& FontFamily::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Default")) {
    m_default = WorkspaceFontFamilyMapper::GetWorkspaceFontFamilyForName(jsonValue.GetString("Default"));
    m_defaultHasBeenSet = true;
  }
  return *this;
}

JsonValue FontFamily::Jsonize() const {
  JsonValue payload;

  if (m_defaultHasBeenSet) {
    payload.WithString("Default", WorkspaceFontFamilyMapper::GetNameForWorkspaceFontFamily(m_default));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
