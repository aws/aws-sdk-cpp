/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CedarPolicy.h>

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
 * <p>Represents the definition structure for policies within the AgentCore Policy
 * system. This structure encapsulates different policy formats and languages that
 * can be used to define access control rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PolicyDefinition">AWS
 * API Reference</a></p>
 */
class PolicyDefinition {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PolicyDefinition() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Cedar policy definition within the policy definition structure. This
   * contains the Cedar policy statement that defines the authorization logic using
   * Cedar's human-readable, analyzable policy language. Cedar policies specify
   * principals (who can access), actions (what operations are allowed), resources
   * (what can be accessed), and optional conditions for fine-grained control. Cedar
   * provides a formal policy language designed for authorization with deterministic
   * evaluation, making policies testable, reviewable, and auditable. All Cedar
   * policies follow a default-deny model where actions are denied unless explicitly
   * permitted, and forbid policies always override permit policies.</p>
   */
  inline const CedarPolicy& GetCedar() const { return m_cedar; }
  inline bool CedarHasBeenSet() const { return m_cedarHasBeenSet; }
  template <typename CedarT = CedarPolicy>
  void SetCedar(CedarT&& value) {
    m_cedarHasBeenSet = true;
    m_cedar = std::forward<CedarT>(value);
  }
  template <typename CedarT = CedarPolicy>
  PolicyDefinition& WithCedar(CedarT&& value) {
    SetCedar(std::forward<CedarT>(value));
    return *this;
  }
  ///@}
 private:
  CedarPolicy m_cedar;
  bool m_cedarHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
