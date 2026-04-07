/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/KeyPressResult.h>
#include <aws/bedrock-agentcore/model/KeyShortcutResult.h>
#include <aws/bedrock-agentcore/model/KeyTypeResult.h>
#include <aws/bedrock-agentcore/model/MouseClickResult.h>
#include <aws/bedrock-agentcore/model/MouseDragResult.h>
#include <aws/bedrock-agentcore/model/MouseMoveResult.h>
#include <aws/bedrock-agentcore/model/MouseScrollResult.h>
#include <aws/bedrock-agentcore/model/ScreenshotResult.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The result of a browser action execution. Exactly one member is set, matching
 * the action that was performed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserActionResult">AWS
 * API Reference</a></p>
 */
class BrowserActionResult {
 public:
  AWS_BEDROCKAGENTCORE_API BrowserActionResult() = default;
  AWS_BEDROCKAGENTCORE_API BrowserActionResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BrowserActionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The result of a mouse click action.</p>
   */
  inline const MouseClickResult& GetMouseClick() const { return m_mouseClick; }
  inline bool MouseClickHasBeenSet() const { return m_mouseClickHasBeenSet; }
  template <typename MouseClickT = MouseClickResult>
  void SetMouseClick(MouseClickT&& value) {
    m_mouseClickHasBeenSet = true;
    m_mouseClick = std::forward<MouseClickT>(value);
  }
  template <typename MouseClickT = MouseClickResult>
  BrowserActionResult& WithMouseClick(MouseClickT&& value) {
    SetMouseClick(std::forward<MouseClickT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a mouse move action.</p>
   */
  inline const MouseMoveResult& GetMouseMove() const { return m_mouseMove; }
  inline bool MouseMoveHasBeenSet() const { return m_mouseMoveHasBeenSet; }
  template <typename MouseMoveT = MouseMoveResult>
  void SetMouseMove(MouseMoveT&& value) {
    m_mouseMoveHasBeenSet = true;
    m_mouseMove = std::forward<MouseMoveT>(value);
  }
  template <typename MouseMoveT = MouseMoveResult>
  BrowserActionResult& WithMouseMove(MouseMoveT&& value) {
    SetMouseMove(std::forward<MouseMoveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a mouse drag action.</p>
   */
  inline const MouseDragResult& GetMouseDrag() const { return m_mouseDrag; }
  inline bool MouseDragHasBeenSet() const { return m_mouseDragHasBeenSet; }
  template <typename MouseDragT = MouseDragResult>
  void SetMouseDrag(MouseDragT&& value) {
    m_mouseDragHasBeenSet = true;
    m_mouseDrag = std::forward<MouseDragT>(value);
  }
  template <typename MouseDragT = MouseDragResult>
  BrowserActionResult& WithMouseDrag(MouseDragT&& value) {
    SetMouseDrag(std::forward<MouseDragT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a mouse scroll action.</p>
   */
  inline const MouseScrollResult& GetMouseScroll() const { return m_mouseScroll; }
  inline bool MouseScrollHasBeenSet() const { return m_mouseScrollHasBeenSet; }
  template <typename MouseScrollT = MouseScrollResult>
  void SetMouseScroll(MouseScrollT&& value) {
    m_mouseScrollHasBeenSet = true;
    m_mouseScroll = std::forward<MouseScrollT>(value);
  }
  template <typename MouseScrollT = MouseScrollResult>
  BrowserActionResult& WithMouseScroll(MouseScrollT&& value) {
    SetMouseScroll(std::forward<MouseScrollT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a key type action.</p>
   */
  inline const KeyTypeResult& GetKeyType() const { return m_keyType; }
  inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
  template <typename KeyTypeT = KeyTypeResult>
  void SetKeyType(KeyTypeT&& value) {
    m_keyTypeHasBeenSet = true;
    m_keyType = std::forward<KeyTypeT>(value);
  }
  template <typename KeyTypeT = KeyTypeResult>
  BrowserActionResult& WithKeyType(KeyTypeT&& value) {
    SetKeyType(std::forward<KeyTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a key press action.</p>
   */
  inline const KeyPressResult& GetKeyPress() const { return m_keyPress; }
  inline bool KeyPressHasBeenSet() const { return m_keyPressHasBeenSet; }
  template <typename KeyPressT = KeyPressResult>
  void SetKeyPress(KeyPressT&& value) {
    m_keyPressHasBeenSet = true;
    m_keyPress = std::forward<KeyPressT>(value);
  }
  template <typename KeyPressT = KeyPressResult>
  BrowserActionResult& WithKeyPress(KeyPressT&& value) {
    SetKeyPress(std::forward<KeyPressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a key shortcut action.</p>
   */
  inline const KeyShortcutResult& GetKeyShortcut() const { return m_keyShortcut; }
  inline bool KeyShortcutHasBeenSet() const { return m_keyShortcutHasBeenSet; }
  template <typename KeyShortcutT = KeyShortcutResult>
  void SetKeyShortcut(KeyShortcutT&& value) {
    m_keyShortcutHasBeenSet = true;
    m_keyShortcut = std::forward<KeyShortcutT>(value);
  }
  template <typename KeyShortcutT = KeyShortcutResult>
  BrowserActionResult& WithKeyShortcut(KeyShortcutT&& value) {
    SetKeyShortcut(std::forward<KeyShortcutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result of a screenshot action.</p>
   */
  inline const ScreenshotResult& GetScreenshot() const { return m_screenshot; }
  inline bool ScreenshotHasBeenSet() const { return m_screenshotHasBeenSet; }
  template <typename ScreenshotT = ScreenshotResult>
  void SetScreenshot(ScreenshotT&& value) {
    m_screenshotHasBeenSet = true;
    m_screenshot = std::forward<ScreenshotT>(value);
  }
  template <typename ScreenshotT = ScreenshotResult>
  BrowserActionResult& WithScreenshot(ScreenshotT&& value) {
    SetScreenshot(std::forward<ScreenshotT>(value));
    return *this;
  }
  ///@}
 private:
  MouseClickResult m_mouseClick;

  MouseMoveResult m_mouseMove;

  MouseDragResult m_mouseDrag;

  MouseScrollResult m_mouseScroll;

  KeyTypeResult m_keyType;

  KeyPressResult m_keyPress;

  KeyShortcutResult m_keyShortcut;

  ScreenshotResult m_screenshot;
  bool m_mouseClickHasBeenSet = false;
  bool m_mouseMoveHasBeenSet = false;
  bool m_mouseDragHasBeenSet = false;
  bool m_mouseScrollHasBeenSet = false;
  bool m_keyTypeHasBeenSet = false;
  bool m_keyPressHasBeenSet = false;
  bool m_keyShortcutHasBeenSet = false;
  bool m_screenshotHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
