/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/elasticloadbalancingv2/model/Matcher.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateTargetGroup.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API CreateTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    CreateTargetGroupRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline CreateTargetGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline CreateTargetGroupRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline CreateTargetGroupRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline CreateTargetGroupRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline CreateTargetGroupRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target.</p>
     */
    inline CreateTargetGroupRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the virtual private cloud (VPC).</p>
     */
    inline CreateTargetGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The default is the HTTP protocol.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The default is the HTTP protocol.</p>
     */
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The default is the HTTP protocol.</p>
     */
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The default is the HTTP protocol.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The default is the HTTP protocol.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets. The
     * default is <code>traffic-port</code>, which indicates the port on which each
     * target receives traffic from the load balancer.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The ping path that is the destination on the targets for health checks. The
     * default is /.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. The default is 30 seconds.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. The default is 30 seconds.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. The default is 30 seconds.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. The default is 5 seconds.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. The default is 5 seconds.</p>
     */
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }

    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. The default is 5 seconds.</p>
     */
    inline CreateTargetGroupRequest& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. The default is 5.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. The default is 5.</p>
     */
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy. The default is 5.</p>
     */
    inline CreateTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. The default is 2.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. The default is 2.</p>
     */
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. The default is 2.</p>
     */
    inline CreateTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a target.
     * The default is 200.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a target.
     * The default is 200.</p>
     */
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a target.
     * The default is 200.</p>
     */
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a target.
     * The default is 200.</p>
     */
    inline CreateTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a target.
     * The default is 200.</p>
     */
    inline CreateTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    ProtocolEnum m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet;
    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet;
    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;
    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet;
    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet;
    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet;
    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet;
    Matcher m_matcher;
    bool m_matcherHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
