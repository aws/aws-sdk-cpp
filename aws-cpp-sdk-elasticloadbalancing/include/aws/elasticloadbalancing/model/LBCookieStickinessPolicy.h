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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about a policy for duration-based session
   * stickiness.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/LBCookieStickinessPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API LBCookieStickinessPolicy
  {
  public:
    LBCookieStickinessPolicy();
    LBCookieStickinessPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    LBCookieStickinessPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline LBCookieStickinessPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline LBCookieStickinessPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline LBCookieStickinessPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The time period, in seconds, after which the cookie should be considered
     * stale. If this parameter is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline long long GetCookieExpirationPeriod() const{ return m_cookieExpirationPeriod; }

    /**
     * <p>The time period, in seconds, after which the cookie should be considered
     * stale. If this parameter is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline bool CookieExpirationPeriodHasBeenSet() const { return m_cookieExpirationPeriodHasBeenSet; }

    /**
     * <p>The time period, in seconds, after which the cookie should be considered
     * stale. If this parameter is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline void SetCookieExpirationPeriod(long long value) { m_cookieExpirationPeriodHasBeenSet = true; m_cookieExpirationPeriod = value; }

    /**
     * <p>The time period, in seconds, after which the cookie should be considered
     * stale. If this parameter is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline LBCookieStickinessPolicy& WithCookieExpirationPeriod(long long value) { SetCookieExpirationPeriod(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;

    long long m_cookieExpirationPeriod;
    bool m_cookieExpirationPeriodHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
