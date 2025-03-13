/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/BucketMetricName.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/MetricUnit.h>
#include <aws/lightsail/model/MetricStatistic.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class GetBucketMetricDataRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API GetBucketMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBucketMetricData"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the bucket for which to get metric data.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    GetBucketMetricDataRequest& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric for which you want to return information.</p> <p>Valid bucket
     * metric names are listed below, along with the most useful statistics to include
     * in your request, and the published unit value.</p>  <p>These bucket
     * metrics are reported once per day.</p>  <ul> <li> <p> <b>
     * <code>BucketSizeBytes</code> </b> - The amount of data in bytes stored in a
     * bucket. This value is calculated by summing the size of all objects in the
     * bucket (including object versions), including the size of all parts for all
     * incomplete multipart uploads to the bucket.</p> <p>Statistics: The most useful
     * statistic is <code>Maximum</code>.</p> <p>Unit: The published unit is
     * <code>Bytes</code>.</p> </li> <li> <p> <b> <code>NumberOfObjects</code> </b> -
     * The total number of objects stored in a bucket. This value is calculated by
     * counting all objects in the bucket (including object versions) and the total
     * number of parts for all incomplete multipart uploads to the bucket.</p>
     * <p>Statistics: The most useful statistic is <code>Average</code>.</p> <p>Unit:
     * The published unit is <code>Count</code>.</p> </li> </ul>
     */
    inline BucketMetricName GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(BucketMetricName value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline GetBucketMetricDataRequest& WithMetricName(BucketMetricName value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating the earliest data to be returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetBucketMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp indicating the latest data to be returned.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetBucketMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, of the returned data points.</p> 
     * <p>Bucket storage metrics are reported once per day. Therefore, you should
     * specify a period of 86400 seconds, which is the number of seconds in a day.</p>
     * 
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetBucketMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic for the metric.</p> <p>The following statistics are
     * available:</p> <ul> <li> <p> <code>Minimum</code> - The lowest value observed
     * during the specified period. Use this value to determine low volumes of activity
     * for your application.</p> </li> <li> <p> <code>Maximum</code> - The highest
     * value observed during the specified period. Use this value to determine high
     * volumes of activity for your application.</p> </li> <li> <p> <code>Sum</code> -
     * The sum of all values submitted for the matching metric. You can use this
     * statistic to determine the total volume of a metric.</p> </li> <li> <p>
     * <code>Average</code> - The value of <code>Sum</code> / <code>SampleCount</code>
     * during the specified period. By comparing this statistic with the
     * <code>Minimum</code> and <code>Maximum</code> values, you can determine the full
     * scope of a metric and how close the average use is to the <code>Minimum</code>
     * and <code>Maximum</code> values. This comparison helps you to know when to
     * increase or decrease your resources.</p> </li> <li> <p> <code>SampleCount</code>
     * - The count, or number, of data points used for the statistical calculation.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<MetricStatistic>& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = Aws::Vector<MetricStatistic>>
    GetBucketMetricDataRequest& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    inline GetBucketMetricDataRequest& AddStatistics(MetricStatistic value) { m_statisticsHasBeenSet = true; m_statistics.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unit for the metric data request.</p> <p>Valid units depend on the metric
     * data being requested. For the valid units with each available metric, see the
     * <code>metricName</code> parameter.</p>
     */
    inline MetricUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(MetricUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline GetBucketMetricDataRequest& WithUnit(MetricUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    BucketMetricName m_metricName{BucketMetricName::NOT_SET};
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    Aws::Vector<MetricStatistic> m_statistics;
    bool m_statisticsHasBeenSet = false;

    MetricUnit m_unit{MetricUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
