/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/ResultReuseInformation.h>
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
   * <p>The amount of data scanned during the query execution and the amount of time
   * that it took to execute, and the type of statement that was run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryExecutionStatistics">AWS
   * API Reference</a></p>
   */
  class QueryExecutionStatistics
  {
  public:
    AWS_ATHENA_API QueryExecutionStatistics();
    AWS_ATHENA_API QueryExecutionStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecutionStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline QueryExecutionStatistics& WithEngineExecutionTimeInMillis(long long value) { SetEngineExecutionTimeInMillis(value); return *this;}


    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline long long GetDataScannedInBytes() const{ return m_dataScannedInBytes; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline bool DataScannedInBytesHasBeenSet() const { return m_dataScannedInBytesHasBeenSet; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline void SetDataScannedInBytes(long long value) { m_dataScannedInBytesHasBeenSet = true; m_dataScannedInBytes = value; }

    /**
     * <p>The number of bytes in the data that was queried.</p>
     */
    inline QueryExecutionStatistics& WithDataScannedInBytes(long long value) { SetDataScannedInBytes(value); return *this;}


    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetDataManifestLocation() const{ return m_dataManifestLocation; }

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline bool DataManifestLocationHasBeenSet() const { return m_dataManifestLocationHasBeenSet; }

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline void SetDataManifestLocation(const Aws::String& value) { m_dataManifestLocationHasBeenSet = true; m_dataManifestLocation = value; }

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline void SetDataManifestLocation(Aws::String&& value) { m_dataManifestLocationHasBeenSet = true; m_dataManifestLocation = std::move(value); }

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline void SetDataManifestLocation(const char* value) { m_dataManifestLocationHasBeenSet = true; m_dataManifestLocation.assign(value); }

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline QueryExecutionStatistics& WithDataManifestLocation(const Aws::String& value) { SetDataManifestLocation(value); return *this;}

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline QueryExecutionStatistics& WithDataManifestLocation(Aws::String&& value) { SetDataManifestLocation(std::move(value)); return *this;}

    /**
     * <p>The location and file name of a data manifest file. The manifest file is
     * saved to the Athena query results location in Amazon S3. The manifest file
     * tracks files that the query wrote to Amazon S3. If the query fails, the manifest
     * file also tracks files that the query intended to write. The manifest is useful
     * for identifying orphaned files resulting from a failed query. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/athena/latest/ug/querying.html">Working with
     * Query Results, Output Files, and Query History</a> in the <i>Amazon Athena User
     * Guide</i>.</p>
     */
    inline QueryExecutionStatistics& WithDataManifestLocation(const char* value) { SetDataManifestLocation(value); return *this;}


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
    inline QueryExecutionStatistics& WithTotalExecutionTimeInMillis(long long value) { SetTotalExecutionTimeInMillis(value); return *this;}


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
    inline QueryExecutionStatistics& WithQueryQueueTimeInMillis(long long value) { SetQueryQueueTimeInMillis(value); return *this;}


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
    inline QueryExecutionStatistics& WithQueryPlanningTimeInMillis(long long value) { SetQueryPlanningTimeInMillis(value); return *this;}


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
    inline QueryExecutionStatistics& WithServiceProcessingTimeInMillis(long long value) { SetServiceProcessingTimeInMillis(value); return *this;}


    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline const ResultReuseInformation& GetResultReuseInformation() const{ return m_resultReuseInformation; }

    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline bool ResultReuseInformationHasBeenSet() const { return m_resultReuseInformationHasBeenSet; }

    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline void SetResultReuseInformation(const ResultReuseInformation& value) { m_resultReuseInformationHasBeenSet = true; m_resultReuseInformation = value; }

    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline void SetResultReuseInformation(ResultReuseInformation&& value) { m_resultReuseInformationHasBeenSet = true; m_resultReuseInformation = std::move(value); }

    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline QueryExecutionStatistics& WithResultReuseInformation(const ResultReuseInformation& value) { SetResultReuseInformation(value); return *this;}

    /**
     * <p>Contains information about whether previous query results were reused for the
     * query.</p>
     */
    inline QueryExecutionStatistics& WithResultReuseInformation(ResultReuseInformation&& value) { SetResultReuseInformation(std::move(value)); return *this;}

  private:

    long long m_engineExecutionTimeInMillis;
    bool m_engineExecutionTimeInMillisHasBeenSet = false;

    long long m_dataScannedInBytes;
    bool m_dataScannedInBytesHasBeenSet = false;

    Aws::String m_dataManifestLocation;
    bool m_dataManifestLocationHasBeenSet = false;

    long long m_totalExecutionTimeInMillis;
    bool m_totalExecutionTimeInMillisHasBeenSet = false;

    long long m_queryQueueTimeInMillis;
    bool m_queryQueueTimeInMillisHasBeenSet = false;

    long long m_queryPlanningTimeInMillis;
    bool m_queryPlanningTimeInMillisHasBeenSet = false;

    long long m_serviceProcessingTimeInMillis;
    bool m_serviceProcessingTimeInMillisHasBeenSet = false;

    ResultReuseInformation m_resultReuseInformation;
    bool m_resultReuseInformationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
