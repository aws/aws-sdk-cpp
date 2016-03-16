/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskStats
  {
  public:
    ReplicationTaskStats();
    ReplicationTaskStats(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicationTaskStats& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline long GetFullLoadProgressPercent() const{ return m_fullLoadProgressPercent; }

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline void SetFullLoadProgressPercent(long value) { m_fullLoadProgressPercentHasBeenSet = true; m_fullLoadProgressPercent = value; }

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline ReplicationTaskStats& WithFullLoadProgressPercent(long value) { SetFullLoadProgressPercent(value); return *this;}

    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline long long GetElapsedTimeMillis() const{ return m_elapsedTimeMillis; }

    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline void SetElapsedTimeMillis(long long value) { m_elapsedTimeMillisHasBeenSet = true; m_elapsedTimeMillis = value; }

    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline ReplicationTaskStats& WithElapsedTimeMillis(long long value) { SetElapsedTimeMillis(value); return *this;}

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline long GetTablesLoaded() const{ return m_tablesLoaded; }

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline void SetTablesLoaded(long value) { m_tablesLoadedHasBeenSet = true; m_tablesLoaded = value; }

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesLoaded(long value) { SetTablesLoaded(value); return *this;}

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline long GetTablesLoading() const{ return m_tablesLoading; }

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline void SetTablesLoading(long value) { m_tablesLoadingHasBeenSet = true; m_tablesLoading = value; }

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesLoading(long value) { SetTablesLoading(value); return *this;}

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline long GetTablesQueued() const{ return m_tablesQueued; }

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline void SetTablesQueued(long value) { m_tablesQueuedHasBeenSet = true; m_tablesQueued = value; }

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesQueued(long value) { SetTablesQueued(value); return *this;}

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline long GetTablesErrored() const{ return m_tablesErrored; }

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline void SetTablesErrored(long value) { m_tablesErroredHasBeenSet = true; m_tablesErrored = value; }

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline ReplicationTaskStats& WithTablesErrored(long value) { SetTablesErrored(value); return *this;}

  private:
    long m_fullLoadProgressPercent;
    bool m_fullLoadProgressPercentHasBeenSet;
    long long m_elapsedTimeMillis;
    bool m_elapsedTimeMillisHasBeenSet;
    long m_tablesLoaded;
    bool m_tablesLoadedHasBeenSet;
    long m_tablesLoading;
    bool m_tablesLoadingHasBeenSet;
    long m_tablesQueued;
    bool m_tablesQueuedHasBeenSet;
    long m_tablesErrored;
    bool m_tablesErroredHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
