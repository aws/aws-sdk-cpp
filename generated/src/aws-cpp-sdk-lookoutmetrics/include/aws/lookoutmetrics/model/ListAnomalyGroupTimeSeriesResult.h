/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/TimeSeries.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class ListAnomalyGroupTimeSeriesResult
  {
  public:
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult() = default;
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API ListAnomalyGroupTimeSeriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the anomaly group.</p>
     */
    inline const Aws::String& GetAnomalyGroupId() const { return m_anomalyGroupId; }
    template<typename AnomalyGroupIdT = Aws::String>
    void SetAnomalyGroupId(AnomalyGroupIdT&& value) { m_anomalyGroupIdHasBeenSet = true; m_anomalyGroupId = std::forward<AnomalyGroupIdT>(value); }
    template<typename AnomalyGroupIdT = Aws::String>
    ListAnomalyGroupTimeSeriesResult& WithAnomalyGroupId(AnomalyGroupIdT&& value) { SetAnomalyGroupId(std::forward<AnomalyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the measure field.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    ListAnomalyGroupTimeSeriesResult& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamps for the anomalous metrics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTimestampList() const { return m_timestampList; }
    template<typename TimestampListT = Aws::Vector<Aws::String>>
    void SetTimestampList(TimestampListT&& value) { m_timestampListHasBeenSet = true; m_timestampList = std::forward<TimestampListT>(value); }
    template<typename TimestampListT = Aws::Vector<Aws::String>>
    ListAnomalyGroupTimeSeriesResult& WithTimestampList(TimestampListT&& value) { SetTimestampList(std::forward<TimestampListT>(value)); return *this;}
    template<typename TimestampListT = Aws::String>
    ListAnomalyGroupTimeSeriesResult& AddTimestampList(TimestampListT&& value) { m_timestampListHasBeenSet = true; m_timestampList.emplace_back(std::forward<TimestampListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomalyGroupTimeSeriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of anomalous metrics.</p>
     */
    inline const Aws::Vector<TimeSeries>& GetTimeSeriesList() const { return m_timeSeriesList; }
    template<typename TimeSeriesListT = Aws::Vector<TimeSeries>>
    void SetTimeSeriesList(TimeSeriesListT&& value) { m_timeSeriesListHasBeenSet = true; m_timeSeriesList = std::forward<TimeSeriesListT>(value); }
    template<typename TimeSeriesListT = Aws::Vector<TimeSeries>>
    ListAnomalyGroupTimeSeriesResult& WithTimeSeriesList(TimeSeriesListT&& value) { SetTimeSeriesList(std::forward<TimeSeriesListT>(value)); return *this;}
    template<typename TimeSeriesListT = TimeSeries>
    ListAnomalyGroupTimeSeriesResult& AddTimeSeriesList(TimeSeriesListT&& value) { m_timeSeriesListHasBeenSet = true; m_timeSeriesList.emplace_back(std::forward<TimeSeriesListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomalyGroupTimeSeriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_anomalyGroupId;
    bool m_anomalyGroupIdHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_timestampList;
    bool m_timestampListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TimeSeries> m_timeSeriesList;
    bool m_timeSeriesListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
