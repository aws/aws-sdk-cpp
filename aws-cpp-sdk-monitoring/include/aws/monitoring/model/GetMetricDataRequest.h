/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ScanBy.h>
#include <aws/monitoring/model/MetricDataQuery.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCH_API GetMetricDataRequest : public CloudWatchRequest
  {
  public:
    GetMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricData"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline const Aws::Vector<MetricDataQuery>& GetMetricDataQueries() const{ return m_metricDataQueries; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline bool MetricDataQueriesHasBeenSet() const { return m_metricDataQueriesHasBeenSet; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline void SetMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = value; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline void SetMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries = std::move(value); }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& WithMetricDataQueries(const Aws::Vector<MetricDataQuery>& value) { SetMetricDataQueries(value); return *this;}

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& WithMetricDataQueries(Aws::Vector<MetricDataQuery>&& value) { SetMetricDataQueries(std::move(value)); return *this;}

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& AddMetricDataQueries(const MetricDataQuery& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(value); return *this; }

    /**
     * <p>The metric queries to be returned. A single <code>GetMetricData</code> call
     * can include as many as 100 <code>MetricDataQuery</code> structures. Each of
     * these structures can specify either a metric to retrieve, or a math expression
     * to perform on retrieved data. </p>
     */
    inline GetMetricDataRequest& AddMetricDataQueries(MetricDataQuery&& value) { m_metricDataQueriesHasBeenSet = true; m_metricDataQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline GetMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time stamp indicating the earliest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>StartTime</code> can get
     * a faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>StartTime</code>.</p>
     */
    inline GetMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline GetMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time stamp indicating the latest data to be returned.</p> <p>For better
     * performance, specify <code>StartTime</code> and <code>EndTime</code> values that
     * align with the value of the metric's <code>Period</code> and sync up with the
     * beginning and end of an hour. For example, if the <code>Period</code> of a
     * metric is 5 minutes, specifying 12:05 or 12:30 as <code>EndTime</code> can get a
     * faster response from CloudWatch than setting 12:07 or 12:29 as the
     * <code>EndTime</code>.</p>
     */
    inline GetMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Include this value, if it was returned by the previous call, to get the next
     * set of data points.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline const ScanBy& GetScanBy() const{ return m_scanBy; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline bool ScanByHasBeenSet() const { return m_scanByHasBeenSet; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline void SetScanBy(const ScanBy& value) { m_scanByHasBeenSet = true; m_scanBy = value; }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline void SetScanBy(ScanBy&& value) { m_scanByHasBeenSet = true; m_scanBy = std::move(value); }

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline GetMetricDataRequest& WithScanBy(const ScanBy& value) { SetScanBy(value); return *this;}

    /**
     * <p>The order in which data points should be returned.
     * <code>TimestampDescending</code> returns the newest data first and paginates
     * when the <code>MaxDatapoints</code> limit is reached.
     * <code>TimestampAscending</code> returns the oldest data first and paginates when
     * the <code>MaxDatapoints</code> limit is reached.</p>
     */
    inline GetMetricDataRequest& WithScanBy(ScanBy&& value) { SetScanBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline int GetMaxDatapoints() const{ return m_maxDatapoints; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline bool MaxDatapointsHasBeenSet() const { return m_maxDatapointsHasBeenSet; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline void SetMaxDatapoints(int value) { m_maxDatapointsHasBeenSet = true; m_maxDatapoints = value; }

    /**
     * <p>The maximum number of data points the request should return before
     * paginating. If you omit this, the default of 100,800 is used.</p>
     */
    inline GetMetricDataRequest& WithMaxDatapoints(int value) { SetMaxDatapoints(value); return *this;}

  private:

    Aws::Vector<MetricDataQuery> m_metricDataQueries;
    bool m_metricDataQueriesHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    ScanBy m_scanBy;
    bool m_scanByHasBeenSet;

    int m_maxDatapoints;
    bool m_maxDatapointsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
