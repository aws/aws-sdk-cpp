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
    AWS_LOOKOUTMETRICS_API UpdateMetricSetRequest();

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
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }
    inline bool MetricSetArnHasBeenSet() const { return m_metricSetArnHasBeenSet; }
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = value; }
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::move(value); }
    inline void SetMetricSetArn(const char* value) { m_metricSetArnHasBeenSet = true; m_metricSetArn.assign(value); }
    inline UpdateMetricSetRequest& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}
    inline UpdateMetricSetRequest& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}
    inline UpdateMetricSetRequest& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's description.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const{ return m_metricSetDescription; }
    inline bool MetricSetDescriptionHasBeenSet() const { return m_metricSetDescriptionHasBeenSet; }
    inline void SetMetricSetDescription(const Aws::String& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = value; }
    inline void SetMetricSetDescription(Aws::String&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::move(value); }
    inline void SetMetricSetDescription(const char* value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription.assign(value); }
    inline UpdateMetricSetRequest& WithMetricSetDescription(const Aws::String& value) { SetMetricSetDescription(value); return *this;}
    inline UpdateMetricSetRequest& WithMetricSetDescription(Aws::String&& value) { SetMetricSetDescription(std::move(value)); return *this;}
    inline UpdateMetricSetRequest& WithMetricSetDescription(const char* value) { SetMetricSetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric list.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const{ return m_metricList; }
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }
    inline void SetMetricList(const Aws::Vector<Metric>& value) { m_metricListHasBeenSet = true; m_metricList = value; }
    inline void SetMetricList(Aws::Vector<Metric>&& value) { m_metricListHasBeenSet = true; m_metricList = std::move(value); }
    inline UpdateMetricSetRequest& WithMetricList(const Aws::Vector<Metric>& value) { SetMetricList(value); return *this;}
    inline UpdateMetricSetRequest& WithMetricList(Aws::Vector<Metric>&& value) { SetMetricList(std::move(value)); return *this;}
    inline UpdateMetricSetRequest& AddMetricList(const Metric& value) { m_metricListHasBeenSet = true; m_metricList.push_back(value); return *this; }
    inline UpdateMetricSetRequest& AddMetricList(Metric&& value) { m_metricListHasBeenSet = true; m_metricList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline int GetOffset() const{ return m_offset; }
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline UpdateMetricSetRequest& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp column.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const{ return m_timestampColumn; }
    inline bool TimestampColumnHasBeenSet() const { return m_timestampColumnHasBeenSet; }
    inline void SetTimestampColumn(const TimestampColumn& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = value; }
    inline void SetTimestampColumn(TimestampColumn&& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = std::move(value); }
    inline UpdateMetricSetRequest& WithTimestampColumn(const TimestampColumn& value) { SetTimestampColumn(value); return *this;}
    inline UpdateMetricSetRequest& WithTimestampColumn(TimestampColumn&& value) { SetTimestampColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const{ return m_dimensionList; }
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }
    inline void SetDimensionList(const Aws::Vector<Aws::String>& value) { m_dimensionListHasBeenSet = true; m_dimensionList = value; }
    inline void SetDimensionList(Aws::Vector<Aws::String>&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::move(value); }
    inline UpdateMetricSetRequest& WithDimensionList(const Aws::Vector<Aws::String>& value) { SetDimensionList(value); return *this;}
    inline UpdateMetricSetRequest& WithDimensionList(Aws::Vector<Aws::String>&& value) { SetDimensionList(std::move(value)); return *this;}
    inline UpdateMetricSetRequest& AddDimensionList(const Aws::String& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(value); return *this; }
    inline UpdateMetricSetRequest& AddDimensionList(Aws::String&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(std::move(value)); return *this; }
    inline UpdateMetricSetRequest& AddDimensionList(const char* value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The dataset's interval.</p>
     */
    inline const Frequency& GetMetricSetFrequency() const{ return m_metricSetFrequency; }
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }
    inline void SetMetricSetFrequency(const Frequency& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }
    inline void SetMetricSetFrequency(Frequency&& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = std::move(value); }
    inline UpdateMetricSetRequest& WithMetricSetFrequency(const Frequency& value) { SetMetricSetFrequency(value); return *this;}
    inline UpdateMetricSetRequest& WithMetricSetFrequency(Frequency&& value) { SetMetricSetFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetricSource& GetMetricSource() const{ return m_metricSource; }
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }
    inline void SetMetricSource(const MetricSource& value) { m_metricSourceHasBeenSet = true; m_metricSource = value; }
    inline void SetMetricSource(MetricSource&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::move(value); }
    inline UpdateMetricSetRequest& WithMetricSource(const MetricSource& value) { SetMetricSource(value); return *this;}
    inline UpdateMetricSetRequest& WithMetricSource(MetricSource&& value) { SetMetricSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes a list of filters for choosing specific dimensions and specific
     * values. Each filter consists of the dimension and one of its values that you
     * want to include. When multiple dimensions or values are specified, the
     * dimensions are joined with an AND operation and the values are joined with an OR
     * operation.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const{ return m_dimensionFilterList; }
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }
    inline void SetDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = value; }
    inline void SetDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::move(value); }
    inline UpdateMetricSetRequest& WithDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { SetDimensionFilterList(value); return *this;}
    inline UpdateMetricSetRequest& WithDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { SetDimensionFilterList(std::move(value)); return *this;}
    inline UpdateMetricSetRequest& AddDimensionFilterList(const MetricSetDimensionFilter& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(value); return *this; }
    inline UpdateMetricSetRequest& AddDimensionFilterList(MetricSetDimensionFilter&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::String m_metricSetDescription;
    bool m_metricSetDescriptionHasBeenSet = false;

    Aws::Vector<Metric> m_metricList;
    bool m_metricListHasBeenSet = false;

    int m_offset;
    bool m_offsetHasBeenSet = false;

    TimestampColumn m_timestampColumn;
    bool m_timestampColumnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionList;
    bool m_dimensionListHasBeenSet = false;

    Frequency m_metricSetFrequency;
    bool m_metricSetFrequencyHasBeenSet = false;

    MetricSource m_metricSource;
    bool m_metricSourceHasBeenSet = false;

    Aws::Vector<MetricSetDimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
