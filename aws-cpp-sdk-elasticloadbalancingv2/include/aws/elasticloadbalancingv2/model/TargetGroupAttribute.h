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
   * <p>Information about a target group attribute.</p>
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
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(Aws::String&& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute.</p> <ul> <li> <p>
     * <code>deregistration_delay.timeout_seconds</code> - The amount time for Elastic
     * Load Balancing to wait before changing the state of a deregistering target from
     * <code>draining</code> to <code>unused</code>. The range is 0-3600 seconds. The
     * default value is 300 seconds.</p> </li> <li> <p> <code>stickiness.enabled</code>
     * - Indicates whether sticky sessions are enabled. The value is <code>true</code>
     * or <code>false</code>.</p> </li> <li> <p> <code>stickiness.type</code> - The
     * type of sticky sessions. The possible value is <code>lb_cookie</code>.</p> </li>
     * <li> <p> <code>stickiness.lb_cookie.duration_seconds</code> - The time period,
     * in seconds, during which requests from a client should be routed to the same
     * target. After this time period expires, the load balancer-generated cookie is
     * considered stale. The range is 1 second to 1 week (604800 seconds). The default
     * value is 1 day (86400 seconds).</p> </li> </ul>
     */
    inline TargetGroupAttribute& WithKey(const char* value) { SetKey(value); return *this;}

    /**
     * <p>The value of the attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

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
    inline TargetGroupAttribute& WithValue(Aws::String&& value) { SetValue(value); return *this;}

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
