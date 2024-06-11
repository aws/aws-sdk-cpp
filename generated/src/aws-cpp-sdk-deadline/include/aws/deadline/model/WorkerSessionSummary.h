﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionLifecycleStatus.h>
#include <aws/deadline/model/SessionLifecycleTargetStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{

  /**
   * <p>Summarizes the session for a particular worker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/WorkerSessionSummary">AWS
   * API Reference</a></p>
   */
  class WorkerSessionSummary
  {
  public:
    AWS_DEADLINE_API WorkerSessionSummary();
    AWS_DEADLINE_API WorkerSessionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API WorkerSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }
    inline WorkerSessionSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}
    inline WorkerSessionSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for the job associated with the worker's session.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline WorkerSessionSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline WorkerSessionSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline WorkerSessionSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status for the worker's session.</p>
     */
    inline const SessionLifecycleStatus& GetLifecycleStatus() const{ return m_lifecycleStatus; }
    inline bool LifecycleStatusHasBeenSet() const { return m_lifecycleStatusHasBeenSet; }
    inline void SetLifecycleStatus(const SessionLifecycleStatus& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = value; }
    inline void SetLifecycleStatus(SessionLifecycleStatus&& value) { m_lifecycleStatusHasBeenSet = true; m_lifecycleStatus = std::move(value); }
    inline WorkerSessionSummary& WithLifecycleStatus(const SessionLifecycleStatus& value) { SetLifecycleStatus(value); return *this;}
    inline WorkerSessionSummary& WithLifecycleStatus(SessionLifecycleStatus&& value) { SetLifecycleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID for the queue associated to the worker.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline WorkerSessionSummary& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline WorkerSessionSummary& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline WorkerSessionSummary& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session ID for the session action.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline WorkerSessionSummary& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline WorkerSessionSummary& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline WorkerSessionSummary& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline WorkerSessionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline WorkerSessionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The life cycle status </p>
     */
    inline const SessionLifecycleTargetStatus& GetTargetLifecycleStatus() const{ return m_targetLifecycleStatus; }
    inline bool TargetLifecycleStatusHasBeenSet() const { return m_targetLifecycleStatusHasBeenSet; }
    inline void SetTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { m_targetLifecycleStatusHasBeenSet = true; m_targetLifecycleStatus = value; }
    inline void SetTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { m_targetLifecycleStatusHasBeenSet = true; m_targetLifecycleStatus = std::move(value); }
    inline WorkerSessionSummary& WithTargetLifecycleStatus(const SessionLifecycleTargetStatus& value) { SetTargetLifecycleStatus(value); return *this;}
    inline WorkerSessionSummary& WithTargetLifecycleStatus(SessionLifecycleTargetStatus&& value) { SetTargetLifecycleStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    SessionLifecycleStatus m_lifecycleStatus;
    bool m_lifecycleStatusHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    SessionLifecycleTargetStatus m_targetLifecycleStatus;
    bool m_targetLifecycleStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
