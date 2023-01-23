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
   * events that were scanned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryStatistics">AWS
   * API Reference</a></p>
   */
  class QueryStatistics
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryStatistics();
    AWS_CLOUDWATCHLOGS_API QueryStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of log events that matched the query string.</p>
     */
    inline double GetRecordsMatched() const{ return m_recordsMatched; }

    /**
     * <p>The number of log events that matched the query string.</p>
     */
    inline bool RecordsMatchedHasBeenSet() const { return m_recordsMatchedHasBeenSet; }

    /**
     * <p>The number of log events that matched the query string.</p>
     */
    inline void SetRecordsMatched(double value) { m_recordsMatchedHasBeenSet = true; m_recordsMatched = value; }

    /**
     * <p>The number of log events that matched the query string.</p>
     */
    inline QueryStatistics& WithRecordsMatched(double value) { SetRecordsMatched(value); return *this;}


    /**
     * <p>The total number of log events scanned during the query.</p>
     */
    inline double GetRecordsScanned() const{ return m_recordsScanned; }

    /**
     * <p>The total number of log events scanned during the query.</p>
     */
    inline bool RecordsScannedHasBeenSet() const { return m_recordsScannedHasBeenSet; }

    /**
     * <p>The total number of log events scanned during the query.</p>
     */
    inline void SetRecordsScanned(double value) { m_recordsScannedHasBeenSet = true; m_recordsScanned = value; }

    /**
     * <p>The total number of log events scanned during the query.</p>
     */
    inline QueryStatistics& WithRecordsScanned(double value) { SetRecordsScanned(value); return *this;}


    /**
     * <p>The total number of bytes in the log events scanned during the query.</p>
     */
    inline double GetBytesScanned() const{ return m_bytesScanned; }

    /**
     * <p>The total number of bytes in the log events scanned during the query.</p>
     */
    inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }

    /**
     * <p>The total number of bytes in the log events scanned during the query.</p>
     */
    inline void SetBytesScanned(double value) { m_bytesScannedHasBeenSet = true; m_bytesScanned = value; }

    /**
     * <p>The total number of bytes in the log events scanned during the query.</p>
     */
    inline QueryStatistics& WithBytesScanned(double value) { SetBytesScanned(value); return *this;}

  private:

    double m_recordsMatched;
    bool m_recordsMatchedHasBeenSet = false;

    double m_recordsScanned;
    bool m_recordsScannedHasBeenSet = false;

    double m_bytesScanned;
    bool m_bytesScannedHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
