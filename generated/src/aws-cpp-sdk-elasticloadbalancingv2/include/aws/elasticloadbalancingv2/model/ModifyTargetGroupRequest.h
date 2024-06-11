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
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTargetGroup"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupArn() const{ return m_targetGroupArn; }
    inline bool TargetGroupArnHasBeenSet() const { return m_targetGroupArnHasBeenSet; }
    inline void SetTargetGroupArn(const Aws::String& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = value; }
    inline void SetTargetGroupArn(Aws::String&& value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn = std::move(value); }
    inline void SetTargetGroupArn(const char* value) { m_targetGroupArnHasBeenSet = true; m_targetGroupArn.assign(value); }
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}
    inline ModifyTargetGroupRequest& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * For Application Load Balancers, the default is HTTP. For Network Load Balancers
     * and Gateway Load Balancers, the default is TCP. The TCP protocol is not
     * supported for health checks if the protocol of the target group is HTTP or
     * HTTPS. It is supported for health checks only if the protocol of the target
     * group is TCP, TLS, UDP, or TCP_UDP. The GENEVE, TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}
    inline ModifyTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}
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
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}
    inline ModifyTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether health checks are enabled.</p>
     */
    inline bool GetHealthCheckEnabled() const{ return m_healthCheckEnabled; }
    inline bool HealthCheckEnabledHasBeenSet() const { return m_healthCheckEnabledHasBeenSet; }
    inline void SetHealthCheckEnabled(bool value) { m_healthCheckEnabledHasBeenSet = true; m_healthCheckEnabled = value; }
    inline ModifyTargetGroupRequest& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }
    inline ModifyTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[HTTP/HTTPS health checks] The amount of time, in seconds, during which no
     * response means a failed health check.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }
    inline ModifyTargetGroupRequest& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline int GetHealthyThresholdCount() const{ return m_healthyThresholdCount; }
    inline bool HealthyThresholdCountHasBeenSet() const { return m_healthyThresholdCountHasBeenSet; }
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }
    inline ModifyTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }
    inline ModifyTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}
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
    inline ModifyTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}
    inline ModifyTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet = false;

    ProtocolEnum m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet = false;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

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

    Matcher m_matcher;
    bool m_matcherHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
