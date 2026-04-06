/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AcquiredLimit.h>
#include <aws/deadline/model/SessionActionDefinition.h>
#include <aws/deadline/model/SessionActionStatus.h>
#include <aws/deadline/model/TaskRunManifestPropertiesResponse.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>The details of a session action returned in a batch get
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetSessionActionItem">AWS
 * API Reference</a></p>
 */
class BatchGetSessionActionItem {
 public:
  AWS_DEADLINE_API BatchGetSessionActionItem() = default;
  AWS_DEADLINE_API BatchGetSessionActionItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetSessionActionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the session action.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetSessionActionItem& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the session action.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetSessionActionItem& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the session action.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetSessionActionItem& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session action ID.</p>
   */
  inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
  inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
  template <typename SessionActionIdT = Aws::String>
  void SetSessionActionId(SessionActionIdT&& value) {
    m_sessionActionIdHasBeenSet = true;
    m_sessionActionId = std::forward<SessionActionIdT>(value);
  }
  template <typename SessionActionIdT = Aws::String>
  BatchGetSessionActionItem& WithSessionActionId(SessionActionIdT&& value) {
    SetSessionActionId(std::forward<SessionActionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the session action.</p>
   */
  inline SessionActionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SessionActionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BatchGetSessionActionItem& WithStatus(SessionActionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource started running.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  BatchGetSessionActionItem& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource ended running.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  BatchGetSessionActionItem& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was updated by a worker.</p>
   */
  inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const { return m_workerUpdatedAt; }
  inline bool WorkerUpdatedAtHasBeenSet() const { return m_workerUpdatedAtHasBeenSet; }
  template <typename WorkerUpdatedAtT = Aws::Utils::DateTime>
  void SetWorkerUpdatedAt(WorkerUpdatedAtT&& value) {
    m_workerUpdatedAtHasBeenSet = true;
    m_workerUpdatedAt = std::forward<WorkerUpdatedAtT>(value);
  }
  template <typename WorkerUpdatedAtT = Aws::Utils::DateTime>
  BatchGetSessionActionItem& WithWorkerUpdatedAt(WorkerUpdatedAtT&& value) {
    SetWorkerUpdatedAt(std::forward<WorkerUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The completion percentage for the session action.</p>
   */
  inline double GetProgressPercent() const { return m_progressPercent; }
  inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
  inline void SetProgressPercent(double value) {
    m_progressPercentHasBeenSet = true;
    m_progressPercent = value;
  }
  inline BatchGetSessionActionItem& WithProgressPercent(double value) {
    SetProgressPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The manifests for the session action.</p>
   */
  inline const Aws::Vector<TaskRunManifestPropertiesResponse>& GetManifests() const { return m_manifests; }
  inline bool ManifestsHasBeenSet() const { return m_manifestsHasBeenSet; }
  template <typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
  void SetManifests(ManifestsT&& value) {
    m_manifestsHasBeenSet = true;
    m_manifests = std::forward<ManifestsT>(value);
  }
  template <typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
  BatchGetSessionActionItem& WithManifests(ManifestsT&& value) {
    SetManifests(std::forward<ManifestsT>(value));
    return *this;
  }
  template <typename ManifestsT = TaskRunManifestPropertiesResponse>
  BatchGetSessionActionItem& AddManifests(ManifestsT&& value) {
    m_manifestsHasBeenSet = true;
    m_manifests.emplace_back(std::forward<ManifestsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session ID for the session action.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  BatchGetSessionActionItem& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exit code to apply to the session action.</p>
   */
  inline int GetProcessExitCode() const { return m_processExitCode; }
  inline bool ProcessExitCodeHasBeenSet() const { return m_processExitCodeHasBeenSet; }
  inline void SetProcessExitCode(int value) {
    m_processExitCodeHasBeenSet = true;
    m_processExitCode = value;
  }
  inline BatchGetSessionActionItem& WithProcessExitCode(int value) {
    SetProcessExitCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message that communicates the progress of the session action.</p>
   */
  inline const Aws::String& GetProgressMessage() const { return m_progressMessage; }
  inline bool ProgressMessageHasBeenSet() const { return m_progressMessageHasBeenSet; }
  template <typename ProgressMessageT = Aws::String>
  void SetProgressMessage(ProgressMessageT&& value) {
    m_progressMessageHasBeenSet = true;
    m_progressMessage = std::forward<ProgressMessageT>(value);
  }
  template <typename ProgressMessageT = Aws::String>
  BatchGetSessionActionItem& WithProgressMessage(ProgressMessageT&& value) {
    SetProgressMessage(std::forward<ProgressMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The limits that were acquired for the session action.</p>
   */
  inline const Aws::Vector<AcquiredLimit>& GetAcquiredLimits() const { return m_acquiredLimits; }
  inline bool AcquiredLimitsHasBeenSet() const { return m_acquiredLimitsHasBeenSet; }
  template <typename AcquiredLimitsT = Aws::Vector<AcquiredLimit>>
  void SetAcquiredLimits(AcquiredLimitsT&& value) {
    m_acquiredLimitsHasBeenSet = true;
    m_acquiredLimits = std::forward<AcquiredLimitsT>(value);
  }
  template <typename AcquiredLimitsT = Aws::Vector<AcquiredLimit>>
  BatchGetSessionActionItem& WithAcquiredLimits(AcquiredLimitsT&& value) {
    SetAcquiredLimits(std::forward<AcquiredLimitsT>(value));
    return *this;
  }
  template <typename AcquiredLimitsT = AcquiredLimit>
  BatchGetSessionActionItem& AddAcquiredLimits(AcquiredLimitsT&& value) {
    m_acquiredLimitsHasBeenSet = true;
    m_acquiredLimits.emplace_back(std::forward<AcquiredLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session action definition.</p>
   */
  inline const SessionActionDefinition& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = SessionActionDefinition>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = SessionActionDefinition>
  BatchGetSessionActionItem& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_sessionActionId;

  SessionActionStatus m_status{SessionActionStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Utils::DateTime m_workerUpdatedAt{};

  double m_progressPercent{0.0};

  Aws::Vector<TaskRunManifestPropertiesResponse> m_manifests;

  Aws::String m_sessionId;

  int m_processExitCode{0};

  Aws::String m_progressMessage;

  Aws::Vector<AcquiredLimit> m_acquiredLimits;

  SessionActionDefinition m_definition;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_sessionActionIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_workerUpdatedAtHasBeenSet = false;
  bool m_progressPercentHasBeenSet = false;
  bool m_manifestsHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_processExitCodeHasBeenSet = false;
  bool m_progressMessageHasBeenSet = false;
  bool m_acquiredLimitsHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
