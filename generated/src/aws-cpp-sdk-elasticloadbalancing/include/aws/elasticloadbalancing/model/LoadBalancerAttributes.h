/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancing/model/CrossZoneLoadBalancing.h>
#include <aws/elasticloadbalancing/model/AccessLog.h>
#include <aws/elasticloadbalancing/model/ConnectionDraining.h>
#include <aws/elasticloadbalancing/model/ConnectionSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/AdditionalAttribute.h>
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
   * <p>The attributes for a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/LoadBalancerAttributes">AWS
   * API Reference</a></p>
   */
  class LoadBalancerAttributes
  {
  public:
    AWS_ELASTICLOADBALANCING_API LoadBalancerAttributes();
    AWS_ELASTICLOADBALANCING_API LoadBalancerAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API LoadBalancerAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If enabled, the load balancer routes the request traffic evenly across all
     * instances regardless of the Availability Zones.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-crosszone-lb.html">Configure
     * Cross-Zone Load Balancing</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const CrossZoneLoadBalancing& GetCrossZoneLoadBalancing() const{ return m_crossZoneLoadBalancing; }
    inline bool CrossZoneLoadBalancingHasBeenSet() const { return m_crossZoneLoadBalancingHasBeenSet; }
    inline void SetCrossZoneLoadBalancing(const CrossZoneLoadBalancing& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = value; }
    inline void SetCrossZoneLoadBalancing(CrossZoneLoadBalancing&& value) { m_crossZoneLoadBalancingHasBeenSet = true; m_crossZoneLoadBalancing = std::move(value); }
    inline LoadBalancerAttributes& WithCrossZoneLoadBalancing(const CrossZoneLoadBalancing& value) { SetCrossZoneLoadBalancing(value); return *this;}
    inline LoadBalancerAttributes& WithCrossZoneLoadBalancing(CrossZoneLoadBalancing&& value) { SetCrossZoneLoadBalancing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the load balancer captures detailed information of all requests
     * and delivers the information to the Amazon S3 bucket that you specify.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-access-logs.html">Enable
     * Access Logs</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const AccessLog& GetAccessLog() const{ return m_accessLog; }
    inline bool AccessLogHasBeenSet() const { return m_accessLogHasBeenSet; }
    inline void SetAccessLog(const AccessLog& value) { m_accessLogHasBeenSet = true; m_accessLog = value; }
    inline void SetAccessLog(AccessLog&& value) { m_accessLogHasBeenSet = true; m_accessLog = std::move(value); }
    inline LoadBalancerAttributes& WithAccessLog(const AccessLog& value) { SetAccessLog(value); return *this;}
    inline LoadBalancerAttributes& WithAccessLog(AccessLog&& value) { SetAccessLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the load balancer allows existing requests to complete before the
     * load balancer shifts traffic away from a deregistered or unhealthy instance.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-conn-drain.html">Configure
     * Connection Draining</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const ConnectionDraining& GetConnectionDraining() const{ return m_connectionDraining; }
    inline bool ConnectionDrainingHasBeenSet() const { return m_connectionDrainingHasBeenSet; }
    inline void SetConnectionDraining(const ConnectionDraining& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = value; }
    inline void SetConnectionDraining(ConnectionDraining&& value) { m_connectionDrainingHasBeenSet = true; m_connectionDraining = std::move(value); }
    inline LoadBalancerAttributes& WithConnectionDraining(const ConnectionDraining& value) { SetConnectionDraining(value); return *this;}
    inline LoadBalancerAttributes& WithConnectionDraining(ConnectionDraining&& value) { SetConnectionDraining(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the load balancer allows the connections to remain idle (no data
     * is sent over the connection) for the specified duration.</p> <p>By default,
     * Elastic Load Balancing maintains a 60-second idle connection timeout for both
     * front-end and back-end connections of your load balancer. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-idle-timeout.html">Configure
     * Idle Connection Timeout</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const ConnectionSettings& GetConnectionSettings() const{ return m_connectionSettings; }
    inline bool ConnectionSettingsHasBeenSet() const { return m_connectionSettingsHasBeenSet; }
    inline void SetConnectionSettings(const ConnectionSettings& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = value; }
    inline void SetConnectionSettings(ConnectionSettings&& value) { m_connectionSettingsHasBeenSet = true; m_connectionSettings = std::move(value); }
    inline LoadBalancerAttributes& WithConnectionSettings(const ConnectionSettings& value) { SetConnectionSettings(value); return *this;}
    inline LoadBalancerAttributes& WithConnectionSettings(ConnectionSettings&& value) { SetConnectionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any additional attributes.</p>
     */
    inline const Aws::Vector<AdditionalAttribute>& GetAdditionalAttributes() const{ return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    inline void SetAdditionalAttributes(const Aws::Vector<AdditionalAttribute>& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = value; }
    inline void SetAdditionalAttributes(Aws::Vector<AdditionalAttribute>&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::move(value); }
    inline LoadBalancerAttributes& WithAdditionalAttributes(const Aws::Vector<AdditionalAttribute>& value) { SetAdditionalAttributes(value); return *this;}
    inline LoadBalancerAttributes& WithAdditionalAttributes(Aws::Vector<AdditionalAttribute>&& value) { SetAdditionalAttributes(std::move(value)); return *this;}
    inline LoadBalancerAttributes& AddAdditionalAttributes(const AdditionalAttribute& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(value); return *this; }
    inline LoadBalancerAttributes& AddAdditionalAttributes(AdditionalAttribute&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    CrossZoneLoadBalancing m_crossZoneLoadBalancing;
    bool m_crossZoneLoadBalancingHasBeenSet = false;

    AccessLog m_accessLog;
    bool m_accessLogHasBeenSet = false;

    ConnectionDraining m_connectionDraining;
    bool m_connectionDrainingHasBeenSet = false;

    ConnectionSettings m_connectionSettings;
    bool m_connectionSettingsHasBeenSet = false;

    Aws::Vector<AdditionalAttribute> m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
