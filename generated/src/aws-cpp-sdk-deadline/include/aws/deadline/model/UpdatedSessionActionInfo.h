/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/CompletedStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The updated session action information as it relates to completion and
   * progress of the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdatedSessionActionInfo">AWS
   * API Reference</a></p>
   */
  class UpdatedSessionActionInfo
  {
  public:
    AWS_DEADLINE_API UpdatedSessionActionInfo();
    AWS_DEADLINE_API UpdatedSessionActionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API UpdatedSessionActionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the session upon completion.</p>
     */
    inline const CompletedStatus& GetCompletedStatus() const{ return m_completedStatus; }

    /**
     * <p>The status of the session upon completion.</p>
     */
    inline bool CompletedStatusHasBeenSet() const { return m_completedStatusHasBeenSet; }

    /**
     * <p>The status of the session upon completion.</p>
     */
    inline void SetCompletedStatus(const CompletedStatus& value) { m_completedStatusHasBeenSet = true; m_completedStatus = value; }

    /**
     * <p>The status of the session upon completion.</p>
     */
    inline void SetCompletedStatus(CompletedStatus&& value) { m_completedStatusHasBeenSet = true; m_completedStatus = std::move(value); }

    /**
     * <p>The status of the session upon completion.</p>
     */
    inline UpdatedSessionActionInfo& WithCompletedStatus(const CompletedStatus& value) { SetCompletedStatus(value); return *this;}

    /**
     * <p>The status of the session upon completion.</p>
     */
    inline UpdatedSessionActionInfo& WithCompletedStatus(CompletedStatus&& value) { SetCompletedStatus(std::move(value)); return *this;}


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
    inline UpdatedSessionActionInfo& WithEndedAt(const Aws::Utils::DateTime& value) { SetEndedAt(value); return *this;}

    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline UpdatedSessionActionInfo& WithEndedAt(Aws::Utils::DateTime&& value) { SetEndedAt(std::move(value)); return *this;}


    /**
     * <p>The process exit code.</p>
     */
    inline int GetProcessExitCode() const{ return m_processExitCode; }

    /**
     * <p>The process exit code.</p>
     */
    inline bool ProcessExitCodeHasBeenSet() const { return m_processExitCodeHasBeenSet; }

    /**
     * <p>The process exit code.</p>
     */
    inline void SetProcessExitCode(int value) { m_processExitCodeHasBeenSet = true; m_processExitCode = value; }

    /**
     * <p>The process exit code.</p>
     */
    inline UpdatedSessionActionInfo& WithProcessExitCode(int value) { SetProcessExitCode(value); return *this;}


    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline const Aws::String& GetProgressMessage() const{ return m_progressMessage; }

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline bool ProgressMessageHasBeenSet() const { return m_progressMessageHasBeenSet; }

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline void SetProgressMessage(const Aws::String& value) { m_progressMessageHasBeenSet = true; m_progressMessage = value; }

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline void SetProgressMessage(Aws::String&& value) { m_progressMessageHasBeenSet = true; m_progressMessage = std::move(value); }

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline void SetProgressMessage(const char* value) { m_progressMessageHasBeenSet = true; m_progressMessage.assign(value); }

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline UpdatedSessionActionInfo& WithProgressMessage(const Aws::String& value) { SetProgressMessage(value); return *this;}

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline UpdatedSessionActionInfo& WithProgressMessage(Aws::String&& value) { SetProgressMessage(std::move(value)); return *this;}

    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline UpdatedSessionActionInfo& WithProgressMessage(const char* value) { SetProgressMessage(value); return *this;}


    /**
     * <p>The percentage completed.</p>
     */
    inline double GetProgressPercent() const{ return m_progressPercent; }

    /**
     * <p>The percentage completed.</p>
     */
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }

    /**
     * <p>The percentage completed.</p>
     */
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }

    /**
     * <p>The percentage completed.</p>
     */
    inline UpdatedSessionActionInfo& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}


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
    inline UpdatedSessionActionInfo& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The date and time the resource started running.</p>
     */
    inline UpdatedSessionActionInfo& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The updated time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The updated time.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The updated time.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The updated time.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The updated time.</p>
     */
    inline UpdatedSessionActionInfo& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The updated time.</p>
     */
    inline UpdatedSessionActionInfo& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    CompletedStatus m_completedStatus;
    bool m_completedStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt;
    bool m_endedAtHasBeenSet = false;

    int m_processExitCode;
    bool m_processExitCodeHasBeenSet = false;

    Aws::String m_progressMessage;
    bool m_progressMessageHasBeenSet = false;

    double m_progressPercent;
    bool m_progressPercentHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
