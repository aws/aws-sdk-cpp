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
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline();
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryRuntimeStatisticsTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of milliseconds that the query was in your query queue waiting for
     * resources. Note that if transient errors occur, Athena might automatically add
     * the query back to the queue.</p>
     */
    inline long long GetQueryQueueTimeInMillis() const{ return m_queryQueueTimeInMillis; }

    /**
     * <p>The number of milliseconds that the query was in your query queue waiting for
     * resources. Note that if transient errors occur, Athena might automatically add
     * the query back to the queue.</p>
     */
    inline bool QueryQueueTimeInMillisHasBeenSet() const { return m_queryQueueTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that the query was in your query queue waiting for
     * resources. Note that if transient errors occur, Athena might automatically add
     * the query back to the queue.</p>
     */
    inline void SetQueryQueueTimeInMillis(long long value) { m_queryQueueTimeInMillisHasBeenSet = true; m_queryQueueTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that the query was in your query queue waiting for
     * resources. Note that if transient errors occur, Athena might automatically add
     * the query back to the queue.</p>
     */
    inline QueryRuntimeStatisticsTimeline& WithQueryQueueTimeInMillis(long long value) { SetQueryQueueTimeInMillis(value); return *this;}


    /**
     * <p>The number of milliseconds that Athena took to plan the query processing
     * flow. This includes the time spent retrieving table partitions from the data
     * source. Note that because the query engine performs the query planning, query
     * planning time is a subset of engine processing time.</p>
     */
    inline long long GetQueryPlanningTimeInMillis() const{ return m_queryPlanningTimeInMillis; }

    /**
     * <p>The number of milliseconds that Athena took to plan the query processing
     * flow. This includes the time spent retrieving table partitions from the data
     * source. Note that because the query engine performs the query planning, query
     * planning time is a subset of engine processing time.</p>
     */
    inline bool QueryPlanningTimeInMillisHasBeenSet() const { return m_queryPlanningTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that Athena took to plan the query processing
     * flow. This includes the time spent retrieving table partitions from the data
     * source. Note that because the query engine performs the query planning, query
     * planning time is a subset of engine processing time.</p>
     */
    inline void SetQueryPlanningTimeInMillis(long long value) { m_queryPlanningTimeInMillisHasBeenSet = true; m_queryPlanningTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that Athena took to plan the query processing
     * flow. This includes the time spent retrieving table partitions from the data
     * source. Note that because the query engine performs the query planning, query
     * planning time is a subset of engine processing time.</p>
     */
    inline QueryRuntimeStatisticsTimeline& WithQueryPlanningTimeInMillis(long long value) { SetQueryPlanningTimeInMillis(value); return *this;}


    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline long long GetEngineExecutionTimeInMillis() const{ return m_engineExecutionTimeInMillis; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline bool EngineExecutionTimeInMillisHasBeenSet() const { return m_engineExecutionTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline void SetEngineExecutionTimeInMillis(long long value) { m_engineExecutionTimeInMillisHasBeenSet = true; m_engineExecutionTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that the query took to execute.</p>
     */
    inline QueryRuntimeStatisticsTimeline& WithEngineExecutionTimeInMillis(long long value) { SetEngineExecutionTimeInMillis(value); return *this;}


    /**
     * <p>The number of milliseconds that Athena took to finalize and publish the query
     * results after the query engine finished running the query.</p>
     */
    inline long long GetServiceProcessingTimeInMillis() const{ return m_serviceProcessingTimeInMillis; }

    /**
     * <p>The number of milliseconds that Athena took to finalize and publish the query
     * results after the query engine finished running the query.</p>
     */
    inline bool ServiceProcessingTimeInMillisHasBeenSet() const { return m_serviceProcessingTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that Athena took to finalize and publish the query
     * results after the query engine finished running the query.</p>
     */
    inline void SetServiceProcessingTimeInMillis(long long value) { m_serviceProcessingTimeInMillisHasBeenSet = true; m_serviceProcessingTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that Athena took to finalize and publish the query
     * results after the query engine finished running the query.</p>
     */
    inline QueryRuntimeStatisticsTimeline& WithServiceProcessingTimeInMillis(long long value) { SetServiceProcessingTimeInMillis(value); return *this;}


    /**
     * <p>The number of milliseconds that Athena took to run the query.</p>
     */
    inline long long GetTotalExecutionTimeInMillis() const{ return m_totalExecutionTimeInMillis; }

    /**
     * <p>The number of milliseconds that Athena took to run the query.</p>
     */
    inline bool TotalExecutionTimeInMillisHasBeenSet() const { return m_totalExecutionTimeInMillisHasBeenSet; }

    /**
     * <p>The number of milliseconds that Athena took to run the query.</p>
     */
    inline void SetTotalExecutionTimeInMillis(long long value) { m_totalExecutionTimeInMillisHasBeenSet = true; m_totalExecutionTimeInMillis = value; }

    /**
     * <p>The number of milliseconds that Athena took to run the query.</p>
     */
    inline QueryRuntimeStatisticsTimeline& WithTotalExecutionTimeInMillis(long long value) { SetTotalExecutionTimeInMillis(value); return *this;}

  private:

    long long m_queryQueueTimeInMillis;
    bool m_queryQueueTimeInMillisHasBeenSet = false;

    long long m_queryPlanningTimeInMillis;
    bool m_queryPlanningTimeInMillisHasBeenSet = false;

    long long m_engineExecutionTimeInMillis;
    bool m_engineExecutionTimeInMillisHasBeenSet = false;

    long long m_serviceProcessingTimeInMillis;
    bool m_serviceProcessingTimeInMillisHasBeenSet = false;

    long long m_totalExecutionTimeInMillis;
    bool m_totalExecutionTimeInMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
