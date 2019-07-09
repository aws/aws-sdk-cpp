/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/monitoring/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>This structure defines the metric to be returned, along with the statistics,
   * period, and units.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStat">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCH_API MetricStat
  {
  public:
    MetricStat();
    MetricStat(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricStat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline MetricStat& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>The metric to return, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline MetricStat& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>The period, in seconds, to use when retrieving the metric.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, to use when retrieving the metric.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, to use when retrieving the metric.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, to use when retrieving the metric.</p>
     */
    inline MetricStat& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline const Aws::String& GetStat() const{ return m_stat; }

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline void SetStat(const Aws::String& value) { m_statHasBeenSet = true; m_stat = value; }

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline void SetStat(Aws::String&& value) { m_statHasBeenSet = true; m_stat = std::move(value); }

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline void SetStat(const char* value) { m_statHasBeenSet = true; m_stat.assign(value); }

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline MetricStat& WithStat(const Aws::String& value) { SetStat(value); return *this;}

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline MetricStat& WithStat(Aws::String&& value) { SetStat(std::move(value)); return *this;}

    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic.</p>
     */
    inline MetricStat& WithStat(const char* value) { SetStat(value); return *this;}


    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline MetricStat& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}

    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric. In a <code>Get</code> operation, this
     * displays the unit that is used for the metric.</p>
     */
    inline MetricStat& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}

  private:

    Metric m_metric;
    bool m_metricHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Aws::String m_stat;
    bool m_statHasBeenSet;

    StandardUnit m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
