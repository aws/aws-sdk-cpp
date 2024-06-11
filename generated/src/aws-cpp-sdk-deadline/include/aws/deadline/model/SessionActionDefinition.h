﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentEnterSessionActionDefinition.h>
#include <aws/deadline/model/EnvironmentExitSessionActionDefinition.h>
#include <aws/deadline/model/SyncInputJobAttachmentsSessionActionDefinition.h>
#include <aws/deadline/model/TaskRunSessionActionDefinition.h>
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
    AWS_DEADLINE_API SessionActionDefinition();
    AWS_DEADLINE_API SessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment to enter into.</p>
     */
    inline const EnvironmentEnterSessionActionDefinition& GetEnvEnter() const{ return m_envEnter; }
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }
    inline void SetEnvEnter(const EnvironmentEnterSessionActionDefinition& value) { m_envEnterHasBeenSet = true; m_envEnter = value; }
    inline void SetEnvEnter(EnvironmentEnterSessionActionDefinition&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::move(value); }
    inline SessionActionDefinition& WithEnvEnter(const EnvironmentEnterSessionActionDefinition& value) { SetEnvEnter(value); return *this;}
    inline SessionActionDefinition& WithEnvEnter(EnvironmentEnterSessionActionDefinition&& value) { SetEnvEnter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment to exit from.</p>
     */
    inline const EnvironmentExitSessionActionDefinition& GetEnvExit() const{ return m_envExit; }
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }
    inline void SetEnvExit(const EnvironmentExitSessionActionDefinition& value) { m_envExitHasBeenSet = true; m_envExit = value; }
    inline void SetEnvExit(EnvironmentExitSessionActionDefinition&& value) { m_envExitHasBeenSet = true; m_envExit = std::move(value); }
    inline SessionActionDefinition& WithEnvExit(const EnvironmentExitSessionActionDefinition& value) { SetEnvExit(value); return *this;}
    inline SessionActionDefinition& WithEnvExit(EnvironmentExitSessionActionDefinition&& value) { SetEnvExit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachments to sync with a session action.</p>
     */
    inline const SyncInputJobAttachmentsSessionActionDefinition& GetSyncInputJobAttachments() const{ return m_syncInputJobAttachments; }
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }
    inline void SetSyncInputJobAttachments(const SyncInputJobAttachmentsSessionActionDefinition& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = value; }
    inline void SetSyncInputJobAttachments(SyncInputJobAttachmentsSessionActionDefinition&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::move(value); }
    inline SessionActionDefinition& WithSyncInputJobAttachments(const SyncInputJobAttachmentsSessionActionDefinition& value) { SetSyncInputJobAttachments(value); return *this;}
    inline SessionActionDefinition& WithSyncInputJobAttachments(SyncInputJobAttachmentsSessionActionDefinition&& value) { SetSyncInputJobAttachments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run in the session.</p>
     */
    inline const TaskRunSessionActionDefinition& GetTaskRun() const{ return m_taskRun; }
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }
    inline void SetTaskRun(const TaskRunSessionActionDefinition& value) { m_taskRunHasBeenSet = true; m_taskRun = value; }
    inline void SetTaskRun(TaskRunSessionActionDefinition&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::move(value); }
    inline SessionActionDefinition& WithTaskRun(const TaskRunSessionActionDefinition& value) { SetTaskRun(value); return *this;}
    inline SessionActionDefinition& WithTaskRun(TaskRunSessionActionDefinition&& value) { SetTaskRun(std::move(value)); return *this;}
    ///@}
  private:

    EnvironmentEnterSessionActionDefinition m_envEnter;
    bool m_envEnterHasBeenSet = false;

    EnvironmentExitSessionActionDefinition m_envExit;
    bool m_envExitHasBeenSet = false;

    SyncInputJobAttachmentsSessionActionDefinition m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;

    TaskRunSessionActionDefinition m_taskRun;
    bool m_taskRunHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
