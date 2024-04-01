/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/SessionActionDefinitionSummary.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionActionStatus.h>
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
   * <p>The details of a session action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SessionActionSummary">AWS
   * API Reference</a></p>
   */
  class SessionActionSummary
  {
  public:
    AWS_DEADLINE_API SessionActionSummary();
    AWS_DEADLINE_API SessionActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The session action definition.</p>
     */
    inline const SessionActionDefinitionSummary& GetDefinition() const{ return m_definition; }

    /**
     * <p>The session action definition.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The session action definition.</p>
     */
    inline void SetDefinition(const SessionActionDefinitionSummary& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The session action definition.</p>
     */
    inline void SetDefinition(SessionActionDefinitionSummary&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The session action definition.</p>
     */
    inline SessionActionSummary& WithDefinition(const SessionActionDefinitionSummary& value) { SetDefinition(value); return *this;}

    /**
     * <p>The session action definition.</p>
     */
    inline SessionActionSummary& WithDefinition(SessionActionDefinitionSummary&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const{ return m_endedAt; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(const Aws::Utils::DateTime& value) { m_endedAtHasBeenSet = true; m_endedAt = value; }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline void SetEndedAt(Aws::Utils::DateTime&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::move(value); }

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline SessionActionSummary& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline SessionActionSummary& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The completion percentage for the session action.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>The completion percentage for the session action.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>The completion percentage for the session action.</p>
     */
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>The completion percentage for the session action.</p>
     */
    inline SessionActionSummary& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}


    /**
     * <p>The session action ID.</p>
     */
    inline const Aws::String& GetSessionActionId() const{ return m_sessionActionId; }

    /**
     * <p>The session action ID.</p>
     */
    inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(const Aws::String& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = value; }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(Aws::String&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::move(value); }

    /**
     * <p>The session action ID.</p>
     */
    inline void SetSessionActionId(const char* value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId.assign(value); }

    /**
     * <p>The session action ID.</p>
     */
    inline SessionActionSummary& WithSessionActionId(const Aws::String& value) { SetSessionActionId(value); return *this;}

    /**
     * <p>The session action ID.</p>
     */
    inline SessionActionSummary& WithSessionActionId(Aws::String&& value) { SetSessionActionId(std::move(value)); return *this;}

    /**
     * <p>The session action ID.</p>
     */
    inline SessionActionSummary& WithSessionActionId(const char* value) { SetSessionActionId(value); return *this;}


    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline SessionActionSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline SessionActionSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the session action.</p>
     */
    inline const SessionActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the session action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the session action.</p>
     */
    inline void SetStatus(const SessionActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the session action.</p>
     */
    inline void SetStatus(SessionActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the session action.</p>
     */
    inline SessionActionSummary& WithStatus(const SessionActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the session action.</p>
     */
    inline SessionActionSummary& WithStatus(SessionActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const{ return m_workerUpdatedAt; }

    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline bool WorkerUpdatedAtHasBeenSet() const { return m_workerUpdatedAtHasBeenSet; }

    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline void SetWorkerUpdatedAt(const Aws::Utils::DateTime& value) { m_workerUpdatedAtHasBeenSet = true; m_workerUpdatedAt = value; }

    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline void SetWorkerUpdatedAt(Aws::Utils::DateTime&& value) { m_workerUpdatedAtHasBeenSet = true; m_workerUpdatedAt = std::move(value); }

    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline SessionActionSummary& WithWorkerUpdatedAt(const Aws::Utils::DateTime& value) { SetWorkerUpdatedAt(value); return *this;}

    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline SessionActionSummary& WithWorkerUpdatedAt(Aws::Utils::DateTime&& value) { SetWorkerUpdatedAt(std::move(value)); return *this;}

  private:

    SessionActionDefinitionSummary m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    double m_progressPercent;
    bool m_progressPercentHasBeenSet = false;

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    SessionActionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_workerUpdatedAt;
    bool m_workerUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
