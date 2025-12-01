/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PaletteCanvas.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PaletteCanvas::PaletteCanvas(JsonView jsonValue) { *this = jsonValue; }

PaletteCanvas& PaletteCanvas::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContainerBackground")) {
    m_containerBackground = jsonValue.GetString("ContainerBackground");
    m_containerBackgroundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PageBackground")) {
    m_pageBackground = jsonValue.GetString("PageBackground");
    m_pageBackgroundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ActiveBackground")) {
    m_activeBackground = jsonValue.GetString("ActiveBackground");
    m_activeBackgroundHasBeenSet = true;
  }
  return *this;
}

JsonValue PaletteCanvas::Jsonize() const {
  JsonValue payload;

  if (m_containerBackgroundHasBeenSet) {
    payload.WithString("ContainerBackground", m_containerBackground);
  }

  if (m_pageBackgroundHasBeenSet) {
    payload.WithString("PageBackground", m_pageBackground);
  }

  if (m_activeBackgroundHasBeenSet) {
    payload.WithString("ActiveBackground", m_activeBackground);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
