/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/RuleExecutionType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Backup {
namespace Model {

/**
 * <p>Contains information about a scheduled backup plan execution, including the
 * execution time, rule type, and associated rule identifier.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ScheduledPlanExecutionMember">AWS
 * API Reference</a></p>
 */
class ScheduledPlanExecutionMember {
 public:
  AWS_BACKUP_API ScheduledPlanExecutionMember() = default;
  AWS_BACKUP_API ScheduledPlanExecutionMember(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API ScheduledPlanExecutionMember& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the backup is scheduled to run, in Unix format and
   * Coordinated Universal Time (UTC). The value is accurate to milliseconds.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionTime() const { return m_executionTime; }
  inline bool ExecutionTimeHasBeenSet() const { return m_executionTimeHasBeenSet; }
  template <typename ExecutionTimeT = Aws::Utils::DateTime>
  void SetExecutionTime(ExecutionTimeT&& value) {
    m_executionTimeHasBeenSet = true;
    m_executionTime = std::forward<ExecutionTimeT>(value);
  }
  template <typename ExecutionTimeT = Aws::Utils::DateTime>
  ScheduledPlanExecutionMember& WithExecutionTime(ExecutionTimeT&& value) {
    SetExecutionTime(std::forward<ExecutionTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the backup rule that will execute at the scheduled
   * time.</p>
   */
  inline const Aws::String& GetRuleId() const { return m_ruleId; }
  inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
  template <typename RuleIdT = Aws::String>
  void SetRuleId(RuleIdT&& value) {
    m_ruleIdHasBeenSet = true;
    m_ruleId = std::forward<RuleIdT>(value);
  }
  template <typename RuleIdT = Aws::String>
  ScheduledPlanExecutionMember& WithRuleId(RuleIdT&& value) {
    SetRuleId(std::forward<RuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of backup rule execution. Valid values are <code>CONTINUOUS</code>
   * (point-in-time recovery), <code>SNAPSHOTS</code> (snapshot backups), or
   * <code>CONTINUOUS_AND_SNAPSHOTS</code> (both types combined).</p>
   */
  inline RuleExecutionType GetRuleExecutionType() const { return m_ruleExecutionType; }
  inline bool RuleExecutionTypeHasBeenSet() const { return m_ruleExecutionTypeHasBeenSet; }
  inline void SetRuleExecutionType(RuleExecutionType value) {
    m_ruleExecutionTypeHasBeenSet = true;
    m_ruleExecutionType = value;
  }
  inline ScheduledPlanExecutionMember& WithRuleExecutionType(RuleExecutionType value) {
    SetRuleExecutionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_executionTime{};
  bool m_executionTimeHasBeenSet = false;

  Aws::String m_ruleId;
  bool m_ruleIdHasBeenSet = false;

  RuleExecutionType m_ruleExecutionType{RuleExecutionType::NOT_SET};
  bool m_ruleExecutionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
