/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/TriggerFilterGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Capability configuration for the AWS DevOps Agent.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/CapabilityConfiguration">AWS
 * API Reference</a></p>
 */
class CapabilityConfiguration {
 public:
  AWS_DEVOPSAGENT_API CapabilityConfiguration() = default;
  AWS_DEVOPSAGENT_API CapabilityConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API CapabilityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the capability is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CapabilityConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional trigger filter groups. Evaluated only when enabled=true; retained
   * while the capability is disabled, so re-enabling restores the prior trigger
   * behavior.</p>
   */
  inline const Aws::Vector<TriggerFilterGroup>& GetTriggerFilterGroups() const { return m_triggerFilterGroups; }
  inline bool TriggerFilterGroupsHasBeenSet() const { return m_triggerFilterGroupsHasBeenSet; }
  template <typename TriggerFilterGroupsT = Aws::Vector<TriggerFilterGroup>>
  void SetTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    m_triggerFilterGroupsHasBeenSet = true;
    m_triggerFilterGroups = std::forward<TriggerFilterGroupsT>(value);
  }
  template <typename TriggerFilterGroupsT = Aws::Vector<TriggerFilterGroup>>
  CapabilityConfiguration& WithTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    SetTriggerFilterGroups(std::forward<TriggerFilterGroupsT>(value));
    return *this;
  }
  template <typename TriggerFilterGroupsT = TriggerFilterGroup>
  CapabilityConfiguration& AddTriggerFilterGroups(TriggerFilterGroupsT&& value) {
    m_triggerFilterGroupsHasBeenSet = true;
    m_triggerFilterGroups.emplace_back(std::forward<TriggerFilterGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Vector<TriggerFilterGroup> m_triggerFilterGroups;
  bool m_enabledHasBeenSet = false;
  bool m_triggerFilterGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
