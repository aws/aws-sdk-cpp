/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FindingType.h>
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
 * <p>Represents a finding or issue discovered during policy generation or
 * validation. Findings provide insights about potential problems, recommendations,
 * or validation results from policy analysis operations. Finding types include:
 * VALID (policy is ready to use), INVALID (policy has validation errors that must
 * be fixed), NOT_TRANSLATABLE (input couldn't be converted to policy), ALLOW_ALL
 * (policy would allow all actions, potential security risk), ALLOW_NONE (policy
 * would allow no actions, unusable), DENY_ALL (policy would deny all actions, may
 * be too restrictive), and DENY_NONE (policy would deny no actions, ineffective).
 * Review all findings before creating policies from generated assets to ensure
 * they match your security requirements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Finding">AWS
 * API Reference</a></p>
 */
class Finding {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Finding() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Finding(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type or category of the finding. This classifies the finding as an error,
   * warning, recommendation, or informational message to help users understand the
   * severity and nature of the issue.</p>
   */
  inline FindingType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(FindingType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Finding& WithType(FindingType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the finding. This provides detailed
   * information about the issue, recommendation, or validation result to help users
   * understand and address the finding. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Finding& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  FindingType m_type{FindingType::NOT_SET};

  Aws::String m_description;
  bool m_typeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
