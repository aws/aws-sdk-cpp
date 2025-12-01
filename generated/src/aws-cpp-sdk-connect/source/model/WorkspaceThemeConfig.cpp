/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceThemeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspaceThemeConfig::WorkspaceThemeConfig(JsonView jsonValue) { *this = jsonValue; }

WorkspaceThemeConfig& WorkspaceThemeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Palette")) {
    m_palette = jsonValue.GetObject("Palette");
    m_paletteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Images")) {
    m_images = jsonValue.GetObject("Images");
    m_imagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Typography")) {
    m_typography = jsonValue.GetObject("Typography");
    m_typographyHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceThemeConfig::Jsonize() const {
  JsonValue payload;

  if (m_paletteHasBeenSet) {
    payload.WithObject("Palette", m_palette.Jsonize());
  }

  if (m_imagesHasBeenSet) {
    payload.WithObject("Images", m_images.Jsonize());
  }

  if (m_typographyHasBeenSet) {
    payload.WithObject("Typography", m_typography.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
