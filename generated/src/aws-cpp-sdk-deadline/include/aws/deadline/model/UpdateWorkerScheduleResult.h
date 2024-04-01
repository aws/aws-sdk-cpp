/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/deadline/model/DesiredWorkerStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/AssignedSession.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateWorkerScheduleResult
  {
  public:
    AWS_DEADLINE_API UpdateWorkerScheduleResult();
    AWS_DEADLINE_API UpdateWorkerScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API UpdateWorkerScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The assigned sessions to update.</p>
     */
    inline const Aws::Map<Aws::String, AssignedSession>& GetAssignedSessions() const{ return m_assignedSessions; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline void SetAssignedSessions(const Aws::Map<Aws::String, AssignedSession>& value) { m_assignedSessions = value; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline void SetAssignedSessions(Aws::Map<Aws::String, AssignedSession>&& value) { m_assignedSessions = std::move(value); }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& WithAssignedSessions(const Aws::Map<Aws::String, AssignedSession>& value) { SetAssignedSessions(value); return *this;}

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& WithAssignedSessions(Aws::Map<Aws::String, AssignedSession>&& value) { SetAssignedSessions(std::move(value)); return *this;}

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(const Aws::String& key, const AssignedSession& value) { m_assignedSessions.emplace(key, value); return *this; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(Aws::String&& key, const AssignedSession& value) { m_assignedSessions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(const Aws::String& key, AssignedSession&& value) { m_assignedSessions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(Aws::String&& key, AssignedSession&& value) { m_assignedSessions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(const char* key, AssignedSession&& value) { m_assignedSessions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The assigned sessions to update.</p>
     */
    inline UpdateWorkerScheduleResult& AddAssignedSessions(const char* key, const AssignedSession& value) { m_assignedSessions.emplace(key, value); return *this; }


    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCancelSessionActions() const{ return m_cancelSessionActions; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline void SetCancelSessionActions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_cancelSessionActions = value; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline void SetCancelSessionActions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_cancelSessionActions = std::move(value); }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& WithCancelSessionActions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetCancelSessionActions(value); return *this;}

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& WithCancelSessionActions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetCancelSessionActions(std::move(value)); return *this;}

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_cancelSessionActions.emplace(key, value); return *this; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_cancelSessionActions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_cancelSessionActions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_cancelSessionActions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(const char* key, Aws::Vector<Aws::String>&& value) { m_cancelSessionActions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline UpdateWorkerScheduleResult& AddCancelSessionActions(const char* key, const Aws::Vector<Aws::String>& value) { m_cancelSessionActions.emplace(key, value); return *this; }


    /**
     * <p>The status to update the worker to.</p>
     */
    inline const DesiredWorkerStatus& GetDesiredWorkerStatus() const{ return m_desiredWorkerStatus; }

    /**
     * <p>The status to update the worker to.</p>
     */
    inline void SetDesiredWorkerStatus(const DesiredWorkerStatus& value) { m_desiredWorkerStatus = value; }

    /**
     * <p>The status to update the worker to.</p>
     */
    inline void SetDesiredWorkerStatus(DesiredWorkerStatus&& value) { m_desiredWorkerStatus = std::move(value); }

    /**
     * <p>The status to update the worker to.</p>
     */
    inline UpdateWorkerScheduleResult& WithDesiredWorkerStatus(const DesiredWorkerStatus& value) { SetDesiredWorkerStatus(value); return *this;}

    /**
     * <p>The status to update the worker to.</p>
     */
    inline UpdateWorkerScheduleResult& WithDesiredWorkerStatus(DesiredWorkerStatus&& value) { SetDesiredWorkerStatus(std::move(value)); return *this;}


    /**
     * <p>Updates the time interval (in seconds) for the schedule.</p>
     */
    inline int GetUpdateIntervalSeconds() const{ return m_updateIntervalSeconds; }

    /**
     * <p>Updates the time interval (in seconds) for the schedule.</p>
     */
    inline void SetUpdateIntervalSeconds(int value) { m_updateIntervalSeconds = value; }

    /**
     * <p>Updates the time interval (in seconds) for the schedule.</p>
     */
    inline UpdateWorkerScheduleResult& WithUpdateIntervalSeconds(int value) { SetUpdateIntervalSeconds(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateWorkerScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateWorkerScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateWorkerScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, AssignedSession> m_assignedSessions;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_cancelSessionActions;

    DesiredWorkerStatus m_desiredWorkerStatus;

    int m_updateIntervalSeconds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
