/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceThemeTypography.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspaceThemeTypography::WorkspaceThemeTypography(JsonView jsonValue) { *this = jsonValue; }

WorkspaceThemeTypography& WorkspaceThemeTypography::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FontFamily")) {
    m_fontFamily = jsonValue.GetObject("FontFamily");
    m_fontFamilyHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceThemeTypography::Jsonize() const {
  JsonValue payload;

  if (m_fontFamilyHasBeenSet) {
    payload.WithObject("FontFamily", m_fontFamily.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
