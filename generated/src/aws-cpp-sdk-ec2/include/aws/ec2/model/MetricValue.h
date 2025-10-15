/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/Metric.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p> Represents a single metric value with its associated statistic, such as the
   * sum or average of unused capacity hours. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MetricValue">AWS API
   * Reference</a></p>
   */
  class MetricValue
  {
  public:
    AWS_EC2_API MetricValue() = default;
    AWS_EC2_API MetricValue(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API MetricValue& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The name of the metric. </p>
     */
    inline Metric GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(Metric value) { m_metricHasBeenSet = true; m_metric = value; }
    inline MetricValue& WithMetric(Metric value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numerical value of the metric for the specified statistic and time
     * period. </p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricValue& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Metric m_metric{Metric::NOT_SET};
    bool m_metricHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
