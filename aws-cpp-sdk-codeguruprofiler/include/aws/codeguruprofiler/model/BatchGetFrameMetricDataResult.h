/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/AggregationPeriod.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codeguruprofiler/model/TimestampStructure.h>
#include <aws/codeguruprofiler/model/FrameMetricDatum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the BatchGetFrameMetricDataResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/BatchGetFrameMetricDataResponse">AWS
   * API Reference</a></p>
   */
  class BatchGetFrameMetricDataResult
  {
  public:
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult();
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline const Aws::Vector<TimestampStructure>& GetEndTimes() const{ return m_endTimes; }

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline void SetEndTimes(const Aws::Vector<TimestampStructure>& value) { m_endTimes = value; }

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline void SetEndTimes(Aws::Vector<TimestampStructure>&& value) { m_endTimes = std::move(value); }

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline BatchGetFrameMetricDataResult& WithEndTimes(const Aws::Vector<TimestampStructure>& value) { SetEndTimes(value); return *this;}

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline BatchGetFrameMetricDataResult& WithEndTimes(Aws::Vector<TimestampStructure>&& value) { SetEndTimes(std::move(value)); return *this;}

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline BatchGetFrameMetricDataResult& AddEndTimes(const TimestampStructure& value) { m_endTimes.push_back(value); return *this; }

    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline BatchGetFrameMetricDataResult& AddEndTimes(TimestampStructure&& value) { m_endTimes.push_back(std::move(value)); return *this; }


    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline const Aws::Vector<FrameMetricDatum>& GetFrameMetricData() const{ return m_frameMetricData; }

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline void SetFrameMetricData(const Aws::Vector<FrameMetricDatum>& value) { m_frameMetricData = value; }

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline void SetFrameMetricData(Aws::Vector<FrameMetricDatum>&& value) { m_frameMetricData = std::move(value); }

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataResult& WithFrameMetricData(const Aws::Vector<FrameMetricDatum>& value) { SetFrameMetricData(value); return *this;}

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataResult& WithFrameMetricData(Aws::Vector<FrameMetricDatum>&& value) { SetFrameMetricData(std::move(value)); return *this;}

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataResult& AddFrameMetricData(const FrameMetricDatum& value) { m_frameMetricData.push_back(value); return *this; }

    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline BatchGetFrameMetricDataResult& AddFrameMetricData(FrameMetricDatum&& value) { m_frameMetricData.push_back(std::move(value)); return *this; }


    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline const AggregationPeriod& GetResolution() const{ return m_resolution; }

    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline void SetResolution(const AggregationPeriod& value) { m_resolution = value; }

    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline void SetResolution(AggregationPeriod&& value) { m_resolution = std::move(value); }

    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline BatchGetFrameMetricDataResult& WithResolution(const AggregationPeriod& value) { SetResolution(value); return *this;}

    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline BatchGetFrameMetricDataResult& WithResolution(AggregationPeriod&& value) { SetResolution(std::move(value)); return *this;}


    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline BatchGetFrameMetricDataResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>& GetUnprocessedEndTimes() const{ return m_unprocessedEndTimes; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline void SetUnprocessedEndTimes(const Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>& value) { m_unprocessedEndTimes = value; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline void SetUnprocessedEndTimes(Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>&& value) { m_unprocessedEndTimes = std::move(value); }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& WithUnprocessedEndTimes(const Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>& value) { SetUnprocessedEndTimes(value); return *this;}

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& WithUnprocessedEndTimes(Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>&& value) { SetUnprocessedEndTimes(std::move(value)); return *this;}

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(const Aws::String& key, const Aws::Vector<TimestampStructure>& value) { m_unprocessedEndTimes.emplace(key, value); return *this; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(Aws::String&& key, const Aws::Vector<TimestampStructure>& value) { m_unprocessedEndTimes.emplace(std::move(key), value); return *this; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(const Aws::String& key, Aws::Vector<TimestampStructure>&& value) { m_unprocessedEndTimes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(Aws::String&& key, Aws::Vector<TimestampStructure>&& value) { m_unprocessedEndTimes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(const char* key, Aws::Vector<TimestampStructure>&& value) { m_unprocessedEndTimes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(const char* key, const Aws::Vector<TimestampStructure>& value) { m_unprocessedEndTimes.emplace(key, value); return *this; }

  private:

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<TimestampStructure> m_endTimes;

    Aws::Vector<FrameMetricDatum> m_frameMetricData;

    AggregationPeriod m_resolution;

    Aws::Utils::DateTime m_startTime;

    Aws::Map<Aws::String, Aws::Vector<TimestampStructure>> m_unprocessedEndTimes;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
