/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserActionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

BrowserActionResult::BrowserActionResult(JsonView jsonValue) { *this = jsonValue; }

BrowserActionResult& BrowserActionResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mouseClick")) {
    m_mouseClick = jsonValue.GetObject("mouseClick");
    m_mouseClickHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mouseMove")) {
    m_mouseMove = jsonValue.GetObject("mouseMove");
    m_mouseMoveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mouseDrag")) {
    m_mouseDrag = jsonValue.GetObject("mouseDrag");
    m_mouseDragHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mouseScroll")) {
    m_mouseScroll = jsonValue.GetObject("mouseScroll");
    m_mouseScrollHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyType")) {
    m_keyType = jsonValue.GetObject("keyType");
    m_keyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyPress")) {
    m_keyPress = jsonValue.GetObject("keyPress");
    m_keyPressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("keyShortcut")) {
    m_keyShortcut = jsonValue.GetObject("keyShortcut");
    m_keyShortcutHasBeenSet = true;
  }
  if (jsonValue.ValueExists("screenshot")) {
    m_screenshot = jsonValue.GetObject("screenshot");
    m_screenshotHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserActionResult::Jsonize() const {
  JsonValue payload;

  if (m_mouseClickHasBeenSet) {
    payload.WithObject("mouseClick", m_mouseClick.Jsonize());
  }

  if (m_mouseMoveHasBeenSet) {
    payload.WithObject("mouseMove", m_mouseMove.Jsonize());
  }

  if (m_mouseDragHasBeenSet) {
    payload.WithObject("mouseDrag", m_mouseDrag.Jsonize());
  }

  if (m_mouseScrollHasBeenSet) {
    payload.WithObject("mouseScroll", m_mouseScroll.Jsonize());
  }

  if (m_keyTypeHasBeenSet) {
    payload.WithObject("keyType", m_keyType.Jsonize());
  }

  if (m_keyPressHasBeenSet) {
    payload.WithObject("keyPress", m_keyPress.Jsonize());
  }

  if (m_keyShortcutHasBeenSet) {
    payload.WithObject("keyShortcut", m_keyShortcut.Jsonize());
  }

  if (m_screenshotHasBeenSet) {
    payload.WithObject("screenshot", m_screenshot.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
