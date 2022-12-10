/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Gets metadata about a query, including the number of events that were
   * matched, the total number of events scanned, the query run time in milliseconds,
   * and the query's creation time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/QueryStatisticsForDescribeQuery">AWS
   * API Reference</a></p>
   */
  class QueryStatisticsForDescribeQuery
  {
  public:
    AWS_CLOUDTRAIL_API QueryStatisticsForDescribeQuery();
    AWS_CLOUDTRAIL_API QueryStatisticsForDescribeQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API QueryStatisticsForDescribeQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of events that matched a query.</p>
     */
    inline long long GetEventsMatched() const{ return m_eventsMatched; }

    /**
     * <p>The number of events that matched a query.</p>
     */
    inline bool EventsMatchedHasBeenSet() const { return m_eventsMatchedHasBeenSet; }

    /**
     * <p>The number of events that matched a query.</p>
     */
    inline void SetEventsMatched(long long value) { m_eventsMatchedHasBeenSet = true; m_eventsMatched = value; }

    /**
     * <p>The number of events that matched a query.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithEventsMatched(long long value) { SetEventsMatched(value); return *this;}


    /**
     * <p>The number of events that the query scanned in the event data store.</p>
     */
    inline long long GetEventsScanned() const{ return m_eventsScanned; }

    /**
     * <p>The number of events that the query scanned in the event data store.</p>
     */
    inline bool EventsScannedHasBeenSet() const { return m_eventsScannedHasBeenSet; }

    /**
     * <p>The number of events that the query scanned in the event data store.</p>
     */
    inline void SetEventsScanned(long long value) { m_eventsScannedHasBeenSet = true; m_eventsScanned = value; }

    /**
     * <p>The number of events that the query scanned in the event data store.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithEventsScanned(long long value) { SetEventsScanned(value); return *this;}


    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline long long GetBytesScanned() const{ return m_bytesScanned; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline void SetBytesScanned(long long value) { m_bytesScannedHasBeenSet = true; m_bytesScanned = value; }

    /**
     * <p>The total bytes that the query scanned in the event data store. This value
     * matches the number of bytes for which your account is billed for the query,
     * unless the query is still running.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithBytesScanned(long long value) { SetBytesScanned(value); return *this;}


    /**
     * <p>The query's run time, in milliseconds.</p>
     */
    inline int GetExecutionTimeInMillis() const{ return m_executionTimeInMillis; }

    /**
     * <p>The query's run time, in milliseconds.</p>
     */
    inline bool ExecutionTimeInMillisHasBeenSet() const { return m_executionTimeInMillisHasBeenSet; }

    /**
     * <p>The query's run time, in milliseconds.</p>
     */
    inline void SetExecutionTimeInMillis(int value) { m_executionTimeInMillisHasBeenSet = true; m_executionTimeInMillis = value; }

    /**
     * <p>The query's run time, in milliseconds.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithExecutionTimeInMillis(int value) { SetExecutionTimeInMillis(value); return *this;}


    /**
     * <p>The creation time of the query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the query.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the query.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the query.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the query.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the query.</p>
     */
    inline QueryStatisticsForDescribeQuery& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    long long m_eventsMatched;
    bool m_eventsMatchedHasBeenSet = false;

    long long m_eventsScanned;
    bool m_eventsScannedHasBeenSet = false;

    long long m_bytesScanned;
    bool m_bytesScannedHasBeenSet = false;

    int m_executionTimeInMillis;
    bool m_executionTimeInMillisHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
