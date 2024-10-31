/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ProtocolEnum.h>
#include <aws/elasticloadbalancingv2/model/Matcher.h>
#include <aws/elasticloadbalancingv2/model/TargetTypeEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/TargetGroupIpAddressTypeEnum.h>
#include <aws/elasticloadbalancingv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class CreateTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API CreateTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTargetGroup"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the target group.</p> <p>This name must be unique per region per
     * account, can have a maximum of 32 characters, must contain only alphanumeric
     * characters or hyphens, and must not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTargetGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTargetGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use for routing traffic to the targets. For Application Load
     * Balancers, the supported protocols are HTTP and HTTPS. For Network Load
     * Balancers, the supported protocols are TCP, TLS, UDP, or TCP_UDP. For Gateway
     * Load Balancers, the supported protocol is GENEVE. A TCP_UDP listener must be
     * associated with a TCP_UDP target group. If the target is a Lambda function, this
     * parameter does not apply.</p>
     */
    inline const ProtocolEnum& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const ProtocolEnum& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(ProtocolEnum&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateTargetGroupRequest& WithProtocol(const ProtocolEnum& value) { SetProtocol(value); return *this;}
    inline CreateTargetGroupRequest& WithProtocol(ProtocolEnum&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. Specify <code>GRPC</code> to send
     * requests to targets using gRPC. Specify <code>HTTP2</code> to send requests to
     * targets using HTTP/2. The default is <code>HTTP1</code>, which sends requests to
     * targets using HTTP/1.1.</p>
     */
    inline const Aws::String& GetProtocolVersion() const{ return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    inline void SetProtocolVersion(const Aws::String& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = value; }
    inline void SetProtocolVersion(Aws::String&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::move(value); }
    inline void SetProtocolVersion(const char* value) { m_protocolVersionHasBeenSet = true; m_protocolVersion.assign(value); }
    inline CreateTargetGroupRequest& WithProtocolVersion(const Aws::String& value) { SetProtocolVersion(value); return *this;}
    inline CreateTargetGroupRequest& WithProtocolVersion(Aws::String&& value) { SetProtocolVersion(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& WithProtocolVersion(const char* value) { SetProtocolVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the targets receive traffic. This port is used unless you
     * specify a port override when registering the target. If the target is a Lambda
     * function, this parameter does not apply. If the protocol is GENEVE, the
     * supported port is 6081.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline CreateTargetGroupRequest& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the virtual private cloud (VPC). If the target is a Lambda
     * function, this parameter does not apply. Otherwise, this parameter is
     * required.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline CreateTargetGroupRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline CreateTargetGroupRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. The GENEVE, TLS, UDP, and TCP_UDP protocols are not supported for health
     * checks.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}
    inline CreateTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port the load balancer uses when performing health checks on targets. If
     * the protocol is HTTP, HTTPS, TCP, TLS, UDP, or TCP_UDP, the default is
     * <code>traffic-port</code>, which is the port on which each target receives
     * traffic from the load balancer. If the protocol is GENEVE, the default is port
     * 80.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }
    inline CreateTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}
    inline CreateTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether health checks are enabled. If the target type is
     * <code>lambda</code>, health checks are disabled by default but can be enabled.
     * If the target type is <code>instance</code>, <code>ip</code>, or
     * <code>alb</code>, health checks are always enabled and can't be disabled.</p>
     */
    inline bool GetHealthCheckEnabled() const{ return m_healthCheckEnabled; }
    inline bool HealthCheckEnabledHasBeenSet() const { return m_healthCheckEnabledHasBeenSet; }
    inline void SetHealthCheckEnabled(bool value) { m_healthCheckEnabledHasBeenSet = true; m_healthCheckEnabled = value; }
    inline CreateTargetGroupRequest& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTP/HTTPS health checks] The destination for health checks on the
     * targets.</p> <p>[HTTP1 or HTTP2 protocol version] The ping path. The default is
     * /.</p> <p>[GRPC protocol version] The path of a custom health check method with
     * the format /package.service/method. The default is /Amazon Web
     * Services.ALB/healthcheck.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }
    inline CreateTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}
    inline CreateTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. The range is 5-300. If the target group protocol is TCP, TLS,
     * UDP, TCP_UDP, HTTP or HTTPS, the default is 30 seconds. If the target group
     * protocol is GENEVE, the default is 10 seconds. If the target type is
     * <code>lambda</code>, the default is 35 seconds.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }
    inline CreateTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which no response from a target means
     * a failed health check. The range is 2–120 seconds. For target groups with a
     * protocol of HTTP, the default is 6 seconds. For target groups with a protocol of
     * TCP, TLS or HTTPS, the default is 10 seconds. For target groups with a protocol
     * of GENEVE, the default is 5 seconds. If the target type is <code>lambda</code>,
     * the default is 30 seconds.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }
    inline CreateTargetGroupRequest& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check successes required before considering
     * a target healthy. The range is 2-10. If the target group protocol is TCP,
     * TCP_UDP, UDP, TLS, HTTP or HTTPS, the default is 5. For target groups with a
     * protocol of GENEVE, the default is 5. If the target type is <code>lambda</code>,
     * the default is 5.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }
    inline CreateTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures required before considering a
     * target unhealthy. The range is 2-10. If the target group protocol is TCP,
     * TCP_UDP, UDP, TLS, HTTP or HTTPS, the default is 2. For target groups with a
     * protocol of GENEVE, the default is 2. If the target type is <code>lambda</code>,
     * the default is 5.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }
    inline CreateTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTP/HTTPS health checks] The HTTP or gRPC codes to use when checking for a
     * successful response from a target. For target groups with a protocol of TCP,
     * TCP_UDP, UDP or TLS the range is 200-599. For target groups with a protocol of
     * HTTP or HTTPS, the range is 200-499. For target groups with a protocol of
     * GENEVE, the range is 200-399.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = std::move(value); }
    inline CreateTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}
    inline CreateTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. You can't specify targets for a target group using more than one
     * target type.</p> <ul> <li> <p> <code>instance</code> - Register targets by
     * instance ID. This is the default value.</p> </li> <li> <p> <code>ip</code> -
     * Register targets by IP address. You can specify IP addresses from the subnets of
     * the virtual private cloud (VPC) for the target group, the RFC 1918 range
     * (10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16), and the RFC 6598 range
     * (100.64.0.0/10). You can't specify publicly routable IP addresses.</p> </li>
     * <li> <p> <code>lambda</code> - Register a single Lambda function as a
     * target.</p> </li> <li> <p> <code>alb</code> - Register a single Application Load
     * Balancer as a target.</p> </li> </ul>
     */
    inline const TargetTypeEnum& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetTypeEnum& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetTypeEnum&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline CreateTargetGroupRequest& WithTargetType(const TargetTypeEnum& value) { SetTargetType(value); return *this;}
    inline CreateTargetGroupRequest& WithTargetType(TargetTypeEnum&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the target group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTargetGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTargetGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTargetGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTargetGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type. The default value is <code>ipv4</code>.</p>
     */
    inline const TargetGroupIpAddressTypeEnum& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const TargetGroupIpAddressTypeEnum& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(TargetGroupIpAddressTypeEnum&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateTargetGroupRequest& WithIpAddressType(const TargetGroupIpAddressTypeEnum& value) { SetIpAddressType(value); return *this;}
    inline CreateTargetGroupRequest& WithIpAddressType(TargetGroupIpAddressTypeEnum&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProtocolEnum m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;

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

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_healthCheckTimeoutSeconds;
    bool m_healthCheckTimeoutSecondsHasBeenSet = false;

    int m_healthyThresholdCount;
    bool m_healthyThresholdCountHasBeenSet = false;

    int m_unhealthyThresholdCount;
    bool m_unhealthyThresholdCountHasBeenSet = false;

    Matcher m_matcher;
    bool m_matcherHasBeenSet = false;

    TargetTypeEnum m_targetType;
    bool m_targetTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    TargetGroupIpAddressTypeEnum m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
