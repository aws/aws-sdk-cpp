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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/CPUUtilization.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>CPU utilization and load average metrics for an Amazon EC2
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SystemStatus">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API SystemStatus
  {
  public:
    SystemStatus();
    SystemStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    SystemStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline const CPUUtilization& GetCPUUtilization() const{ return m_cPUUtilization; }

    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline bool CPUUtilizationHasBeenSet() const { return m_cPUUtilizationHasBeenSet; }

    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline void SetCPUUtilization(const CPUUtilization& value) { m_cPUUtilizationHasBeenSet = true; m_cPUUtilization = value; }

    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline void SetCPUUtilization(CPUUtilization&& value) { m_cPUUtilizationHasBeenSet = true; m_cPUUtilization = std::move(value); }

    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline SystemStatus& WithCPUUtilization(const CPUUtilization& value) { SetCPUUtilization(value); return *this;}

    /**
     * <p>CPU utilization metrics for the instance.</p>
     */
    inline SystemStatus& WithCPUUtilization(CPUUtilization&& value) { SetCPUUtilization(std::move(value)); return *this;}


    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline const Aws::Vector<double>& GetLoadAverage() const{ return m_loadAverage; }

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline bool LoadAverageHasBeenSet() const { return m_loadAverageHasBeenSet; }

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline void SetLoadAverage(const Aws::Vector<double>& value) { m_loadAverageHasBeenSet = true; m_loadAverage = value; }

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline void SetLoadAverage(Aws::Vector<double>&& value) { m_loadAverageHasBeenSet = true; m_loadAverage = std::move(value); }

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline SystemStatus& WithLoadAverage(const Aws::Vector<double>& value) { SetLoadAverage(value); return *this;}

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline SystemStatus& WithLoadAverage(Aws::Vector<double>&& value) { SetLoadAverage(std::move(value)); return *this;}

    /**
     * <p>Load average in the last 1-minute, 5-minute, and 15-minute periods. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-metrics.html#health-enhanced-metrics-os">Operating
     * System Metrics</a>.</p>
     */
    inline SystemStatus& AddLoadAverage(double value) { m_loadAverageHasBeenSet = true; m_loadAverage.push_back(value); return *this; }

  private:

    CPUUtilization m_cPUUtilization;
    bool m_cPUUtilizationHasBeenSet;

    Aws::Vector<double> m_loadAverage;
    bool m_loadAverageHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
