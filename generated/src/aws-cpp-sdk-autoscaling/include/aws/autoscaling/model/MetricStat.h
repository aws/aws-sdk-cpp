/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/autoscaling/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>This structure defines the CloudWatch metric to return, along with the
   * statistic and unit.</p> <p>For more information about the CloudWatch terminology
   * below, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html">Amazon
   * CloudWatch concepts</a> in the <i>Amazon CloudWatch User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/MetricStat">AWS
   * API Reference</a></p>
   */
  class MetricStat
  {
  public:
    AWS_AUTOSCALING_API MetricStat() = default;
    AWS_AUTOSCALING_API MetricStat(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API MetricStat& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CloudWatch metric to return, including the metric name, namespace, and
     * dimensions. To get the exact metric name, namespace, and dimensions, inspect the
     * <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_Metric.html">Metric</a>
     * object that is returned by a call to <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_ListMetrics.html">ListMetrics</a>.</p>
     */
    inline const Metric& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Metric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Metric>
    MetricStat& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistic to return. It can include any CloudWatch statistic or extended
     * statistic. For a list of valid values, see the table in <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/cloudwatch_concepts.html#Statistic">Statistics</a>
     * in the <i>Amazon CloudWatch User Guide</i>.</p> <p>The most commonly used
     * metrics for predictive scaling are <code>Average</code> and
     * <code>Sum</code>.</p>
     */
    inline const Aws::String& GetStat() const { return m_stat; }
    inline bool StatHasBeenSet() const { return m_statHasBeenSet; }
    template<typename StatT = Aws::String>
    void SetStat(StatT&& value) { m_statHasBeenSet = true; m_stat = std::forward<StatT>(value); }
    template<typename StatT = Aws::String>
    MetricStat& WithStat(StatT&& value) { SetStat(std::forward<StatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit to use for the returned data points. For a complete list of the
     * units that CloudWatch supports, see the <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_MetricDatum.html">MetricDatum</a>
     * data type in the <i>Amazon CloudWatch API Reference</i>.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    MetricStat& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}
  private:

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_stat;
    bool m_statHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
