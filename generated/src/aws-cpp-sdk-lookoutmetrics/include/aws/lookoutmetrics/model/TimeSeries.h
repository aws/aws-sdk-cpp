/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/DimensionNameValue.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Details about a metric. A metric is an aggregation of the values of a measure
   * for a dimension value, such as <i>availability</i> in the <i>us-east-1</i>
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/TimeSeries">AWS
   * API Reference</a></p>
   */
  class TimeSeries
  {
  public:
    AWS_LOOKOUTMETRICS_API TimeSeries() = default;
    AWS_LOOKOUTMETRICS_API TimeSeries(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API TimeSeries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the metric.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const { return m_timeSeriesId; }
    inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }
    template<typename TimeSeriesIdT = Aws::String>
    void SetTimeSeriesId(TimeSeriesIdT&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::forward<TimeSeriesIdT>(value); }
    template<typename TimeSeriesIdT = Aws::String>
    TimeSeries& WithTimeSeriesId(TimeSeriesIdT&& value) { SetTimeSeriesId(std::forward<TimeSeriesIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions of the metric.</p>
     */
    inline const Aws::Vector<DimensionNameValue>& GetDimensionList() const { return m_dimensionList; }
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }
    template<typename DimensionListT = Aws::Vector<DimensionNameValue>>
    void SetDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::forward<DimensionListT>(value); }
    template<typename DimensionListT = Aws::Vector<DimensionNameValue>>
    TimeSeries& WithDimensionList(DimensionListT&& value) { SetDimensionList(std::forward<DimensionListT>(value)); return *this;}
    template<typename DimensionListT = DimensionNameValue>
    TimeSeries& AddDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.emplace_back(std::forward<DimensionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The values for the metric.</p>
     */
    inline const Aws::Vector<double>& GetMetricValueList() const { return m_metricValueList; }
    inline bool MetricValueListHasBeenSet() const { return m_metricValueListHasBeenSet; }
    template<typename MetricValueListT = Aws::Vector<double>>
    void SetMetricValueList(MetricValueListT&& value) { m_metricValueListHasBeenSet = true; m_metricValueList = std::forward<MetricValueListT>(value); }
    template<typename MetricValueListT = Aws::Vector<double>>
    TimeSeries& WithMetricValueList(MetricValueListT&& value) { SetMetricValueList(std::forward<MetricValueListT>(value)); return *this;}
    inline TimeSeries& AddMetricValueList(double value) { m_metricValueListHasBeenSet = true; m_metricValueList.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_timeSeriesId;
    bool m_timeSeriesIdHasBeenSet = false;

    Aws::Vector<DimensionNameValue> m_dimensionList;
    bool m_dimensionListHasBeenSet = false;

    Aws::Vector<double> m_metricValueList;
    bool m_metricValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
