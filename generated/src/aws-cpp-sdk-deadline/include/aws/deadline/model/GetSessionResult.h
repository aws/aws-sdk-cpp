/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/HostPropertiesResponse.h>
#include <aws/deadline/model/SessionLifecycleStatus.h>
#include <aws/deadline/model/LogConfiguration.h>
#include <aws/deadline/model/SessionLifecycleTargetStatus.h>
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


    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetSessionResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetSessionResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The fleet ID for the session.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline GetSessionResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline GetSessionResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The fleet ID for the session.</p>
     */
    inline GetSessionResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline const HostPropertiesResponse& GetHostProperties() const{ return m_hostProperties; }

    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline void SetHostProperties(const HostPropertiesResponse& value) { m_hostProperties = value; }

    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline void SetHostProperties(HostPropertiesResponse&& value) { m_hostProperties = std::move(value); }

    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline GetSessionResult& WithHostProperties(const HostPropertiesResponse& value) { SetHostProperties(value); return *this;}

    /**
     * <p>Provides the Amazon EC2 properties of the host.</p>
     */
    inline GetSessionResult& WithHostProperties(HostPropertiesResponse&& value) { SetHostProperties(std::move(value)); return *this;}


    /**
     * <p>The life cycle status of the session.</p>
     */
    inline const SessionLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }

    /**
     * <p>The life cycle status of the session.</p>
     */
    inline void SetLifecycleStatus(const SessionLifecycleStatus& value) { m_lifecycleStatus = value; }

    /**
     * <p>The life cycle status of the session.</p>
     */
    inline void SetLifecycleStatus(SessionLifecycleStatus&& value) { m_lifecycleStatus = std::move(value); }

    /**
     * <p>The life cycle status of the session.</p>
     */
    inline GetSessionResult& WithLifecycleStatus(const SessionLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}

    /**
     * <p>The life cycle status of the session.</p>
     */
    inline GetSessionResult& WithLifecycleStatus(SessionLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}


    /**
     * <p>The session log.</p>
     */
    inline const LogConfiguration& GetLog() const{ return m_log; }

    /**
     * <p>The session log.</p>
     */
    inline void SetLog(const LogConfiguration& value) { m_log = value; }

    /**
     * <p>The session log.</p>
     */
    inline void SetLog(LogConfiguration&& value) { m_log = std::move(value); }

    /**
     * <p>The session log.</p>
     */
    inline GetSessionResult& WithLog(const LogConfiguration& value) { SetLog(value); return *this;}

    /**
     * <p>The session log.</p>
     */
    inline GetSessionResult& WithLog(LogConfiguration&& value) { SetLog(std::move(value)); return *this;}


    /**
     * <p>The session ID.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The session ID.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID.</p>
     */
    inline GetSessionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetSessionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetSessionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline const SessionLifecycleTargetStatus& GetTargetLifecycleStatus() const{ return m_targetLifecycleStatus; }

    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline void SetTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { m_targetLifecycleStatus = value; }

    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline void SetTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { m_targetLifecycleStatus = std::move(value); }

    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline GetSessionResult& WithTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { SetTargetLifecycleStatus(value); return *this;}

    /**
     * <p>The life cycle status with which the session started.</p>
     */
    inline GetSessionResult& WithTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { SetTargetLifecycleStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetSessionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetSessionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetSessionResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetSessionResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetSessionResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The worker ID for the session.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p>The worker ID for the session.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerId = value; }

    /**
     * <p>The worker ID for the session.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerId = std::move(value); }

    /**
     * <p>The worker ID for the session.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerId.assign(value); }

    /**
     * <p>The worker ID for the session.</p>
     */
    inline GetSessionResult& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p>The worker ID for the session.</p>
     */
    inline GetSessionResult& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p>The worker ID for the session.</p>
     */
    inline GetSessionResult& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p>The worker log for the session.</p>
     */
    inline const LogConfiguration& GetWorkerLog() const{ return m_workerLog; }

    /**
     * <p>The worker log for the session.</p>
     */
    inline void SetWorkerLog(const LogConfiguration& value) { m_workerLog = value; }

    /**
     * <p>The worker log for the session.</p>
     */
    inline void SetWorkerLog(LogConfiguration&& value) { m_workerLog = std::move(value); }

    /**
     * <p>The worker log for the session.</p>
     */
    inline GetSessionResult& WithWorkerLog(const LogConfiguration& value) { SetWorkerLog(value); return *this;}

    /**
     * <p>The worker log for the session.</p>
     */
    inline GetSessionResult& WithWorkerLog(LogConfiguration&& value) { SetWorkerLog(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_endedAt;

    Aws::String m_fleetId;

    HostPropertiesResponse m_hostProperties;

    SessionLifecycleStatus m_lifecycleStatus;

    LogConfiguration m_log;

    Aws::String m_sessionId;

    Aws::Utils::DateTime m_startedAt;

    SessionLifecycleTargetStatus m_targetLifecycleStatus;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_workerId;

    LogConfiguration m_workerLog;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
