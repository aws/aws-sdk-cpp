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
  class AWS_ELASTICLOADBALANCINGV2_API ModifyTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    ModifyTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTargetGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline ModifyTargetGroupRequest& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}


    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline const ProtocolEnum& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline void SetHealthCheckProtocol(const ProtocolEnum& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline void SetHealthCheckProtocol(ProtocolEnum&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol the load balancer uses when performing health checks on targets.
     * The TCP protocol is supported for health checks only if the protocol of the
     * target group is TCP, TLS, UDP, or TCP_UDP. The TLS, UDP, and TCP_UDP protocols
     * are not supported for health checks.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}


    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}

    /**
     * <p>The port the load balancer uses when performing health checks on targets.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}


    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The ping path that is the destination for the
     * health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


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
    inline ModifyTargetGroupRequest& WithHealthCheckEnabled(bool value) { SetHealthCheckEnabled(value); return *this;}


    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For Application Load Balancers, the range is 5 to 300
     * seconds. For Network Load Balancers, the supported values are 10 or 30
     * seconds.</p> <p>If the protocol of the target group is TCP, you can't modify
     * this setting.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For Application Load Balancers, the range is 5 to 300
     * seconds. For Network Load Balancers, the supported values are 10 or 30
     * seconds.</p> <p>If the protocol of the target group is TCP, you can't modify
     * this setting.</p>
     */
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For Application Load Balancers, the range is 5 to 300
     * seconds. For Network Load Balancers, the supported values are 10 or 30
     * seconds.</p> <p>If the protocol of the target group is TCP, you can't modify
     * this setting.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The approximate amount of time, in seconds, between health checks of an
     * individual target. For Application Load Balancers, the range is 5 to 300
     * seconds. For Network Load Balancers, the supported values are 10 or 30
     * seconds.</p> <p>If the protocol of the target group is TCP, you can't modify
     * this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}


    /**
     * <p>[HTTP/HTTPS health checks] The amount of time, in seconds, during which no
     * response means a failed health check.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline int GetHealthCheckTimeoutSeconds() const{ return m_healthCheckTimeoutSeconds; }

    /**
     * <p>[HTTP/HTTPS health checks] The amount of time, in seconds, during which no
     * response means a failed health check.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline bool HealthCheckTimeoutSecondsHasBeenSet() const { return m_healthCheckTimeoutSecondsHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS health checks] The amount of time, in seconds, during which no
     * response means a failed health check.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline void SetHealthCheckTimeoutSeconds(int value) { m_healthCheckTimeoutSecondsHasBeenSet = true; m_healthCheckTimeoutSeconds = value; }

    /**
     * <p>[HTTP/HTTPS health checks] The amount of time, in seconds, during which no
     * response means a failed health check.</p> <p>If the protocol of the target group
     * is TCP, you can't modify this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckTimeoutSeconds(int value) { SetHealthCheckTimeoutSeconds(value); return *this;}


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
    inline ModifyTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}


    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy. For Network Load Balancers, this value must be the same as
     * the healthy threshold count.</p>
     */
    inline int GetUnhealthyThresholdCount() const{ return m_unhealthyThresholdCount; }

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy. For Network Load Balancers, this value must be the same as
     * the healthy threshold count.</p>
     */
    inline bool UnhealthyThresholdCountHasBeenSet() const { return m_unhealthyThresholdCountHasBeenSet; }

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy. For Network Load Balancers, this value must be the same as
     * the healthy threshold count.</p>
     */
    inline void SetUnhealthyThresholdCount(int value) { m_unhealthyThresholdCountHasBeenSet = true; m_unhealthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health check failures required before considering
     * the target unhealthy. For Network Load Balancers, this value must be the same as
     * the healthy threshold count.</p>
     */
    inline ModifyTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}


    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline const Matcher& GetMatcher() const{ return m_matcher; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline bool MatcherHasBeenSet() const { return m_matcherHasBeenSet; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline void SetMatcher(const Matcher& value) { m_matcherHasBeenSet = true; m_matcher = value; }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline void SetMatcher(Matcher&& value) { m_matcherHasBeenSet = true; m_matcher = std::move(value); }

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>[HTTP/HTTPS health checks] The HTTP codes to use when checking for a
     * successful response from a target.</p> <p>If the protocol of the target group is
     * TCP, you can't modify this setting.</p>
     */
    inline ModifyTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(std::move(value)); return *this;}

  private:

    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;

    ProtocolEnum m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;

    bool m_healthCheckEnabled;
    bool m_healthCheckEnabledHasBeenSet;

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
