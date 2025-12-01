/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PalettePrimary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PalettePrimary::PalettePrimary(JsonView jsonValue) { *this = jsonValue; }

PalettePrimary& PalettePrimary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Default")) {
    m_default = jsonValue.GetString("Default");
    m_defaultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Active")) {
    m_active = jsonValue.GetString("Active");
    m_activeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContrastText")) {
    m_contrastText = jsonValue.GetString("ContrastText");
    m_contrastTextHasBeenSet = true;
  }
  return *this;
}

JsonValue PalettePrimary::Jsonize() const {
  JsonValue payload;

  if (m_defaultHasBeenSet) {
    payload.WithString("Default", m_default);
  }

  if (m_activeHasBeenSet) {
    payload.WithString("Active", m_active);
  }

  if (m_contrastTextHasBeenSet) {
    payload.WithString("ContrastText", m_contrastText);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
