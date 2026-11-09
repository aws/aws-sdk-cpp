/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ReplicationBackfillProgress.h>
#include <aws/ecr/model/ReplicationBackfillStatus.h>
#include <aws/ecr/model/ReplicationDestination.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An object representing a summary of a replication backfill, including its
 * status, destination, progress, and start and end times.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationBackfillSummary">AWS
 * API Reference</a></p>
 */
class ReplicationBackfillSummary {
 public:
  AWS_ECR_API ReplicationBackfillSummary() = default;
  AWS_ECR_API ReplicationBackfillSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ReplicationBackfillSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the replication backfill.</p>
   */
  inline const Aws::String& GetReplicationBackfillId() const { return m_replicationBackfillId; }
  inline bool ReplicationBackfillIdHasBeenSet() const { return m_replicationBackfillIdHasBeenSet; }
  template <typename ReplicationBackfillIdT = Aws::String>
  void SetReplicationBackfillId(ReplicationBackfillIdT&& value) {
    m_replicationBackfillIdHasBeenSet = true;
    m_replicationBackfillId = std::forward<ReplicationBackfillIdT>(value);
  }
  template <typename ReplicationBackfillIdT = Aws::String>
  ReplicationBackfillSummary& WithReplicationBackfillId(ReplicationBackfillIdT&& value) {
    SetReplicationBackfillId(std::forward<ReplicationBackfillIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination Region and registry to which the images are replicated.</p>
   */
  inline const ReplicationDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = ReplicationDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ReplicationDestination>
  ReplicationBackfillSummary& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the replication backfill.</p>
   */
  inline ReplicationBackfillStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReplicationBackfillStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReplicationBackfillSummary& WithStatus(ReplicationBackfillStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure code for a replication backfill that has failed.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  ReplicationBackfillSummary& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the replication backfill, including the total, completed, and
   * failed replication counts. This value is <code>null</code> until the replication
   * backfill finishes preparing the set of images to replicate. It is therefore
   * <code>null</code> while the replication backfill is <code>PREPARING</code>, and
   * remains <code>null</code> if the replication backfill is stopped before
   * preparation completes.</p>
   */
  inline const ReplicationBackfillProgress& GetProgress() const { return m_progress; }
  inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
  template <typename ProgressT = ReplicationBackfillProgress>
  void SetProgress(ProgressT&& value) {
    m_progressHasBeenSet = true;
    m_progress = std::forward<ProgressT>(value);
  }
  template <typename ProgressT = ReplicationBackfillProgress>
  ReplicationBackfillSummary& WithProgress(ProgressT&& value) {
    SetProgress(std::forward<ProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in JavaScript date format, when the replication backfill
   * was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ReplicationBackfillSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in JavaScript date format, when the replication backfill
   * ended. This value is <code>null</code> while the replication backfill is still
   * in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ReplicationBackfillSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_replicationBackfillId;

  ReplicationDestination m_destination;

  ReplicationBackfillStatus m_status{ReplicationBackfillStatus::NOT_SET};

  Aws::String m_failureCode;

  ReplicationBackfillProgress m_progress;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};
  bool m_replicationBackfillIdHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_progressHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
