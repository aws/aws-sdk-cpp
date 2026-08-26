/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PatternFilter.h>
#include <aws/devops-agent/model/TriggerEvent.h>

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
 * <p>A group of trigger conditions. The group matches when ALL present conditions
 * pass. A group cannot be empty: at least one condition must be
 * present.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/TriggerFilterGroup">AWS
 * API Reference</a></p>
 */
class TriggerFilterGroup {
 public:
  AWS_DEVOPSAGENT_API TriggerFilterGroup() = default;
  AWS_DEVOPSAGENT_API TriggerFilterGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API TriggerFilterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Passes when the webhook event is one of the listed events.</p>
   */
  inline const Aws::Vector<TriggerEvent>& GetEvents() const { return m_events; }
  inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
  template <typename EventsT = Aws::Vector<TriggerEvent>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<TriggerEvent>>
  TriggerFilterGroup& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  inline TriggerFilterGroup& AddEvents(TriggerEvent value) {
    m_eventsHasBeenSet = true;
    m_events.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Passes when the change request target branch matches. Applicable to
   * RELEASE_READINESS_REVIEW only.</p>
   */
  inline const PatternFilter& GetTargetBranches() const { return m_targetBranches; }
  inline bool TargetBranchesHasBeenSet() const { return m_targetBranchesHasBeenSet; }
  template <typename TargetBranchesT = PatternFilter>
  void SetTargetBranches(TargetBranchesT&& value) {
    m_targetBranchesHasBeenSet = true;
    m_targetBranches = std::forward<TargetBranchesT>(value);
  }
  template <typename TargetBranchesT = PatternFilter>
  TriggerFilterGroup& WithTargetBranches(TargetBranchesT&& value) {
    SetTargetBranches(std::forward<TargetBranchesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TriggerEvent> m_events;

  PatternFilter m_targetBranches;
  bool m_eventsHasBeenSet = false;
  bool m_targetBranchesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
