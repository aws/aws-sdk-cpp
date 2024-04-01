/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/AssignedEnvironmentEnterSessionActionDefinition.h>
#include <aws/deadline/model/AssignedEnvironmentExitSessionActionDefinition.h>
#include <aws/deadline/model/AssignedSyncInputJobAttachmentsSessionActionDefinition.h>
#include <aws/deadline/model/AssignedTaskRunSessionActionDefinition.h>
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
    AWS_DEADLINE_API AssignedSessionActionDefinition();
    AWS_DEADLINE_API AssignedSessionActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API AssignedSessionActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The environment a session starts on.</p>
     */
    inline const AssignedEnvironmentEnterSessionActionDefinition& GetEnvEnter() const{ return m_envEnter; }

    /**
     * <p>The environment a session starts on.</p>
     */
    inline bool EnvEnterHasBeenSet() const { return m_envEnterHasBeenSet; }

    /**
     * <p>The environment a session starts on.</p>
     */
    inline void SetEnvEnter(const AssignedEnvironmentEnterSessionActionDefinition& value) { m_envEnterHasBeenSet = true; m_envEnter = value; }

    /**
     * <p>The environment a session starts on.</p>
     */
    inline void SetEnvEnter(AssignedEnvironmentEnterSessionActionDefinition&& value) { m_envEnterHasBeenSet = true; m_envEnter = std::move(value); }

    /**
     * <p>The environment a session starts on.</p>
     */
    inline AssignedSessionActionDefinition& WithEnvEnter(const AssignedEnvironmentEnterSessionActionDefinition& value) { SetEnvEnter(value); return *this;}

    /**
     * <p>The environment a session starts on.</p>
     */
    inline AssignedSessionActionDefinition& WithEnvEnter(AssignedEnvironmentEnterSessionActionDefinition&& value) { SetEnvEnter(std::move(value)); return *this;}


    /**
     * <p>The environment a session exits from.</p>
     */
    inline const AssignedEnvironmentExitSessionActionDefinition& GetEnvExit() const{ return m_envExit; }

    /**
     * <p>The environment a session exits from.</p>
     */
    inline bool EnvExitHasBeenSet() const { return m_envExitHasBeenSet; }

    /**
     * <p>The environment a session exits from.</p>
     */
    inline void SetEnvExit(const AssignedEnvironmentExitSessionActionDefinition& value) { m_envExitHasBeenSet = true; m_envExit = value; }

    /**
     * <p>The environment a session exits from.</p>
     */
    inline void SetEnvExit(AssignedEnvironmentExitSessionActionDefinition&& value) { m_envExitHasBeenSet = true; m_envExit = std::move(value); }

    /**
     * <p>The environment a session exits from.</p>
     */
    inline AssignedSessionActionDefinition& WithEnvExit(const AssignedEnvironmentExitSessionActionDefinition& value) { SetEnvExit(value); return *this;}

    /**
     * <p>The environment a session exits from.</p>
     */
    inline AssignedSessionActionDefinition& WithEnvExit(AssignedEnvironmentExitSessionActionDefinition&& value) { SetEnvExit(std::move(value)); return *this;}


    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline const AssignedSyncInputJobAttachmentsSessionActionDefinition& GetSyncInputJobAttachments() const{ return m_syncInputJobAttachments; }

    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline bool SyncInputJobAttachmentsHasBeenSet() const { return m_syncInputJobAttachmentsHasBeenSet; }

    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline void SetSyncInputJobAttachments(const AssignedSyncInputJobAttachmentsSessionActionDefinition& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = value; }

    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline void SetSyncInputJobAttachments(AssignedSyncInputJobAttachmentsSessionActionDefinition&& value) { m_syncInputJobAttachmentsHasBeenSet = true; m_syncInputJobAttachments = std::move(value); }

    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline AssignedSessionActionDefinition& WithSyncInputJobAttachments(const AssignedSyncInputJobAttachmentsSessionActionDefinition& value) { SetSyncInputJobAttachments(value); return *this;}

    /**
     * <p>The job attachment to sync with an assigned session action.</p>
     */
    inline AssignedSessionActionDefinition& WithSyncInputJobAttachments(AssignedSyncInputJobAttachmentsSessionActionDefinition&& value) { SetSyncInputJobAttachments(std::move(value)); return *this;}


    /**
     * <p>The task run.</p>
     */
    inline const AssignedTaskRunSessionActionDefinition& GetTaskRun() const{ return m_taskRun; }

    /**
     * <p>The task run.</p>
     */
    inline bool TaskRunHasBeenSet() const { return m_taskRunHasBeenSet; }

    /**
     * <p>The task run.</p>
     */
    inline void SetTaskRun(const AssignedTaskRunSessionActionDefinition& value) { m_taskRunHasBeenSet = true; m_taskRun = value; }

    /**
     * <p>The task run.</p>
     */
    inline void SetTaskRun(AssignedTaskRunSessionActionDefinition&& value) { m_taskRunHasBeenSet = true; m_taskRun = std::move(value); }

    /**
     * <p>The task run.</p>
     */
    inline AssignedSessionActionDefinition& WithTaskRun(const AssignedTaskRunSessionActionDefinition& value) { SetTaskRun(value); return *this;}

    /**
     * <p>The task run.</p>
     */
    inline AssignedSessionActionDefinition& WithTaskRun(AssignedTaskRunSessionActionDefinition&& value) { SetTaskRun(std::move(value)); return *this;}

  private:

    AssignedEnvironmentEnterSessionActionDefinition m_envEnter;
    bool m_envEnterHasBeenSet = false;

    AssignedEnvironmentExitSessionActionDefinition m_envExit;
    bool m_envExitHasBeenSet = false;

    AssignedSyncInputJobAttachmentsSessionActionDefinition m_syncInputJobAttachments;
    bool m_syncInputJobAttachmentsHasBeenSet = false;

    AssignedTaskRunSessionActionDefinition m_taskRun;
    bool m_taskRunHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
