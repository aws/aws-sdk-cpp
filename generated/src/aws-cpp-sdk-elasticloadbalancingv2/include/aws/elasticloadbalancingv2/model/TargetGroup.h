/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/elasticloadbalancingv2/model/Matcher.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/TargetTypeEnum.h>
#include <aws/elasticloadbalancingv2/model/TargetGroupIpAddressTypeEnum.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a target group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetGroup">AWS
   * API Reference</a></p>
   */
  class TargetGroup
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup();
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }

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
    inline TargetGroup& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

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
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetTargetGroupName(const Aws::String& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = value; }

    /**
     * <p>The name of the target group.</p>
     */
    inline void SetTargetGroupName(Aws::String&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::move(value); }

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
    inline TargetGroup& WithTargetGroupName(Aws::String&& value) { SetTargetGroupName(std::move(value)); return *this;}

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
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline TargetGroup& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline TargetGroup& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The port on which the targets are listening. Not used if the target is a
     * Lambda function.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port on which the targets are listening. Not used if the target is a
     * Lambda function.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port on which the targets are listening. Not used if the target is a
     * Lambda function.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port on which the targets are listening. Not used if the target is a
     * Lambda function.</p>
     */
    inline TargetGroup& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

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
    inline TargetGroup& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline TargetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }

    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }

    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline TargetGroup& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline TargetGroup& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}


    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }

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
    inline TargetGroup& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetGroup& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}


    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline bool GetHealthCheckEnabled() const{ return m_healthCheckEnabled; }

    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline bool HealthCheckEnabledHasBeenSet() const { return m_healthCheckEnabledHasBeenSet; }

    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline void SetHealthCheckEnabled(bool value) { m_healthCheckEnabledHasBeenSet = true; m_healthCheckEnabled = value; }

    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline TargetGroup& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}


    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }

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
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }

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
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }

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
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }

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
     * <p>The destination for health checks on the targets.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline TargetGroup& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline TargetGroup& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline TargetGroup& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }

    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }

    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = std::move(value); }

    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline TargetGroup& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline TargetGroup& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerArns() const{ return m_loadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline bool LoadBalancerArnsHasBeenSet() const { return m_loadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline void SetLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline void SetLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& WithLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& WithLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(const Aws::String& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(Aws::String&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARN) of the load balancers that route traffic to
     * this target group.</p>
     */
    inline TargetGroup& AddLoadBalancerArns(const char* value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline const TargetTypeEnum& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline void SetTargetType(const TargetTypeEnum& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline void SetTargetType(TargetTypeEnum&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline TargetGroup& WithTargetType(const TargetTypeEnum& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline TargetGroup& WithTargetType(TargetTypeEnum&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline const Aws::String& GetProtocolVersion() const{ return m_protocolVersion; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline void SetProtocolVersion(const Aws::String& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline void SetProtocolVersion(Aws::String&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline void SetProtocolVersion(const char* value) { m_protocolVersionHasBeenSet = true; m_protocolVersion.assign(value); }

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline TargetGroup& WithProtocolVersion(const Aws::String& value) { SetProtocolVersion(value); return *this;}

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline TargetGroup& WithProtocolVersion(Aws::String&& value) { SetProtocolVersion(std::move(value)); return *this;}

    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline TargetGroup& WithProtocolVersion(const char* value) { SetProtocolVersion(value); return *this;}


    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline const TargetGroupIpAddressTypeEnum& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(const TargetGroupIpAddressTypeEnum& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(TargetGroupIpAddressTypeEnum&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline TargetGroup& WithIpAddressType(const TargetGroupIpAddressTypeEnum& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The type of IP address used for this target group. The possible values are
     * <code>ipv4</code> and <code>ipv6</code>. This is an optional parameter. If not
     * specified, the IP address type defaults to <code>ipv4</code>.</p>
     */
    inline TargetGroup& WithIpAddressType(TargetGroupIpAddressTypeEnum&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ProtocolEnum m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet = false;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet = false;

    bool m_healthCheckEnabled;
    bool m_healthCheckEnabledHasBeenSet = false;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet = false;

    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet = false;

    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    Matcher m_matcher;
    bool m_matcherHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerArns;
    bool m_loadBalancerArnsHasBeenSet = false;

    TargetTypeEnum m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;

    TargetGroupIpAddressTypeEnum m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
