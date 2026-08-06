/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AutoApprovalRule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>Configuration for the registry's record approval workflow. Controls whether
 * records submitted for approval require manual review before they become approved
 * and discoverable, or are auto-approved. When no auto-approval rules are
 * configured, submitted records require manual review.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/ApprovalConfiguration">AWS
 * API Reference</a></p>
 */
class ApprovalConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API ApprovalConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API ApprovalConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API ApprovalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The rules that determine which registry records are automatically approved on
   * submission. When omitted or empty, submitted records require manual review.</p>
   */
  inline const Aws::Vector<AutoApprovalRule>& GetAutoApprovalRules() const { return m_autoApprovalRules; }
  inline bool AutoApprovalRulesHasBeenSet() const { return m_autoApprovalRulesHasBeenSet; }
  template <typename AutoApprovalRulesT = Aws::Vector<AutoApprovalRule>>
  void SetAutoApprovalRules(AutoApprovalRulesT&& value) {
    m_autoApprovalRulesHasBeenSet = true;
    m_autoApprovalRules = std::forward<AutoApprovalRulesT>(value);
  }
  template <typename AutoApprovalRulesT = Aws::Vector<AutoApprovalRule>>
  ApprovalConfiguration& WithAutoApprovalRules(AutoApprovalRulesT&& value) {
    SetAutoApprovalRules(std::forward<AutoApprovalRulesT>(value));
    return *this;
  }
  inline ApprovalConfiguration& AddAutoApprovalRules(AutoApprovalRule value) {
    m_autoApprovalRulesHasBeenSet = true;
    m_autoApprovalRules.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutoApprovalRule> m_autoApprovalRules;
  bool m_autoApprovalRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
