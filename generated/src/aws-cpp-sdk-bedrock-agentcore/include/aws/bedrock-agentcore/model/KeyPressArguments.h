/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Arguments for a key press action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/KeyPressArguments">AWS
 * API Reference</a></p>
 */
class KeyPressArguments {
 public:
  AWS_BEDROCKAGENTCORE_API KeyPressArguments() = default;
  AWS_BEDROCKAGENTCORE_API KeyPressArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API KeyPressArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key name to press (for example, <code>enter</code>, <code>tab</code>,
   * <code>escape</code>).</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  KeyPressArguments& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times to press the key. Valid range: 1–100. Defaults to 1.</p>
   */
  inline int GetPresses() const { return m_presses; }
  inline bool PressesHasBeenSet() const { return m_pressesHasBeenSet; }
  inline void SetPresses(int value) {
    m_pressesHasBeenSet = true;
    m_presses = value;
  }
  inline KeyPressArguments& WithPresses(int value) {
    SetPresses(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  int m_presses{0};
  bool m_keyHasBeenSet = false;
  bool m_pressesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
