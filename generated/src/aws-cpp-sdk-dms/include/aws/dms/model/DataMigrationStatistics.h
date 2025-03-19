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
   * <p>Information about the data migration run, including start and stop time,
   * latency, and migration progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataMigrationStatistics">AWS
   * API Reference</a></p>
   */
  class DataMigrationStatistics
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationStatistics() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataMigrationStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of tables loaded in the current data migration run.</p>
     */
    inline int GetTablesLoaded() const { return m_tablesLoaded; }
    inline bool TablesLoadedHasBeenSet() const { return m_tablesLoadedHasBeenSet; }
    inline void SetTablesLoaded(int value) { m_tablesLoadedHasBeenSet = true; m_tablesLoaded = value; }
    inline DataMigrationStatistics& WithTablesLoaded(int value) { SetTablesLoaded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The elapsed duration of the data migration run.</p>
     */
    inline long long GetElapsedTimeMillis() const { return m_elapsedTimeMillis; }
    inline bool ElapsedTimeMillisHasBeenSet() const { return m_elapsedTimeMillisHasBeenSet; }
    inline void SetElapsedTimeMillis(long long value) { m_elapsedTimeMillisHasBeenSet = true; m_elapsedTimeMillis = value; }
    inline DataMigrationStatistics& WithElapsedTimeMillis(long long value) { SetElapsedTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data migration's table loading progress.</p>
     */
    inline int GetTablesLoading() const { return m_tablesLoading; }
    inline bool TablesLoadingHasBeenSet() const { return m_tablesLoadingHasBeenSet; }
    inline void SetTablesLoading(int value) { m_tablesLoadingHasBeenSet = true; m_tablesLoading = value; }
    inline DataMigrationStatistics& WithTablesLoading(int value) { SetTablesLoading(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data migration's progress in the full-load migration phase.</p>
     */
    inline int GetFullLoadPercentage() const { return m_fullLoadPercentage; }
    inline bool FullLoadPercentageHasBeenSet() const { return m_fullLoadPercentageHasBeenSet; }
    inline void SetFullLoadPercentage(int value) { m_fullLoadPercentageHasBeenSet = true; m_fullLoadPercentage = value; }
    inline DataMigrationStatistics& WithFullLoadPercentage(int value) { SetFullLoadPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current latency of the change data capture (CDC) operation.</p>
     */
    inline int GetCDCLatency() const { return m_cDCLatency; }
    inline bool CDCLatencyHasBeenSet() const { return m_cDCLatencyHasBeenSet; }
    inline void SetCDCLatency(int value) { m_cDCLatencyHasBeenSet = true; m_cDCLatency = value; }
    inline DataMigrationStatistics& WithCDCLatency(int value) { SetCDCLatency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables that are waiting for processing.</p>
     */
    inline int GetTablesQueued() const { return m_tablesQueued; }
    inline bool TablesQueuedHasBeenSet() const { return m_tablesQueuedHasBeenSet; }
    inline void SetTablesQueued(int value) { m_tablesQueuedHasBeenSet = true; m_tablesQueued = value; }
    inline DataMigrationStatistics& WithTablesQueued(int value) { SetTablesQueued(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tables that DMS failed to process.</p>
     */
    inline int GetTablesErrored() const { return m_tablesErrored; }
    inline bool TablesErroredHasBeenSet() const { return m_tablesErroredHasBeenSet; }
    inline void SetTablesErrored(int value) { m_tablesErroredHasBeenSet = true; m_tablesErrored = value; }
    inline DataMigrationStatistics& WithTablesErrored(int value) { SetTablesErrored(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the migration started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DataMigrationStatistics& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the migration stopped or failed.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const { return m_stopTime; }
    inline bool StopTimeHasBeenSet() const { return m_stopTimeHasBeenSet; }
    template<typename StopTimeT = Aws::Utils::DateTime>
    void SetStopTime(StopTimeT&& value) { m_stopTimeHasBeenSet = true; m_stopTime = std::forward<StopTimeT>(value); }
    template<typename StopTimeT = Aws::Utils::DateTime>
    DataMigrationStatistics& WithStopTime(StopTimeT&& value) { SetStopTime(std::forward<StopTimeT>(value)); return *this;}
    ///@}
  private:

    int m_tablesLoaded{0};
    bool m_tablesLoadedHasBeenSet = false;

    long long m_elapsedTimeMillis{0};
    bool m_elapsedTimeMillisHasBeenSet = false;

    int m_tablesLoading{0};
    bool m_tablesLoadingHasBeenSet = false;

    int m_fullLoadPercentage{0};
    bool m_fullLoadPercentageHasBeenSet = false;

    int m_cDCLatency{0};
    bool m_cDCLatencyHasBeenSet = false;

    int m_tablesQueued{0};
    bool m_tablesQueuedHasBeenSet = false;

    int m_tablesErrored{0};
    bool m_tablesErroredHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stopTime{};
    bool m_stopTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
