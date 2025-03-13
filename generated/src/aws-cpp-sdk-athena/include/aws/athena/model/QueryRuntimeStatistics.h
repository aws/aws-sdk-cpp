/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryRuntimeStatisticsTimeline.h>
#include <aws/athena/model/QueryRuntimeStatisticsRows.h>
#include <aws/athena/model/QueryStage.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The query execution timeline, statistics on input and output rows and bytes,
   * and the different query stages that form the query execution plan.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryRuntimeStatistics">AWS
   * API Reference</a></p>
   */
  class QueryRuntimeStatistics
  {
  public:
    AWS_ATHENA_API QueryRuntimeStatistics() = default;
    AWS_ATHENA_API QueryRuntimeStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryRuntimeStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const QueryRuntimeStatisticsTimeline& GetTimeline() const { return m_timeline; }
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
    template<typename TimelineT = QueryRuntimeStatisticsTimeline>
    void SetTimeline(TimelineT&& value) { m_timelineHasBeenSet = true; m_timeline = std::forward<TimelineT>(value); }
    template<typename TimelineT = QueryRuntimeStatisticsTimeline>
    QueryRuntimeStatistics& WithTimeline(TimelineT&& value) { SetTimeline(std::forward<TimelineT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const QueryRuntimeStatisticsRows& GetRows() const { return m_rows; }
    inline bool RowsHasBeenSet() const { return m_rowsHasBeenSet; }
    template<typename RowsT = QueryRuntimeStatisticsRows>
    void SetRows(RowsT&& value) { m_rowsHasBeenSet = true; m_rows = std::forward<RowsT>(value); }
    template<typename RowsT = QueryRuntimeStatisticsRows>
    QueryRuntimeStatistics& WithRows(RowsT&& value) { SetRows(std::forward<RowsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage statistics such as input and output rows and bytes, execution time, and
     * stage state. This information also includes substages and the query stage
     * plan.</p>
     */
    inline const QueryStage& GetOutputStage() const { return m_outputStage; }
    inline bool OutputStageHasBeenSet() const { return m_outputStageHasBeenSet; }
    template<typename OutputStageT = QueryStage>
    void SetOutputStage(OutputStageT&& value) { m_outputStageHasBeenSet = true; m_outputStage = std::forward<OutputStageT>(value); }
    template<typename OutputStageT = QueryStage>
    QueryRuntimeStatistics& WithOutputStage(OutputStageT&& value) { SetOutputStage(std::forward<OutputStageT>(value)); return *this;}
    ///@}
  private:

    QueryRuntimeStatisticsTimeline m_timeline;
    bool m_timelineHasBeenSet = false;

    QueryRuntimeStatisticsRows m_rows;
    bool m_rowsHasBeenSet = false;

    QueryStage m_outputStage;
    bool m_outputStageHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
