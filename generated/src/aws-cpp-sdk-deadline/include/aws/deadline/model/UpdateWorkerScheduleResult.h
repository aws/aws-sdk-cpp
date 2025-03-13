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
    AWS_DEADLINE_API UpdateWorkerScheduleResult() = default;
    AWS_DEADLINE_API UpdateWorkerScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API UpdateWorkerScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assigned sessions to update.</p>
     */
    inline const Aws::Map<Aws::String, AssignedSession>& GetAssignedSessions() const { return m_assignedSessions; }
    template<typename AssignedSessionsT = Aws::Map<Aws::String, AssignedSession>>
    void SetAssignedSessions(AssignedSessionsT&& value) { m_assignedSessionsHasBeenSet = true; m_assignedSessions = std::forward<AssignedSessionsT>(value); }
    template<typename AssignedSessionsT = Aws::Map<Aws::String, AssignedSession>>
    UpdateWorkerScheduleResult& WithAssignedSessions(AssignedSessionsT&& value) { SetAssignedSessions(std::forward<AssignedSessionsT>(value)); return *this;}
    template<typename AssignedSessionsKeyT = Aws::String, typename AssignedSessionsValueT = AssignedSession>
    UpdateWorkerScheduleResult& AddAssignedSessions(AssignedSessionsKeyT&& key, AssignedSessionsValueT&& value) {
      m_assignedSessionsHasBeenSet = true; m_assignedSessions.emplace(std::forward<AssignedSessionsKeyT>(key), std::forward<AssignedSessionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The session actions associated with the worker schedule to cancel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetCancelSessionActions() const { return m_cancelSessionActions; }
    template<typename CancelSessionActionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetCancelSessionActions(CancelSessionActionsT&& value) { m_cancelSessionActionsHasBeenSet = true; m_cancelSessionActions = std::forward<CancelSessionActionsT>(value); }
    template<typename CancelSessionActionsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateWorkerScheduleResult& WithCancelSessionActions(CancelSessionActionsT&& value) { SetCancelSessionActions(std::forward<CancelSessionActionsT>(value)); return *this;}
    template<typename CancelSessionActionsKeyT = Aws::String, typename CancelSessionActionsValueT = Aws::Vector<Aws::String>>
    UpdateWorkerScheduleResult& AddCancelSessionActions(CancelSessionActionsKeyT&& key, CancelSessionActionsValueT&& value) {
      m_cancelSessionActionsHasBeenSet = true; m_cancelSessionActions.emplace(std::forward<CancelSessionActionsKeyT>(key), std::forward<CancelSessionActionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status to update the worker to.</p>
     */
    inline DesiredWorkerStatus GetDesiredWorkerStatus() const { return m_desiredWorkerStatus; }
    inline void SetDesiredWorkerStatus(DesiredWorkerStatus value) { m_desiredWorkerStatusHasBeenSet = true; m_desiredWorkerStatus = value; }
    inline UpdateWorkerScheduleResult& WithDesiredWorkerStatus(DesiredWorkerStatus value) { SetDesiredWorkerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the time interval (in seconds) for the schedule.</p>
     */
    inline int GetUpdateIntervalSeconds() const { return m_updateIntervalSeconds; }
    inline void SetUpdateIntervalSeconds(int value) { m_updateIntervalSecondsHasBeenSet = true; m_updateIntervalSeconds = value; }
    inline UpdateWorkerScheduleResult& WithUpdateIntervalSeconds(int value) { SetUpdateIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateWorkerScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AssignedSession> m_assignedSessions;
    bool m_assignedSessionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_cancelSessionActions;
    bool m_cancelSessionActionsHasBeenSet = false;

    DesiredWorkerStatus m_desiredWorkerStatus{DesiredWorkerStatus::NOT_SET};
    bool m_desiredWorkerStatusHasBeenSet = false;

    int m_updateIntervalSeconds{0};
    bool m_updateIntervalSecondsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
