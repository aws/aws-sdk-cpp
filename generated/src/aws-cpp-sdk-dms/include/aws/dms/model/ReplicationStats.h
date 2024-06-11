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
   * <p>This object provides a collection of statistics about a serverless
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationStats">AWS
   * API Reference</a></p>
   */
  class ReplicationStats
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationStats();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percent complete for the full load serverless replication.</p>
     */
    inline int GetFullLoadProgressPercent() const{ return m_fullLoadProgressPercent; }
    inline bool FullLoadProgressPercentHasBeenSet() const { return m_fullLoadProgressPercentHasBeenSet; }
    inline void SetFullLoadProgressPercent(int value) { m_fullLoadProgressPercentHasBeenSet = true; m_fullLoadProgressPercent = value; }
    inline ReplicationStats& WithFullLoadProgressPercent(int value) { SetFullLoadProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elapsed time of the replication, in milliseconds.</p>
     */
    inline long long GetElapsedTimeMillis() const{ return m_elapsedTimeMillis; }
    inline bool ElapsedTimeMillisHasBeenSet() const { return m_elapsedTimeMillisHasBeenSet; }
    inline void SetElapsedTimeMillis(long long value) { m_elapsedTimeMillisHasBeenSet = true; m_elapsedTimeMillis = value; }
    inline ReplicationStats& WithElapsedTimeMillis(long long value) { SetElapsedTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables loaded for this replication.</p>
     */
    inline int GetTablesLoaded() const{ return m_tablesLoaded; }
    inline bool TablesLoadedHasBeenSet() const { return m_tablesLoadedHasBeenSet; }
    inline void SetTablesLoaded(int value) { m_tablesLoadedHasBeenSet = true; m_tablesLoaded = value; }
    inline ReplicationStats& WithTablesLoaded(int value) { SetTablesLoaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables currently loading for this replication.</p>
     */
    inline int GetTablesLoading() const{ return m_tablesLoading; }
    inline bool TablesLoadingHasBeenSet() const { return m_tablesLoadingHasBeenSet; }
    inline void SetTablesLoading(int value) { m_tablesLoadingHasBeenSet = true; m_tablesLoading = value; }
    inline ReplicationStats& WithTablesLoading(int value) { SetTablesLoading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables queued for this replication.</p>
     */
    inline int GetTablesQueued() const{ return m_tablesQueued; }
    inline bool TablesQueuedHasBeenSet() const { return m_tablesQueuedHasBeenSet; }
    inline void SetTablesQueued(int value) { m_tablesQueuedHasBeenSet = true; m_tablesQueued = value; }
    inline ReplicationStats& WithTablesQueued(int value) { SetTablesQueued(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors that have occured for this replication.</p>
     */
    inline int GetTablesErrored() const{ return m_tablesErrored; }
    inline bool TablesErroredHasBeenSet() const { return m_tablesErroredHasBeenSet; }
    inline void SetTablesErrored(int value) { m_tablesErroredHasBeenSet = true; m_tablesErrored = value; }
    inline ReplicationStats& WithTablesErrored(int value) { SetTablesErrored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication was started either with a fresh start or a target
     * reload.</p>
     */
    inline const Aws::Utils::DateTime& GetFreshStartDate() const{ return m_freshStartDate; }
    inline bool FreshStartDateHasBeenSet() const { return m_freshStartDateHasBeenSet; }
    inline void SetFreshStartDate(const Aws::Utils::DateTime& value) { m_freshStartDateHasBeenSet = true; m_freshStartDate = value; }
    inline void SetFreshStartDate(Aws::Utils::DateTime&& value) { m_freshStartDateHasBeenSet = true; m_freshStartDate = std::move(value); }
    inline ReplicationStats& WithFreshStartDate(const Aws::Utils::DateTime& value) { SetFreshStartDate(value); return *this;}
    inline ReplicationStats& WithFreshStartDate(Aws::Utils::DateTime&& value) { SetFreshStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication is scheduled to start.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline ReplicationStats& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline ReplicationStats& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }
    inline bool StopDateHasBeenSet() const { return m_stopDateHasBeenSet; }
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDateHasBeenSet = true; m_stopDate = value; }
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::move(value); }
    inline ReplicationStats& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}
    inline ReplicationStats& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication full load was started.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadStartDate() const{ return m_fullLoadStartDate; }
    inline bool FullLoadStartDateHasBeenSet() const { return m_fullLoadStartDateHasBeenSet; }
    inline void SetFullLoadStartDate(const Aws::Utils::DateTime& value) { m_fullLoadStartDateHasBeenSet = true; m_fullLoadStartDate = value; }
    inline void SetFullLoadStartDate(Aws::Utils::DateTime&& value) { m_fullLoadStartDateHasBeenSet = true; m_fullLoadStartDate = std::move(value); }
    inline ReplicationStats& WithFullLoadStartDate(const Aws::Utils::DateTime& value) { SetFullLoadStartDate(value); return *this;}
    inline ReplicationStats& WithFullLoadStartDate(Aws::Utils::DateTime&& value) { SetFullLoadStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the replication full load was finished.</p>
     */
    inline const Aws::Utils::DateTime& GetFullLoadFinishDate() const{ return m_fullLoadFinishDate; }
    inline bool FullLoadFinishDateHasBeenSet() const { return m_fullLoadFinishDateHasBeenSet; }
    inline void SetFullLoadFinishDate(const Aws::Utils::DateTime& value) { m_fullLoadFinishDateHasBeenSet = true; m_fullLoadFinishDate = value; }
    inline void SetFullLoadFinishDate(Aws::Utils::DateTime&& value) { m_fullLoadFinishDateHasBeenSet = true; m_fullLoadFinishDate = std::move(value); }
    inline ReplicationStats& WithFullLoadFinishDate(const Aws::Utils::DateTime& value) { SetFullLoadFinishDate(value); return *this;}
    inline ReplicationStats& WithFullLoadFinishDate(Aws::Utils::DateTime&& value) { SetFullLoadFinishDate(std::move(value)); return *this;}
    ///@}
  private:

    int m_fullLoadProgressPercent;
    bool m_fullLoadProgressPercentHasBeenSet = false;

    long long m_elapsedTimeMillis;
    bool m_elapsedTimeMillisHasBeenSet = false;

    int m_tablesLoaded;
    bool m_tablesLoadedHasBeenSet = false;

    int m_tablesLoading;
    bool m_tablesLoadingHasBeenSet = false;

    int m_tablesQueued;
    bool m_tablesQueuedHasBeenSet = false;

    int m_tablesErrored;
    bool m_tablesErroredHasBeenSet = false;

    Aws::Utils::DateTime m_freshStartDate;
    bool m_freshStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate;
    bool m_stopDateHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadStartDate;
    bool m_fullLoadStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_fullLoadFinishDate;
    bool m_fullLoadFinishDateHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
