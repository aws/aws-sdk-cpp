/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PaletteHeader.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

PaletteHeader::PaletteHeader(JsonView jsonValue) { *this = jsonValue; }

PaletteHeader& PaletteHeader::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Background")) {
    m_background = jsonValue.GetString("Background");
    m_backgroundHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Text")) {
    m_text = jsonValue.GetString("Text");
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextHover")) {
    m_textHover = jsonValue.GetString("TextHover");
    m_textHoverHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InvertActionsColors")) {
    m_invertActionsColors = jsonValue.GetBool("InvertActionsColors");
    m_invertActionsColorsHasBeenSet = true;
  }
  return *this;
}

JsonValue PaletteHeader::Jsonize() const {
  JsonValue payload;

  if (m_backgroundHasBeenSet) {
    payload.WithString("Background", m_background);
  }

  if (m_textHasBeenSet) {
    payload.WithString("Text", m_text);
  }

  if (m_textHoverHasBeenSet) {
    payload.WithString("TextHover", m_textHover);
  }

  if (m_invertActionsColorsHasBeenSet) {
    payload.WithBool("InvertActionsColors", m_invertActionsColors);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
