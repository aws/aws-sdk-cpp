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
    AWS_LOOKOUTMETRICS_API CreateMetricSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMetricSet"; }

    AWS_LOOKOUTMETRICS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline bool AnomalyDetectorArnHasBeenSet() const { return m_anomalyDetectorArnHasBeenSet; }

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline CreateMetricSetRequest& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline CreateMetricSetRequest& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the anomaly detector that will use the dataset.</p>
     */
    inline CreateMetricSetRequest& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetName() const{ return m_metricSetName; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline bool MetricSetNameHasBeenSet() const { return m_metricSetNameHasBeenSet; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(const Aws::String& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(Aws::String&& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(const char* value) { m_metricSetNameHasBeenSet = true; m_metricSetName.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetName(const Aws::String& value) { SetMetricSetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetName(Aws::String&& value) { SetMetricSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetName(const char* value) { SetMetricSetName(value); return *this;}


    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const{ return m_metricSetDescription; }

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline bool MetricSetDescriptionHasBeenSet() const { return m_metricSetDescriptionHasBeenSet; }

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline void SetMetricSetDescription(const Aws::String& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = value; }

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline void SetMetricSetDescription(Aws::String&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::move(value); }

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline void SetMetricSetDescription(const char* value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription.assign(value); }

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetDescription(const Aws::String& value) { SetMetricSetDescription(value); return *this;}

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetDescription(Aws::String&& value) { SetMetricSetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the dataset you are creating.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetDescription(const char* value) { SetMetricSetDescription(value); return *this;}


    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const{ return m_metricList; }

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline bool MetricListHasBeenSet() const { return m_metricListHasBeenSet; }

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline void SetMetricList(const Aws::Vector<Metric>& value) { m_metricListHasBeenSet = true; m_metricList = value; }

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline void SetMetricList(Aws::Vector<Metric>&& value) { m_metricListHasBeenSet = true; m_metricList = std::move(value); }

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline CreateMetricSetRequest& WithMetricList(const Aws::Vector<Metric>& value) { SetMetricList(value); return *this;}

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline CreateMetricSetRequest& WithMetricList(Aws::Vector<Metric>&& value) { SetMetricList(std::move(value)); return *this;}

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline CreateMetricSetRequest& AddMetricList(const Metric& value) { m_metricListHasBeenSet = true; m_metricList.push_back(value); return *this; }

    /**
     * <p>A list of metrics that the dataset will contain.</p>
     */
    inline CreateMetricSetRequest& AddMetricList(Metric&& value) { m_metricListHasBeenSet = true; m_metricList.push_back(std::move(value)); return *this; }


    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline int GetOffset() const{ return m_offset; }

    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline CreateMetricSetRequest& WithOffset(int value) { SetOffset(value); return *this;}


    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const{ return m_timestampColumn; }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline bool TimestampColumnHasBeenSet() const { return m_timestampColumnHasBeenSet; }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline void SetTimestampColumn(const TimestampColumn& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = value; }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline void SetTimestampColumn(TimestampColumn&& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = std::move(value); }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline CreateMetricSetRequest& WithTimestampColumn(const TimestampColumn& value) { SetTimestampColumn(value); return *this;}

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline CreateMetricSetRequest& WithTimestampColumn(TimestampColumn&& value) { SetTimestampColumn(std::move(value)); return *this;}


    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const{ return m_dimensionList; }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline bool DimensionListHasBeenSet() const { return m_dimensionListHasBeenSet; }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline void SetDimensionList(const Aws::Vector<Aws::String>& value) { m_dimensionListHasBeenSet = true; m_dimensionList = value; }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline void SetDimensionList(Aws::Vector<Aws::String>&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::move(value); }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline CreateMetricSetRequest& WithDimensionList(const Aws::Vector<Aws::String>& value) { SetDimensionList(value); return *this;}

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline CreateMetricSetRequest& WithDimensionList(Aws::Vector<Aws::String>&& value) { SetDimensionList(std::move(value)); return *this;}

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline CreateMetricSetRequest& AddDimensionList(const Aws::String& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(value); return *this; }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline CreateMetricSetRequest& AddDimensionList(Aws::String&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the fields you want to treat as dimensions.</p>
     */
    inline CreateMetricSetRequest& AddDimensionList(const char* value) { m_dimensionListHasBeenSet = true; m_dimensionList.push_back(value); return *this; }


    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline const Frequency& GetMetricSetFrequency() const{ return m_metricSetFrequency; }

    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline bool MetricSetFrequencyHasBeenSet() const { return m_metricSetFrequencyHasBeenSet; }

    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline void SetMetricSetFrequency(const Frequency& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }

    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline void SetMetricSetFrequency(Frequency&& value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = std::move(value); }

    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetFrequency(const Frequency& value) { SetMetricSetFrequency(value); return *this;}

    /**
     * <p>The frequency with which the source data will be analyzed for anomalies.</p>
     */
    inline CreateMetricSetRequest& WithMetricSetFrequency(Frequency&& value) { SetMetricSetFrequency(std::move(value)); return *this;}


    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline const MetricSource& GetMetricSource() const{ return m_metricSource; }

    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline bool MetricSourceHasBeenSet() const { return m_metricSourceHasBeenSet; }

    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline void SetMetricSource(const MetricSource& value) { m_metricSourceHasBeenSet = true; m_metricSource = value; }

    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline void SetMetricSource(MetricSource&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::move(value); }

    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline CreateMetricSetRequest& WithMetricSource(const MetricSource& value) { SetMetricSource(value); return *this;}

    /**
     * <p>Contains information about how the source data should be interpreted.</p>
     */
    inline CreateMetricSetRequest& WithMetricSource(MetricSource&& value) { SetMetricSource(std::move(value)); return *this;}


    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline CreateMetricSetRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline CreateMetricSetRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone in which your source data was recorded.</p>
     */
    inline CreateMetricSetRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev/detectors-tags.html">tags</a>
     * to apply to the dataset.</p>
     */
    inline CreateMetricSetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const{ return m_dimensionFilterList; }

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline bool DimensionFilterListHasBeenSet() const { return m_dimensionFilterListHasBeenSet; }

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline void SetDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = value; }

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline void SetDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::move(value); }

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline CreateMetricSetRequest& WithDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { SetDimensionFilterList(value); return *this;}

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline CreateMetricSetRequest& WithDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { SetDimensionFilterList(std::move(value)); return *this;}

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline CreateMetricSetRequest& AddDimensionFilterList(const MetricSetDimensionFilter& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(value); return *this; }

    /**
     * <p>A list of filters that specify which data is kept for anomaly detection.</p>
     */
    inline CreateMetricSetRequest& AddDimensionFilterList(MetricSetDimensionFilter&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_metricSetName;
    bool m_metricSetNameHasBeenSet = false;

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
