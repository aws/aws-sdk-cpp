/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/HealthCheck">AWS
   * API Reference</a></p>
   */
  class HealthCheck
  {
  public:
    AWS_ELASTICLOADBALANCING_API HealthCheck() = default;
    AWS_ELASTICLOADBALANCING_API HealthCheck(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API HealthCheck& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance being checked. The protocol is either TCP, HTTP, HTTPS, or SSL.
     * The range of valid ports is one (1) through 65535.</p> <p>TCP is the default,
     * specified as a TCP: port pair, for example "TCP:5000". In this case, a health
     * check simply attempts to open a TCP connection to the instance on the specified
     * port. Failure to connect within the configured timeout is considered
     * unhealthy.</p> <p>SSL is also specified as SSL: port pair, for example,
     * SSL:5000.</p> <p>For HTTP/HTTPS, you must include a ping path in the string.
     * HTTP is specified as a HTTP:port;/;PathToPing; grouping, for example
     * "HTTP:80/weather/us/wa/seattle". In this case, a HTTP GET request is issued to
     * the instance on the given port and path. Any answer other than "200 OK" within
     * the timeout period is considered unhealthy.</p> <p>The total length of the HTTP
     * ping target must be 1024 16-bit Unicode characters or less.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    HealthCheck& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline HealthCheck& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p> <p>This value must be less than the <code>Interval</code>
     * value.</p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline HealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures required before moving the
     * instance to the <code>Unhealthy</code> state.</p>
     */
    inline int GetUnhealthyThreshold() const { return m_unhealthyThreshold; }
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }
    inline HealthCheck& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health checks successes required before moving the
     * instance to the <code>Healthy</code> state.</p>
     */
    inline int GetHealthyThreshold() const { return m_healthyThreshold; }
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }
    inline HealthCheck& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_unhealthyThreshold{0};
    bool m_unhealthyThresholdHasBeenSet = false;

    int m_healthyThreshold{0};
    bool m_healthyThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
