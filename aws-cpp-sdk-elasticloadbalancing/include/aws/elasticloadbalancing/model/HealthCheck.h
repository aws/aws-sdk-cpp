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
  class AWS_ELASTICLOADBALANCING_API HealthCheck
  {
  public:
    HealthCheck();
    HealthCheck(const Aws::Utils::Xml::XmlNode& xmlNode);
    HealthCheck& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline const Aws::String& GetTarget() const{ return m_target; }

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
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

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
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

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
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

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
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

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
    inline HealthCheck& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

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
    inline HealthCheck& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

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
    inline HealthCheck& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The approximate interval, in seconds, between health checks of an individual
     * instance.</p>
     */
    inline HealthCheck& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p> <p>This value must be less than the <code>Interval</code>
     * value.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p> <p>This value must be less than the <code>Interval</code>
     * value.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p> <p>This value must be less than the <code>Interval</code>
     * value.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p> <p>This value must be less than the <code>Interval</code>
     * value.</p>
     */
    inline HealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of consecutive health check failures required before moving the
     * instance to the <code>Unhealthy</code> state.</p>
     */
    inline int GetUnhealthyThreshold() const{ return m_unhealthyThreshold; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * instance to the <code>Unhealthy</code> state.</p>
     */
    inline bool UnhealthyThresholdHasBeenSet() const { return m_unhealthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * instance to the <code>Unhealthy</code> state.</p>
     */
    inline void SetUnhealthyThreshold(int value) { m_unhealthyThresholdHasBeenSet = true; m_unhealthyThreshold = value; }

    /**
     * <p>The number of consecutive health check failures required before moving the
     * instance to the <code>Unhealthy</code> state.</p>
     */
    inline HealthCheck& WithUnhealthyThreshold(int value) { SetUnhealthyThreshold(value); return *this;}


    /**
     * <p>The number of consecutive health checks successes required before moving the
     * instance to the <code>Healthy</code> state.</p>
     */
    inline int GetHealthyThreshold() const{ return m_healthyThreshold; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * instance to the <code>Healthy</code> state.</p>
     */
    inline bool HealthyThresholdHasBeenSet() const { return m_healthyThresholdHasBeenSet; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * instance to the <code>Healthy</code> state.</p>
     */
    inline void SetHealthyThreshold(int value) { m_healthyThresholdHasBeenSet = true; m_healthyThreshold = value; }

    /**
     * <p>The number of consecutive health checks successes required before moving the
     * instance to the <code>Healthy</code> state.</p>
     */
    inline HealthCheck& WithHealthyThreshold(int value) { SetHealthyThreshold(value); return *this;}

  private:

    Aws::String m_target;
    bool m_targetHasBeenSet;

    int m_interval;
    bool m_intervalHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_unhealthyThreshold;
    bool m_unhealthyThresholdHasBeenSet;

    int m_healthyThreshold;
    bool m_healthyThresholdHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
