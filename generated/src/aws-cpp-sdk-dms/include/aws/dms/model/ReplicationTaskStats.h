/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>In response to a request by the <code>DescribeReplicationTasks</code>
   * operation, this object provides a collection of statistics about a replication
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskStats">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskStats
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskStats() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percent complete for the full load migration task.</p>
     */
    inline int GetFullLoadProgressPercent() const { return m_fullLoadProgressPercent; }
    inline bool FullLoadProgressPercentHasBeenSet() const { return m_fullLoadProgressPercentHasBeenSet; }
    inline void SetFullLoadProgressPercent(int value) { m_fullLoadProgressPercentHasBeenSet = true; m_fullLoadProgressPercent = value; }
    inline ReplicationTaskStats& WithFullLoadProgressPercent(int value) { SetFullLoadProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elapsed time of the task, in milliseconds.</p>
     */
    inline long long GetElapsedTimeMillis() const { return m_elapsedTimeMillis; }
    inline bool ElapsedTimeMillisHasBeenSet() const { return m_elapsedTimeMillisHasBeenSet; }
    inline void SetElapsedTimeMillis(long long value) { m_elapsedTimeMillisHasBeenSet = true; m_elapsedTimeMillis = value; }
    inline ReplicationTaskStats& WithElapsedTimeMillis(long long value) { SetElapsedTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables loaded for this task.</p>
     */
    inline int GetTablesLoaded() const { return m_tablesLoaded; }
    inline bool TablesLoadedHasBeenSet() const { return m_tablesLoadedHasBeenSet; }
    inline void SetTablesLoaded(int value) { m_tablesLoadedHasBeenSet = true; m_tablesLoaded = value; }
    inline ReplicationTaskStats& WithTablesLoaded(int value) { SetTablesLoaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables currently loading for this task.</p>
     */
    inline int GetTablesLoading() const { return m_tablesLoading; }
    inline bool TablesLoadingHasBeenSet() const { return m_tablesLoadingHasBeenSet; }
    inline void SetTablesLoading(int value) { m_tablesLoadingHasBeenSet = true; m_tablesLoading = value; }
    inline ReplicationTaskStats& WithTablesLoading(int value) { SetTablesLoading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables queued for this task.</p>
     */
    inline int GetTablesQueued() const { return m_tablesQueued; }
    inline bool TablesQueuedHasBeenSet() const { return m_tablesQueuedHasBeenSet; }
    inline void SetTablesQueued(int value) { m_tablesQueuedHasBeenSet = true; m_tablesQueued = value; }
    inline ReplicationTaskStats& WithTablesQueued(int value) { SetTablesQueued(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors that have occurred during this task.</p>
     */
    inline int GetTablesErrored() const { return m_tablesErrored; }
    inline bool TablesErroredHasBeenSet() const { return m_tablesErroredHasBeenSet; }
    inline void SetTablesErrored(int value) { m_tablesErroredHasBeenSet = true; m_tablesErrored = value; }
    inline ReplicationTaskStats& WithTablesErrored(int value) { SetTablesErrored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task was started either with a fresh start or a
     * target reload.</p>
     */
    inline const Aws::Utils::DateTime& GetFreshStartDate() const { return m_freshStartDate; }
    inline bool FreshStartDateHasBeenSet() const { return m_freshStartDateHasBeenSet; }
    template<typename FreshStartDateT = Aws::Utils::DateTime>
    void SetFreshStartDate(FreshStartDateT&& value) { m_freshStartDateHasBeenSet = true; m_freshStartDate = std::forward<FreshStartDateT>(value); }
    template<typename FreshStartDateT = Aws::Utils::DateTime>
    ReplicationTaskStats& WithFreshStartDate(FreshStartDateT&& value) { SetFreshStartDate(std::forward<FreshStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task was started either with a fresh start or a
     * resume. For more information, see <a
     * href="https://docs.aws.amazon.com/dms/latest/APIReference/API_StartReplicationTask.html#DMS-StartReplicationTask-request-StartReplicationTaskType">StartReplicationTaskType</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    ReplicationTaskStats& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    ReplicationTaskStats& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task full load was started.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadStartDate() const { return m_fullLoadStartDate; }
    inline bool FullLoadStartDateHasBeenSet() const { return m_fullLoadStartDateHasBeenSet; }
    template<typename FullLoadStartDateT = Aws::Utils::DateTime>
    void SetFullLoadStartDate(FullLoadStartDateT&& value) { m_fullLoadStartDateHasBeenSet = true; m_fullLoadStartDate = std::forward<FullLoadStartDateT>(value); }
    template<typename FullLoadStartDateT = Aws::Utils::DateTime>
    ReplicationTaskStats& WithFullLoadStartDate(FullLoadStartDateT&& value) { SetFullLoadStartDate(std::forward<FullLoadStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication task full load was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadFinishDate() const { return m_fullLoadFinishDate; }
    inline bool FullLoadFinishDateHasBeenSet() const { return m_fullLoadFinishDateHasBeenSet; }
    template<typename FullLoadFinishDateT = Aws::Utils::DateTime>
    void SetFullLoadFinishDate(FullLoadFinishDateT&& value) { m_fullLoadFinishDateHasBeenSet = true; m_fullLoadFinishDate = std::forward<FullLoadFinishDateT>(value); }
    template<typename FullLoadFinishDateT = Aws::Utils::DateTime>
    ReplicationTaskStats& WithFullLoadFinishDate(FullLoadFinishDateT&& value) { SetFullLoadFinishDate(std::forward<FullLoadFinishDateT>(value)); return *this;}
    ///@}
  private:

    int m_fullLoadProgressPercent{0};
    bool m_fullLoadProgressPercentHasBeenSet = false;

    long long m_elapsedTimeMillis{0};
    bool m_elapsedTimeMillisHasBeenSet = false;

    int m_tablesLoaded{0};
    bool m_tablesLoadedHasBeenSet = false;

    int m_tablesLoading{0};
    bool m_tablesLoadingHasBeenSet = false;

    int m_tablesQueued{0};
    bool m_tablesQueuedHasBeenSet = false;

    int m_tablesErrored{0};
    bool m_tablesErroredHasBeenSet = false;

    Aws::Utils::DateTime m_freshStartDate{};
    bool m_freshStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadStartDate{};
    bool m_fullLoadStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadFinishDate{};
    bool m_fullLoadFinishDateHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
