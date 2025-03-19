/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>

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
   * <p>Timeline statistics such as query queue time, planning time, execution time,
   * service processing time, and total execution time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryRuntimeStatisticsTimeline">AWS
   * API Reference</a></p>
   */
  class QueryRuntimeStatisticsTimeline
  {
  public:
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline() = default;
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of milliseconds that the query was in your query queue waiting for
     * resources. Note that if transient errors occur, Athena might automatically add
     * the query back to the queue.</p>
     */
    inline long long GetQueryQueueTimeInMillis() const { return m_queryQueueTimeInMillis; }
    inline bool QueryQueueTimeInMillisHasBeenSet() const { return m_queryQueueTimeInMillisHasBeenSet; }
    inline void SetQueryQueueTimeInMillis(long long value) { m_queryQueueTimeInMillisHasBeenSet = true; m_queryQueueTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithQueryQueueTimeInMillis(long long value) { SetQueryQueueTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of milliseconds that Athena spends on preprocessing before it
     * submits the query to the engine. </p>
     */
    inline long long GetServicePreProcessingTimeInMillis() const { return m_servicePreProcessingTimeInMillis; }
    inline bool ServicePreProcessingTimeInMillisHasBeenSet() const { return m_servicePreProcessingTimeInMillisHasBeenSet; }
    inline void SetServicePreProcessingTimeInMillis(long long value) { m_servicePreProcessingTimeInMillisHasBeenSet = true; m_servicePreProcessingTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithServicePreProcessingTimeInMillis(long long value) { SetServicePreProcessingTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that Athena took to plan the query processing
     * flow. This includes the time spent retrieving table partitions from the data
     * source. Note that because the query engine performs the query planning, query
     * planning time is a subset of engine processing time.</p>
     */
    inline long long GetQueryPlanningTimeInMillis() const { return m_queryPlanningTimeInMillis; }
    inline bool QueryPlanningTimeInMillisHasBeenSet() const { return m_queryPlanningTimeInMillisHasBeenSet; }
    inline void SetQueryPlanningTimeInMillis(long long value) { m_queryPlanningTimeInMillisHasBeenSet = true; m_queryPlanningTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithQueryPlanningTimeInMillis(long long value) { SetQueryPlanningTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline long long GetEngineExecutionTimeInMillis() const { return m_engineExecutionTimeInMillis; }
    inline bool EngineExecutionTimeInMillisHasBeenSet() const { return m_engineExecutionTimeInMillisHasBeenSet; }
    inline void SetEngineExecutionTimeInMillis(long long value) { m_engineExecutionTimeInMillisHasBeenSet = true; m_engineExecutionTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithEngineExecutionTimeInMillis(long long value) { SetEngineExecutionTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that Athena took to finalize and publish the query
     * results after the query engine finished running the query.</p>
     */
    inline long long GetServiceProcessingTimeInMillis() const { return m_serviceProcessingTimeInMillis; }
    inline bool ServiceProcessingTimeInMillisHasBeenSet() const { return m_serviceProcessingTimeInMillisHasBeenSet; }
    inline void SetServiceProcessingTimeInMillis(long long value) { m_serviceProcessingTimeInMillisHasBeenSet = true; m_serviceProcessingTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithServiceProcessingTimeInMillis(long long value) { SetServiceProcessingTimeInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of milliseconds that Athena took to run the query.</p>
     */
    inline long long GetTotalExecutionTimeInMillis() const { return m_totalExecutionTimeInMillis; }
    inline bool TotalExecutionTimeInMillisHasBeenSet() const { return m_totalExecutionTimeInMillisHasBeenSet; }
    inline void SetTotalExecutionTimeInMillis(long long value) { m_totalExecutionTimeInMillisHasBeenSet = true; m_totalExecutionTimeInMillis = value; }
    inline QueryRuntimeStatisticsTimeline& WithTotalExecutionTimeInMillis(long long value) { SetTotalExecutionTimeInMillis(value); return *this;}
    ///@}
  private:

    long long m_queryQueueTimeInMillis{0};
    bool m_queryQueueTimeInMillisHasBeenSet = false;

    long long m_servicePreProcessingTimeInMillis{0};
    bool m_servicePreProcessingTimeInMillisHasBeenSet = false;

    long long m_queryPlanningTimeInMillis{0};
    bool m_queryPlanningTimeInMillisHasBeenSet = false;

    long long m_engineExecutionTimeInMillis{0};
    bool m_engineExecutionTimeInMillisHasBeenSet = false;

    long long m_serviceProcessingTimeInMillis{0};
    bool m_serviceProcessingTimeInMillisHasBeenSet = false;

    long long m_totalExecutionTimeInMillis{0};
    bool m_totalExecutionTimeInMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
