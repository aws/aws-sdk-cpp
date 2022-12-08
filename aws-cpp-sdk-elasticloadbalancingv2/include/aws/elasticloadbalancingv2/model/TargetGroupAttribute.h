/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a target group attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetGroupAttribute">AWS
   * API Reference</a></p>
   */
  class TargetGroupAttribute
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupAttribute();
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetGroupAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attributes are supported by
     * all load balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> <li> <p>
     * <code>stickiness.enabled</code> - Indicates whether target stickiness is
     * enabled. The value is <code>true</code> or <code>false</code>. The default is
     * <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - Indicates
     * the type of stickiness. The possible values are:</p> <ul> <li> <p>
     * <code>lb_cookie</code> and <code>app_cookie</code> for Application Load
     * Balancers.</p> </li> <li> <p> <code>source_ip</code> for Network Load
     * Balancers.</p> </li> <li> <p> <code>source_ip_dest_ip</code> and
     * <code>source_ip_dest_ip_proto</code> for Gateway Load Balancers.</p> </li> </ul>
     * </li> </ul> <p>The following attributes are supported by Application Load
     * Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>load_balancing.cross_zone.enabled</code> - Indicates whether cross zone
     * load balancing is enabled. The value is <code>true</code>, <code>false</code> or
     * <code>use_load_balancer_configuration</code>. The default is
     * <code>use_load_balancer_configuration</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.count</code> -
     * The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, mark the zone as unhealthy in DNS, so that traffic
     * is routed only to healthy zones. The possible values are <code>off</code> or an
     * integer from 1 to the maximum number of targets. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.dns_failover.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, mark the zone as unhealthy in DNS, so that
     * traffic is routed only to healthy zones. The possible values are
     * <code>off</code> or an integer from 1 to 100. The default is
     * <code>off</code>.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.count</code>
     * - The minimum number of targets that must be healthy. If the number of healthy
     * targets is below this value, send traffic to all targets, including unhealthy
     * targets. The possible values are 1 to the maximum number of targets. The default
     * is 1.</p> </li> <li> <p>
     * <code>target_group_health.unhealthy_state_routing.minimum_healthy_targets.percentage</code>
     * - The minimum percentage of targets that must be healthy. If the percentage of
     * healthy targets is below this value, send traffic to all targets, including
     * unhealthy targets. The possible values are <code>off</code> or an integer from 1
     * to 100. The default is <code>off</code>.</p> </li> </ul> <p>The following
     * attributes are supported only if the load balancer is an Application Load
     * Balancer and the target is an instance or an IP address:</p> <ul> <li> <p>
     * <code>load_balancing.algorithm.type</code> - The load balancing algorithm
     * determines how the load balancer selects targets when routing requests. The
     * value is <code>round_robin</code> or <code>least_outstanding_requests</code>.
     * The default is <code>round_robin</code>.</p> </li> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives an increasing share of the traffic to
     * the target group. After this time period ends, the target receives its full
     * share of traffic. The range is 30-900 seconds (15 minutes). The default is 0
     * seconds (disabled).</p> </li> <li> <p>
     * <code>stickiness.app_cookie.cookie_name</code> - Indicates the name of the
     * application-based cookie. Names that start with the following prefixes are not
     * allowed: <code>AWSALB</code>, <code>AWSALBAPP</code>, and <code>AWSALBTG</code>;
     * they're reserved for use by the load balancer.</p> </li> <li> <p>
     * <code>stickiness.app_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the application-based cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds). </p> </li> </ul> <p>The following attribute is
     * supported only if the load balancer is an Application Load Balancer and the
     * target is a Lambda function:</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers that are exchanged between the load balancer and the Lambda
     * function include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attributes are supported only by
     * Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.connection_termination.enabled</code> - Indicates
     * whether the load balancer terminates connections at the end of the
     * deregistration timeout. The value is <code>true</code> or <code>false</code>.
     * The default is <code>false</code>.</p> </li> <li> <p>
     * <code>preserve_client_ip.enabled</code> - Indicates whether client IP
     * preservation is enabled. The value is <code>true</code> or <code>false</code>.
     * The default is disabled if the target group type is IP address and the target
     * group protocol is TCP or TLS. Otherwise, the default is enabled. Client IP
     * preservation cannot be disabled for UDP and TCP_UDP target groups.</p> </li>
     * <li> <p> <code>proxy_protocol_v2.enabled</code> - Indicates whether Proxy
     * Protocol version 2 is enabled. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. </p> </li> </ul> <p>The
     * following attributes are supported only by Gateway Load Balancers:</p> <ul> <li>
     * <p> <code>target_failover.on_deregistration</code> - Indicates how the Gateway
     * Load Balancer handles existing flows when a target is deregistered. The possible
     * values are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) can't be set independently. The value
     * you set for both attributes must be the same. </p> </li> <li> <p>
     * <code>target_failover.on_unhealthy</code> - Indicates how the Gateway Load
     * Balancer handles existing flows when a target is unhealthy. The possible values
     * are <code>rebalance</code> and <code>no_rebalance</code>. The default is
     * <code>no_rebalance</code>. The two attributes
     * (<code>target_failover.on_deregistration</code> and
     * <code>target_failover.on_unhealthy</code>) cannot be set independently. The
     * value you set for both attributes must be the same. </p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the attribute.</p>
     */
    inline TargetGroupAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline TargetGroupAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline TargetGroupAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
