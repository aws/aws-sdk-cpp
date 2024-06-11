﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/StandardUnit.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This structure defines the metric to be used as the service level indicator,
   * along with the statistics, period, and unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/MetricStat">AWS
   * API Reference</a></p>
   */
  class MetricStat
  {
  public:
    AWS_APPLICATIONSIGNALS_API MetricStat();
    AWS_APPLICATIONSIGNALS_API MetricStat(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API MetricStat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric to use as the service level indicator, including the metric name,
     * namespace, and dimensions.</p>
     */
    inline const Metric& GetMetric() const{ return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }
    inline MetricStat& WithMetric(const Metric& value) { SetMetric(value); return *this;}
    inline MetricStat& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity, in seconds, to be used for the metric. For metrics with
     * regular resolution, a period can be as short as one minute (60 seconds) and must
     * be a multiple of 60. For high-resolution metrics that are collected at intervals
     * of less than one minute, the period can be 1, 5, 10, 30, 60, or any multiple of
     * 60. High-resolution metrics are those metrics stored by a
     * <code>PutMetricData</code> call that includes a <code>StorageResolution</code>
     * of 1 second.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline MetricStat& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic to use for comparison to the threshold. It can be any
     * CloudWatch statistic or extended statistic. For more information about
     * statistics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/Statistics-definitions.html">CloudWatch
     * statistics definitions</a>.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }
    inline MetricStat& WithStat(const Aws::String& value) { SetStat(value); return *this;}
    inline MetricStat& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}
    inline MetricStat& WithStat(const char* value) { SetStat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you omit <code>Unit</code> then all data that was collected with any unit
     * is returned, along with the corresponding units that were specified when the
     * data was reported to CloudWatch. If you specify a unit, the operation returns
     * only data that was collected with that unit specified. If you specify a unit
     * that does not match the data collected, the results of the operation are null.
     * CloudWatch does not perform unit conversions.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline MetricStat& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}
    inline MetricStat& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}
  private:

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_stat;
    bool m_statHasBeenSet = false;

    StandardUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
