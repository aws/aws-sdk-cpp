/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>Arguments for a mouse scroll action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MouseScrollArguments">AWS
 * API Reference</a></p>
 */
class MouseScrollArguments {
 public:
  AWS_BEDROCKAGENTCORE_API MouseScrollArguments() = default;
  AWS_BEDROCKAGENTCORE_API MouseScrollArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MouseScrollArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The X coordinate on screen where the scroll occurs.</p>
   */
  inline int GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  inline void SetX(int value) {
    m_xHasBeenSet = true;
    m_x = value;
  }
  inline MouseScrollArguments& WithX(int value) {
    SetX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Y coordinate on screen where the scroll occurs.</p>
   */
  inline int GetY() const { return m_y; }
  inline bool YHasBeenSet() const { return m_yHasBeenSet; }
  inline void SetY(int value) {
    m_yHasBeenSet = true;
    m_y = value;
  }
  inline MouseScrollArguments& WithY(int value) {
    SetY(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The horizontal scroll delta. Valid range: -1000 to 1000.</p>
   */
  inline int GetDeltaX() const { return m_deltaX; }
  inline bool DeltaXHasBeenSet() const { return m_deltaXHasBeenSet; }
  inline void SetDeltaX(int value) {
    m_deltaXHasBeenSet = true;
    m_deltaX = value;
  }
  inline MouseScrollArguments& WithDeltaX(int value) {
    SetDeltaX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vertical scroll delta. Valid range: -1000 to 1000. Negative values scroll
   * down.</p>
   */
  inline int GetDeltaY() const { return m_deltaY; }
  inline bool DeltaYHasBeenSet() const { return m_deltaYHasBeenSet; }
  inline void SetDeltaY(int value) {
    m_deltaYHasBeenSet = true;
    m_deltaY = value;
  }
  inline MouseScrollArguments& WithDeltaY(int value) {
    SetDeltaY(value);
    return *this;
  }
  ///@}
 private:
  int m_x{0};

  int m_y{0};

  int m_deltaX{0};

  int m_deltaY{0};
  bool m_xHasBeenSet = false;
  bool m_yHasBeenSet = false;
  bool m_deltaXHasBeenSet = false;
  bool m_deltaYHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
