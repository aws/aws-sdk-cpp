/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/athena/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains information about the status of a notebook session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SessionStatus">AWS
   * API Reference</a></p>
   */
  class SessionStatus
  {
  public:
    AWS_ATHENA_API SessionStatus();
    AWS_ATHENA_API SessionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API SessionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that the session started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The date and time that the session started.</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the session started.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The date and time that the session started.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>The date and time that the session started.</p>
     */
    inline SessionStatus& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time that the session started.</p>
     */
    inline SessionStatus& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}


    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }

    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline bool LastModifiedDateTimeHasBeenSet() const { return m_lastModifiedDateTimeHasBeenSet; }

    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline void SetLastModifiedDateTime(const Aws::Utils::DateTime& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = value; }

    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline void SetLastModifiedDateTime(Aws::Utils::DateTime&& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = std::move(value); }

    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline SessionStatus& WithLastModifiedDateTime(const Aws::Utils::DateTime& value) { SetLastModifiedDateTime(value); return *this;}

    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline SessionStatus& WithLastModifiedDateTime(Aws::Utils::DateTime&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the session ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The date and time that the session ended.</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the session ended.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The date and time that the session ended.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>The date and time that the session ended.</p>
     */
    inline SessionStatus& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The date and time that the session ended.</p>
     */
    inline SessionStatus& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline const Aws::Utils::DateTime& GetIdleSinceDateTime() const{ return m_idleSinceDateTime; }

    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline bool IdleSinceDateTimeHasBeenSet() const { return m_idleSinceDateTimeHasBeenSet; }

    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline void SetIdleSinceDateTime(const Aws::Utils::DateTime& value) { m_idleSinceDateTimeHasBeenSet = true; m_idleSinceDateTime = value; }

    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline void SetIdleSinceDateTime(Aws::Utils::DateTime&& value) { m_idleSinceDateTimeHasBeenSet = true; m_idleSinceDateTime = std::move(value); }

    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline SessionStatus& WithIdleSinceDateTime(const Aws::Utils::DateTime& value) { SetIdleSinceDateTime(value); return *this;}

    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline SessionStatus& WithIdleSinceDateTime(Aws::Utils::DateTime&& value) { SetIdleSinceDateTime(std::move(value)); return *this;}


    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline const SessionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline void SetState(const SessionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline void SetState(SessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline SessionStatus& WithState(const SessionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the session. A description of each state follows.</p> <p>
     * <code>CREATING</code> - The session is being started, including acquiring
     * resources.</p> <p> <code>CREATED</code> - The session has been started.</p> <p>
     * <code>IDLE</code> - The session is able to accept a calculation.</p> <p>
     * <code>BUSY</code> - The session is processing another task and is unable to
     * accept a calculation.</p> <p> <code>TERMINATING</code> - The session is in the
     * process of shutting down.</p> <p> <code>TERMINATED</code> - The session and its
     * resources are no longer running.</p> <p> <code>DEGRADED</code> - The session has
     * no healthy coordinators.</p> <p> <code>FAILED</code> - Due to a failure, the
     * session and its resources are no longer running.</p>
     */
    inline SessionStatus& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline const Aws::String& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline void SetStateChangeReason(const Aws::String& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline void SetStateChangeReason(Aws::String&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline void SetStateChangeReason(const char* value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason.assign(value); }

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline SessionStatus& WithStateChangeReason(const Aws::String& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline SessionStatus& WithStateChangeReason(Aws::String&& value) { SetStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline SessionStatus& WithStateChangeReason(const char* value) { SetStateChangeReason(value); return *this;}

  private:

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDateTime;
    bool m_lastModifiedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_idleSinceDateTime;
    bool m_idleSinceDateTimeHasBeenSet = false;

    SessionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
