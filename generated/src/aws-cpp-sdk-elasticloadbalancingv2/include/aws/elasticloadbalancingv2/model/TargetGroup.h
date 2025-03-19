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
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup() = default;
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const { return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    template<typename TargetGroupArnT = Aws::String>
    void SetTargetGroupArn(TargetGroupArnT&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::forward<TargetGroupArnT>(value); }
    template<typename TargetGroupArnT = Aws::String>
    TargetGroup& WithTargetGroupArn(TargetGroupArnT&& value) { SetTargetGroupArn(std::forward<TargetGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupName() const { return m_targetGroupName; }
    inline bool TargetGroupNameHasBeenSet() const { return m_targetGroupNameHasBeenSet; }
    template<typename TargetGroupNameT = Aws::String>
    void SetTargetGroupName(TargetGroupNameT&& value) { m_targetGroupNameHasBeenSet = true; m_targetGroupName = std::forward<TargetGroupNameT>(value); }
    template<typename TargetGroupNameT = Aws::String>
    TargetGroup& WithTargetGroupName(TargetGroupNameT&& value) { SetTargetGroupName(std::forward<TargetGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use for routing traffic to the targets.</p>
     */
    inline ProtocolEnum GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(ProtocolEnum value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline TargetGroup& WithProtocol(ProtocolEnum value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the targets are listening. This parameter is not used if
     * the target is a Lambda function.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetGroup& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC for the targets.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    TargetGroup& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol to use to connect with the target. The GENEVE, TLS, UDP, and
     * TCP_UDP protocols are not supported for health checks.</p>
     */
    inline ProtocolEnum GetHealthCheckProtocol() const { return m_healthCheckProtocol; }
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }
    inline void SetHealthCheckProtocol(ProtocolEnum value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }
    inline TargetGroup& WithHealthCheckProtocol(ProtocolEnum value) { SetHealthCheckProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const { return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    template<typename HealthCheckPortT = Aws::String>
    void SetHealthCheckPort(HealthCheckPortT&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::forward<HealthCheckPortT>(value); }
    template<typename HealthCheckPortT = Aws::String>
    TargetGroup& WithHealthCheckPort(HealthCheckPortT&& value) { SetHealthCheckPort(std::forward<HealthCheckPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline bool GetHealthCheckEnabled() const { return m_healthCheckEnabled; }
    inline bool HealthCheckEnabledHasBeenSet() const { return m_healthCheckEnabledHasBeenSet; }
    inline void SetHealthCheckEnabled(bool value) { m_healthCheckEnabledHasBeenSet = true; m_healthCheckEnabled = value; }
    inline TargetGroup& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const { return m_healthCheckIntervalSeconds; }
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }
    inline TargetGroup& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, during which no response means a failed
     * health check.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const { return m_healthCheckTimeoutSeconds; }
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }
    inline TargetGroup& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline int GetHealthyThresholdCount() const { return m_healthyThresholdCount; }
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }
    inline TargetGroup& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy.</p>
     */
    inline int GetUnhealthyThresholdCount() const { return m_unhealthyThresholdCount; }
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }
    inline TargetGroup& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for health checks on the targets.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
    template<typename HealthCheckPathT = Aws::String>
    void SetHealthCheckPath(HealthCheckPathT&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::forward<HealthCheckPathT>(value); }
    template<typename HealthCheckPathT = Aws::String>
    TargetGroup& WithHealthCheckPath(HealthCheckPathT&& value) { SetHealthCheckPath(std::forward<HealthCheckPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP or gRPC codes to use when checking for a successful response from a
     * target.</p>
     */
    inline const Matcher& GetMatcher() const { return m_matcher; }
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }
    template<typename MatcherT = Matcher>
    void SetMatcher(MatcherT&& value) { m_matcherHasBeenSet = true; m_matcher = std::forward<MatcherT>(value); }
    template<typename MatcherT = Matcher>
    TargetGroup& WithMatcher(MatcherT&& value) { SetMatcher(std::forward<MatcherT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer that routes traffic to
     * this target group. You can use each target group with only one load
     * balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoadBalancerArns() const { return m_loadBalancerArns; }
    inline bool LoadBalancerArnsHasBeenSet() const { return m_loadBalancerArnsHasBeenSet; }
    template<typename LoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetLoadBalancerArns(LoadBalancerArnsT&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns = std::forward<LoadBalancerArnsT>(value); }
    template<typename LoadBalancerArnsT = Aws::Vector<Aws::String>>
    TargetGroup& WithLoadBalancerArns(LoadBalancerArnsT&& value) { SetLoadBalancerArns(std::forward<LoadBalancerArnsT>(value)); return *this;}
    template<typename LoadBalancerArnsT = Aws::String>
    TargetGroup& AddLoadBalancerArns(LoadBalancerArnsT&& value) { m_loadBalancerArnsHasBeenSet = true; m_loadBalancerArns.emplace_back(std::forward<LoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of target that you must specify when registering targets with this
     * target group. The possible values are <code>instance</code> (register targets by
     * instance ID), <code>ip</code> (register targets by IP address),
     * <code>lambda</code> (register a single Lambda function as a target), or
     * <code>alb</code> (register a single Application Load Balancer as a target).</p>
     */
    inline TargetTypeEnum GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetTypeEnum value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline TargetGroup& WithTargetType(TargetTypeEnum value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTP/HTTPS protocol] The protocol version. The possible values are
     * <code>GRPC</code>, <code>HTTP1</code>, and <code>HTTP2</code>.</p>
     */
    inline const Aws::String& GetProtocolVersion() const { return m_protocolVersion; }
    inline bool ProtocolVersionHasBeenSet() const { return m_protocolVersionHasBeenSet; }
    template<typename ProtocolVersionT = Aws::String>
    void SetProtocolVersion(ProtocolVersionT&& value) { m_protocolVersionHasBeenSet = true; m_protocolVersion = std::forward<ProtocolVersionT>(value); }
    template<typename ProtocolVersionT = Aws::String>
    TargetGroup& WithProtocolVersion(ProtocolVersionT&& value) { SetProtocolVersion(std::forward<ProtocolVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type. The default value is <code>ipv4</code>.</p>
     */
    inline TargetGroupIpAddressTypeEnum GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(TargetGroupIpAddressTypeEnum value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline TargetGroup& WithIpAddressType(TargetGroupIpAddressTypeEnum value) { SetIpAddressType(value); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    Aws::String m_targetGroupName;
    bool m_targetGroupNameHasBeenSet = false;

    ProtocolEnum m_protocol{ProtocolEnum::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    ProtocolEnum m_healthCheckProtocol{ProtocolEnum::NOT_SET};
    bool m_healthCheckProtocolHasBeenSet = false;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet = false;

    bool m_healthCheckEnabled{false};
    bool m_healthCheckEnabledHasBeenSet = false;

    int m_healthCheckIntervalSeconds{0};
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_healthCheckTimeoutSeconds{0};
    bool m_healthCheckTimeoutSecondsHasBeenSet = false;

    int m_healthyThresholdCount{0};
    bool m_healthyThresholdCountHasBeenSet = false;

    int m_unhealthyThresholdCount{0};
    bool m_unhealthyThresholdCountHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    Matcher m_matcher;
    bool m_matcherHasBeenSet = false;

    Aws::Vector<Aws::String> m_loadBalancerArns;
    bool m_loadBalancerArnsHasBeenSet = false;

    TargetTypeEnum m_targetType{TargetTypeEnum::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_protocolVersion;
    bool m_protocolVersionHasBeenSet = false;

    TargetGroupIpAddressTypeEnum m_ipAddressType{TargetGroupIpAddressTypeEnum::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
