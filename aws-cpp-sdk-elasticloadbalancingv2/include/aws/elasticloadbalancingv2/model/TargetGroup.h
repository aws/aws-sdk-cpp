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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/elasticloadbalancingv2/model/Matcher.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a target group.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API TargetGroup
  {
  public:
    TargetGroup();
    TargetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupName() const{ return m_targetGroupName; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetTargetGroupName(const char* value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName.assign(value); }

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupName(const Aws::String& value) { SetTargetGroupName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(value); return *this;}

    /**
     * <p>The name of the target group.</p>
     */
    inline TargetGroup& WithTargetGroupName(const char* value) { SetTargetGroupName(value); return *this;}

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
    inline TargetGroup& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline TargetGroup& WithProtocol(ProtocolEnum&& value) { SetProtocol(value); return *this;}

    /**
     * <p>The port on which the targets are listening.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the targets are listening.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the targets are listening.</p>
     */
    inline TargetGroup& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline TargetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline TargetGroup& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline TargetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline TargetGroup& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p>
     */
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }

    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p>
     */
    inline TargetGroup& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline TargetGroup& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy.</p>
     */
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy.</p>
     */
    inline TargetGroup& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}

    /**
     * <p>The destination for the health check request.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The destination for the health check request.</p>
     */
    inline TargetGroup& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The destination for the health check request.</p>
     */
    inline TargetGroup& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The destination for the health check request.</p>
     */
    inline TargetGroup& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline TargetGroup& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline TargetGroup& WithMatcher(Matcher&& value) { SetMatcher(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerArns() const{ return m_loadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline void SetLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline void SetLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& WithLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& WithLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(const Aws::String& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(Aws::String&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(const char* value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }

  private:
    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;
    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet;
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
    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet;
    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet;
    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet;
    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet;
    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;
    Matcher m_matcher;
    bool m_matcherHasBeenSet;
    Aws::Vector<Aws::String> m_loadBalancerArns;
    bool m_loadBalancerArnsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
