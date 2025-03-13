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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/TimestampStructure.h>
#include <aws/codeguruprofiler/model/FrameMetricDatum.h>
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
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult() = default;
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API BatchGetFrameMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The end time of the time period for the returned time series values. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    BatchGetFrameMetricDataResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of instances, or time steps, in the time series. For example, if the
     * <code>period</code> is one day (<code>PT24H)</code>), and the
     * <code>resolution</code> is five minutes (<code>PT5M</code>), then there are 288
     * <code>endTimes</code> in the list that are each five minutes appart. </p>
     */
    inline const Aws::Vector<TimestampStructure>& GetEndTimes() const { return m_endTimes; }
    template<typename EndTimesT = Aws::Vector<TimestampStructure>>
    void SetEndTimes(EndTimesT&& value) { m_endTimesHasBeenSet = true; m_endTimes = std::forward<EndTimesT>(value); }
    template<typename EndTimesT = Aws::Vector<TimestampStructure>>
    BatchGetFrameMetricDataResult& WithEndTimes(EndTimesT&& value) { SetEndTimes(std::forward<EndTimesT>(value)); return *this;}
    template<typename EndTimesT = TimestampStructure>
    BatchGetFrameMetricDataResult& AddEndTimes(EndTimesT&& value) { m_endTimesHasBeenSet = true; m_endTimes.emplace_back(std::forward<EndTimesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details of the metrics to request a time series of values. The metric
     * includes the name of the frame, the aggregation type to calculate the metric
     * value for the frame, and the thread states to use to get the count for the
     * metric value of the frame.</p>
     */
    inline const Aws::Vector<FrameMetricDatum>& GetFrameMetricData() const { return m_frameMetricData; }
    template<typename FrameMetricDataT = Aws::Vector<FrameMetricDatum>>
    void SetFrameMetricData(FrameMetricDataT&& value) { m_frameMetricDataHasBeenSet = true; m_frameMetricData = std::forward<FrameMetricDataT>(value); }
    template<typename FrameMetricDataT = Aws::Vector<FrameMetricDatum>>
    BatchGetFrameMetricDataResult& WithFrameMetricData(FrameMetricDataT&& value) { SetFrameMetricData(std::forward<FrameMetricDataT>(value)); return *this;}
    template<typename FrameMetricDataT = FrameMetricDatum>
    BatchGetFrameMetricDataResult& AddFrameMetricData(FrameMetricDataT&& value) { m_frameMetricDataHasBeenSet = true; m_frameMetricData.emplace_back(std::forward<FrameMetricDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Resolution or granularity of the profile data used to generate the time
     * series. This is the value used to jump through time steps in a time series.
     * There are 3 valid values. </p> <ul> <li> <p> <code>P1D</code> — 1 day </p> </li>
     * <li> <p> <code>PT1H</code> — 1 hour </p> </li> <li> <p> <code>PT5M</code> — 5
     * minutes </p> </li> </ul>
     */
    inline AggregationPeriod GetResolution() const { return m_resolution; }
    inline void SetResolution(AggregationPeriod value) { m_resolutionHasBeenSet = true; m_resolution = value; }
    inline BatchGetFrameMetricDataResult& WithResolution(AggregationPeriod value) { SetResolution(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The start time of the time period for the returned time series values. This
     * is specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    BatchGetFrameMetricDataResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of instances which remained unprocessed. This will create a missing time
     * step in the list of end times.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>& GetUnprocessedEndTimes() const { return m_unprocessedEndTimes; }
    template<typename UnprocessedEndTimesT = Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>>
    void SetUnprocessedEndTimes(UnprocessedEndTimesT&& value) { m_unprocessedEndTimesHasBeenSet = true; m_unprocessedEndTimes = std::forward<UnprocessedEndTimesT>(value); }
    template<typename UnprocessedEndTimesT = Aws::Map<Aws::String, Aws::Vector<TimestampStructure>>>
    BatchGetFrameMetricDataResult& WithUnprocessedEndTimes(UnprocessedEndTimesT&& value) { SetUnprocessedEndTimes(std::forward<UnprocessedEndTimesT>(value)); return *this;}
    template<typename UnprocessedEndTimesKeyT = Aws::String, typename UnprocessedEndTimesValueT = Aws::Vector<TimestampStructure>>
    BatchGetFrameMetricDataResult& AddUnprocessedEndTimes(UnprocessedEndTimesKeyT&& key, UnprocessedEndTimesValueT&& value) {
      m_unprocessedEndTimesHasBeenSet = true; m_unprocessedEndTimes.emplace(std::forward<UnprocessedEndTimesKeyT>(key), std::forward<UnprocessedEndTimesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFrameMetricDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<TimestampStructure> m_endTimes;
    bool m_endTimesHasBeenSet = false;

    Aws::Vector<FrameMetricDatum> m_frameMetricData;
    bool m_frameMetricDataHasBeenSet = false;

    AggregationPeriod m_resolution{AggregationPeriod::NOT_SET};
    bool m_resolutionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<TimestampStructure>> m_unprocessedEndTimes;
    bool m_unprocessedEndTimesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
