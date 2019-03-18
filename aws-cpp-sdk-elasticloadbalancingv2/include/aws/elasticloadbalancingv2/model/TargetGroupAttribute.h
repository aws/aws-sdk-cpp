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
  class AWS_ELASTICLOADBALANCINGV2_API TargetGroupAttribute
  {
  public:
    TargetGroupAttribute();
    TargetGroupAttribute(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetGroupAttribute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute.</p> <p>The following attribute is supported by
     * both Application Load Balancers and Network Load Balancers:</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount of time, in
     * seconds, for Elastic Load Balancing to wait before changing the state of a
     * deregistering target from <code>draining</code> to <code>unused</code>. The
     * range is 0-3600 seconds. The default value is 300 seconds. If the target is a
     * Lambda function, this attribute is not supported.</p> </li> </ul> <p>The
     * following attributes are supported by Application Load Balancers if the target
     * is not a Lambda function:</p> <ul> <li> <p>
     * <code>slow_start.duration_seconds</code> - The time period, in seconds, during
     * which a newly registered target receives a linearly increasing share of the
     * traffic to the target group. After this time period ends, the target receives
     * its full share of traffic. The range is 30-900 seconds (15 minutes). Slow start
     * mode is disabled by default.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>. The default is <code>false</code>.</p> </li> <li> <p>
     * <code>stickiness.type</code> - The type of sticky sessions. The possible value
     * is <code>lb_cookie</code>.</p> </li> <li> <p>
     * <code>stickiness.lb_cookie.duration_seconds</code> - The time period, in
     * seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul> <p>The following attribute is
     * supported only if the target is a Lambda function.</p> <ul> <li> <p>
     * <code>lambda.multi_value_headers.enabled</code> - Indicates whether the request
     * and response headers exchanged between the load balancer and the Lambda function
     * include arrays of values or strings. The value is <code>true</code> or
     * <code>false</code>. The default is <code>false</code>. If the value is
     * <code>false</code> and the request contains a duplicate header field name or
     * query parameter key, the load balancer uses the last value sent by the
     * client.</p> </li> </ul> <p>The following attribute is supported only by Network
     * Load Balancers:</p> <ul> <li> <p> <code>proxy_protocol_v2.enabled</code> -
     * Indicates whether Proxy Protocol version 2 is enabled. The value is
     * <code>true</code> or <code>false</code>. The default is <code>false</code>.</p>
     * </li> </ul>
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
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
