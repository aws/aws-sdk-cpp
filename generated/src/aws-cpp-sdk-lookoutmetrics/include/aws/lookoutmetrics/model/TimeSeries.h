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
    AWS_LOOKOUTMETRICS_API TimeSeries();
    AWS_LOOKOUTMETRICS_API TimeSeries(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API TimeSeries& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the metric.</p>
     */
    inline const Aws::String& GetTimeSeriesId() const{ return m_timeSeriesId; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline bool TimeSeriesIdHasBeenSet() const { return m_timeSeriesIdHasBeenSet; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(const Aws::String& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = value; }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(Aws::String&& value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId = std::move(value); }

    /**
     * <p>The ID of the metric.</p>
     */
    inline void SetTimeSeriesId(const char* value) { m_timeSeriesIdHasBeenSet = true; m_timeSeriesId.assign(value); }

    /**
     * <p>The ID of the metric.</p>
     */
    inline TimeSeries& WithTimeSeriesId(const Aws::String& value) { SetTimeSeriesId(value); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline TimeSeries& WithTimeSeriesId(Aws::String&& value) { SetTimeSeriesId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metric.</p>
     */
    inline TimeSeries& WithTimeSeriesId(const char* value) { SetTimeSeriesId(value); return *this;}


    /**
     * <p>The dimensions of the metric.</p>
     */
    inline const Aws::Vector<DimensionNameValue>& GetDimensionList() const{ return m_dimensionList; }

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline void SetDimensionList(const Aws::Vector<DimensionNameValue>& value) { m_dimensionListHasBeenSet = true; m_dimensionList = value; }

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline void SetDimensionList(Aws::Vector<DimensionNameValue>&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::move(value); }

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline TimeSeries& WithDimensionList(const Aws::Vector<DimensionNameValue>& value) { SetDimensionList(value); return *this;}

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline TimeSeries& WithDimensionList(Aws::Vector<DimensionNameValue>&& value) { SetDimensionList(std::move(value)); return *this;}

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline TimeSeries& AddDimensionList(const DimensionNameValue& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(value); return *this; }

    /**
     * <p>The dimensions of the metric.</p>
     */
    inline TimeSeries& AddDimensionList(DimensionNameValue&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(std::move(value)); return *this; }


    /**
     * <p>The values for the metric.</p>
     */
    inline const Aws::Vector<double>& GetMetricValueList() const{ return m_metricValueList; }

    /**
     * <p>The values for the metric.</p>
     */
    inline bool MetricValueListHasBeenSet() const { return m_metricValueListHasBeenSet; }

    /**
     * <p>The values for the metric.</p>
     */
    inline void SetMetricValueList(const Aws::Vector<double>& value) { m_metricValueListHasBeenSet = true; m_metricValueList = value; }

    /**
     * <p>The values for the metric.</p>
     */
    inline void SetMetricValueList(Aws::Vector<double>&& value) { m_metricValueListHasBeenSet = true; m_metricValueList = std::move(value); }

    /**
     * <p>The values for the metric.</p>
     */
    inline TimeSeries& WithMetricValueList(const Aws::Vector<double>& value) { SetMetricValueList(value); return *this;}

    /**
     * <p>The values for the metric.</p>
     */
    inline TimeSeries& WithMetricValueList(Aws::Vector<double>&& value) { SetMetricValueList(std::move(value)); return *this;}

    /**
     * <p>The values for the metric.</p>
     */
    inline TimeSeries& AddMetricValueList(double value) { m_metricValueListHasBeenSet = true; m_metricValueList.push_back(value); return *this; }

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
