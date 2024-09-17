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
    AWS_DEADLINE_API GetSessionResult();
    AWS_DEADLINE_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fleet ID for the session.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline GetSessionResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline GetSessionResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline GetSessionResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker ID for the session.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }
    inline void SetWorkerId(const Aws::String& value) { m_workerId = value; }
    inline void SetWorkerId(Aws::String&& value) { m_workerId = std::move(value); }
    inline void SetWorkerId(const char* value) { m_workerId.assign(value); }
    inline GetSessionResult& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}
    inline GetSessionResult& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}
    inline GetSessionResult& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetSessionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetSessionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session log.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }
    inline void SetLog(const LogConfiguration& value) { m_log = value; }
    inline void SetLog(LogConfiguration&& value) { m_log = std::move(value); }
    inline GetSessionResult& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}
    inline GetSessionResult& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status of the session.</p>
     */
    inline const SessionLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }
    inline void SetLifecycleStatus(const SessionLifecycleStatus& value) { m_lifecycleStatus = value; }
    inline void SetLifecycleStatus(SessionLifecycleStatus&& value) { m_lifecycleStatus = std::move(value); }
    inline GetSessionResult& WithLifecycleStatus(const SessionLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}
    inline GetSessionResult& WithLifecycleStatus(SessionLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetSessionResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetSessionResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetSessionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetSessionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetSessionResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetSessionResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetSessionResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline const SessionLifecycleTargetStatus& GetTargetLifecycleStatus() const{ return m_targetLifecycleStatus; }
    inline void SetTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { m_targetLifecycleStatus = value; }
    inline void SetTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { m_targetLifecycleStatus = std::move(value); }
    inline GetSessionResult& WithTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { SetTargetLifecycleStatus(value); return *this;}
    inline GetSessionResult& WithTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { SetTargetLifecycleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostProperties = value; }
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostProperties = std::move(value); }
    inline GetSessionResult& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}
    inline GetSessionResult& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The worker log for the session.</p>
     */
    inline const LogConfiguration& GetWorkerLog() const{ return m_workerLog; }
    inline void SetWorkerLog(const LogConfiguration& value) { m_workerLog = value; }
    inline void SetWorkerLog(LogConfiguration&& value) { m_workerLog = std::move(value); }
    inline GetSessionResult& WithWorkerLog(const LogConfiguration& value) { SetWorkerLog(value); return *this;}
    inline GetSessionResult& WithWorkerLog(LogConfiguration&& value) { SetWorkerLog(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;

    Aws::String m_fleetId;

    Aws::String m_workerId;

    Aws::Utils::DateTime m_startedAt;

    LogConfiguration m_log;

    SessionLifecycleStatus m_lifecycleStatus;

    Aws::Utils::DateTime m_endedAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    SessionLifecycleTargetStatus m_targetLifecycleStatus;

    HostPropertiesResponse m_hostProperties;

    LogConfiguration m_workerLog;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
