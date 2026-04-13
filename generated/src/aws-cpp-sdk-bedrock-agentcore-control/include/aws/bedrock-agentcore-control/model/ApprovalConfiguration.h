/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>Configuration for the registry record approval workflow. Controls whether
 * records added to the registry require explicit approval before becoming
 * active.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ApprovalConfiguration">AWS
 * API Reference</a></p>
 */
class ApprovalConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ApprovalConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ApprovalConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ApprovalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether registry records are auto-approved. When set to <code>true</code>,
   * records are automatically approved upon creation. When set to <code>false</code>
   * (the default), records require explicit approval for security purposes.</p>
   */
  inline bool GetAutoApproval() const { return m_autoApproval; }
  inline bool AutoApprovalHasBeenSet() const { return m_autoApprovalHasBeenSet; }
  inline void SetAutoApproval(bool value) {
    m_autoApprovalHasBeenSet = true;
    m_autoApproval = value;
  }
  inline ApprovalConfiguration& WithAutoApproval(bool value) {
    SetAutoApproval(value);
    return *this;
  }
  ///@}
 private:
  bool m_autoApproval{false};
  bool m_autoApprovalHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
