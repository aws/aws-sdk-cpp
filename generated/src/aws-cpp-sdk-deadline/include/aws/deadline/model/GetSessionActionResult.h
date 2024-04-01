/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SessionActionDefinition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionActionStatus.h>
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


    /**
     * <p>The session action definition.</p>
     */
    inline const SessionActionDefinition& GetDefinition() const{ return m_definition; }

    /**
     * <p>The session action definition.</p>
     */
    inline void SetDefinition(const SessionActionDefinition& value) { m_definition = value; }

    /**
     * <p>The session action definition.</p>
     */
    inline void SetDefinition(SessionActionDefinition&& value) { m_definition = std::move(value); }

    /**
     * <p>The session action definition.</p>
     */
    inline GetSessionActionResult& WithDefinition(const SessionActionDefinition& value) { SetDefinition(value); return *this;}

    /**
     * <p>The session action definition.</p>
     */
    inline GetSessionActionResult& WithDefinition(SessionActionDefinition&& value) { SetDefinition(std::move(value)); return *this;}


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
    inline GetSessionActionResult& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline GetSessionActionResult& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The exit code to exit the session.</p>
     */
    inline int GetProcessExitCode() const{ return m_processExitCode; }

    /**
     * <p>The exit code to exit the session.</p>
     */
    inline void SetProcessExitCode(int value) { m_processExitCode = value; }

    /**
     * <p>The exit code to exit the session.</p>
     */
    inline GetSessionActionResult& WithProcessExitCode(int value) { SetProcessExitCode(value); return *this;}


    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline const Aws::String& GetProgressMessage() const{ return m_progressMessage; }

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline void SetProgressMessage(const Aws::String& value) { m_progressMessage = value; }

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline void SetProgressMessage(Aws::String&& value) { m_progressMessage = std::move(value); }

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline void SetProgressMessage(const char* value) { m_progressMessage.assign(value); }

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline GetSessionActionResult& WithProgressMessage(const Aws::String& value) { SetProgressMessage(value); return *this;}

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline GetSessionActionResult& WithProgressMessage(Aws::String&& value) { SetProgressMessage(std::move(value)); return *this;}

    /**
     * <p>The message that communicates the progress of the session action.</p>
     */
    inline GetSessionActionResult& WithProgressMessage(const char* value) { SetProgressMessage(value); return *this;}


    /**
     * <p>The percentage completed for a session action.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>The percentage completed for a session action.</p>
     */
    inline void SetProgressPercent(double value) { m_progressPercent = value; }

    /**
     * <p>The percentage completed for a session action.</p>
     */
    inline GetSessionActionResult& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}


    /**
     * <p>The session action ID.</p>
     */
    inline const Aws::String& GetSessionActionId() const{ return m_sessionActionId; }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(const Aws::String& value) { m_sessionActionId = value; }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(Aws::String&& value) { m_sessionActionId = std::move(value); }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(const char* value) { m_sessionActionId.assign(value); }

    /**
     * <p>The session action ID.</p>
     */
    inline GetSessionActionResult& WithSessionActionId(const Aws::String& value) { SetSessionActionId(value); return *this;}

    /**
     * <p>The session action ID.</p>
     */
    inline GetSessionActionResult& WithSessionActionId(Aws::String&& value) { SetSessionActionId(std::move(value)); return *this;}

    /**
     * <p>The session action ID.</p>
     */
    inline GetSessionActionResult& WithSessionActionId(const char* value) { SetSessionActionId(value); return *this;}


    /**
     * <p>The session ID for the session action.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The session ID for the session action.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionId = value; }

    /**
     * <p>The session ID for the session action.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionId = std::move(value); }

    /**
     * <p>The session ID for the session action.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionId.assign(value); }

    /**
     * <p>The session ID for the session action.</p>
     */
    inline GetSessionActionResult& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The session ID for the session action.</p>
     */
    inline GetSessionActionResult& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The session ID for the session action.</p>
     */
    inline GetSessionActionResult& WithSessionId(const char* value) { SetSessionId(value); return *this;}


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
    inline GetSessionActionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline GetSessionActionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the session action.</p>
     */
    inline const SessionActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the session action.</p>
     */
    inline void SetStatus(const SessionActionStatus& value) { m_status = value; }

    /**
     * <p>The status of the session action.</p>
     */
    inline void SetStatus(SessionActionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the session action.</p>
     */
    inline GetSessionActionResult& WithStatus(const SessionActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the session action.</p>
     */
    inline GetSessionActionResult& WithStatus(SessionActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const{ return m_workerUpdatedAt; }

    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline void SetWorkerUpdatedAt(const Aws::Utils::DateTime& value) { m_workerUpdatedAt = value; }

    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline void SetWorkerUpdatedAt(Aws::Utils::DateTime&& value) { m_workerUpdatedAt = std::move(value); }

    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline GetSessionActionResult& WithWorkerUpdatedAt(const Aws::Utils::DateTime& value) { SetWorkerUpdatedAt(value); return *this;}

    /**
     * <p>The Linux timestamp of the date and time the session action was last
     * updated.</p>
     */
    inline GetSessionActionResult& WithWorkerUpdatedAt(Aws::Utils::DateTime&& value) { SetWorkerUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSessionActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSessionActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSessionActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SessionActionDefinition m_definition;

    Aws::Utils::DateTime m_endedAt;

    int m_processExitCode;

    Aws::String m_progressMessage;

    double m_progressPercent;

    Aws::String m_sessionActionId;

    Aws::String m_sessionId;

    Aws::Utils::DateTime m_startedAt;

    SessionActionStatus m_status;

    Aws::Utils::DateTime m_workerUpdatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
