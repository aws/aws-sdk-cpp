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
    AWS_MIGRATIONHUB_API NotifyMigrationTaskStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyMigrationTaskState"; }

    AWS_MIGRATIONHUB_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline const Aws::String& GetProgressUpdateStream() const{ return m_progressUpdateStream; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline bool ProgressUpdateStreamHasBeenSet() const { return m_progressUpdateStreamHasBeenSet; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const Aws::String& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = value; }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(Aws::String&& value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream = std::move(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline void SetProgressUpdateStream(const char* value) { m_progressUpdateStreamHasBeenSet = true; m_progressUpdateStream.assign(value); }

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline NotifyMigrationTaskStateRequest& WithProgressUpdateStream(const Aws::String& value) { SetProgressUpdateStream(value); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline NotifyMigrationTaskStateRequest& WithProgressUpdateStream(Aws::String&& value) { SetProgressUpdateStream(std::move(value)); return *this;}

    /**
     * <p>The name of the ProgressUpdateStream. </p>
     */
    inline NotifyMigrationTaskStateRequest& WithProgressUpdateStream(const char* value) { SetProgressUpdateStream(value); return *this;}


    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline NotifyMigrationTaskStateRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline NotifyMigrationTaskStateRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task. <i>Do not store
     * personal data in this field.</i> </p>
     */
    inline NotifyMigrationTaskStateRequest& WithMigrationTaskName(const char* value) { SetMigrationTaskName(value); return *this;}


    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline const Task& GetTask() const{ return m_task; }

    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline void SetTask(const Task& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline void SetTask(Task&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithTask(const Task& value) { SetTask(value); return *this;}

    /**
     * <p>Information about the task's progress and status.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithTask(Task&& value) { SetTask(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateDateTime() const{ return m_updateDateTime; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline bool UpdateDateTimeHasBeenSet() const { return m_updateDateTimeHasBeenSet; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline void SetUpdateDateTime(const Aws::Utils::DateTime& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = value; }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline void SetUpdateDateTime(Aws::Utils::DateTime&& value) { m_updateDateTimeHasBeenSet = true; m_updateDateTime = std::move(value); }

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithUpdateDateTime(const Aws::Utils::DateTime& value) { SetUpdateDateTime(value); return *this;}

    /**
     * <p>The timestamp when the task was gathered.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithUpdateDateTime(Aws::Utils::DateTime&& value) { SetUpdateDateTime(std::move(value)); return *this;}


    /**
     * <p>Number of seconds after the UpdateDateTime within which the Migration Hub can
     * expect an update. If Migration Hub does not receive an update within the
     * specified interval, then the migration task will be considered stale.</p>
     */
    inline int GetNextUpdateSeconds() const{ return m_nextUpdateSeconds; }

    /**
     * <p>Number of seconds after the UpdateDateTime within which the Migration Hub can
     * expect an update. If Migration Hub does not receive an update within the
     * specified interval, then the migration task will be considered stale.</p>
     */
    inline bool NextUpdateSecondsHasBeenSet() const { return m_nextUpdateSecondsHasBeenSet; }

    /**
     * <p>Number of seconds after the UpdateDateTime within which the Migration Hub can
     * expect an update. If Migration Hub does not receive an update within the
     * specified interval, then the migration task will be considered stale.</p>
     */
    inline void SetNextUpdateSeconds(int value) { m_nextUpdateSecondsHasBeenSet = true; m_nextUpdateSeconds = value; }

    /**
     * <p>Number of seconds after the UpdateDateTime within which the Migration Hub can
     * expect an update. If Migration Hub does not receive an update within the
     * specified interval, then the migration task will be considered stale.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithNextUpdateSeconds(int value) { SetNextUpdateSeconds(value); return *this;}


    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Optional boolean flag to indicate whether any effect should take place. Used
     * to test if the caller has permission to make the call.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_progressUpdateStream;
    bool m_progressUpdateStreamHasBeenSet = false;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet = false;

    Task m_task;
    bool m_taskHasBeenSet = false;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet = false;

    int m_nextUpdateSeconds;
    bool m_nextUpdateSecondsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
