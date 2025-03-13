/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/deadline/model/SessionLifecycleStatus.h>
#include <aws/deadline/model/SessionLifecycleTargetStatus.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_DEADLINE_API GetSessionResult() = default;
    AWS_DEADLINE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetSessionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID for the session.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    GetSessionResult& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID for the session.</p>
     */
    inline const Aws::String& GetWorkerId() const { return m_workerId; }
    template<typename WorkerIdT = Aws::String>
    void SetWorkerId(WorkerIdT&& value) { m_workerIdHasBeenSet = true; m_workerId = std::forward<WorkerIdT>(value); }
    template<typename WorkerIdT = Aws::String>
    GetSessionResult& WithWorkerId(WorkerIdT&& value) { SetWorkerId(std::forward<WorkerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetSessionResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session log.</p>
     */
    inline const LogConfiguration& GetLog() const { return m_log; }
    template<typename LogT = LogConfiguration>
    void SetLog(LogT&& value) { m_logHasBeenSet = true; m_log = std::forward<LogT>(value); }
    template<typename LogT = LogConfiguration>
    GetSessionResult& WithLog(LogT&& value) { SetLog(std::forward<LogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status of the session.</p>
     */
    inline SessionLifecycleStatus GetLifecycleStatus() const { return m_lifecycleStatus; }
    inline void SetLifecycleStatus(SessionLifecycleStatus value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline GetSessionResult& WithLifecycleStatus(SessionLifecycleStatus value) { SetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetSessionResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetSessionResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetSessionResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline SessionLifecycleTargetStatus GetTargetLifecycleStatus() const { return m_targetLifecycleStatus; }
    inline void SetTargetLifecycleStatus(SessionLifecycleTargetStatus value) { m_targetLifecycleStatusHasBeenSet = true; m_targetLifecycleStatus = value; }
    inline GetSessionResult& WithTargetLifecycleStatus(SessionLifecycleTargetStatus value) { SetTargetLifecycleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const { return m_hostProperties; }
    template<typename HostPropertiesT = HostPropertiesResponse>
    void SetHostProperties(HostPropertiesT&& value) { m_hostPropertiesHasBeenSet = true; m_hostProperties = std::forward<HostPropertiesT>(value); }
    template<typename HostPropertiesT = HostPropertiesResponse>
    GetSessionResult& WithHostProperties(HostPropertiesT&& value) { SetHostProperties(std::forward<HostPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker log for the session.</p>
     */
    inline const LogConfiguration& GetWorkerLog() const { return m_workerLog; }
    template<typename WorkerLogT = LogConfiguration>
    void SetWorkerLog(WorkerLogT&& value) { m_workerLogHasBeenSet = true; m_workerLog = std::forward<WorkerLogT>(value); }
    template<typename WorkerLogT = LogConfiguration>
    GetSessionResult& WithWorkerLog(WorkerLogT&& value) { SetWorkerLog(std::forward<WorkerLogT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    LogConfiguration m_log;
    bool m_logHasBeenSet = false;

    SessionLifecycleStatus m_lifecycleStatus{SessionLifecycleStatus::NOT_SET};
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    SessionLifecycleTargetStatus m_targetLifecycleStatus{SessionLifecycleTargetStatus::NOT_SET};
    bool m_targetLifecycleStatusHasBeenSet = false;

    HostPropertiesResponse m_hostProperties;
    bool m_hostPropertiesHasBeenSet = false;

    LogConfiguration m_workerLog;
    bool m_workerLogHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
