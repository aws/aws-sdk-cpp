/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/Interval.h>
#include <aws/kendra/model/MetricType.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class GetSnapshotsRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API GetSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSnapshots"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index to get search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline const Interval& GetInterval() const{ return m_interval; }

    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline void SetInterval(const Interval& value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline void SetInterval(Interval&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }

    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline GetSnapshotsRequest& WithInterval(const Interval& value) { SetInterval(value); return *this;}

    /**
     * <p>The time interval or time window to get search metrics data. The time
     * interval uses the time zone of your index. You can view data in the following
     * time windows:</p> <ul> <li> <p> <code>THIS_WEEK</code>: The current week,
     * starting on the Sunday and ending on the day before the current date.</p> </li>
     * <li> <p> <code>ONE_WEEK_AGO</code>: The previous week, starting on the Sunday
     * and ending on the following Saturday.</p> </li> <li> <p>
     * <code>TWO_WEEKS_AGO</code>: The week before the previous week, starting on the
     * Sunday and ending on the following Saturday.</p> </li> <li> <p>
     * <code>THIS_MONTH</code>: The current month, starting on the first day of the
     * month and ending on the day before the current date.</p> </li> <li> <p>
     * <code>ONE_MONTH_AGO</code>: The previous month, starting on the first day of the
     * month and ending on the last day of the month.</p> </li> <li> <p>
     * <code>TWO_MONTHS_AGO</code>: The month before the previous month, starting on
     * the first day of the month and ending on last day of the month.</p> </li> </ul>
     */
    inline GetSnapshotsRequest& WithInterval(Interval&& value) { SetInterval(std::move(value)); return *this;}


    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline const MetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }

    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline void SetMetricType(const MetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }

    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline void SetMetricType(MetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }

    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline GetSnapshotsRequest& WithMetricType(const MetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p>The metric you want to retrieve. You can specify only one metric per
     * call.</p> <p>For more information about the metrics you can view, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/search-analytics.html">Gaining
     * insights with search analytics</a>.</p>
     */
    inline GetSnapshotsRequest& WithMetricType(MetricType&& value) { SetMetricType(std::move(value)); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of returned data for the metric.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of returned data for the metric.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of returned data for the metric.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of returned data for the metric.</p>
     */
    inline GetSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Interval m_interval;
    bool m_intervalHasBeenSet = false;

    MetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
