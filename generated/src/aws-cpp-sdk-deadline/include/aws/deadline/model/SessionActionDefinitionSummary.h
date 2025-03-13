/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentEnterSessionActionDefinitionSummary.h>
#include <aws/deadline/model/EnvironmentExitSessionActionDefinitionSummary.h>
#include <aws/deadline/model/TaskRunSessionActionDefinitionSummary.h>
#include <aws/deadline/model/SyncInputJobAttachmentsSessionActionDefinitionSummary.h>
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
   * <p>The details of a session action definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SessionActionDefinitionSummary">AWS
   * API Reference</a></p>
   */
  class SessionActionDefinitionSummary
  {
  public:
    AWS_DEADLINE_API SessionActionDefinitionSummary() = default;
    AWS_DEADLINE_API SessionActionDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment to enter into.</p>
     */
    inline const EnvironmentEnterSessionActionDefinitionSummary& GetEnvEnter() const { return m_envEnter; }
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }
    template<typename EnvEnterT = EnvironmentEnterSessionActionDefinitionSummary>
    void SetEnvEnter(EnvEnterT&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::forward<EnvEnterT>(value); }
    template<typename EnvEnterT = EnvironmentEnterSessionActionDefinitionSummary>
    SessionActionDefinitionSummary& WithEnvEnter(EnvEnterT&& value) { SetEnvEnter(std::forward<EnvEnterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment to exit from.</p>
     */
    inline const EnvironmentExitSessionActionDefinitionSummary& GetEnvExit() const { return m_envExit; }
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }
    template<typename EnvExitT = EnvironmentExitSessionActionDefinitionSummary>
    void SetEnvExit(EnvExitT&& value) { m_envExitHasBeenSet = true; m_envExit = std::forward<EnvExitT>(value); }
    template<typename EnvExitT = EnvironmentExitSessionActionDefinitionSummary>
    SessionActionDefinitionSummary& WithEnvExit(EnvExitT&& value) { SetEnvExit(std::forward<EnvExitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run.</p>
     */
    inline const TaskRunSessionActionDefinitionSummary& GetTaskRun() const { return m_taskRun; }
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }
    template<typename TaskRunT = TaskRunSessionActionDefinitionSummary>
    void SetTaskRun(TaskRunT&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::forward<TaskRunT>(value); }
    template<typename TaskRunT = TaskRunSessionActionDefinitionSummary>
    SessionActionDefinitionSummary& WithTaskRun(TaskRunT&& value) { SetTaskRun(std::forward<TaskRunT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachments to sync with the session action definition.</p>
     */
    inline const SyncInputJobAttachmentsSessionActionDefinitionSummary& GetSyncInputJobAttachments() const { return m_syncInputJobAttachments; }
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }
    template<typename SyncInputJobAttachmentsT = SyncInputJobAttachmentsSessionActionDefinitionSummary>
    void SetSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::forward<SyncInputJobAttachmentsT>(value); }
    template<typename SyncInputJobAttachmentsT = SyncInputJobAttachmentsSessionActionDefinitionSummary>
    SessionActionDefinitionSummary& WithSyncInputJobAttachments(SyncInputJobAttachmentsT&& value) { SetSyncInputJobAttachments(std::forward<SyncInputJobAttachmentsT>(value)); return *this;}
    ///@}
  private:

    EnvironmentEnterSessionActionDefinitionSummary m_envEnter;
    bool m_envEnterHasBeenSet = false;

    EnvironmentExitSessionActionDefinitionSummary m_envExit;
    bool m_envExitHasBeenSet = false;

    TaskRunSessionActionDefinitionSummary m_taskRun;
    bool m_taskRunHasBeenSet = false;

    SyncInputJobAttachmentsSessionActionDefinitionSummary m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
