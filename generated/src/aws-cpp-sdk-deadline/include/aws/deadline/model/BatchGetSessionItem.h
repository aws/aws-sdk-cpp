/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/deadline/model/SessionLifecycleStatus.h>
#include <aws/deadline/model/SessionLifecycleTargetStatus.h>

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
 * <p>The details of a session returned in a batch get operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetSessionItem">AWS
 * API Reference</a></p>
 */
class BatchGetSessionItem {
 public:
  AWS_DEADLINE_API BatchGetSessionItem() = default;
  AWS_DEADLINE_API BatchGetSessionItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API BatchGetSessionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The farm ID of the session.</p>
   */
  inline const Aws::String& GetFarmId() const { return m_farmId; }
  inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
  template <typename FarmIdT = Aws::String>
  void SetFarmId(FarmIdT&& value) {
    m_farmIdHasBeenSet = true;
    m_farmId = std::forward<FarmIdT>(value);
  }
  template <typename FarmIdT = Aws::String>
  BatchGetSessionItem& WithFarmId(FarmIdT&& value) {
    SetFarmId(std::forward<FarmIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The queue ID of the session.</p>
   */
  inline const Aws::String& GetQueueId() const { return m_queueId; }
  inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
  template <typename QueueIdT = Aws::String>
  void SetQueueId(QueueIdT&& value) {
    m_queueIdHasBeenSet = true;
    m_queueId = std::forward<QueueIdT>(value);
  }
  template <typename QueueIdT = Aws::String>
  BatchGetSessionItem& WithQueueId(QueueIdT&& value) {
    SetQueueId(std::forward<QueueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The job ID of the session.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  BatchGetSessionItem& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session ID.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  BatchGetSessionItem& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fleet ID of the session.</p>
   */
  inline const Aws::String& GetFleetId() const { return m_fleetId; }
  inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
  template <typename FleetIdT = Aws::String>
  void SetFleetId(FleetIdT&& value) {
    m_fleetIdHasBeenSet = true;
    m_fleetId = std::forward<FleetIdT>(value);
  }
  template <typename FleetIdT = Aws::String>
  BatchGetSessionItem& WithFleetId(FleetIdT&& value) {
    SetFleetId(std::forward<FleetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker ID of the session.</p>
   */
  inline const Aws::String& GetWorkerId() const { return m_workerId; }
  inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }
  template <typename WorkerIdT = Aws::String>
  void SetWorkerId(WorkerIdT&& value) {
    m_workerIdHasBeenSet = true;
    m_workerId = std::forward<WorkerIdT>(value);
  }
  template <typename WorkerIdT = Aws::String>
  BatchGetSessionItem& WithWorkerId(WorkerIdT&& value) {
    SetWorkerId(std::forward<WorkerIdT>(value));
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
  BatchGetSessionItem& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The life cycle status of the session.</p>
   */
  inline SessionLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
  inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
  inline void SetLifecycleStatus(SessionLifecycleStatus value) {
    m_lifecycleStatusHasBeenSet = true;
    m_lifecycleStatus = value;
  }
  inline BatchGetSessionItem& WithLifecycleStatus(SessionLifecycleStatus value) {
    SetLifecycleStatus(value);
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
  BatchGetSessionItem& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target life cycle status for the session.</p>
   */
  inline SessionLifecycleTargetStatus GetTargetLifecycleStatus() const { return m_targetLifecycleStatus; }
  inline bool TargetLifecycleStatusHasBeenSet() const { return m_targetLifecycleStatusHasBeenSet; }
  inline void SetTargetLifecycleStatus(SessionLifecycleTargetStatus value) {
    m_targetLifecycleStatusHasBeenSet = true;
    m_targetLifecycleStatus = value;
  }
  inline BatchGetSessionItem& WithTargetLifecycleStatus(SessionLifecycleTargetStatus value) {
    SetTargetLifecycleStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the resource was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BatchGetSessionItem& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user or system that updated this resource.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  BatchGetSessionItem& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The session log.</p>
   */
  inline const LogConfiguration& GetLog() const { return m_log; }
  inline bool LogHasBeenSet() const { return m_logHasBeenSet; }
  template <typename LogT = LogConfiguration>
  void SetLog(LogT&& value) {
    m_logHasBeenSet = true;
    m_log = std::forward<LogT>(value);
  }
  template <typename LogT = LogConfiguration>
  BatchGetSessionItem& WithLog(LogT&& value) {
    SetLog(std::forward<LogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The host properties for the session.</p>
   */
  inline const HostPropertiesResponse& GetHostProperties() const { return m_hostProperties; }
  inline bool HostPropertiesHasBeenSet() const { return m_hostPropertiesHasBeenSet; }
  template <typename HostPropertiesT = HostPropertiesResponse>
  void SetHostProperties(HostPropertiesT&& value) {
    m_hostPropertiesHasBeenSet = true;
    m_hostProperties = std::forward<HostPropertiesT>(value);
  }
  template <typename HostPropertiesT = HostPropertiesResponse>
  BatchGetSessionItem& WithHostProperties(HostPropertiesT&& value) {
    SetHostProperties(std::forward<HostPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The worker log for the session.</p>
   */
  inline const LogConfiguration& GetWorkerLog() const { return m_workerLog; }
  inline bool WorkerLogHasBeenSet() const { return m_workerLogHasBeenSet; }
  template <typename WorkerLogT = LogConfiguration>
  void SetWorkerLog(WorkerLogT&& value) {
    m_workerLogHasBeenSet = true;
    m_workerLog = std::forward<WorkerLogT>(value);
  }
  template <typename WorkerLogT = LogConfiguration>
  BatchGetSessionItem& WithWorkerLog(WorkerLogT&& value) {
    SetWorkerLog(std::forward<WorkerLogT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_farmId;

  Aws::String m_queueId;

  Aws::String m_jobId;

  Aws::String m_sessionId;

  Aws::String m_fleetId;

  Aws::String m_workerId;

  Aws::Utils::DateTime m_startedAt{};

  SessionLifecycleStatus m_lifecycleStatus{SessionLifecycleStatus::NOT_SET};

  Aws::Utils::DateTime m_endedAt{};

  SessionLifecycleTargetStatus m_targetLifecycleStatus{SessionLifecycleTargetStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_updatedBy;

  LogConfiguration m_log;

  HostPropertiesResponse m_hostProperties;

  LogConfiguration m_workerLog;
  bool m_farmIdHasBeenSet = false;
  bool m_queueIdHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_fleetIdHasBeenSet = false;
  bool m_workerIdHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_lifecycleStatusHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_targetLifecycleStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
  bool m_logHasBeenSet = false;
  bool m_hostPropertiesHasBeenSet = false;
  bool m_workerLogHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
