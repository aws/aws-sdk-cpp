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
   * <p>Contains the parameters for ModifyTargetGroup.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API ModifyTargetGroupRequest : public ElasticLoadBalancingv2Request
  {
  public:
    ModifyTargetGroupRequest();
    Aws::String SerializePayload() const override;

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
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const Aws::String& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline ModifyTargetGroupRequest& WithTargetGroupArn(Aws::String&& value) { SetTargetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the target group.</p>
     */
    inline ModifyTargetGroupRequest& WithTargetGroupArn(const char* value) { SetTargetGroupArn(value); return *this;}

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
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(const ProtocolEnum& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol to use to connect with the target.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckProtocol(ProtocolEnum&& value) { SetHealthCheckProtocol(value); return *this;}

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
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>The ping path that is the destination for the health check request.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}

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
    inline ModifyTargetGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}

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
    inline void SetHealthyThresholdCount(int value) { m_healthyThresholdCountHasBeenSet = true; m_healthyThresholdCount = value; }

    /**
     * <p>The number of consecutive health checks successes required before considering
     * an unhealthy target healthy.</p>
     */
    inline ModifyTargetGroupRequest& WithHealthyThresholdCount(int value) { SetHealthyThresholdCount(value); return *this;}

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
    inline ModifyTargetGroupRequest& WithUnhealthyThresholdCount(int value) { SetUnhealthyThresholdCount(value); return *this;}

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
    inline ModifyTargetGroupRequest& WithMatcher(const Matcher& value) { SetMatcher(value); return *this;}

    /**
     * <p>The HTTP codes to use when checking for a successful response from a
     * target.</p>
     */
    inline ModifyTargetGroupRequest& WithMatcher(Matcher&& value) { SetMatcher(value); return *this;}

  private:
    Aws::String m_targetGroupArn;
    bool m_targetGroupArnHasBeenSet;
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
