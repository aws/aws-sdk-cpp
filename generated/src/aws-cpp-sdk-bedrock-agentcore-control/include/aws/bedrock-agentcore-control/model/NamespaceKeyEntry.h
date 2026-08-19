/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/NamespaceKeyValidation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>A namespace variable key definition with optional
 * <code>NamespaceKeyValidation</code> rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/NamespaceKeyEntry">AWS
 * API Reference</a></p>
 */
class NamespaceKeyEntry {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyEntry() = default;
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The namespace variable key name.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  NamespaceKeyEntry& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation rules that constrain values for this namespace variable at
   * runtime (<code>CreateEvent</code> API).</p>
   */
  inline const NamespaceKeyValidation& GetValidation() const { return m_validation; }
  inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
  template <typename ValidationT = NamespaceKeyValidation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = NamespaceKeyValidation>
  NamespaceKeyEntry& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  NamespaceKeyValidation m_validation;
  bool m_keyHasBeenSet = false;
  bool m_validationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
