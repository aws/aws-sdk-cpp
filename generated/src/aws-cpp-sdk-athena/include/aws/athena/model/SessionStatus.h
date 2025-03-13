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
   * <p>Contains information about the status of a session.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/SessionStatus">AWS
   * API Reference</a></p>
   */
  class SessionStatus
  {
  public:
    AWS_ATHENA_API SessionStatus() = default;
    AWS_ATHENA_API SessionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API SessionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the session started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    SessionStatus& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent date and time that the session was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDateTime() const { return m_lastModifiedDateTime; }
    inline bool LastModifiedDateTimeHasBeenSet() const { return m_lastModifiedDateTimeHasBeenSet; }
    template<typename LastModifiedDateTimeT = Aws::Utils::DateTime>
    void SetLastModifiedDateTime(LastModifiedDateTimeT&& value) { m_lastModifiedDateTimeHasBeenSet = true; m_lastModifiedDateTime = std::forward<LastModifiedDateTimeT>(value); }
    template<typename LastModifiedDateTimeT = Aws::Utils::DateTime>
    SessionStatus& WithLastModifiedDateTime(LastModifiedDateTimeT&& value) { SetLastModifiedDateTime(std::forward<LastModifiedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the session ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    SessionStatus& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time starting at which the session became idle. Can be empty if
     * the session is not currently idle.</p>
     */
    inline const Aws::Utils::DateTime& GetIdleSinceDateTime() const { return m_idleSinceDateTime; }
    inline bool IdleSinceDateTimeHasBeenSet() const { return m_idleSinceDateTimeHasBeenSet; }
    template<typename IdleSinceDateTimeT = Aws::Utils::DateTime>
    void SetIdleSinceDateTime(IdleSinceDateTimeT&& value) { m_idleSinceDateTimeHasBeenSet = true; m_idleSinceDateTime = std::forward<IdleSinceDateTimeT>(value); }
    template<typename IdleSinceDateTimeT = Aws::Utils::DateTime>
    SessionStatus& WithIdleSinceDateTime(IdleSinceDateTimeT&& value) { SetIdleSinceDateTime(std::forward<IdleSinceDateTimeT>(value)); return *this;}
    ///@}

    ///@{
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
    inline SessionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SessionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SessionStatus& WithState(SessionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the session state change (for example, canceled because the
     * session was terminated).</p>
     */
    inline const Aws::String& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = Aws::String>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = Aws::String>
    SessionStatus& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDateTime{};
    bool m_lastModifiedDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_idleSinceDateTime{};
    bool m_idleSinceDateTimeHasBeenSet = false;

    SessionState m_state{SessionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
