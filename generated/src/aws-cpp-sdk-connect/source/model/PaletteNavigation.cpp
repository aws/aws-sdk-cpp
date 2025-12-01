/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PaletteNavigation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PaletteNavigation::PaletteNavigation(JsonView jsonValue) { *this = jsonValue; }

PaletteNavigation& PaletteNavigation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Background")) {
    m_background = jsonValue.GetString("Background");
    m_backgroundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextBackgroundHover")) {
    m_textBackgroundHover = jsonValue.GetString("TextBackgroundHover");
    m_textBackgroundHoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextBackgroundActive")) {
    m_textBackgroundActive = jsonValue.GetString("TextBackgroundActive");
    m_textBackgroundActiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextHover")) {
    m_textHover = jsonValue.GetString("TextHover");
    m_textHoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextActive")) {
    m_textActive = jsonValue.GetString("TextActive");
    m_textActiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvertActionsColors")) {
    m_invertActionsColors = jsonValue.GetBool("InvertActionsColors");
    m_invertActionsColorsHasBeenSet = true;
  }
  return *this;
}

JsonValue PaletteNavigation::Jsonize() const {
  JsonValue payload;

  if (m_backgroundHasBeenSet) {
    payload.WithString("Background", m_background);
  }

  if (m_textBackgroundHoverHasBeenSet) {
    payload.WithString("TextBackgroundHover", m_textBackgroundHover);
  }

  if (m_textBackgroundActiveHasBeenSet) {
    payload.WithString("TextBackgroundActive", m_textBackgroundActive);
  }

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_textHoverHasBeenSet) {
    payload.WithString("TextHover", m_textHover);
  }

  if (m_textActiveHasBeenSet) {
    payload.WithString("TextActive", m_textActive);
  }

  if (m_invertActionsColorsHasBeenSet) {
    payload.WithBool("InvertActionsColors", m_invertActionsColors);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
