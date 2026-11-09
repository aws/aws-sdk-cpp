/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/LogGroupImpact.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Contains the estimated impact of creating, updating, or deleting an
 * account-level retention policy. The analysis compares the effective retention
 * period of each log group, which accounts for all account-level retention
 * policies that apply to it, before and after the change. Log groups in the
 * Delivery class are not included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DryRunResult">AWS
 * API Reference</a></p>
 */
class DryRunResult {
 public:
  AWS_CLOUDWATCHLOGS_API DryRunResult() = default;
  AWS_CLOUDWATCHLOGS_API DryRunResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API DryRunResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of log groups in the scope of the policy that were analyzed. This
   * value is the sum of <code>increasedRetentionLogGroupCount</code>,
   * <code>decreasedRetentionLogGroupCount</code>, and
   * <code>unchangedRetentionLogGroupCount</code>, and does not include log groups
   * that could not be analyzed.</p>
   */
  inline int GetTotalMatchedLogGroups() const { return m_totalMatchedLogGroups; }
  inline bool TotalMatchedLogGroupsHasBeenSet() const { return m_totalMatchedLogGroupsHasBeenSet; }
  inline void SetTotalMatchedLogGroups(int value) {
    m_totalMatchedLogGroupsHasBeenSet = true;
    m_totalMatchedLogGroups = value;
  }
  inline DryRunResult& WithTotalMatchedLogGroups(int value) {
    SetTotalMatchedLogGroups(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log groups whose effective retention period would become
   * longer.</p>
   */
  inline int GetIncreasedRetentionLogGroupCount() const { return m_increasedRetentionLogGroupCount; }
  inline bool IncreasedRetentionLogGroupCountHasBeenSet() const { return m_increasedRetentionLogGroupCountHasBeenSet; }
  inline void SetIncreasedRetentionLogGroupCount(int value) {
    m_increasedRetentionLogGroupCountHasBeenSet = true;
    m_increasedRetentionLogGroupCount = value;
  }
  inline DryRunResult& WithIncreasedRetentionLogGroupCount(int value) {
    SetIncreasedRetentionLogGroupCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log groups whose effective retention period would become
   * shorter.</p>
   */
  inline int GetDecreasedRetentionLogGroupCount() const { return m_decreasedRetentionLogGroupCount; }
  inline bool DecreasedRetentionLogGroupCountHasBeenSet() const { return m_decreasedRetentionLogGroupCountHasBeenSet; }
  inline void SetDecreasedRetentionLogGroupCount(int value) {
    m_decreasedRetentionLogGroupCountHasBeenSet = true;
    m_decreasedRetentionLogGroupCount = value;
  }
  inline DryRunResult& WithDecreasedRetentionLogGroupCount(int value) {
    SetDecreasedRetentionLogGroupCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log groups whose effective retention period would not
   * change.</p>
   */
  inline int GetUnchangedRetentionLogGroupCount() const { return m_unchangedRetentionLogGroupCount; }
  inline bool UnchangedRetentionLogGroupCountHasBeenSet() const { return m_unchangedRetentionLogGroupCountHasBeenSet; }
  inline void SetUnchangedRetentionLogGroupCount(int value) {
    m_unchangedRetentionLogGroupCountHasBeenSet = true;
    m_unchangedRetentionLogGroupCount = value;
  }
  inline DryRunResult& WithUnchangedRetentionLogGroupCount(int value) {
    SetUnchangedRetentionLogGroupCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of log groups in the scope of the policy that could not be
   * analyzed. These log groups are not included in
   * <code>totalMatchedLogGroups</code>.</p>
   */
  inline int GetFailedAnalysisCount() const { return m_failedAnalysisCount; }
  inline bool FailedAnalysisCountHasBeenSet() const { return m_failedAnalysisCountHasBeenSet; }
  inline void SetFailedAnalysisCount(int value) {
    m_failedAnalysisCountHasBeenSet = true;
    m_failedAnalysisCount = value;
  }
  inline DryRunResult& WithFailedAnalysisCount(int value) {
    SetFailedAnalysisCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Up to 20 log groups in the scope of the policy, sorted by stored bytes in
   * descending order. This list can include log groups whose effective retention
   * period would not change.</p>
   */
  inline const Aws::Vector<LogGroupImpact>& GetTopLogGroupsImpacted() const { return m_topLogGroupsImpacted; }
  inline bool TopLogGroupsImpactedHasBeenSet() const { return m_topLogGroupsImpactedHasBeenSet; }
  template <typename TopLogGroupsImpactedT = Aws::Vector<LogGroupImpact>>
  void SetTopLogGroupsImpacted(TopLogGroupsImpactedT&& value) {
    m_topLogGroupsImpactedHasBeenSet = true;
    m_topLogGroupsImpacted = std::forward<TopLogGroupsImpactedT>(value);
  }
  template <typename TopLogGroupsImpactedT = Aws::Vector<LogGroupImpact>>
  DryRunResult& WithTopLogGroupsImpacted(TopLogGroupsImpactedT&& value) {
    SetTopLogGroupsImpacted(std::forward<TopLogGroupsImpactedT>(value));
    return *this;
  }
  template <typename TopLogGroupsImpactedT = LogGroupImpact>
  DryRunResult& AddTopLogGroupsImpacted(TopLogGroupsImpactedT&& value) {
    m_topLogGroupsImpactedHasBeenSet = true;
    m_topLogGroupsImpacted.emplace_back(std::forward<TopLogGroupsImpactedT>(value));
    return *this;
  }
  ///@}
 private:
  int m_totalMatchedLogGroups{0};

  int m_increasedRetentionLogGroupCount{0};

  int m_decreasedRetentionLogGroupCount{0};

  int m_unchangedRetentionLogGroupCount{0};

  int m_failedAnalysisCount{0};

  Aws::Vector<LogGroupImpact> m_topLogGroupsImpacted;
  bool m_totalMatchedLogGroupsHasBeenSet = false;
  bool m_increasedRetentionLogGroupCountHasBeenSet = false;
  bool m_decreasedRetentionLogGroupCountHasBeenSet = false;
  bool m_unchangedRetentionLogGroupCountHasBeenSet = false;
  bool m_failedAnalysisCountHasBeenSet = false;
  bool m_topLogGroupsImpactedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
