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
 * <p>A custom data identifier, defined by a regular expression.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CustomDataIdentifier">AWS
 * API Reference</a></p>
 */
class CustomDataIdentifier {
 public:
  AWS_BEDROCKAGENTCORE_API CustomDataIdentifier() = default;
  AWS_BEDROCKAGENTCORE_API CustomDataIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CustomDataIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the custom data identifier. It can't be the same as the name of a
   * managed data identifier.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CustomDataIdentifier& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The regular expression that matches the data to mask. Lookahead and
   * lookbehind aren't supported.</p>
   */
  inline const Aws::String& GetRegex() const { return m_regex; }
  inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
  template <typename RegexT = Aws::String>
  void SetRegex(RegexT&& value) {
    m_regexHasBeenSet = true;
    m_regex = std::forward<RegexT>(value);
  }
  template <typename RegexT = Aws::String>
  CustomDataIdentifier& WithRegex(RegexT&& value) {
    SetRegex(std::forward<RegexT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_regex;
  bool m_nameHasBeenSet = false;
  bool m_regexHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
