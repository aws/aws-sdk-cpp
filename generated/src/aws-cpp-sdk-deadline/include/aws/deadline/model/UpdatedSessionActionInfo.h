﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/CompletedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_DEADLINE_API UpdatedSessionActionInfo() = default;
    AWS_DEADLINE_API UpdatedSessionActionInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API UpdatedSessionActionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the session upon completion.</p>
     */
    inline CompletedStatus GetCompletedStatus() const { return m_completedStatus; }
    inline bool CompletedStatusHasBeenSet() const { return m_completedStatusHasBeenSet; }
    inline void SetCompletedStatus(CompletedStatus value) { m_completedStatusHasBeenSet = true; m_completedStatus = value; }
    inline UpdatedSessionActionInfo& WithCompletedStatus(CompletedStatus value) { SetCompletedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The process exit code.</p>
     */
    inline int GetProcessExitCode() const { return m_processExitCode; }
    inline bool ProcessExitCodeHasBeenSet() const { return m_processExitCodeHasBeenSet; }
    inline void SetProcessExitCode(int value) { m_processExitCodeHasBeenSet = true; m_processExitCode = value; }
    inline UpdatedSessionActionInfo& WithProcessExitCode(int value) { SetProcessExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message to indicate the progress of the updated session action.</p>
     */
    inline const Aws::String& GetProgressMessage() const { return m_progressMessage; }
    inline bool ProgressMessageHasBeenSet() const { return m_progressMessageHasBeenSet; }
    template<typename ProgressMessageT = Aws::String>
    void SetProgressMessage(ProgressMessageT&& value) { m_progressMessageHasBeenSet = true; m_progressMessage = std::forward<ProgressMessageT>(value); }
    template<typename ProgressMessageT = Aws::String>
    UpdatedSessionActionInfo& WithProgressMessage(ProgressMessageT&& value) { SetProgressMessage(std::forward<ProgressMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    UpdatedSessionActionInfo& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    UpdatedSessionActionInfo& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated time.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    UpdatedSessionActionInfo& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage completed.</p>
     */
    inline double GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline UpdatedSessionActionInfo& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}
    ///@}
  private:

    CompletedStatus m_completedStatus{CompletedStatus::NOT_SET};
    bool m_completedStatusHasBeenSet = false;

    int m_processExitCode{0};
    bool m_processExitCodeHasBeenSet = false;

    Aws::String m_progressMessage;
    bool m_progressMessageHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    double m_progressPercent{0.0};
    bool m_progressPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
