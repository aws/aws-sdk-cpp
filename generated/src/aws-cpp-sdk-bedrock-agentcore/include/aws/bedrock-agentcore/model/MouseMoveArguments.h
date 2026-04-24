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
 * <p>Arguments for a mouse move action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MouseMoveArguments">AWS
 * API Reference</a></p>
 */
class MouseMoveArguments {
 public:
  AWS_BEDROCKAGENTCORE_API MouseMoveArguments() = default;
  AWS_BEDROCKAGENTCORE_API MouseMoveArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MouseMoveArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The target X coordinate on screen.</p>
   */
  inline int GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  inline void SetX(int value) {
    m_xHasBeenSet = true;
    m_x = value;
  }
  inline MouseMoveArguments& WithX(int value) {
    SetX(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target Y coordinate on screen.</p>
   */
  inline int GetY() const { return m_y; }
  inline bool YHasBeenSet() const { return m_yHasBeenSet; }
  inline void SetY(int value) {
    m_yHasBeenSet = true;
    m_y = value;
  }
  inline MouseMoveArguments& WithY(int value) {
    SetY(value);
    return *this;
  }
  ///@}
 private:
  int m_x{0};

  int m_y{0};
  bool m_xHasBeenSet = false;
  bool m_yHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
