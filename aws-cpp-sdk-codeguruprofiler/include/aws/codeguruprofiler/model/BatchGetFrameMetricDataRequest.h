/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/AggregationPeriod.h>
#include <aws/codeguruprofiler/model/FrameMetric.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the BatchGetFrameMetricDataRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/BatchGetFrameMetricDataRequest">AWS
   * API Reference</a></p>
   */
  class BatchGetFrameMetricDataRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetFrameMetricData"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline const Aws::Vector<FrameMetric>& GetFrameMetrics() const{ return m_frameMetrics; }

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline bool FrameMetricsHasBeenSet() const { return m_frameMetricsHasBeenSet; }

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline void SetFrameMetrics(const Aws::Vector<FrameMetric>& value) { m_frameMetricsHasBeenSet = true; m_frameMetrics = value; }

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline void SetFrameMetrics(Aws::Vector<FrameMetric>&& value) { m_frameMetricsHasBeenSet = true; m_frameMetrics = std::move(value); }

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataRequest& WithFrameMetrics(const Aws::Vector<FrameMetric>& value) { SetFrameMetrics(value); return *this;}

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataRequest& WithFrameMetrics(Aws::Vector<FrameMetric>&& value) { SetFrameMetrics(std::move(value)); return *this;}

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataRequest& AddFrameMetrics(const FrameMetric& value) { m_frameMetricsHasBeenSet = true; m_frameMetrics.push_back(value); return *this; }

    /**
     * <p> The details of the metrics that are used to request a time series of values.
     * The metric includes the name of the frame, the aggregation type to calculate the
     * metric value for the frame, and the thread states to use to get the count for
     * the metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataRequest& AddFrameMetrics(FrameMetric&& value) { m_frameMetricsHasBeenSet = true; m_frameMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline const Aws::String& GetPeriod() const{ return m_period; }

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline void SetPeriod(const Aws::String& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline void SetPeriod(Aws::String&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline void SetPeriod(const char* value) { m_periodHasBeenSet = true; m_period.assign(value); }

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline BatchGetFrameMetricDataRequest& WithPeriod(const Aws::String& value) { SetPeriod(value); return *this;}

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline BatchGetFrameMetricDataRequest& WithPeriod(Aws::String&& value) { SetPeriod(std::move(value)); return *this;}

    /**
     * <p> The duration of the frame metrics used to return the time series values.
     * Specify using the ISO 8601 format. The maximum period duration is one day
     * (<code>PT24H</code> or <code>P1D</code>). </p>
     */
    inline BatchGetFrameMetricDataRequest& WithPeriod(const char* value) { SetPeriod(value); return *this;}


    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the profiling group associated with the the frame metrics used
     * to return the time series values. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the time period for the frame metrics used to return the
     * time series values. This is specified using the ISO 8601 format. For example,
     * 2020-06-01T13:15:02.001Z represents 1 millisecond past June 1, 2020 1:15:02 PM
     * UTC. </p>
     */
    inline BatchGetFrameMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline const AggregationPeriod& GetTargetResolution() const{ return m_targetResolution; }

    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline bool TargetResolutionHasBeenSet() const { return m_targetResolutionHasBeenSet; }

    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline void SetTargetResolution(const AggregationPeriod& value) { m_targetResolutionHasBeenSet = true; m_targetResolution = value; }

    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline void SetTargetResolution(AggregationPeriod&& value) { m_targetResolutionHasBeenSet = true; m_targetResolution = std::move(value); }

    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline BatchGetFrameMetricDataRequest& WithTargetResolution(const AggregationPeriod& value) { SetTargetResolution(value); return *this;}

    /**
     * <p>The requested resolution of time steps for the returned time series of
     * values. If the requested target resolution is not available due to data not
     * being retained we provide a best effort result by falling back to the most
     * granular available resolution after the target resolution. There are 3 valid
     * values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li> <li> <p>
     * <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5 minutes
     * </p> </li> </ul>
     */
    inline BatchGetFrameMetricDataRequest& WithTargetResolution(AggregationPeriod&& value) { SetTargetResolution(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<FrameMetric> m_frameMetrics;
    bool m_frameMetricsHasBeenSet = false;

    Aws::String m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    AggregationPeriod m_targetResolution;
    bool m_targetResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
