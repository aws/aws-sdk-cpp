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
 * <p>Arguments for a mouse drag action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MouseDragArguments">AWS
 * API Reference</a></p>
 */
class MouseDragArguments {
 public:
  AWS_BEDROCKAGENTCORE_API MouseDragArguments() = default;
  AWS_BEDROCKAGENTCORE_API MouseDragArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MouseDragArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ending X coordinate for the drag.</p>
   */
  inline int GetEndX() const { return m_endX; }
  inline bool EndXHasBeenSet() const { return m_endXHasBeenSet; }
  inline void SetEndX(int value) {
    m_endXHasBeenSet = true;
    m_endX = value;
  }
  inline MouseDragArguments& WithEndX(int value) {
    SetEndX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ending Y coordinate for the drag.</p>
   */
  inline int GetEndY() const { return m_endY; }
  inline bool EndYHasBeenSet() const { return m_endYHasBeenSet; }
  inline void SetEndY(int value) {
    m_endYHasBeenSet = true;
    m_endY = value;
  }
  inline MouseDragArguments& WithEndY(int value) {
    SetEndY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The starting X coordinate for the drag.</p>
   */
  inline int GetStartX() const { return m_startX; }
  inline bool StartXHasBeenSet() const { return m_startXHasBeenSet; }
  inline void SetStartX(int value) {
    m_startXHasBeenSet = true;
    m_startX = value;
  }
  inline MouseDragArguments& WithStartX(int value) {
    SetStartX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The starting Y coordinate for the drag.</p>
   */
  inline int GetStartY() const { return m_startY; }
  inline bool StartYHasBeenSet() const { return m_startYHasBeenSet; }
  inline void SetStartY(int value) {
    m_startYHasBeenSet = true;
    m_startY = value;
  }
  inline MouseDragArguments& WithStartY(int value) {
    SetStartY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mouse button to use for the drag. Defaults to <code>LEFT</code>.</p>
   */
  inline MouseButton GetButton() const { return m_button; }
  inline bool ButtonHasBeenSet() const { return m_buttonHasBeenSet; }
  inline void SetButton(MouseButton value) {
    m_buttonHasBeenSet = true;
    m_button = value;
  }
  inline MouseDragArguments& WithButton(MouseButton value) {
    SetButton(value);
    return *this;
  }
  ///@}
 private:
  int m_endX{0};

  int m_endY{0};

  int m_startX{0};

  int m_startY{0};

  MouseButton m_button{MouseButton::NOT_SET};
  bool m_endXHasBeenSet = false;
  bool m_endYHasBeenSet = false;
  bool m_startXHasBeenSet = false;
  bool m_startYHasBeenSet = false;
  bool m_buttonHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
