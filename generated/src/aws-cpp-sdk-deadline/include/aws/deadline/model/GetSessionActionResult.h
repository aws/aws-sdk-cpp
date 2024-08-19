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
    AWS_DEADLINE_API GetSessionActionResult();
    AWS_DEADLINE_API GetSessionActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetSessionActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The session action ID.</p>
     */
    inline const Aws::String& GetSessionActionId() const{ return m_sessionActionId; }
    inline void SetSessionActionId(const Aws::String& value) { m_sessionActionId = value; }
    inline void SetSessionActionId(Aws::String&& value) { m_sessionActionId = std::move(value); }
    inline void SetSessionActionId(const char* value) { m_sessionActionId.assign(value); }
    inline GetSessionActionResult& WithSessionActionId(const Aws::String& value) { SetSessionActionId(value); return *this;}
    inline GetSessionActionResult& WithSessionActionId(Aws::String&& value) { SetSessionActionId(std::move(value)); return *this;}
    inline GetSessionActionResult& WithSessionActionId(const char* value) { SetSessionActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session action.</p>
     */
    inline const SessionActionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SessionActionStatus& value) { m_status = value; }
    inline void SetStatus(SessionActionStatus&& value) { m_status = std::move(value); }
    inline GetSessionActionResult& WithStatus(const SessionActionStatus& value) { SetStatus(value); return *this;}
    inline GetSessionActionResult& WithStatus(SessionActionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetSessionActionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetSessionActionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAt = std::move(value); }
    inline GetSessionActionResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline GetSessionActionResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const{ return m_workerUpdatedAt; }
    inline void SetWorkerUpdatedAt(const Aws::Utils::DateTime& value) { m_workerUpdatedAt = value; }
    inline void SetWorkerUpdatedAt(Aws::Utils::DateTime&& value) { m_workerUpdatedAt = std::move(value); }
    inline GetSessionActionResult& WithWorkerUpdatedAt(const Aws::Utils::DateTime& value) { SetWorkerUpdatedAt(value); return *this;}
    inline GetSessionActionResult& WithWorkerUpdatedAt(Aws::Utils::DateTime&& value) { SetWorkerUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage completed for a session action.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }
    inline void SetProgressPercent(double value) { m_progressPercent = value; }
    inline GetSessionActionResult& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID for the session action.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }
    inline GetSessionActionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline GetSessionActionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline GetSessionActionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code to exit the session.</p>
     */
    inline int GetProcessExitCode() const{ return m_processExitCode; }
    inline void SetProcessExitCode(int value) { m_processExitCode = value; }
    inline GetSessionActionResult& WithProcessExitCode(int value) { SetProcessExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline const Aws::String& GetProgressMessage() const{ return m_progressMessage; }
    inline void SetProgressMessage(const Aws::String& value) { m_progressMessage = value; }
    inline void SetProgressMessage(Aws::String&& value) { m_progressMessage = std::move(value); }
    inline void SetProgressMessage(const char* value) { m_progressMessage.assign(value); }
    inline GetSessionActionResult& WithProgressMessage(const Aws::String& value) { SetProgressMessage(value); return *this;}
    inline GetSessionActionResult& WithProgressMessage(Aws::String&& value) { SetProgressMessage(std::move(value)); return *this;}
    inline GetSessionActionResult& WithProgressMessage(const char* value) { SetProgressMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session action definition.</p>
     */
    inline const SessionActionDefinition& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const SessionActionDefinition& value) { m_definition = value; }
    inline void SetDefinition(SessionActionDefinition&& value) { m_definition = std::move(value); }
    inline GetSessionActionResult& WithDefinition(const SessionActionDefinition& value) { SetDefinition(value); return *this;}
    inline GetSessionActionResult& WithDefinition(SessionActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSessionActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSessionActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSessionActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionActionId;

    SessionActionStatus m_status;

    Aws::Utils::DateTime m_startedAt;

    Aws::Utils::DateTime m_endedAt;

    Aws::Utils::DateTime m_workerUpdatedAt;

    double m_progressPercent;

    Aws::String m_sessionId;

    int m_processExitCode;

    Aws::String m_progressMessage;

    SessionActionDefinition m_definition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
