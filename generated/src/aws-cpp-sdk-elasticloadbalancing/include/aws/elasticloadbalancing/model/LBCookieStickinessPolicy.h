/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LBCookieStickinessPolicy
  {
  public:
    AWS_ELASTICLOADBALANCING_API LBCookieStickinessPolicy() = default;
    AWS_ELASTICLOADBALANCING_API LBCookieStickinessPolicy(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API LBCookieStickinessPolicy& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the policy. This name must be unique within the set of policies
     * for this load balancer.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    LBCookieStickinessPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period, in seconds, after which the cookie should be considered
     * stale. If this parameter is not specified, the stickiness session lasts for the
     * duration of the browser session.</p>
     */
    inline long long GetCookieExpirationPeriod() const { return m_cookieExpirationPeriod; }
    inline bool CookieExpirationPeriodHasBeenSet() const { return m_cookieExpirationPeriodHasBeenSet; }
    inline void SetCookieExpirationPeriod(long long value) { m_cookieExpirationPeriodHasBeenSet = true; m_cookieExpirationPeriod = value; }
    inline LBCookieStickinessPolicy& WithCookieExpirationPeriod(long long value) { SetCookieExpirationPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    long long m_cookieExpirationPeriod{0};
    bool m_cookieExpirationPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
