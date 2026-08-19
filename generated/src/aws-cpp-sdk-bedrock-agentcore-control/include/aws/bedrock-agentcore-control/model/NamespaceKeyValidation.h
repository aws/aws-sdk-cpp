/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The validation rules for namespace variable values. When you specify multiple
 * rules, the service enforces a logical <code>AND</code> across all provided
 * key-value pairs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/NamespaceKeyValidation">AWS
 * API Reference</a></p>
 */
class NamespaceKeyValidation {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyValidation() = default;
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API NamespaceKeyValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The allowed values for this namespace variable key.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  NamespaceKeyValidation& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  template <typename AllowedValuesT = Aws::String>
  NamespaceKeyValidation& AddAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A regex pattern that the namespace variable key-value must match.</p>
   */
  inline const Aws::String& GetRegexPattern() const { return m_regexPattern; }
  inline bool RegexPatternHasBeenSet() const { return m_regexPatternHasBeenSet; }
  template <typename RegexPatternT = Aws::String>
  void SetRegexPattern(RegexPatternT&& value) {
    m_regexPatternHasBeenSet = true;
    m_regexPattern = std::forward<RegexPatternT>(value);
  }
  template <typename RegexPatternT = Aws::String>
  NamespaceKeyValidation& WithRegexPattern(RegexPatternT&& value) {
    SetRegexPattern(std::forward<RegexPatternT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedValues;

  Aws::String m_regexPattern;
  bool m_allowedValuesHasBeenSet = false;
  bool m_regexPatternHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
