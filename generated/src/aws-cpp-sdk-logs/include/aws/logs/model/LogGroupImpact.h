/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
 * <p>Describes the estimated effect of an account-level retention policy change on
 * one log group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/LogGroupImpact">AWS
 * API Reference</a></p>
 */
class LogGroupImpact {
 public:
  AWS_CLOUDWATCHLOGS_API LogGroupImpact() = default;
  AWS_CLOUDWATCHLOGS_API LogGroupImpact(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API LogGroupImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the log group.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  LogGroupImpact& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current effective retention period of the log group, in days. A value of
   * <code>NEVER_EXPIRE</code> indicates that log events in the log group never
   * expire.</p>
   */
  inline const Aws::String& GetCurrentRetention() const { return m_currentRetention; }
  inline bool CurrentRetentionHasBeenSet() const { return m_currentRetentionHasBeenSet; }
  template <typename CurrentRetentionT = Aws::String>
  void SetCurrentRetention(CurrentRetentionT&& value) {
    m_currentRetentionHasBeenSet = true;
    m_currentRetention = std::forward<CurrentRetentionT>(value);
  }
  template <typename CurrentRetentionT = Aws::String>
  LogGroupImpact& WithCurrentRetention(CurrentRetentionT&& value) {
    SetCurrentRetention(std::forward<CurrentRetentionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective retention period of the log group, in days, after the change. A
   * value of <code>NEVER_EXPIRE</code> indicates that log events in the log group
   * would never expire.</p>
   */
  inline const Aws::String& GetProposedRetention() const { return m_proposedRetention; }
  inline bool ProposedRetentionHasBeenSet() const { return m_proposedRetentionHasBeenSet; }
  template <typename ProposedRetentionT = Aws::String>
  void SetProposedRetention(ProposedRetentionT&& value) {
    m_proposedRetentionHasBeenSet = true;
    m_proposedRetention = std::forward<ProposedRetentionT>(value);
  }
  template <typename ProposedRetentionT = Aws::String>
  LogGroupImpact& WithProposedRetention(ProposedRetentionT&& value) {
    SetProposedRetention(std::forward<ProposedRetentionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of bytes stored in the log group.</p>
   */
  inline long long GetStoredBytes() const { return m_storedBytes; }
  inline bool StoredBytesHasBeenSet() const { return m_storedBytesHasBeenSet; }
  inline void SetStoredBytes(long long value) {
    m_storedBytesHasBeenSet = true;
    m_storedBytes = value;
  }
  inline LogGroupImpact& WithStoredBytes(long long value) {
    SetStoredBytes(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupName;

  Aws::String m_currentRetention;

  Aws::String m_proposedRetention;

  long long m_storedBytes{0};
  bool m_logGroupNameHasBeenSet = false;
  bool m_currentRetentionHasBeenSet = false;
  bool m_proposedRetentionHasBeenSet = false;
  bool m_storedBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
