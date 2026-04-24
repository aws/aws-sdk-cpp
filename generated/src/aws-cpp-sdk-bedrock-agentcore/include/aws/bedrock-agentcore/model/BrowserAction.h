/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/KeyPressArguments.h>
#include <aws/bedrock-agentcore/model/KeyShortcutArguments.h>
#include <aws/bedrock-agentcore/model/KeyTypeArguments.h>
#include <aws/bedrock-agentcore/model/MouseClickArguments.h>
#include <aws/bedrock-agentcore/model/MouseDragArguments.h>
#include <aws/bedrock-agentcore/model/MouseMoveArguments.h>
#include <aws/bedrock-agentcore/model/MouseScrollArguments.h>
#include <aws/bedrock-agentcore/model/ScreenshotArguments.h>

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
 * <p>The browser action to perform. Exactly one member must be set per
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/BrowserAction">AWS
 * API Reference</a></p>
 */
class BrowserAction {
 public:
  AWS_BEDROCKAGENTCORE_API BrowserAction() = default;
  AWS_BEDROCKAGENTCORE_API BrowserAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API BrowserAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Click at the specified coordinates.</p>
   */
  inline const MouseClickArguments& GetMouseClick() const { return m_mouseClick; }
  inline bool MouseClickHasBeenSet() const { return m_mouseClickHasBeenSet; }
  template <typename MouseClickT = MouseClickArguments>
  void SetMouseClick(MouseClickT&& value) {
    m_mouseClickHasBeenSet = true;
    m_mouseClick = std::forward<MouseClickT>(value);
  }
  template <typename MouseClickT = MouseClickArguments>
  BrowserAction& WithMouseClick(MouseClickT&& value) {
    SetMouseClick(std::forward<MouseClickT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Move the cursor to the specified coordinates.</p>
   */
  inline const MouseMoveArguments& GetMouseMove() const { return m_mouseMove; }
  inline bool MouseMoveHasBeenSet() const { return m_mouseMoveHasBeenSet; }
  template <typename MouseMoveT = MouseMoveArguments>
  void SetMouseMove(MouseMoveT&& value) {
    m_mouseMoveHasBeenSet = true;
    m_mouseMove = std::forward<MouseMoveT>(value);
  }
  template <typename MouseMoveT = MouseMoveArguments>
  BrowserAction& WithMouseMove(MouseMoveT&& value) {
    SetMouseMove(std::forward<MouseMoveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Drag from a start position to an end position.</p>
   */
  inline const MouseDragArguments& GetMouseDrag() const { return m_mouseDrag; }
  inline bool MouseDragHasBeenSet() const { return m_mouseDragHasBeenSet; }
  template <typename MouseDragT = MouseDragArguments>
  void SetMouseDrag(MouseDragT&& value) {
    m_mouseDragHasBeenSet = true;
    m_mouseDrag = std::forward<MouseDragT>(value);
  }
  template <typename MouseDragT = MouseDragArguments>
  BrowserAction& WithMouseDrag(MouseDragT&& value) {
    SetMouseDrag(std::forward<MouseDragT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scroll at the specified position.</p>
   */
  inline const MouseScrollArguments& GetMouseScroll() const { return m_mouseScroll; }
  inline bool MouseScrollHasBeenSet() const { return m_mouseScrollHasBeenSet; }
  template <typename MouseScrollT = MouseScrollArguments>
  void SetMouseScroll(MouseScrollT&& value) {
    m_mouseScrollHasBeenSet = true;
    m_mouseScroll = std::forward<MouseScrollT>(value);
  }
  template <typename MouseScrollT = MouseScrollArguments>
  BrowserAction& WithMouseScroll(MouseScrollT&& value) {
    SetMouseScroll(std::forward<MouseScrollT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type a string of text.</p>
   */
  inline const KeyTypeArguments& GetKeyType() const { return m_keyType; }
  inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
  template <typename KeyTypeT = KeyTypeArguments>
  void SetKeyType(KeyTypeT&& value) {
    m_keyTypeHasBeenSet = true;
    m_keyType = std::forward<KeyTypeT>(value);
  }
  template <typename KeyTypeT = KeyTypeArguments>
  BrowserAction& WithKeyType(KeyTypeT&& value) {
    SetKeyType(std::forward<KeyTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Press a key one or more times.</p>
   */
  inline const KeyPressArguments& GetKeyPress() const { return m_keyPress; }
  inline bool KeyPressHasBeenSet() const { return m_keyPressHasBeenSet; }
  template <typename KeyPressT = KeyPressArguments>
  void SetKeyPress(KeyPressT&& value) {
    m_keyPressHasBeenSet = true;
    m_keyPress = std::forward<KeyPressT>(value);
  }
  template <typename KeyPressT = KeyPressArguments>
  BrowserAction& WithKeyPress(KeyPressT&& value) {
    SetKeyPress(std::forward<KeyPressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Press a key combination.</p>
   */
  inline const KeyShortcutArguments& GetKeyShortcut() const { return m_keyShortcut; }
  inline bool KeyShortcutHasBeenSet() const { return m_keyShortcutHasBeenSet; }
  template <typename KeyShortcutT = KeyShortcutArguments>
  void SetKeyShortcut(KeyShortcutT&& value) {
    m_keyShortcutHasBeenSet = true;
    m_keyShortcut = std::forward<KeyShortcutT>(value);
  }
  template <typename KeyShortcutT = KeyShortcutArguments>
  BrowserAction& WithKeyShortcut(KeyShortcutT&& value) {
    SetKeyShortcut(std::forward<KeyShortcutT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Capture a full-screen screenshot.</p>
   */
  inline const ScreenshotArguments& GetScreenshot() const { return m_screenshot; }
  inline bool ScreenshotHasBeenSet() const { return m_screenshotHasBeenSet; }
  template <typename ScreenshotT = ScreenshotArguments>
  void SetScreenshot(ScreenshotT&& value) {
    m_screenshotHasBeenSet = true;
    m_screenshot = std::forward<ScreenshotT>(value);
  }
  template <typename ScreenshotT = ScreenshotArguments>
  BrowserAction& WithScreenshot(ScreenshotT&& value) {
    SetScreenshot(std::forward<ScreenshotT>(value));
    return *this;
  }
  ///@}
 private:
  MouseClickArguments m_mouseClick;

  MouseMoveArguments m_mouseMove;

  MouseDragArguments m_mouseDrag;

  MouseScrollArguments m_mouseScroll;

  KeyTypeArguments m_keyType;

  KeyPressArguments m_keyPress;

  KeyShortcutArguments m_keyShortcut;

  ScreenshotArguments m_screenshot;
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
