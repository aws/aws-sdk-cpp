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
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult() = default;
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API DescribeMetricSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetArn() const { return m_metricSetArn; }
    template<typename MetricSetArnT = Aws::String>
    void SetMetricSetArn(MetricSetArnT&& value) { m_metricSetArnHasBeenSet = true; m_metricSetArn = std::forward<MetricSetArnT>(value); }
    template<typename MetricSetArnT = Aws::String>
    DescribeMetricSetResult& WithMetricSetArn(MetricSetArnT&& value) { SetMetricSetArn(std::forward<MetricSetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the detector that contains the dataset.</p>
     */
    inline const Aws::String& GetAnomalyDetectorArn() const { return m_anomalyDetectorArn; }
    template<typename AnomalyDetectorArnT = Aws::String>
    void SetAnomalyDetectorArn(AnomalyDetectorArnT&& value) { m_anomalyDetectorArnHasBeenSet = true; m_anomalyDetectorArn = std::forward<AnomalyDetectorArnT>(value); }
    template<typename AnomalyDetectorArnT = Aws::String>
    DescribeMetricSetResult& WithAnomalyDetectorArn(AnomalyDetectorArnT&& value) { SetAnomalyDetectorArn(std::forward<AnomalyDetectorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetMetricSetName() const { return m_metricSetName; }
    template<typename MetricSetNameT = Aws::String>
    void SetMetricSetName(MetricSetNameT&& value) { m_metricSetNameHasBeenSet = true; m_metricSetName = std::forward<MetricSetNameT>(value); }
    template<typename MetricSetNameT = Aws::String>
    DescribeMetricSetResult& WithMetricSetName(MetricSetNameT&& value) { SetMetricSetName(std::forward<MetricSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset's description.</p>
     */
    inline const Aws::String& GetMetricSetDescription() const { return m_metricSetDescription; }
    template<typename MetricSetDescriptionT = Aws::String>
    void SetMetricSetDescription(MetricSetDescriptionT&& value) { m_metricSetDescriptionHasBeenSet = true; m_metricSetDescription = std::forward<MetricSetDescriptionT>(value); }
    template<typename MetricSetDescriptionT = Aws::String>
    DescribeMetricSetResult& WithMetricSetDescription(MetricSetDescriptionT&& value) { SetMetricSetDescription(std::forward<MetricSetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeMetricSetResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the dataset was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeMetricSetResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>After an interval ends, the amount of seconds that the detector waits before
     * importing data. Offset is only supported for S3, Redshift, Athena and
     * datasources.</p>
     */
    inline int GetOffset() const { return m_offset; }
    inline void SetOffset(int value) { m_offsetHasBeenSet = true; m_offset = value; }
    inline DescribeMetricSetResult& WithOffset(int value) { SetOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the metrics defined by the dataset.</p>
     */
    inline const Aws::Vector<Metric>& GetMetricList() const { return m_metricList; }
    template<typename MetricListT = Aws::Vector<Metric>>
    void SetMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList = std::forward<MetricListT>(value); }
    template<typename MetricListT = Aws::Vector<Metric>>
    DescribeMetricSetResult& WithMetricList(MetricListT&& value) { SetMetricList(std::forward<MetricListT>(value)); return *this;}
    template<typename MetricListT = Metric>
    DescribeMetricSetResult& AddMetricList(MetricListT&& value) { m_metricListHasBeenSet = true; m_metricList.emplace_back(std::forward<MetricListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains information about the column used for tracking time in your source
     * data.</p>
     */
    inline const TimestampColumn& GetTimestampColumn() const { return m_timestampColumn; }
    template<typename TimestampColumnT = TimestampColumn>
    void SetTimestampColumn(TimestampColumnT&& value) { m_timestampColumnHasBeenSet = true; m_timestampColumn = std::forward<TimestampColumnT>(value); }
    template<typename TimestampColumnT = TimestampColumn>
    DescribeMetricSetResult& WithTimestampColumn(TimestampColumnT&& value) { SetTimestampColumn(std::forward<TimestampColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the dimensions chosen for analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDimensionList() const { return m_dimensionList; }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    void SetDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList = std::forward<DimensionListT>(value); }
    template<typename DimensionListT = Aws::Vector<Aws::String>>
    DescribeMetricSetResult& WithDimensionList(DimensionListT&& value) { SetDimensionList(std::forward<DimensionListT>(value)); return *this;}
    template<typename DimensionListT = Aws::String>
    DescribeMetricSetResult& AddDimensionList(DimensionListT&& value) { m_dimensionListHasBeenSet = true; m_dimensionList.emplace_back(std::forward<DimensionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The interval at which the data will be analyzed for anomalies.</p>
     */
    inline Frequency GetMetricSetFrequency() const { return m_metricSetFrequency; }
    inline void SetMetricSetFrequency(Frequency value) { m_metricSetFrequencyHasBeenSet = true; m_metricSetFrequency = value; }
    inline DescribeMetricSetResult& WithMetricSetFrequency(Frequency value) { SetMetricSetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone in which the dataset's data was recorded.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    DescribeMetricSetResult& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the dataset's source data.</p>
     */
    inline const MetricSource& GetMetricSource() const { return m_metricSource; }
    template<typename MetricSourceT = MetricSource>
    void SetMetricSource(MetricSourceT&& value) { m_metricSourceHasBeenSet = true; m_metricSource = std::forward<MetricSourceT>(value); }
    template<typename MetricSourceT = MetricSource>
    DescribeMetricSetResult& WithMetricSource(MetricSourceT&& value) { SetMetricSource(std::forward<MetricSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions and their values that were used to filter the dataset.</p>
     */
    inline const Aws::Vector<MetricSetDimensionFilter>& GetDimensionFilterList() const { return m_dimensionFilterList; }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    void SetDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList = std::forward<DimensionFilterListT>(value); }
    template<typename DimensionFilterListT = Aws::Vector<MetricSetDimensionFilter>>
    DescribeMetricSetResult& WithDimensionFilterList(DimensionFilterListT&& value) { SetDimensionFilterList(std::forward<DimensionFilterListT>(value)); return *this;}
    template<typename DimensionFilterListT = MetricSetDimensionFilter>
    DescribeMetricSetResult& AddDimensionFilterList(DimensionFilterListT&& value) { m_dimensionFilterListHasBeenSet = true; m_dimensionFilterList.emplace_back(std::forward<DimensionFilterListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMetricSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricSetArn;
    bool m_metricSetArnHasBeenSet = false;

    Aws::String m_anomalyDetectorArn;
    bool m_anomalyDetectorArnHasBeenSet = false;

    Aws::String m_metricSetName;
    bool m_metricSetNameHasBeenSet = false;

    Aws::String m_metricSetDescription;
    bool m_metricSetDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    int m_offset{0};
    bool m_offsetHasBeenSet = false;

    Aws::Vector<Metric> m_metricList;
    bool m_metricListHasBeenSet = false;

    TimestampColumn m_timestampColumn;
    bool m_timestampColumnHasBeenSet = false;

    Aws::Vector<Aws::String> m_dimensionList;
    bool m_dimensionListHasBeenSet = false;

    Frequency m_metricSetFrequency{Frequency::NOT_SET};
    bool m_metricSetFrequencyHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    MetricSource m_metricSource;
    bool m_metricSourceHasBeenSet = false;

    Aws::Vector<MetricSetDimensionFilter> m_dimensionFilterList;
    bool m_dimensionFilterListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
