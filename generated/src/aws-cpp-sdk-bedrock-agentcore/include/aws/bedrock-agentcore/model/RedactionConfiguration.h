/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CustomDataIdentifier.h>
#include <aws/bedrock-agentcore/model/RedactionIdentifier.h>
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
 * <p>Sensitive data to mask in generated examples. Nothing is redacted unless you
 * specify at least one identifier. Each character of a match is replaced with
 * <code>*</code>, so a masked value keeps its length. If detection fails, the
 * generation fails and no examples are written.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RedactionConfiguration">AWS
 * API Reference</a></p>
 */
class RedactionConfiguration {
 public:
  AWS_BEDROCKAGENTCORE_API RedactionConfiguration() = default;
  AWS_BEDROCKAGENTCORE_API RedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The managed data identifiers to apply. These match the CloudWatch Logs
   * managed data identifiers.</p>
   */
  inline const Aws::Vector<RedactionIdentifier>& GetIdentifiers() const { return m_identifiers; }
  inline bool IdentifiersHasBeenSet() const { return m_identifiersHasBeenSet; }
  template <typename IdentifiersT = Aws::Vector<RedactionIdentifier>>
  void SetIdentifiers(IdentifiersT&& value) {
    m_identifiersHasBeenSet = true;
    m_identifiers = std::forward<IdentifiersT>(value);
  }
  template <typename IdentifiersT = Aws::Vector<RedactionIdentifier>>
  RedactionConfiguration& WithIdentifiers(IdentifiersT&& value) {
    SetIdentifiers(std::forward<IdentifiersT>(value));
    return *this;
  }
  inline RedactionConfiguration& AddIdentifiers(RedactionIdentifier value) {
    m_identifiersHasBeenSet = true;
    m_identifiers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom data identifiers to apply, up to 10. You can use custom identifiers
   * without any managed identifiers.</p>
   */
  inline const Aws::Vector<CustomDataIdentifier>& GetCustomDataIdentifiers() const { return m_customDataIdentifiers; }
  inline bool CustomDataIdentifiersHasBeenSet() const { return m_customDataIdentifiersHasBeenSet; }
  template <typename CustomDataIdentifiersT = Aws::Vector<CustomDataIdentifier>>
  void SetCustomDataIdentifiers(CustomDataIdentifiersT&& value) {
    m_customDataIdentifiersHasBeenSet = true;
    m_customDataIdentifiers = std::forward<CustomDataIdentifiersT>(value);
  }
  template <typename CustomDataIdentifiersT = Aws::Vector<CustomDataIdentifier>>
  RedactionConfiguration& WithCustomDataIdentifiers(CustomDataIdentifiersT&& value) {
    SetCustomDataIdentifiers(std::forward<CustomDataIdentifiersT>(value));
    return *this;
  }
  template <typename CustomDataIdentifiersT = CustomDataIdentifier>
  RedactionConfiguration& AddCustomDataIdentifiers(CustomDataIdentifiersT&& value) {
    m_customDataIdentifiersHasBeenSet = true;
    m_customDataIdentifiers.emplace_back(std::forward<CustomDataIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RedactionIdentifier> m_identifiers;

  Aws::Vector<CustomDataIdentifier> m_customDataIdentifiers;
  bool m_identifiersHasBeenSet = false;
  bool m_customDataIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
