/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SystemStatus
  {
  public:
    AWS_ELASTICBEANSTALK_API SystemStatus();
    AWS_ELASTICBEANSTALK_API SystemStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SystemStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_cPUUtilizationHasBeenSet = false;

    Aws::Vector<double> m_loadAverage;
    bool m_loadAverageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
