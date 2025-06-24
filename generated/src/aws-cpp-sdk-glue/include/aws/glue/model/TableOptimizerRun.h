/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/TableOptimizerEventType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CompactionMetrics.h>
#include <aws/glue/model/CompactionStrategy.h>
#include <aws/glue/model/RetentionMetrics.h>
#include <aws/glue/model/OrphanFileDeletionMetrics.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Contains details for a table optimizer run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableOptimizerRun">AWS
   * API Reference</a></p>
   */
  class TableOptimizerRun
  {
  public:
    AWS_GLUE_API TableOptimizerRun() = default;
    AWS_GLUE_API TableOptimizerRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableOptimizerRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An event type representing the status of the table optimizer run.</p>
     */
    inline TableOptimizerEventType GetEventType() const { return m_eventType; }
    inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
    inline void SetEventType(TableOptimizerEventType value) { m_eventTypeHasBeenSet = true; m_eventType = value; }
    inline TableOptimizerRun& WithEventType(TableOptimizerEventType value) { SetEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the epoch timestamp at which the compaction job was started within
     * Lake Formation.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    void SetStartTimestamp(StartTimestampT&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::forward<StartTimestampT>(value); }
    template<typename StartTimestampT = Aws::Utils::DateTime>
    TableOptimizerRun& WithStartTimestamp(StartTimestampT&& value) { SetStartTimestamp(std::forward<StartTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the epoch timestamp at which the compaction job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    TableOptimizerRun& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that occured during the optimizer run.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    TableOptimizerRun& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CompactionMetrics</code> object containing metrics for the optimizer
     * run.</p>
     */
    inline const CompactionMetrics& GetCompactionMetrics() const { return m_compactionMetrics; }
    inline bool CompactionMetricsHasBeenSet() const { return m_compactionMetricsHasBeenSet; }
    template<typename CompactionMetricsT = CompactionMetrics>
    void SetCompactionMetrics(CompactionMetricsT&& value) { m_compactionMetricsHasBeenSet = true; m_compactionMetrics = std::forward<CompactionMetricsT>(value); }
    template<typename CompactionMetricsT = CompactionMetrics>
    TableOptimizerRun& WithCompactionMetrics(CompactionMetricsT&& value) { SetCompactionMetrics(std::forward<CompactionMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used for the compaction run. Indicates which algorithm was
     * applied to determine how files were selected and combined during the compaction
     * process. Valid values are:</p> <ul> <li> <p> <code>binpack</code>: Combines
     * small files into larger files, typically targeting sizes over 100MB, while
     * applying any pending deletes. This is the recommended compaction strategy for
     * most use cases. </p> </li> <li> <p> <code>sort</code>: Organizes data based on
     * specified columns which are sorted hierarchically during compaction, improving
     * query performance for filtered operations. This strategy is recommended when
     * your queries frequently filter on specific columns. To use this strategy, you
     * must first define a sort order in your Iceberg table properties using the
     * <code>sort_order</code> table property.</p> </li> <li> <p> <code>z-order</code>:
     * Optimizes data organization by blending multiple attributes into a single scalar
     * value that can be used for sorting, allowing efficient querying across multiple
     * dimensions. This strategy is recommended when you need to query data across
     * multiple dimensions simultaneously. To use this strategy, you must first define
     * a sort order in your Iceberg table properties using the <code>sort_order</code>
     * table property. </p> </li> </ul>
     */
    inline CompactionStrategy GetCompactionStrategy() const { return m_compactionStrategy; }
    inline bool CompactionStrategyHasBeenSet() const { return m_compactionStrategyHasBeenSet; }
    inline void SetCompactionStrategy(CompactionStrategy value) { m_compactionStrategyHasBeenSet = true; m_compactionStrategy = value; }
    inline TableOptimizerRun& WithCompactionStrategy(CompactionStrategy value) { SetCompactionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>RetentionMetrics</code> object containing metrics for the optimizer
     * run.</p>
     */
    inline const RetentionMetrics& GetRetentionMetrics() const { return m_retentionMetrics; }
    inline bool RetentionMetricsHasBeenSet() const { return m_retentionMetricsHasBeenSet; }
    template<typename RetentionMetricsT = RetentionMetrics>
    void SetRetentionMetrics(RetentionMetricsT&& value) { m_retentionMetricsHasBeenSet = true; m_retentionMetrics = std::forward<RetentionMetricsT>(value); }
    template<typename RetentionMetricsT = RetentionMetrics>
    TableOptimizerRun& WithRetentionMetrics(RetentionMetricsT&& value) { SetRetentionMetrics(std::forward<RetentionMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>OrphanFileDeletionMetrics</code> object containing metrics for the
     * optimizer run.</p>
     */
    inline const OrphanFileDeletionMetrics& GetOrphanFileDeletionMetrics() const { return m_orphanFileDeletionMetrics; }
    inline bool OrphanFileDeletionMetricsHasBeenSet() const { return m_orphanFileDeletionMetricsHasBeenSet; }
    template<typename OrphanFileDeletionMetricsT = OrphanFileDeletionMetrics>
    void SetOrphanFileDeletionMetrics(OrphanFileDeletionMetricsT&& value) { m_orphanFileDeletionMetricsHasBeenSet = true; m_orphanFileDeletionMetrics = std::forward<OrphanFileDeletionMetricsT>(value); }
    template<typename OrphanFileDeletionMetricsT = OrphanFileDeletionMetrics>
    TableOptimizerRun& WithOrphanFileDeletionMetrics(OrphanFileDeletionMetricsT&& value) { SetOrphanFileDeletionMetrics(std::forward<OrphanFileDeletionMetricsT>(value)); return *this;}
    ///@}
  private:

    TableOptimizerEventType m_eventType{TableOptimizerEventType::NOT_SET};
    bool m_eventTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTimestamp{};
    bool m_startTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
    bool m_endTimestampHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    CompactionMetrics m_compactionMetrics;
    bool m_compactionMetricsHasBeenSet = false;

    CompactionStrategy m_compactionStrategy{CompactionStrategy::NOT_SET};
    bool m_compactionStrategyHasBeenSet = false;

    RetentionMetrics m_retentionMetrics;
    bool m_retentionMetricsHasBeenSet = false;

    OrphanFileDeletionMetrics m_orphanFileDeletionMetrics;
    bool m_orphanFileDeletionMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
