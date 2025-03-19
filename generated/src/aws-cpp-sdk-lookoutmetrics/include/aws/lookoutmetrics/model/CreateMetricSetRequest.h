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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateMetricSetRequest : public LookoutMetricsRequest
  {
  public:
    AWS_LOOKOUTMETRICS_API CreateMetricSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMetricSet"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    CreateMetricSetRequest& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetName() const { return m_metricSetName; }
    inline bool MetricSetNameHasBeenSet() const { return m_metricSetNameHasBeenSet; }
    template<typename MetricSetNameT = Aws::String>
    void SetMetricSetName(MetricSetNameT&& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = std::forward<MetricSetNameT>(value); }
    template<typename MetricSetNameT = Aws::String>
    CreateMetricSetRequest& WithMetricSetName(MetricSetNameT&& value) { SetMetricSetName(std::forward<MetricSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const { return m_metricSetDescription; }
    inline bool MetricSetDescriptionHasBeenSet() const { return m_metricSetDescriptionHasBeenSet; }
    template<typename MetricSetDescriptionT = Aws::String>
    void SetMetricSetDescription(MetricSetDescriptionT&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::forward<MetricSetDescriptionT>(value); }
    template<typename MetricSetDescriptionT = Aws::String>
    CreateMetricSetRequest& WithMetricSetDescription(MetricSetDescriptionT&& value) { SetMetricSetDescription(std::forward<MetricSetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const { return m_metricList; }
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }
    template<typename MetricListT = Aws::Vector<Metric>>
    void SetMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList = std::forward<MetricListT>(value); }
    template<typename MetricListT = Aws::Vector<Metric>>
    CreateMetricSetRequest& WithMetricList(MetricListT&& value) { SetMetricList(std::forward<MetricListT>(value)); return *this;}
    template<typename MetricListT = Metric>
    CreateMetricSetRequest& AddMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList.emplace_back(std::forward<MetricListT>(value)); return *this; }
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
    inline CreateMetricSetRequest& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const { return m_timestampColumn; }
    inline bool TimestampColumnHasBeenSet() const { return m_timestampColumnHasBeenSet; }
    template<typename TimestampColumnT = TimestampColumn>
    void SetTimestampColumn(TimestampColumnT&& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = std::forward<TimestampColumnT>(value); }
    template<typename TimestampColumnT = TimestampColumn>
    CreateMetricSetRequest& WithTimestampColumn(TimestampColumnT&& value) { SetTimestampColumn(std::forward<TimestampColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const { return m_dimensionList; }
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    void SetDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::forward<DimensionListT>(value); }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    CreateMetricSetRequest& WithDimensionList(DimensionListT&& value) { SetDimensionList(std::forward<DimensionListT>(value)); return *this;}
    template<typename DimensionListT = Aws::String>
    CreateMetricSetRequest& AddDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.emplace_back(std::forward<DimensionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline Frequency GetMetricSetFrequency() const { return m_metricSetFrequency; }
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }
    inline void SetMetricSetFrequency(Frequency value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }
    inline CreateMetricSetRequest& WithMetricSetFrequency(Frequency value) { SetMetricSetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline const MetricSource& GetMetricSource() const { return m_metricSource; }
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }
    template<typename MetricSourceT = MetricSource>
    void SetMetricSource(MetricSourceT&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::forward<MetricSourceT>(value); }
    template<typename MetricSourceT = MetricSource>
    CreateMetricSetRequest& WithMetricSource(MetricSourceT&& value) { SetMetricSource(std::forward<MetricSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    CreateMetricSetRequest& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateMetricSetRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateMetricSetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const { return m_dimensionFilterList; }
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    void SetDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::forward<DimensionFilterListT>(value); }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    CreateMetricSetRequest& WithDimensionFilterList(DimensionFilterListT&& value) { SetDimensionFilterList(std::forward<DimensionFilterListT>(value)); return *this;}
    template<typename DimensionFilterListT = MetricSetDimensionFilter>
    CreateMetricSetRequest& AddDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.emplace_back(std::forward<DimensionFilterListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_metricSetName;
    bool m_metricSetNameHasBeenSet = false;

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

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<MetricSetDimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
