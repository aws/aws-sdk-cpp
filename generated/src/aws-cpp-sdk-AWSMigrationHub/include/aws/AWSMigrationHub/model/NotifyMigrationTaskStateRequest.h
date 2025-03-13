/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/AWSMigrationHub/MigrationHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/Task.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MigrationHub
{
namespace Model
{

  /**
   */
  class NotifyMigrationTaskStateRequest : public MigrationHubRequest
  {
  public:
    AWS_MIGRATIONHUB_API NotifyMigrationTaskStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyMigrationTaskState"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStream() const { return m_progressUpdateStream; }
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }
    template<typename ProgressUpdateStreamT = Aws::String>
    void SetProgressUpdateStream(ProgressUpdateStreamT&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::forward<ProgressUpdateStreamT>(value); }
    template<typename ProgressUpdateStreamT = Aws::String>
    NotifyMigrationTaskStateRequest& WithProgressUpdateStream(ProgressUpdateStreamT&& value) { SetProgressUpdateStream(std::forward<ProgressUpdateStreamT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const { return m_migrationTaskName; }
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }
    template<typename MigrationTaskNameT = Aws::String>
    void SetMigrationTaskName(MigrationTaskNameT&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::forward<MigrationTaskNameT>(value); }
    template<typename MigrationTaskNameT = Aws::String>
    NotifyMigrationTaskStateRequest& WithMigrationTaskName(MigrationTaskNameT&& value) { SetMigrationTaskName(std::forward<MigrationTaskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline const Task& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Task>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Task>
    NotifyMigrationTaskStateRequest& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const { return m_updateDateTime; }
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    void SetUpdateDateTime(UpdateDateTimeT&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::forward<UpdateDateTimeT>(value); }
    template<typename UpdateDateTimeT = Aws::Utils::DateTime>
    NotifyMigrationTaskStateRequest& WithUpdateDateTime(UpdateDateTimeT&& value) { SetUpdateDateTime(std::forward<UpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of seconds after the UpdateDateTime within which the Migration Hub can
     * expect an update. If Migration Hub does not receive an update within the
     * specified interval, then the migration task will be considered stale.</p>
     */
    inline int GetNextUpdateSeconds() const { return m_nextUpdateSeconds; }
    inline bool NextUpdateSecondsHasBeenSet() const { return m_nextUpdateSecondsHasBeenSet; }
    inline void SetNextUpdateSeconds(int value) { m_nextUpdateSecondsHasBeenSet = true; m_nextUpdateSeconds = value; }
    inline NotifyMigrationTaskStateRequest& WithNextUpdateSeconds(int value) { SetNextUpdateSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline NotifyMigrationTaskStateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Task m_task;
    bool m_taskHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime{};
    bool m_updateDateTimeHasBeenSet = false;

    int m_nextUpdateSeconds{0};
    bool m_nextUpdateSecondsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
