/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>The configuration that controls how a provider prefix is applied to model IDs
 * during translation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ProviderPrefix">AWS
 * API Reference</a></p>
 */
class ProviderPrefix {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ProviderPrefix() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ProviderPrefix(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ProviderPrefix& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether clients can omit the provider prefix from model IDs. If
   * <code>true</code>, the gateway accepts model IDs without the prefix and restores
   * the full prefixed form before forwarding to the provider. The default is
   * <code>false</code>.</p>
   */
  inline bool GetStrip() const { return m_strip; }
  inline bool StripHasBeenSet() const { return m_stripHasBeenSet; }
  inline void SetStrip(bool value) {
    m_stripHasBeenSet = true;
    m_strip = value;
  }
  inline ProviderPrefix& WithStrip(bool value) {
    SetStrip(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The single character that separates the provider prefix from the model name
   * (for example, <code>.</code>). The default is <code>.</code>.</p>
   */
  inline const Aws::String& GetSeparator() const { return m_separator; }
  inline bool SeparatorHasBeenSet() const { return m_separatorHasBeenSet; }
  template <typename SeparatorT = Aws::String>
  void SetSeparator(SeparatorT&& value) {
    m_separatorHasBeenSet = true;
    m_separator = std::forward<SeparatorT>(value);
  }
  template <typename SeparatorT = Aws::String>
  ProviderPrefix& WithSeparator(SeparatorT&& value) {
    SetSeparator(std::forward<SeparatorT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_strip{false};

  Aws::String m_separator;
  bool m_stripHasBeenSet = false;
  bool m_separatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
