/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AssignedEnvironmentEnterSessionActionDefinition.h>
#include <aws/deadline/model/AssignedEnvironmentExitSessionActionDefinition.h>
#include <aws/deadline/model/AssignedTaskRunSessionActionDefinition.h>
#include <aws/deadline/model/AssignedSyncInputJobAttachmentsSessionActionDefinition.h>
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
   * <p>The definition of the assigned session action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssignedSessionActionDefinition">AWS
   * API Reference</a></p>
   */
  class AssignedSessionActionDefinition
  {
  public:
    AWS_DEADLINE_API AssignedSessionActionDefinition() = default;
    AWS_DEADLINE_API AssignedSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment a session starts on.</p>
     */
    inline const AssignedEnvironmentEnterSessionActionDefinition& GetEnvEnter() const { return m_envEnter; }
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }
    template<typename EnvEnterT = AssignedEnvironmentEnterSessionActionDefinition>
    void SetEnvEnter(EnvEnterT&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::forward<EnvEnterT>(value); }
    template<typename EnvEnterT = AssignedEnvironmentEnterSessionActionDefinition>
    AssignedSessionActionDefinition& WithEnvEnter(EnvEnterT&& value) { SetEnvEnter(std::forward<EnvEnterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment a session exits from.</p>
     */
    inline const AssignedEnvironmentExitSessionActionDefinition& GetEnvExit() const { return m_envExit; }
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }
    template<typename EnvExitT = AssignedEnvironmentExitSessionActionDefinition>
    void SetEnvExit(EnvExitT&& value) { m_envExitHasBeenSet = true; m_envExit = std::forward<EnvExitT>(value); }
    template<typename EnvExitT = AssignedEnvironmentExitSessionActionDefinition>
    AssignedSessionActionDefinition& WithEnvExit(EnvExitT&& value) { SetEnvExit(std::forward<EnvExitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run.</p>
     */
    inline const AssignedTaskRunSessionActionDefinition& GetTaskRun() const { return m_taskRun; }
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }
    template<typename TaskRunT = AssignedTaskRunSessionActionDefinition>
    void SetTaskRun(TaskRunT&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::forward<TaskRunT>(value); }
    template<typename TaskRunT = AssignedTaskRunSessionActionDefinition>
    AssignedSessionActionDefinition& WithTaskRun(TaskRunT&& value) { SetTaskRun(std::forward<TaskRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline const AssignedSyncInputJobAttachmentsSessionActionDefinition& GetSyncInputJobAttachments() const { return m_syncInputJobAttachments; }
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }
    template<typename SyncInputJobAttachmentsT = AssignedSyncInputJobAttachmentsSessionActionDefinition>
    void SetSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::forward<SyncInputJobAttachmentsT>(value); }
    template<typename SyncInputJobAttachmentsT = AssignedSyncInputJobAttachmentsSessionActionDefinition>
    AssignedSessionActionDefinition& WithSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { SetSyncInputJobAttachments(std::forward<SyncInputJobAttachmentsT>(value)); return *this;}
    ///@}
  private:

    AssignedEnvironmentEnterSessionActionDefinition m_envEnter;
    bool m_envEnterHasBeenSet = false;

    AssignedEnvironmentExitSessionActionDefinition m_envExit;
    bool m_envExitHasBeenSet = false;

    AssignedTaskRunSessionActionDefinition m_taskRun;
    bool m_taskRunHasBeenSet = false;

    AssignedSyncInputJobAttachmentsSessionActionDefinition m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
