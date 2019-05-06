/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MIGRATIONHUB_API NotifyMigrationTaskStateRequest : public MigrationHubRequest
  {
  public:
    NotifyMigrationTaskStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyMigrationTaskState"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>Unique identifier that references the migration task.</p>
     */
    inline const Aws::String& GetMigrationTaskName() const{ return m_migrationTaskName; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline bool MigrationTaskNameHasBeenSet() const { return m_migrationTaskNameHasBeenSet; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const Aws::String& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = value; }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(Aws::String&& value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName = std::move(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline void SetMigrationTaskName(const char* value) { m_migrationTaskNameHasBeenSet = true; m_migrationTaskName.assign(value); }

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithMigrationTaskName(const Aws::String& value) { SetMigrationTaskName(value); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
     */
    inline NotifyMigrationTaskStateRequest& WithMigrationTaskName(Aws::String&& value) { SetMigrationTaskName(std::move(value)); return *this;}

    /**
     * <p>Unique identifier that references the migration task.</p>
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
    bool m_progressUpdateStreamHasBeenSet;

    Aws::String m_migrationTaskName;
    bool m_migrationTaskNameHasBeenSet;

    Task m_task;
    bool m_taskHasBeenSet;

    Aws::Utils::DateTime m_updateDateTime;
    bool m_updateDateTimeHasBeenSet;

    int m_nextUpdateSeconds;
    bool m_nextUpdateSecondsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
