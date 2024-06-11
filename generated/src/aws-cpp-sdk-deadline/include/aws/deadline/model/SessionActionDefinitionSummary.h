﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/EnvironmentEnterSessionActionDefinitionSummary.h>
#include <aws/deadline/model/EnvironmentExitSessionActionDefinitionSummary.h>
#include <aws/deadline/model/SyncInputJobAttachmentsSessionActionDefinitionSummary.h>
#include <aws/deadline/model/TaskRunSessionActionDefinitionSummary.h>
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
    AWS_DEADLINE_API SessionActionDefinitionSummary();
    AWS_DEADLINE_API SessionActionDefinitionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionDefinitionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The environment to enter into.</p>
     */
    inline const EnvironmentEnterSessionActionDefinitionSummary& GetEnvEnter() const{ return m_envEnter; }
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }
    inline void SetEnvEnter(const EnvironmentEnterSessionActionDefinitionSummary& value) { m_envEnterHasBeenSet = true; m_envEnter = value; }
    inline void SetEnvEnter(EnvironmentEnterSessionActionDefinitionSummary&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::move(value); }
    inline SessionActionDefinitionSummary& WithEnvEnter(const EnvironmentEnterSessionActionDefinitionSummary& value) { SetEnvEnter(value); return *this;}
    inline SessionActionDefinitionSummary& WithEnvEnter(EnvironmentEnterSessionActionDefinitionSummary&& value) { SetEnvEnter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment to exit from.</p>
     */
    inline const EnvironmentExitSessionActionDefinitionSummary& GetEnvExit() const{ return m_envExit; }
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }
    inline void SetEnvExit(const EnvironmentExitSessionActionDefinitionSummary& value) { m_envExitHasBeenSet = true; m_envExit = value; }
    inline void SetEnvExit(EnvironmentExitSessionActionDefinitionSummary&& value) { m_envExitHasBeenSet = true; m_envExit = std::move(value); }
    inline SessionActionDefinitionSummary& WithEnvExit(const EnvironmentExitSessionActionDefinitionSummary& value) { SetEnvExit(value); return *this;}
    inline SessionActionDefinitionSummary& WithEnvExit(EnvironmentExitSessionActionDefinitionSummary&& value) { SetEnvExit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job attachments to sync with the session action definition.</p>
     */
    inline const SyncInputJobAttachmentsSessionActionDefinitionSummary& GetSyncInputJobAttachments() const{ return m_syncInputJobAttachments; }
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }
    inline void SetSyncInputJobAttachments(const SyncInputJobAttachmentsSessionActionDefinitionSummary& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = value; }
    inline void SetSyncInputJobAttachments(SyncInputJobAttachmentsSessionActionDefinitionSummary&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::move(value); }
    inline SessionActionDefinitionSummary& WithSyncInputJobAttachments(const SyncInputJobAttachmentsSessionActionDefinitionSummary& value) { SetSyncInputJobAttachments(value); return *this;}
    inline SessionActionDefinitionSummary& WithSyncInputJobAttachments(SyncInputJobAttachmentsSessionActionDefinitionSummary&& value) { SetSyncInputJobAttachments(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task run.</p>
     */
    inline const TaskRunSessionActionDefinitionSummary& GetTaskRun() const{ return m_taskRun; }
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }
    inline void SetTaskRun(const TaskRunSessionActionDefinitionSummary& value) { m_taskRunHasBeenSet = true; m_taskRun = value; }
    inline void SetTaskRun(TaskRunSessionActionDefinitionSummary&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::move(value); }
    inline SessionActionDefinitionSummary& WithTaskRun(const TaskRunSessionActionDefinitionSummary& value) { SetTaskRun(value); return *this;}
    inline SessionActionDefinitionSummary& WithTaskRun(TaskRunSessionActionDefinitionSummary&& value) { SetTaskRun(std::move(value)); return *this;}
    ///@}
  private:

    EnvironmentEnterSessionActionDefinitionSummary m_envEnter;
    bool m_envEnterHasBeenSet = false;

    EnvironmentExitSessionActionDefinitionSummary m_envExit;
    bool m_envExitHasBeenSet = false;

    SyncInputJobAttachmentsSessionActionDefinitionSummary m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;

    TaskRunSessionActionDefinitionSummary m_taskRun;
    bool m_taskRunHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
