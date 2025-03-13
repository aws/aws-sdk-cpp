/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Contains the number of log events scanned by the query, the number of log
   * events that matched the query criteria, and the total number of bytes in the log
   * events that were scanned.</p> <p>If the query involved log groups that have
   * field index policies, the estimated number of skipped log events and the total
   * bytes of those skipped log events are included. Using field indexes to skip log
   * events in queries reduces scan volume and improves performance. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatchLogs-Field-Indexing.html">Create
   * field indexes to improve query performance and reduce scan
   * volume</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryStatistics">AWS
   * API Reference</a></p>
   */
  class QueryStatistics
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryStatistics() = default;
    AWS_CLOUDWATCHLOGS_API QueryStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of log events that matched the query string.</p>
     */
    inline double GetRecordsMatched() const { return m_recordsMatched; }
    inline bool RecordsMatchedHasBeenSet() const { return m_recordsMatchedHasBeenSet; }
    inline void SetRecordsMatched(double value) { m_recordsMatchedHasBeenSet = true; m_recordsMatched = value; }
    inline QueryStatistics& WithRecordsMatched(double value) { SetRecordsMatched(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of log events scanned during the query.</p>
     */
    inline double GetRecordsScanned() const { return m_recordsScanned; }
    inline bool RecordsScannedHasBeenSet() const { return m_recordsScannedHasBeenSet; }
    inline void SetRecordsScanned(double value) { m_recordsScannedHasBeenSet = true; m_recordsScanned = value; }
    inline QueryStatistics& WithRecordsScanned(double value) { SetRecordsScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of the number of log events that were skipped when processing
     * this query, because the query contained an indexed field. Skipping these entries
     * lowers query costs and improves the query performance time. For more information
     * about field indexes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutIndexPolicy.html">PutIndexPolicy</a>.</p>
     */
    inline double GetEstimatedRecordsSkipped() const { return m_estimatedRecordsSkipped; }
    inline bool EstimatedRecordsSkippedHasBeenSet() const { return m_estimatedRecordsSkippedHasBeenSet; }
    inline void SetEstimatedRecordsSkipped(double value) { m_estimatedRecordsSkippedHasBeenSet = true; m_estimatedRecordsSkipped = value; }
    inline QueryStatistics& WithEstimatedRecordsSkipped(double value) { SetEstimatedRecordsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of bytes in the log events scanned during the query.</p>
     */
    inline double GetBytesScanned() const { return m_bytesScanned; }
    inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }
    inline void SetBytesScanned(double value) { m_bytesScannedHasBeenSet = true; m_bytesScanned = value; }
    inline QueryStatistics& WithBytesScanned(double value) { SetBytesScanned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An estimate of the number of bytes in the log events that were skipped when
     * processing this query, because the query contained an indexed field. Skipping
     * these entries lowers query costs and improves the query performance time. For
     * more information about field indexes, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutIndexPolicy.html">PutIndexPolicy</a>.</p>
     */
    inline double GetEstimatedBytesSkipped() const { return m_estimatedBytesSkipped; }
    inline bool EstimatedBytesSkippedHasBeenSet() const { return m_estimatedBytesSkippedHasBeenSet; }
    inline void SetEstimatedBytesSkipped(double value) { m_estimatedBytesSkippedHasBeenSet = true; m_estimatedBytesSkipped = value; }
    inline QueryStatistics& WithEstimatedBytesSkipped(double value) { SetEstimatedBytesSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of log groups that were scanned by this query.</p>
     */
    inline double GetLogGroupsScanned() const { return m_logGroupsScanned; }
    inline bool LogGroupsScannedHasBeenSet() const { return m_logGroupsScannedHasBeenSet; }
    inline void SetLogGroupsScanned(double value) { m_logGroupsScannedHasBeenSet = true; m_logGroupsScanned = value; }
    inline QueryStatistics& WithLogGroupsScanned(double value) { SetLogGroupsScanned(value); return *this;}
    ///@}
  private:

    double m_recordsMatched{0.0};
    bool m_recordsMatchedHasBeenSet = false;

    double m_recordsScanned{0.0};
    bool m_recordsScannedHasBeenSet = false;

    double m_estimatedRecordsSkipped{0.0};
    bool m_estimatedRecordsSkippedHasBeenSet = false;

    double m_bytesScanned{0.0};
    bool m_bytesScannedHasBeenSet = false;

    double m_estimatedBytesSkipped{0.0};
    bool m_estimatedBytesSkippedHasBeenSet = false;

    double m_logGroupsScanned{0.0};
    bool m_logGroupsScannedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
