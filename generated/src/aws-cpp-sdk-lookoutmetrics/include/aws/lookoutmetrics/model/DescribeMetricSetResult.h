/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutmetrics/model/TimestampColumn.h>
#include <aws/lookoutmetrics/model/Frequency.h>
#include <aws/lookoutmetrics/model/MetricSource.h>
#include <aws/lookoutmetrics/model/Metric.h>
#include <aws/lookoutmetrics/model/MetricSetDimensionFilter.h>
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
  class DescribeMetricSetResult
  {
  public:
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult();
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const{ return m_metricSetArn; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const Aws::String& value) { m_metricSetArn = value; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(Aws::String&& value) { m_metricSetArn = std::move(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetMetricSetArn(const char* value) { m_metricSetArn.assign(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetArn(const Aws::String& value) { SetMetricSetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetArn(Aws::String&& value) { SetMetricSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetArn(const char* value) { SetMetricSetArn(value); return *this;}


    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const{ return m_anomalyDetectorArn; }

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(const Aws::String& value) { m_anomalyDetectorArn = value; }

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(Aws::String&& value) { m_anomalyDetectorArn = std::move(value); }

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline void SetAnomalyDetectorArn(const char* value) { m_anomalyDetectorArn.assign(value); }

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline DescribeMetricSetResult& WithAnomalyDetectorArn(const Aws::String& value) { SetAnomalyDetectorArn(value); return *this;}

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline DescribeMetricSetResult& WithAnomalyDetectorArn(Aws::String&& value) { SetAnomalyDetectorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline DescribeMetricSetResult& WithAnomalyDetectorArn(const char* value) { SetAnomalyDetectorArn(value); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetName() const{ return m_metricSetName; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(const Aws::String& value) { m_metricSetName = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(Aws::String&& value) { m_metricSetName = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetMetricSetName(const char* value) { m_metricSetName.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetName(const Aws::String& value) { SetMetricSetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetName(Aws::String&& value) { SetMetricSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetName(const char* value) { SetMetricSetName(value); return *this;}


    /**
     * <p>The dataset's description.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const{ return m_metricSetDescription; }

    /**
     * <p>The dataset's description.</p>
     */
    inline void SetMetricSetDescription(const Aws::String& value) { m_metricSetDescription = value; }

    /**
     * <p>The dataset's description.</p>
     */
    inline void SetMetricSetDescription(Aws::String&& value) { m_metricSetDescription = std::move(value); }

    /**
     * <p>The dataset's description.</p>
     */
    inline void SetMetricSetDescription(const char* value) { m_metricSetDescription.assign(value); }

    /**
     * <p>The dataset's description.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetDescription(const Aws::String& value) { SetMetricSetDescription(value); return *this;}

    /**
     * <p>The dataset's description.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetDescription(Aws::String&& value) { SetMetricSetDescription(std::move(value)); return *this;}

    /**
     * <p>The dataset's description.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetDescription(const char* value) { SetMetricSetDescription(value); return *this;}


    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline DescribeMetricSetResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline DescribeMetricSetResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline DescribeMetricSetResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline DescribeMetricSetResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


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
    inline void SetOffset(int value) { m_offset = value; }

    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline DescribeMetricSetResult& WithOffset(int value) { SetOffset(value); return *this;}


    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const{ return m_metricList; }

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline void SetMetricList(const Aws::Vector<Metric>& value) { m_metricList = value; }

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline void SetMetricList(Aws::Vector<Metric>&& value) { m_metricList = std::move(value); }

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricList(const Aws::Vector<Metric>& value) { SetMetricList(value); return *this;}

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline DescribeMetricSetResult& WithMetricList(Aws::Vector<Metric>&& value) { SetMetricList(std::move(value)); return *this;}

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline DescribeMetricSetResult& AddMetricList(const Metric& value) { m_metricList.push_back(value); return *this; }

    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline DescribeMetricSetResult& AddMetricList(Metric&& value) { m_metricList.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const{ return m_timestampColumn; }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline void SetTimestampColumn(const TimestampColumn& value) { m_timestampColumn = value; }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline void SetTimestampColumn(TimestampColumn&& value) { m_timestampColumn = std::move(value); }

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline DescribeMetricSetResult& WithTimestampColumn(const TimestampColumn& value) { SetTimestampColumn(value); return *this;}

    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline DescribeMetricSetResult& WithTimestampColumn(TimestampColumn&& value) { SetTimestampColumn(std::move(value)); return *this;}


    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const{ return m_dimensionList; }

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline void SetDimensionList(const Aws::Vector<Aws::String>& value) { m_dimensionList = value; }

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline void SetDimensionList(Aws::Vector<Aws::String>&& value) { m_dimensionList = std::move(value); }

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline DescribeMetricSetResult& WithDimensionList(const Aws::Vector<Aws::String>& value) { SetDimensionList(value); return *this;}

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline DescribeMetricSetResult& WithDimensionList(Aws::Vector<Aws::String>&& value) { SetDimensionList(std::move(value)); return *this;}

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline DescribeMetricSetResult& AddDimensionList(const Aws::String& value) { m_dimensionList.push_back(value); return *this; }

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline DescribeMetricSetResult& AddDimensionList(Aws::String&& value) { m_dimensionList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline DescribeMetricSetResult& AddDimensionList(const char* value) { m_dimensionList.push_back(value); return *this; }


    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline const Frequency& GetMetricSetFrequency() const{ return m_metricSetFrequency; }

    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline void SetMetricSetFrequency(const Frequency& value) { m_metricSetFrequency = value; }

    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline void SetMetricSetFrequency(Frequency&& value) { m_metricSetFrequency = std::move(value); }

    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetFrequency(const Frequency& value) { SetMetricSetFrequency(value); return *this;}

    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline DescribeMetricSetResult& WithMetricSetFrequency(Frequency&& value) { SetMetricSetFrequency(std::move(value)); return *this;}


    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezone = value; }

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezone = std::move(value); }

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline void SetTimezone(const char* value) { m_timezone.assign(value); }

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline DescribeMetricSetResult& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline DescribeMetricSetResult& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline DescribeMetricSetResult& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline const MetricSource& GetMetricSource() const{ return m_metricSource; }

    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline void SetMetricSource(const MetricSource& value) { m_metricSource = value; }

    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline void SetMetricSource(MetricSource&& value) { m_metricSource = std::move(value); }

    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline DescribeMetricSetResult& WithMetricSource(const MetricSource& value) { SetMetricSource(value); return *this;}

    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline DescribeMetricSetResult& WithMetricSource(MetricSource&& value) { SetMetricSource(std::move(value)); return *this;}


    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const{ return m_dimensionFilterList; }

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline void SetDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { m_dimensionFilterList = value; }

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline void SetDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { m_dimensionFilterList = std::move(value); }

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline DescribeMetricSetResult& WithDimensionFilterList(const Aws::Vector<MetricSetDimensionFilter>& value) { SetDimensionFilterList(value); return *this;}

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline DescribeMetricSetResult& WithDimensionFilterList(Aws::Vector<MetricSetDimensionFilter>&& value) { SetDimensionFilterList(std::move(value)); return *this;}

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline DescribeMetricSetResult& AddDimensionFilterList(const MetricSetDimensionFilter& value) { m_dimensionFilterList.push_back(value); return *this; }

    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline DescribeMetricSetResult& AddDimensionFilterList(MetricSetDimensionFilter&& value) { m_dimensionFilterList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_metricSetArn;

    Aws::String m_anomalyDetectorArn;

    Aws::String m_metricSetName;

    Aws::String m_metricSetDescription;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    int m_offset;

    Aws::Vector<Metric> m_metricList;

    TimestampColumn m_timestampColumn;

    Aws::Vector<Aws::String> m_dimensionList;

    Frequency m_metricSetFrequency;

    Aws::String m_timezone;

    MetricSource m_metricSource;

    Aws::Vector<MetricSetDimensionFilter> m_dimensionFilterList;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
