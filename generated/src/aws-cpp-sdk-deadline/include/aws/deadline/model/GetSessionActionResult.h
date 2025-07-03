/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionActionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/SessionActionDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/AcquiredLimit.h>
#include <aws/deadline/model/TaskRunManifestPropertiesResponse.h>
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
  class GetSessionActionResult
  {
  public:
    AWS_DEADLINE_API GetSessionActionResult() = default;
    AWS_DEADLINE_API GetSessionActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session action ID.</p>
     */
    inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
    template<typename SessionActionIdT = Aws::String>
    void SetSessionActionId(SessionActionIdT&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::forward<SessionActionIdT>(value); }
    template<typename SessionActionIdT = Aws::String>
    GetSessionActionResult& WithSessionActionId(SessionActionIdT&& value) { SetSessionActionId(std::forward<SessionActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session action.</p>
     */
    inline SessionActionStatus GetStatus() const { return m_status; }
    inline void SetStatus(SessionActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSessionActionResult& WithStatus(SessionActionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetSessionActionResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    GetSessionActionResult& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const { return m_workerUpdatedAt; }
    template<typename WorkerUpdatedAtT = Aws::Utils::DateTime>
    void SetWorkerUpdatedAt(WorkerUpdatedAtT&& value) { m_workerUpdatedAtHasBeenSet = true; m_workerUpdatedAt = std::forward<WorkerUpdatedAtT>(value); }
    template<typename WorkerUpdatedAtT = Aws::Utils::DateTime>
    GetSessionActionResult& WithWorkerUpdatedAt(WorkerUpdatedAtT&& value) { SetWorkerUpdatedAt(std::forward<WorkerUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage completed for a session action.</p>
     */
    inline double GetProgressPercent() const { return m_progressPercent; }
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline GetSessionActionResult& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID for the session action.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    GetSessionActionResult& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process exit code. The default Deadline Cloud worker agent converts
     * unsigned 32-bit exit codes to signed 32-bit exit codes.</p>
     */
    inline int GetProcessExitCode() const { return m_processExitCode; }
    inline void SetProcessExitCode(int value) { m_processExitCodeHasBeenSet = true; m_processExitCode = value; }
    inline GetSessionActionResult& WithProcessExitCode(int value) { SetProcessExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline const Aws::String& GetProgressMessage() const { return m_progressMessage; }
    template<typename ProgressMessageT = Aws::String>
    void SetProgressMessage(ProgressMessageT&& value) { m_progressMessageHasBeenSet = true; m_progressMessage = std::forward<ProgressMessageT>(value); }
    template<typename ProgressMessageT = Aws::String>
    GetSessionActionResult& WithProgressMessage(ProgressMessageT&& value) { SetProgressMessage(std::forward<ProgressMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session action definition.</p>
     */
    inline const SessionActionDefinition& GetDefinition() const { return m_definition; }
    template<typename DefinitionT = SessionActionDefinition>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = SessionActionDefinition>
    GetSessionActionResult& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limits and their amounts acquired during a session action. If no limits
     * were acquired during the session, this field isn't returned.</p>
     */
    inline const Aws::Vector<AcquiredLimit>& GetAcquiredLimits() const { return m_acquiredLimits; }
    template<typename AcquiredLimitsT = Aws::Vector<AcquiredLimit>>
    void SetAcquiredLimits(AcquiredLimitsT&& value) { m_acquiredLimitsHasBeenSet = true; m_acquiredLimits = std::forward<AcquiredLimitsT>(value); }
    template<typename AcquiredLimitsT = Aws::Vector<AcquiredLimit>>
    GetSessionActionResult& WithAcquiredLimits(AcquiredLimitsT&& value) { SetAcquiredLimits(std::forward<AcquiredLimitsT>(value)); return *this;}
    template<typename AcquiredLimitsT = AcquiredLimit>
    GetSessionActionResult& AddAcquiredLimits(AcquiredLimitsT&& value) { m_acquiredLimitsHasBeenSet = true; m_acquiredLimits.emplace_back(std::forward<AcquiredLimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of manifest properties that describe file attachments for the task
     * run.</p>
     */
    inline const Aws::Vector<TaskRunManifestPropertiesResponse>& GetManifests() const { return m_manifests; }
    template<typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
    void SetManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests = std::forward<ManifestsT>(value); }
    template<typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
    GetSessionActionResult& WithManifests(ManifestsT&& value) { SetManifests(std::forward<ManifestsT>(value)); return *this;}
    template<typename ManifestsT = TaskRunManifestPropertiesResponse>
    GetSessionActionResult& AddManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests.emplace_back(std::forward<ManifestsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionActionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;

    SessionActionStatus m_status{SessionActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_workerUpdatedAt{};
    bool m_workerUpdatedAtHasBeenSet = false;

    double m_progressPercent{0.0};
    bool m_progressPercentHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    int m_processExitCode{0};
    bool m_processExitCodeHasBeenSet = false;

    Aws::String m_progressMessage;
    bool m_progressMessageHasBeenSet = false;

    SessionActionDefinition m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Vector<AcquiredLimit> m_acquiredLimits;
    bool m_acquiredLimitsHasBeenSet = false;

    Aws::Vector<TaskRunManifestPropertiesResponse> m_manifests;
    bool m_manifestsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
