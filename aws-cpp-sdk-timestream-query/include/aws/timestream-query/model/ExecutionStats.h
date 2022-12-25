/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>

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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Statistics for a single scheduled query run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ExecutionStats">AWS
   * API Reference</a></p>
   */
  class ExecutionStats
  {
  public:
    AWS_TIMESTREAMQUERY_API ExecutionStats();
    AWS_TIMESTREAMQUERY_API ExecutionStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ExecutionStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total time, measured in milliseconds, that was needed for the scheduled query
     * run to complete.</p>
     */
    inline long long GetExecutionTimeInMillis() const{ return m_executionTimeInMillis; }

    /**
     * <p>Total time, measured in milliseconds, that was needed for the scheduled query
     * run to complete.</p>
     */
    inline bool ExecutionTimeInMillisHasBeenSet() const { return m_executionTimeInMillisHasBeenSet; }

    /**
     * <p>Total time, measured in milliseconds, that was needed for the scheduled query
     * run to complete.</p>
     */
    inline void SetExecutionTimeInMillis(long long value) { m_executionTimeInMillisHasBeenSet = true; m_executionTimeInMillis = value; }

    /**
     * <p>Total time, measured in milliseconds, that was needed for the scheduled query
     * run to complete.</p>
     */
    inline ExecutionStats& WithExecutionTimeInMillis(long long value) { SetExecutionTimeInMillis(value); return *this;}


    /**
     * <p>Data writes metered for records ingested in a single scheduled query run.</p>
     */
    inline long long GetDataWrites() const{ return m_dataWrites; }

    /**
     * <p>Data writes metered for records ingested in a single scheduled query run.</p>
     */
    inline bool DataWritesHasBeenSet() const { return m_dataWritesHasBeenSet; }

    /**
     * <p>Data writes metered for records ingested in a single scheduled query run.</p>
     */
    inline void SetDataWrites(long long value) { m_dataWritesHasBeenSet = true; m_dataWrites = value; }

    /**
     * <p>Data writes metered for records ingested in a single scheduled query run.</p>
     */
    inline ExecutionStats& WithDataWrites(long long value) { SetDataWrites(value); return *this;}


    /**
     * <p>Bytes metered for a single scheduled query run.</p>
     */
    inline long long GetBytesMetered() const{ return m_bytesMetered; }

    /**
     * <p>Bytes metered for a single scheduled query run.</p>
     */
    inline bool BytesMeteredHasBeenSet() const { return m_bytesMeteredHasBeenSet; }

    /**
     * <p>Bytes metered for a single scheduled query run.</p>
     */
    inline void SetBytesMetered(long long value) { m_bytesMeteredHasBeenSet = true; m_bytesMetered = value; }

    /**
     * <p>Bytes metered for a single scheduled query run.</p>
     */
    inline ExecutionStats& WithBytesMetered(long long value) { SetBytesMetered(value); return *this;}


    /**
     * <p>The number of records ingested for a single scheduled query run. </p>
     */
    inline long long GetRecordsIngested() const{ return m_recordsIngested; }

    /**
     * <p>The number of records ingested for a single scheduled query run. </p>
     */
    inline bool RecordsIngestedHasBeenSet() const { return m_recordsIngestedHasBeenSet; }

    /**
     * <p>The number of records ingested for a single scheduled query run. </p>
     */
    inline void SetRecordsIngested(long long value) { m_recordsIngestedHasBeenSet = true; m_recordsIngested = value; }

    /**
     * <p>The number of records ingested for a single scheduled query run. </p>
     */
    inline ExecutionStats& WithRecordsIngested(long long value) { SetRecordsIngested(value); return *this;}


    /**
     * <p>Number of rows present in the output from running a query before ingestion to
     * destination data source.</p>
     */
    inline long long GetQueryResultRows() const{ return m_queryResultRows; }

    /**
     * <p>Number of rows present in the output from running a query before ingestion to
     * destination data source.</p>
     */
    inline bool QueryResultRowsHasBeenSet() const { return m_queryResultRowsHasBeenSet; }

    /**
     * <p>Number of rows present in the output from running a query before ingestion to
     * destination data source.</p>
     */
    inline void SetQueryResultRows(long long value) { m_queryResultRowsHasBeenSet = true; m_queryResultRows = value; }

    /**
     * <p>Number of rows present in the output from running a query before ingestion to
     * destination data source.</p>
     */
    inline ExecutionStats& WithQueryResultRows(long long value) { SetQueryResultRows(value); return *this;}

  private:

    long long m_executionTimeInMillis;
    bool m_executionTimeInMillisHasBeenSet = false;

    long long m_dataWrites;
    bool m_dataWritesHasBeenSet = false;

    long long m_bytesMetered;
    bool m_bytesMeteredHasBeenSet = false;

    long long m_recordsIngested;
    bool m_recordsIngestedHasBeenSet = false;

    long long m_queryResultRows;
    bool m_queryResultRowsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
