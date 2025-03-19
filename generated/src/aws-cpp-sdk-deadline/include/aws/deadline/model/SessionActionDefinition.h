/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentEnterSessionActionDefinition.h>
#include <aws/deadline/model/EnvironmentExitSessionActionDefinition.h>
#include <aws/deadline/model/TaskRunSessionActionDefinition.h>
#include <aws/deadline/model/SyncInputJobAttachmentsSessionActionDefinition.h>
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
   * <p>The definition of the session action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class SessionActionDefinition
  {
  public:
    AWS_DEADLINE_API SessionActionDefinition() = default;
    AWS_DEADLINE_API SessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment to enter into.</p>
     */
    inline const EnvironmentEnterSessionActionDefinition& GetEnvEnter() const { return m_envEnter; }
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }
    template<typename EnvEnterT = EnvironmentEnterSessionActionDefinition>
    void SetEnvEnter(EnvEnterT&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::forward<EnvEnterT>(value); }
    template<typename EnvEnterT = EnvironmentEnterSessionActionDefinition>
    SessionActionDefinition& WithEnvEnter(EnvEnterT&& value) { SetEnvEnter(std::forward<EnvEnterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment to exit from.</p>
     */
    inline const EnvironmentExitSessionActionDefinition& GetEnvExit() const { return m_envExit; }
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }
    template<typename EnvExitT = EnvironmentExitSessionActionDefinition>
    void SetEnvExit(EnvExitT&& value) { m_envExitHasBeenSet = true; m_envExit = std::forward<EnvExitT>(value); }
    template<typename EnvExitT = EnvironmentExitSessionActionDefinition>
    SessionActionDefinition& WithEnvExit(EnvExitT&& value) { SetEnvExit(std::forward<EnvExitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run in the session.</p>
     */
    inline const TaskRunSessionActionDefinition& GetTaskRun() const { return m_taskRun; }
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }
    template<typename TaskRunT = TaskRunSessionActionDefinition>
    void SetTaskRun(TaskRunT&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::forward<TaskRunT>(value); }
    template<typename TaskRunT = TaskRunSessionActionDefinition>
    SessionActionDefinition& WithTaskRun(TaskRunT&& value) { SetTaskRun(std::forward<TaskRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachments to sync with a session action.</p>
     */
    inline const SyncInputJobAttachmentsSessionActionDefinition& GetSyncInputJobAttachments() const { return m_syncInputJobAttachments; }
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }
    template<typename SyncInputJobAttachmentsT = SyncInputJobAttachmentsSessionActionDefinition>
    void SetSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::forward<SyncInputJobAttachmentsT>(value); }
    template<typename SyncInputJobAttachmentsT = SyncInputJobAttachmentsSessionActionDefinition>
    SessionActionDefinition& WithSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { SetSyncInputJobAttachments(std::forward<SyncInputJobAttachmentsT>(value)); return *this;}
    ///@}
  private:

    EnvironmentEnterSessionActionDefinition m_envEnter;
    bool m_envEnterHasBeenSet = false;

    EnvironmentExitSessionActionDefinition m_envExit;
    bool m_envExitHasBeenSet = false;

    TaskRunSessionActionDefinition m_taskRun;
    bool m_taskRunHasBeenSet = false;

    SyncInputJobAttachmentsSessionActionDefinition m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
