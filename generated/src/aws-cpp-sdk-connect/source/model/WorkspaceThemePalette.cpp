/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/WorkspaceThemePalette.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

WorkspaceThemePalette::WorkspaceThemePalette(JsonView jsonValue) { *this = jsonValue; }

WorkspaceThemePalette& WorkspaceThemePalette::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Header")) {
    m_header = jsonValue.GetObject("Header");
    m_headerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Navigation")) {
    m_navigation = jsonValue.GetObject("Navigation");
    m_navigationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Canvas")) {
    m_canvas = jsonValue.GetObject("Canvas");
    m_canvasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Primary")) {
    m_primary = jsonValue.GetObject("Primary");
    m_primaryHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkspaceThemePalette::Jsonize() const {
  JsonValue payload;

  if (m_headerHasBeenSet) {
    payload.WithObject("Header", m_header.Jsonize());
  }

  if (m_navigationHasBeenSet) {
    payload.WithObject("Navigation", m_navigation.Jsonize());
  }

  if (m_canvasHasBeenSet) {
    payload.WithObject("Canvas", m_canvas.Jsonize());
  }

  if (m_primaryHasBeenSet) {
    payload.WithObject("Primary", m_primary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
