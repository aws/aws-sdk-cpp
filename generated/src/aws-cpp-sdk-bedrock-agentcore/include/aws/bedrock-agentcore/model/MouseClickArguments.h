/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MouseButton.h>

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
 * <p>Arguments for a mouse click action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MouseClickArguments">AWS
 * API Reference</a></p>
 */
class MouseClickArguments {
 public:
  AWS_BEDROCKAGENTCORE_API MouseClickArguments() = default;
  AWS_BEDROCKAGENTCORE_API MouseClickArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MouseClickArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The X coordinate on screen where the click occurs.</p>
   */
  inline int GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  inline void SetX(int value) {
    m_xHasBeenSet = true;
    m_x = value;
  }
  inline MouseClickArguments& WithX(int value) {
    SetX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Y coordinate on screen where the click occurs.</p>
   */
  inline int GetY() const { return m_y; }
  inline bool YHasBeenSet() const { return m_yHasBeenSet; }
  inline void SetY(int value) {
    m_yHasBeenSet = true;
    m_y = value;
  }
  inline MouseClickArguments& WithY(int value) {
    SetY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mouse button to use. Defaults to <code>LEFT</code>.</p>
   */
  inline MouseButton GetButton() const { return m_button; }
  inline bool ButtonHasBeenSet() const { return m_buttonHasBeenSet; }
  inline void SetButton(MouseButton value) {
    m_buttonHasBeenSet = true;
    m_button = value;
  }
  inline MouseClickArguments& WithButton(MouseButton value) {
    SetButton(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of clicks to perform. Valid range: 1–10. Defaults to 1.</p>
   */
  inline int GetClickCount() const { return m_clickCount; }
  inline bool ClickCountHasBeenSet() const { return m_clickCountHasBeenSet; }
  inline void SetClickCount(int value) {
    m_clickCountHasBeenSet = true;
    m_clickCount = value;
  }
  inline MouseClickArguments& WithClickCount(int value) {
    SetClickCount(value);
    return *this;
  }
  ///@}
 private:
  int m_x{0};

  int m_y{0};

  MouseButton m_button{MouseButton::NOT_SET};

  int m_clickCount{0};
  bool m_xHasBeenSet = false;
  bool m_yHasBeenSet = false;
  bool m_buttonHasBeenSet = false;
  bool m_clickCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
