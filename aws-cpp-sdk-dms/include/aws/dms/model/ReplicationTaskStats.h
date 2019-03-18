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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskStats">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskStats
  {
  public:
    ReplicationTaskStats();
    ReplicationTaskStats(Aws::Utils::Json::JsonView jsonValue);
    ReplicationTaskStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline int GetFullLoadProgressPercent() const{ return m_fullLoadProgressPercent; }

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline bool FullLoadProgressPercentHasBeenSet() const { return m_fullLoadProgressPercentHasBeenSet; }

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline void SetFullLoadProgressPercent(int value) { m_fullLoadProgressPercentHasBeenSet = true; m_fullLoadProgressPercent = value; }

    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline ReplicationTaskStats& WithFullLoadProgressPercent(int value) { SetFullLoadProgressPercent(value); return *this;}


    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline long long GetElapsedTimeMillis() const{ return m_elapsedTimeMillis; }

    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline bool ElapsedTimeMillisHasBeenSet() const { return m_elapsedTimeMillisHasBeenSet; }

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
    inline int GetTablesLoaded() const{ return m_tablesLoaded; }

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline bool TablesLoadedHasBeenSet() const { return m_tablesLoadedHasBeenSet; }

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline void SetTablesLoaded(int value) { m_tablesLoadedHasBeenSet = true; m_tablesLoaded = value; }

    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesLoaded(int value) { SetTablesLoaded(value); return *this;}


    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline int GetTablesLoading() const{ return m_tablesLoading; }

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline bool TablesLoadingHasBeenSet() const { return m_tablesLoadingHasBeenSet; }

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline void SetTablesLoading(int value) { m_tablesLoadingHasBeenSet = true; m_tablesLoading = value; }

    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesLoading(int value) { SetTablesLoading(value); return *this;}


    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline int GetTablesQueued() const{ return m_tablesQueued; }

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline bool TablesQueuedHasBeenSet() const { return m_tablesQueuedHasBeenSet; }

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline void SetTablesQueued(int value) { m_tablesQueuedHasBeenSet = true; m_tablesQueued = value; }

    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline ReplicationTaskStats& WithTablesQueued(int value) { SetTablesQueued(value); return *this;}


    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline int GetTablesErrored() const{ return m_tablesErrored; }

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline bool TablesErroredHasBeenSet() const { return m_tablesErroredHasBeenSet; }

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline void SetTablesErrored(int value) { m_tablesErroredHasBeenSet = true; m_tablesErrored = value; }

    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline ReplicationTaskStats& WithTablesErrored(int value) { SetTablesErrored(value); return *this;}

  private:

    int m_fullLoadProgressPercent;
    bool m_fullLoadProgressPercentHasBeenSet;

    long long m_elapsedTimeMillis;
    bool m_elapsedTimeMillisHasBeenSet;

    int m_tablesLoaded;
    bool m_tablesLoadedHasBeenSet;

    int m_tablesLoading;
    bool m_tablesLoadingHasBeenSet;

    int m_tablesQueued;
    bool m_tablesQueuedHasBeenSet;

    int m_tablesErrored;
    bool m_tablesErroredHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
