/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Arguments for a key shortcut action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/KeyShortcutArguments">AWS
 * API Reference</a></p>
 */
class KeyShortcutArguments {
 public:
  AWS_BEDROCKAGENTCORE_API KeyShortcutArguments() = default;
  AWS_BEDROCKAGENTCORE_API KeyShortcutArguments(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API KeyShortcutArguments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key combination to press (for example, <code>["ctrl", "s"]</code>).
   * Maximum 5 keys.</p>
   */
  inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
  inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
  template <typename KeysT = Aws::Vector<Aws::String>>
  void SetKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys = std::forward<KeysT>(value);
  }
  template <typename KeysT = Aws::Vector<Aws::String>>
  KeyShortcutArguments& WithKeys(KeysT&& value) {
    SetKeys(std::forward<KeysT>(value));
    return *this;
  }
  template <typename KeysT = Aws::String>
  KeyShortcutArguments& AddKeys(KeysT&& value) {
    m_keysHasBeenSet = true;
    m_keys.emplace_back(std::forward<KeysT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_keys;
  bool m_keysHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
