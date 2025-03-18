/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/LookoutMetricsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/TimestampColumn.h>
#include <aws/lookoutmetrics/model/Frequency.h>
#include <aws/lookoutmetrics/model/MetricSource.h>
#include <aws/lookoutmetrics/model/Metric.h>
#include <aws/lookoutmetrics/model/MetricSetDimensionFilter.h>
#include <utility>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

  /**
   */
  class UpdateMetricSetRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API UpdateMetricSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMetricSet"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the dataset to update.</p>
     */
    inline const Aws::String& GetMetricSetArn() const { return m_metricSetArn; }
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }
    template<typename MetricSetArnT = Aws::String>
    void SetMetricSetArn(MetricSetArnT&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::forward<MetricSetArnT>(value); }
    template<typename MetricSetArnT = Aws::String>
    UpdateMetricSetRequest& WithMetricSetArn(MetricSetArnT&& value) { SetMetricSetArn(std::forward<MetricSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's description.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const { return m_metricSetDescription; }
    inline bool MetricSetDescriptionHasBeenSet() const { return m_metricSetDescriptionHasBeenSet; }
    template<typename MetricSetDescriptionT = Aws::String>
    void SetMetricSetDescription(MetricSetDescriptionT&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::forward<MetricSetDescriptionT>(value); }
    template<typename MetricSetDescriptionT = Aws::String>
    UpdateMetricSetRequest& WithMetricSetDescription(MetricSetDescriptionT&& value) { SetMetricSetDescription(std::forward<MetricSetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric list.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const { return m_metricList; }
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }
    template<typename MetricListT = Aws::Vector<Metric>>
    void SetMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList = std::forward<MetricListT>(value); }
    template<typename MetricListT = Aws::Vector<Metric>>
    UpdateMetricSetRequest& WithMetricList(MetricListT&& value) { SetMetricList(std::forward<MetricListT>(value)); return *this;}
    template<typename MetricListT = Metric>
    UpdateMetricSetRequest& AddMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList.emplace_back(std::forward<MetricListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline UpdateMetricSetRequest& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp column.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const { return m_timestampColumn; }
    inline bool TimestampColumnHasBeenSet() const { return m_timestampColumnHasBeenSet; }
    template<typename TimestampColumnT = TimestampColumn>
    void SetTimestampColumn(TimestampColumnT&& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = std::forward<TimestampColumnT>(value); }
    template<typename TimestampColumnT = TimestampColumn>
    UpdateMetricSetRequest& WithTimestampColumn(TimestampColumnT&& value) { SetTimestampColumn(std::forward<TimestampColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const { return m_dimensionList; }
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    void SetDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::forward<DimensionListT>(value); }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    UpdateMetricSetRequest& WithDimensionList(DimensionListT&& value) { SetDimensionList(std::forward<DimensionListT>(value)); return *this;}
    template<typename DimensionListT = Aws::String>
    UpdateMetricSetRequest& AddDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.emplace_back(std::forward<DimensionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dataset's interval.</p>
     */
    inline Frequency GetMetricSetFrequency() const { return m_metricSetFrequency; }
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }
    inline void SetMetricSetFrequency(Frequency value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }
    inline UpdateMetricSetRequest& WithMetricSetFrequency(Frequency value) { SetMetricSetFrequency(value); return *this;}
    ///@}

    ///@{
    
    inline const MetricSource& GetMetricSource() const { return m_metricSource; }
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }
    template<typename MetricSourceT = MetricSource>
    void SetMetricSource(MetricSourceT&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::forward<MetricSourceT>(value); }
    template<typename MetricSourceT = MetricSource>
    UpdateMetricSetRequest& WithMetricSource(MetricSourceT&& value) { SetMetricSource(std::forward<MetricSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a list of filters for choosing specific dimensions and specific
     * values. Each filter consists of the dimension and one of its values that you
     * want to include. When multiple dimensions or values are specified, the
     * dimensions are joined with an AND operation and the values are joined with an OR
     * operation.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const { return m_dimensionFilterList; }
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    void SetDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::forward<DimensionFilterListT>(value); }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    UpdateMetricSetRequest& WithDimensionFilterList(DimensionFilterListT&& value) { SetDimensionFilterList(std::forward<DimensionFilterListT>(value)); return *this;}
    template<typename DimensionFilterListT = MetricSetDimensionFilter>
    UpdateMetricSetRequest& AddDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.emplace_back(std::forward<DimensionFilterListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::String m_metricSetDescription;
    bool m_metricSetDescriptionHasBeenSet = false;

    Aws::Vector<Metric> m_metricList;
    bool m_metricListHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;

    TimestampColumn m_timestampColumn;
    bool m_timestampColumnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionList;
    bool m_dimensionListHasBeenSet = false;

    Frequency m_metricSetFrequency{Frequency::NOT_SET};
    bool m_metricSetFrequencyHasBeenSet = false;

    MetricSource m_metricSource;
    bool m_metricSourceHasBeenSet = false;

    Aws::Vector<MetricSetDimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
