/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/Statistic.h>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /*
  */
  class AWS_CLOUDWATCH_API GetMetricStatisticsRequest : public CloudWatchRequest
  {
  public:
    GetMetricStatisticsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithNamespace(Aws::String&& value) { SetNamespace(value); return *this;}

    /*
     <p> The namespace of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithMetricName(Aws::String&& value) { SetMetricName(value); return *this;}

    /*
     <p> The name of the metric, with or without spaces. </p>
    */
    inline GetMetricStatisticsRequest& WithMetricName(const char* value) { SetMetricName(value); return *this;}

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline GetMetricStatisticsRequest& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline GetMetricStatisticsRequest& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(value); return *this;}

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline GetMetricStatisticsRequest& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /*
     <p> A list of dimensions describing qualities of the metric. </p>
    */
    inline GetMetricStatisticsRequest& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline GetMetricStatisticsRequest& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline GetMetricStatisticsRequest& WithStartTime(Aws::String&& value) { SetStartTime(value); return *this;}

    /*
     <p> The time stamp to use for determining the first datapoint to return. The value specified is inclusive; results include datapoints with the time stamp specified. </p> <note> The specified start time is rounded down to the nearest value. Datapoints are returned for start times up to two weeks in the past. Specified start times that are more than two weeks in the past will not return datapoints for metrics that are older than two weeks. <p>Data that is timestamped 24 hours or more in the past may take in excess of 48 hours to become available from submission time using <code>GetMetricStatistics</code>.</p> </note>
    */
    inline GetMetricStatisticsRequest& WithStartTime(const char* value) { SetStartTime(value); return *this;}

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline GetMetricStatisticsRequest& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline GetMetricStatisticsRequest& WithEndTime(Aws::String&& value) { SetEndTime(value); return *this;}

    /*
     <p> The time stamp to use for determining the last datapoint to return. The value specified is exclusive; results will include datapoints up to the time stamp specified. </p>
    */
    inline GetMetricStatisticsRequest& WithEndTime(const char* value) { SetEndTime(value); return *this;}

    /*
     <p> The granularity, in seconds, of the returned datapoints. <code>Period</code> must be at least 60 seconds and must be a multiple of 60. The default value is 60. </p>
    */
    inline long GetPeriod() const{ return m_period; }

    /*
     <p> The granularity, in seconds, of the returned datapoints. <code>Period</code> must be at least 60 seconds and must be a multiple of 60. The default value is 60. </p>
    */
    inline void SetPeriod(long value) { m_periodHasBeenSet = true; m_period = value; }

    /*
     <p> The granularity, in seconds, of the returned datapoints. <code>Period</code> must be at least 60 seconds and must be a multiple of 60. The default value is 60. </p>
    */
    inline GetMetricStatisticsRequest& WithPeriod(long value) { SetPeriod(value); return *this;}

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline const Aws::Vector<Statistic>& GetStatistics() const{ return m_statistics; }

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline void SetStatistics(const Aws::Vector<Statistic>& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline void SetStatistics(Aws::Vector<Statistic>&& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline GetMetricStatisticsRequest& WithStatistics(const Aws::Vector<Statistic>& value) { SetStatistics(value); return *this;}

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline GetMetricStatisticsRequest& WithStatistics(Aws::Vector<Statistic>&& value) { SetStatistics(value); return *this;}

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline GetMetricStatisticsRequest& AddStatistics(const Statistic& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /*
     <p> The metric statistics to return. For information about specific statistics returned by GetMetricStatistics, go to <a href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/index.html?CHAP_TerminologyandKeyConcepts.html#Statistic">Statistics</a> in the <i>Amazon CloudWatch Developer Guide</i>. </p> <p> Valid Values: <code>Average | Sum | SampleCount | Maximum | Minimum</code> </p>
    */
    inline GetMetricStatisticsRequest& AddStatistics(Statistic&& value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }

    /*
     <p> The unit for the metric. </p>
    */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /*
     <p> The unit for the metric. </p>
    */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /*
     <p> The unit for the metric. </p>
    */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = value; }

    /*
     <p> The unit for the metric. </p>
    */
    inline GetMetricStatisticsRequest& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /*
     <p> The unit for the metric. </p>
    */
    inline GetMetricStatisticsRequest& WithUnit(StandardUnit&& value) { SetUnit(value); return *this;}

  private:
    Aws::String m_namespace;
    bool m_namespaceHasBeenSet;
    Aws::String m_metricName;
    bool m_metricNameHasBeenSet;
    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet;
    Aws::String m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::String m_endTime;
    bool m_endTimeHasBeenSet;
    long m_period;
    bool m_periodHasBeenSet;
    Aws::Vector<Statistic> m_statistics;
    bool m_statisticsHasBeenSet;
    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
